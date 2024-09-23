#include<unistd.h>
#include<stdlib.h>
#include<SDL2/SDL.h>
#include"my_function.h"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main(void)
{
    SDL_Window* window = SDL_CreateWindow("Fist widown sdl2", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255,255,255,250);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(2000);
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return(EXIT_SUCCESS);
}