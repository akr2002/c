/* The card shuffling and dealing program using structures */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* card strucure definition */
struct card
{
	const char *face;	/* define pointer face */
	const char *suit;	/* define pointer suit */
};

typedef struct card Card;	/* new type name for struct card */

/* prototypes */
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main()
{
	Card deck[52];	/* define array of Cards */

	/* initialize array of pointers */
	const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	/* initialize array of pointers */
	const char *suit[] = { "Hearts", "Diamonds","Clubs", "Spades"};

	srand(time(NULL));	/* randomize */

	fillDeck(deck, face, suit);	/* load the deck with cards */
	shuffle(deck);	/* put Cards in random order */
	deal(deck);	/* deal all 52 cards */

	return 0;
}

/* place strings into Card structures */
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[])
{
	int i;	/* counter */

	/* loop through wDeck */
	for (i = 0; i <= 51; ++i)
	{
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wSuit[i / 13];
	}
}

/* shuffle cards */
void shuffle(Card * const wDeck)
{
	int i;	/* counter */
	int j;	/* variable to hold random values between 0 - 51 */
	Card temp;	/* define temporary structure for swapping Cards */

	/* loop through wDeck randomly swapping Cards */
	for (i = 0; i <= 51; ++i)
	{
		j = rand() % 52;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

/* deal Cards */
void deal(const Card * const wDeck)
{
	int i;	/* counter */

	/* loop through wDeck */
	for (i = 0; i <= 51; ++i)
	{
		printf("%5s of %-8s%c", wDeck[i].face, wDeck[i].suit, (i + 1) % 2 ? '\t' : '\n');
	}
}

