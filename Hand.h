#ifndef KARTE_H
#define KARTE_H

#include <vector>
#include "Karte.h"

class Hand {
private:
	std::vector<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand();
	Hand(int,int,std::vector<Karte>);
	~Hand();
	void addCard(Karte);
	Karte dropACard(void);
	Karte dropCard(Karte);
	bool dropCard(int,int);
	bool hasCard(Karte);
	bool hasCard(int,int);
	bool isValidHand(void);
	bool canDropCard(void);
	bool canAddCard(void);
	void toString(void);
};

#endif