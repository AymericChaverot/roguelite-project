//
// Created by Aymeric Chaverot on 26/06/2022.
//

#include "classes/MainMenu.h"

MainMenu::MainMenu() {
    selected = 0;
    selector.setSize(sf::Vector2f(100, 50));
    selector.setFillColor(sf::Color::Red);
    selector.setPosition(sf::Vector2f(100, 100));
    background.setSize(sf::Vector2f(1280, 720));
    background.setFillColor(sf::Color::Black);
}

MainMenu::~MainMenu() {
}

void MainMenu::userEntry(sf::Event event) {
    switch (event.type) {
        case (sf::Event::KeyPressed):
            switch (event.key.code) {
                case (sf::Keyboard::Up):
                    if (selected > 0) {
                        selector.move(0, -50);
                        selected--;
                    }
                    break;
                case (sf::Keyboard::Down):
                    if (selected < 2) {
                        selector.move(0, 50);
                        selected++;
                    }
                    break;
                case (sf::Keyboard::Return):
                    switch (selected) {
                        case (0):
                            selector.setFillColor(sf::Color::Green);
                            break;
                        case (1):
                            selector.setFillColor(sf::Color::Blue);
                            break;
                        case (2):
                            selector.setFillColor(sf::Color::Cyan);
                            break;
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}

void MainMenu::draw(sf::RenderWindow &window) {
    window.draw(background);
    window.draw(selector);
}
