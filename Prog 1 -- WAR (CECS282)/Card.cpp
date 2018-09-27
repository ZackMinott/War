#include "Card.h"
#include <iostream>
#include <string>
using namespace std;
//Creates a blank card
Card::Card() {
	rank = '2';
	suit = '2';
}
//sets values of card
Card::Card(char r, char s) {
	rank = r;
	suit = s;
}
//displays card
void Card::showCard() {
	getRank();
	cout << " of ";
	getSuit();
	drawCard();
}
//returns the face cards as strings
void Card::getRank() {
	if (rank == 'A') {
		cout << "Ace";
	}
	else if (rank == 'T') {
		cout << "10";
	}
	else if (rank == 'J') {
		cout << "Jack";
	}
	else if (rank == 'Q') {
		cout << "Queen";
	}
	else if (rank == 'K') {
		cout << "King";
	}
	else
		cout << rank;
}
//returns the suits as strings
void Card::getSuit() {
	if (suit == 'D') {
		cout << "Diamonds" << endl;
	} 
	else if (suit == 'C') {
		cout << "Clubs" << endl;
	}
	else if (suit == 'H') {
		cout << "Hearts" << endl;
	}
	else if (suit == 'S') {
		cout << "Spades" << endl;
	}
	else
		cout << suit << endl;
}

//draws each card in deck
void Card::drawCard() {
	if (suit == 'D'){
		cout << " ------- " << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[  * *  ]" << endl;
		cout << "[ *   * ]" << endl;
		cout << "[  * *  ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << " ------- " << endl;
	} else if (suit == 'C') {
		cout << " ------- " << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[*  *  *]" << endl;
		cout << "[ * * * ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[   *  " << rank << "]" << endl;
		cout << " ------- " << endl;
	}else if (suit == 'H') {
		cout << " ------- " << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[ ** ** ]" << endl;
		cout << "[*     *]" << endl;
		cout << "[ *   * ]" << endl;
		cout << "[  * *  ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << " ------- " << endl;
	}else if (suit == 'S') {
		cout << " ------- " << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[  * *  ]" << endl;
		cout << "[ ***** ]" << endl;
		cout << "[*  *  *]" << endl;
		cout << "[   *   ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << " ------- " << endl;
	}
}
//sets values to each of the characters in the array
int Card::getValue() {
	if (rank == 'A')
		return 1;
	else if (rank == '2')
		return 2;
	else if (rank == '3')
		return 3;
	else if (rank == '4')
		return 4;
	else if (rank == '5')
		return 5;
	else if (rank == '6')
		return 6;
	else if (rank == '7')
		return 7;
	else if (rank == '8')
		return 8;
	else if (rank == '9')
		return 9;
	else if (rank == 'T') 
		return 10;
	else if (rank == 'J')
		return 11;
	else if (rank == 'Q')
		return 12;
	else if (rank == 'K')
		return 13;
	//else 
		//return (int)rank;
	
}