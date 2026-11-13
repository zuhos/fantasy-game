#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

typedef struct {
    SDL_Texture *img;
    SDL_Rect rect;
    double healt;
} Player;

typedef struct {
  SDL_Texture *img;
  SDL_Rect rect;
} Bullet;



int main(void) {

  // Initialize window and renderer
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Window* window = SDL_CreateWindow("Test game",50, 30, 1280, 720, SDL_WINDOW_SHOWN);
  SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

  // Initialize player
  Player player = {0};
  player.rect.x = 800;
  player.rect.y = 20;
  player.rect.w = 30;
  player.rect.h = 30;
  player.img = IMG_LoadTexture(renderer, "Textures/Player_n.png"); 

  // Game loop
  while(true){
   
    SDL_Event event;
    //Event loop
    while(SDL_PollEvent(&event)){

      if(event.type == SDL_QUIT ){
        exit(0);
      }else if( event.type == SD ){ // Tähän jäin
        player.rect.x -= 20;
      }
 
  }
    //Update
    SDL_SetRenderDrawColor(renderer, 24, 250, 50, 255);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, player.img, NULL, &player.rect);
    SDL_RenderPresent(renderer);
}

  //SDL_DestroyTexture(img);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
  }
