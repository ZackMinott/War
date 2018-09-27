#ifndef _DECK
#define _DECK

class Deck {
private:
	Card deck[52];
	int topCard;
	int cardCount = 52;
public:
	Deck();
	void refreshDeck();
	void showDeck();
	void shuffle();
	Card deal();
	int cardsLeft();
};
#endif