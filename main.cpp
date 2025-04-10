#include <SDL3/SDL.h>
#include <iostream>
int main(){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Hello World",  640, 480, 0);
    if (window == nullptr) {
        std::cerr << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Delay(2000); // Wait for 2 seconds
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
