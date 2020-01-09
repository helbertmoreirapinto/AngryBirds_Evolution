#ifndef GLOBALS_H
#define GLOBALS_H


//--------------------------------------------INCLUDES---------------------------------------------//
#include <stdlib.h>
#include <iostream>
using namespace std;


//---------------------------------------------DEFINES---------------------------------------------//
#define SIZE_POPULATION	2
#define SIZE_BEST		1

#define CLASSIC_GAME "CLASSIC_GAME.bat"
#define RIO_GAME	 "RIO_GAME.bat"


//---------------------------------------------STRUCTS---------------------------------------------//
typedef struct {
	uint8_t type;
	float posX;
	float posY;
	float time;
} Bird;

typedef struct {
	Bird** birds;
	int size;
} Indidual;


typedef Bird* Bird_PTR;
typedef Bird** Bird_PTR_PTR;
typedef Indidual* Indidual_PTR;


//--------------------------------------------FUNCTIONS--------------------------------------------//

#endif 
