#include <iostream>

#include "SDL.h"
#undef main
using std::cout;
using std::endl;

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *pWindow = SDL_CreateWindow("unnamed-engine", 0, 0, 720, 480, 0);

    cout << "hello" << endl;
    return 0;
}
