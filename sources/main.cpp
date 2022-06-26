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
    Roguelite game;
    sf::RectangleShape shape(sf::Vector2f(100, 100));
    shape.setFillColor(sf::Color::Green);
    while (game.window.isOpen()) {
        game.userEntry();
        game.window.clear(sf::Color::Red);
        game.draw();
        game.window.display();
    }
}
