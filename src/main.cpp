//
// Created by roki on 2025-10-30.
//

#include <SDL2/SDL.h>

#include "game.h"

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Pong", 20, 20, 640, 720, SDL_WINDOW_ALWAYS_ON_TOP | SDL_WINDOW_SHOWN);
    SDL_SetWindowBordered(window, SDL_TRUE);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    bool is_running = true;
    SDL_Event event;

    const game game{renderer};

    while (is_running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                is_running = false;
            }
        }

        game.simulate();
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return SDL_Init(SDL_INIT_EVERYTHING) < 0 ? -1 : 0;
}
