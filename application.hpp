#pragma once
#include <SDL2/SDL.h>



class GameApp {
  public:
    static const auto Width = 907;  
    static const auto Height = 507;
    int Application();
    int Execute();
  private:
  SDL_Window *window;
  SDL_Renderer *renderer;


};