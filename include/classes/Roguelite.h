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

class Roguelite {
    public:
    Roguelite();
    ~Roguelite();
    sf::RenderWindow window;
    sf::Clock clock;
    sf::VideoMode videoMode;
};


#endif //ROGUELITE_PROJECT_ROGUELITE_CLASS_H
