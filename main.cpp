/*
g++ -std=c++11 filename.cpp 
g++ -std=c++11 -Wall -O3 -pedantic-errors filename.cpp -o applicationname 
*/

#include <iostream>
//#include <windows.h> wiktor du shit.

#include "Karte.h"
#include "Kartenstapel.h"

void handleInput();

//Karte* karte;
Kartenstapel* kartenstapel;
bool game_over = true;

int main() {
	//karte = new Karte(5, 5);
	//karte->toString();
	kartenstapel = new Kartenstapel();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();

	while (!game_over){

		handleInput();

	}
}

void handleInput(){

}
