//
// Created by roki on 2025-10-30.
//

#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL_render.h>

class game {
    SDL_Renderer *renderer{nullptr};

public:
    explicit game(SDL_Renderer *_renderer) : renderer(_renderer) {
    };

    ~game() = default;

public:
    void simulate() const;

private:
    void color_bg(const SDL_Color &color) const;

    void draw_rect(SDL_FRect rect, SDL_Color color) const;

    void draw_circle(SDL_Rect circle, SDL_Color color) const;
};

#endif //GAME_H
