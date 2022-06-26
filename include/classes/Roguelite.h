//
// Created by aymericchaverot on 26/06/22.
//

#ifndef ROGUELITE_PROJECT_ROGUELITE_CLASS_H
#define ROGUELITE_PROJECT_ROGUELITE_CLASS_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Audio.hpp>
#include "classes/MainMenu.h"

class Roguelite {
    public:
    Roguelite();
    ~Roguelite();
    void userEntry();
    void draw();
    sf::RenderWindow window;
    sf::Event event;
    sf::Clock clock;
    sf::VideoMode videoMode;
    unsigned int ui;
    unsigned int fps;
    MainMenu mainMenu;
};


#endif //ROGUELITE_PROJECT_ROGUELITE_CLASS_H
