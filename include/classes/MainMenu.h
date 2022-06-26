//
// Created by Aymeric Chaverot on 26/06/2022.
//

#ifndef MAINMENU_H
#define MAINMENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Audio.hpp>

class MainMenu {
    public:
    MainMenu();
    ~MainMenu();
    void userEntry(sf::Event event);
    void draw(sf::RenderWindow &window);
    private:
    unsigned char selected;
    sf::RectangleShape selector;
    sf::RectangleShape background;
};


#endif //MAINMENU_H
