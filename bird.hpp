#pragma once
#include <SDL2/SDL.h>


class Bird
{
public:
  Bird(SDL_Renderer *renderer);
  void draw();
  int Execute();
private:
  SDL_Renderer *renderer;
  SDL_Texture *wingUp;
  SDL_Texture *wingDown;
};