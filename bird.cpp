#include "bird.hpp"
#include "loadTexture.hpp"
#include <SDL2/SDL.h>



Bird::Bird(SDL_Renderer *renderer):
  renderer(renderer),
  wingUp(LoadTexture(renderer, "bird_wing_up.bmp")),
  wingDown(LoadTexture(renderer, "bird_wing_down.bmp"))
{
  
}



void Bird::draw()
{
  auto result = SDL_RenderCopy(renderer, wingUp, nullptr, nullptr);
}

int Bird::Execute()
  {
    for (auto done = false; !done;)
      {
        SDL_Event e;
        if (SDL_PollEvent(&e))
        {
          switch (e.type)
            {
              case SDL_QUIT:
                done = true;
                break;
            }
        }
        draw();
        SDL_RenderPresent(renderer);
      }
    return 0;
  
  }