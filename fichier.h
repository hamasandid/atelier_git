#ifndef enigmetext_H_INCLUDED
#define enigmetext_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


initminimap( minimap * m);
MAJMinimap(perso p , minimap * m, SDL_Rect camera, int redimensionnement);
afficherminimap (minimap m, SDL_Surface * screen);






#endif



