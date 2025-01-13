#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("SDL_Init failed with error: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    printf("Success\n");

    SDL_Quit();

    return 0;
}