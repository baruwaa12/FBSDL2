#include <SDL2/SDL.h>
#include <iostream>
#include "application.hpp"

int main(int argc, const char **argv) {
  GameApp app;
  return app.Execute();
}