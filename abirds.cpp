#include "globals.h"
#include "ag.h"

//--------------------------------------------GLOBALS----------------------------------------------//
Indidual_PTR ind = (Indidual_PTR)malloc(SIZE_POPULATION * sizeof(Indidual));
int generation = 0;


int main() {
	int episode, level;

	cout << "Episode: "; cin >> episode;
	cout << "Level: "; cin >> level;

	system(CLASSIC_GAME);


	//start_process();
}