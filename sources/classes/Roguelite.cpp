//
// Created by aymericchaverot on 26/06/22.
//

#include "classes/Roguelite.h"

Roguelite::Roguelite() {
    videoMode = sf::VideoMode(1280, 720);
    window.create(videoMode, "Roguelite");
    fps = 60;
    ui = 0;
    window.setFramerateLimit(fps);
    window.setVerticalSyncEnabled(false);
}

Roguelite::~Roguelite() {
}

void Roguelite::run() {
    while (window.isOpen()) {
        userEntry();
        window.clear(sf::Color::Red);
        draw();
        window.display();
    }
}

void Roguelite::userEntry() {
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        switch (ui) {
            case (0): mainMenu.userEntry(event);
                break;
        }
    }
}

void Roguelite::draw() {
    switch (ui) {
        case (0): mainMenu.draw(window);
            break;
    }
}
