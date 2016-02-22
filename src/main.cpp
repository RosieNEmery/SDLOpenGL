#include <iostream>
#include "SDLOpenGL.h"

#include<ngl/NGLInit.h>

void intializeGL();
void renderGL();

int main (int argc, char *argv[])
{
  //calls SDLOpenGL class constructor
  SDLOpenGL window("test",0,0,1024,720);
  window.makeCurrent();
  intializeGL();
  while (true)
  {
    renderGL();
    window.swapWindow();
    SDL_Delay(10);
  }
  std::cout << "working\n";
}

void intializeGL()
{
  ngl::NGLInit::instance();
  glClearColor(0.8,0.8,0.8,1.0);
}

void renderGL()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
