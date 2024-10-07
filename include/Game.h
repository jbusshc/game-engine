#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SDL2/SDL.h>

class Game {
    private:
        bool isRunning_;
        SDL_Window *window_;
        SDL_Renderer *renderer_;
    public:
        Game();
        ~Game();
};


#endif