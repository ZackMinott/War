#include "Card.h"
#include "Deck.h"
#include <cstdlib>
#include <ctime>

Deck::Deck() {
	refreshDeck();
}

void Deck::refreshDeck() { //Creates cards in deck and used to refresh deck
	cardCount = 52;
	char suits[]{ 'D', 'C' , 'H' , 'S' };
	char ranks[]{ 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

	int count = 0;
	for (int s = 0; s < 4; s++) {
		for (int r = 0; r < 13; r++) {
			Card C1(ranks[r], suits[s]);
			deck[count] = C1;
			count++;
		}
	}
}
//shuffles cards in deck
void Deck::shuffle() {
	topCard = 0;
	for (int i = topCard; i < 52; i++) {
		int ran = (rand() + time(0)) % 52; //find a random card
		Card temp = deck[i]; //set temp equal to the deck at first position
		deck[i] = deck[ran]; //swap positions of both cards
		deck[ran] = temp; 
	}

}
//displays deck
void Deck::showDeck() {
	topCard = 0;
	for (int i = topCard; i < 52; i++) {
		deck[i].showCard();
	}
}


//remember to test
Card Deck::deal() {
	Card C1 = deck[0];
	for (int i = 0; i < cardCount; i++) {
		deck[i] = deck[i + 1];
	}
	cardCount--; 
	//C1.showCard();
	return C1;
}

int Deck::cardsLeft() {
	return cardCount;
}