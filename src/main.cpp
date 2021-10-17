#include <iostream>
#include <SDL2/SDL.h>

int main()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) > 0)
  {
    std::cout << "SDL_Init failed with error: " << SDL_GetError() << std::endl;
    return EXIT_FAILURE;
  }

  std::string greetings = "Hello SDL2!";
  std::cout << greetings << std::endl;

  SDL_Quit();

  return EXIT_SUCCESS;
}