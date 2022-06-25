/*
** EPITECH PROJECT, 2022
** roguelite-project
** File description:
** main.cpp
*/

#include "roguelite.h"

using namespace std;

int main(int ac, char **av)
{
    Roguelite roguelite;
    sf::Event event;
    int i(0);
    while (roguelite.window.isOpen()) {
        cout << "i = " << i << endl;
        if (roguelite.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                roguelite.window.close();
            }
        }
        roguelite.window.clear(sf::Color::White);
        roguelite.window.display();
        i++;
    }
    /*sf::RenderWindow window(sf::VideoMode(1280, 720), "Roguelite");
    sf::Event *event;
    window.setFramerateLimit(60);
    while (window.isOpen()) {
        if (window.pollEvent(*event)) {
            if (event->type == sf::Event::Closed)
                window.close();
        }
    }*/
}
