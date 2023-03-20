#include "loadTexture.hpp"
#include <stdexcept>


SDL_Texture *LoadTexture(SDL_Renderer *renderer, const char *fileName)
{
  auto surface = SDL_LoadBMP(fileName);
  if (!surface)
  {
    throw std::runtime_error(std::string("SDL_LoadBMP(") + fileName + "): " + SDL_GetError());
  }
  auto result = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
  return result;
}