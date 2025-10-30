//
// Created by roki on 2025-10-30.
//

#include "game.h"

void game::simulate() const {
    color_bg({123, 123, 123, 255});
    draw_rect({10, 10, 10, 10}, {0, 0, 0});

    SDL_RenderPresent(renderer);
}

void game::color_bg(const SDL_Color &color) const {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderClear(renderer);
}

void game::draw_rect(SDL_FRect rect, SDL_Color color) const {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderFillRectF(renderer, &rect);
}

void game::draw_circle(SDL_Rect circle, SDL_Color color) const {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}
