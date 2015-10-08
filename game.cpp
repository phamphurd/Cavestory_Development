#include "SDL/SDL.h"

#include "game.h"
#include "graphics.h"
#include "input.h"

/* Game class
 * This class holds all information for main game loop
 */

Game::Game(){
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
}

Game::~Game(){
    
}

void Game::gameLoop(){
      Graphics graphics; //object
      SDL_Event event;   //SDL event object
    
      while (true){
          if(SDL_PollEvent(&event)){
              if(event.type == SDL_QUIT){
                  return;
              }
          }
      }
}
//    Graphics graphics; //object
//    Input input;
//    SDL_Event event;   //SDL event object
//    
//    while(true){
//        input.beginNewFrame();
//        
//        if(SDL_PollEvent(&event)){
//            if(event.type == SDL_KEYDOWN){
//                if(event.key.repeat == 0){
//                    input.keyDownEvent(event);
//                }
//            }
//            else if (event.type == SDL_KEYUP){
//                input.keyUpEvent(event);
//            }
//            else if (event.type == SDL_QUIT){
//                return;
//            }
//        }
//        if (input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true){
//            return;
//        }
//    }
//}

void Game::draw(Graphics& graphics){
    
}

void Game::update(float elapsedTime){
    
}