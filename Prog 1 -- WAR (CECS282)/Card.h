#ifndef _CARD
#define _CARD

class Card {
private:
	char rank;
	char suit;
public:
	Card();
	Card(char s, char r);
	void showCard();
	void getSuit();
	void getRank();
	void drawCard();
	int getValue();
};

#endif
