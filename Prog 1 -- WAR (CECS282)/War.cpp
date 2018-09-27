#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;

int main() {
	Deck myDeck;
	Card C1;
	Card C2;
	int card1;
	int card2;
	int input = 0;
	cout << "GET READY TO PLAY WAR!!!\n" << endl;
	while (true) { //while statement to cycle through the menu whenever a case is completed 
		cout << "1. Create A New Deck" << endl;
		cout << "2. Show All Remaining Cards In Deck" << endl;
		cout << "3. Shuffle Deck" << endl;
		cout << "4. Play WAR!!!" << endl;
		cout << "5. Exit" << endl;
		cin >> input; //gets menu input
		switch (input) {
		case 1: 
			myDeck.refreshDeck(); //creates a new deck
			break;
		case 2:
			cout << "Displaying rest of cards in deck...\n" << endl;
			myDeck.showDeck();
			break;
		case 3:
			if (myDeck.cardsLeft() == 52)
				myDeck.shuffle();
			else
				cout << ("Cannot shuffle a partial deck\n") << endl;
			break;
		case 4:
			cout << "There are " << myDeck.cardsLeft() << " cards left in the deck." << endl;
			cout << "...dealing..." << endl;
			cout << "One for you..." << endl;
			C1 = myDeck.deal();
			C1.showCard();
			card1 = C1.getValue();
			//cout << card1 << endl;
			cout << "One for me..." << endl;
			C2 = myDeck.deal();
			C2.showCard();
			card2 = C2.getValue();
			//cout << card2 << endl;

			if (card1 > card2)
				cout << "You lose!" << endl;
			else if (card1 < card2)
				cout << "You win!" << endl;
			else if (card1 == card2)
				cout << "Draw!!!" << endl;

			break;
		case 5:
			cout << "Have a great day!!!";
			return 0;
		}

	}

	/*
	Deck myDeck;
	myDeck.shuffle();
	myDeck.showDeck();
	*/

	getchar();

	return 0;
}