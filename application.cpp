#include "application.hpp"
#include "bird.hpp"
#include <stdexcept>

int GameApp::Application()
{
  auto result = SDL_Init(SDL_INIT_EVERYTHING);
  if (result != 0)
    throw std::runtime_error(std::string("SDL_init(SDL_Init_EVERYTHING") = SDL_GetError());
  SDL_CreateWindowAndRenderer(Width, Height, SDL_WINDOW_BORDERLESS, &window, &renderer);
  SDL_SetWindowPosition(window, 65, 126);
  {
    return 0;
  }
}

int GameApp::Execute()
{
  Bird b(renderer);
  b.Execute();
  return 0;
}