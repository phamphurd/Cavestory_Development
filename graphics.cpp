#include "SDL/SDL.h"
#include "graphics.h"

/* Graphics Class
 * Holds all information dealing with graphics for the game
 */

Graphics::Graphics(){
    //width, height, flags, what window, what renderer
    SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
    //what window, name of window
    SDL_SetWindowTitle(this->_window, "Cavestory");
}

Graphics::~Graphics(){
    SDL_DestroyWindow(this->_window);
    SDL_DestroyRenderer(this->_renderer);
}
