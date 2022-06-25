//
// Created by aymericchaverot on 26/06/22.
//

#include "classes/Roguelite.h"

Roguelite::Roguelite() {
    videoMode = sf::VideoMode(1280, 720);
    window.create(videoMode, "Roguelite");
    window.setFramerateLimit(60);
}

Roguelite::~Roguelite() {
}
