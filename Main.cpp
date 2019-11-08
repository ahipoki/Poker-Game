#include <iostream>
#include <cstdlib>
#include <limits>
#include <cstring>
#include <string.h>
using namespace std;

int p1C1 = 0;
string p1C1C;
int p1C2 = 0;
string p1C2C;
int p2c1 = 0;
string p2C1C;
int p2c2 = 0;
string p2C2C;
int r1 = 0;
string r1c;
int r2 = 0;
string r2c;
int r3 = 0;
string r3c;
int r4 = 0;
string r4c;
int r5 = 0;
string r5c;

void convertCard();

int main() {
  bool stillPlaying = true;
  char playAgain[80];
  //int cardOne = 0;
  //int cardTwo = 0;
  while (stillPlaying == true) {
    if (p1C1 == 0 && p1C2 == 0) {
      srand(time(NULL));
      p1C1 = rand() % 52 + 1;
      p1C2 = rand() % 52 + 1;
      convertCard();
      cout << "Player One's first number: " << p1C1C << endl;
      cout << "Player One's second number: " << p1C2C << endl;
    }
    else {
      cout << "Player One's first number: " << p1C1C << endl;
      cout << "Player Two's second number:" << p1C2C << endl;
    }
    cout << "Do you want to play again?" << endl;
    cin.getline(playAgain, sizeof(playAgain));
    if (strcmp(playAgain, "Yes") == 0) {
      p1C1 = 0;
      p1C2 = 0;
      stillPlaying = true;
    }
    else if (strcmp(playAgain, "No") == 0) {
      stillPlaying = false;
    }
    else {
      cout << "That's an invalid option" << endl;
    }
  }
}

void convertCard() {
  if (p1C1 == 1) {
    p1C1C = "Ace of Spades";
  }  
  else if (p1C1 == 2) {
    p1C1C = "2 of Spades";
  }
  else if (p1C1 == 3) {
    p1C1C = "3 of Spades";
  }
  else if (p1C1 == 4) {
    p1C1C = "4 of Spades";
  }
  else if (p1C1 == 5) {
    p1C1C = "5 of Spades";
  }
  else if (p1C1 == 6) {
    p1C1C = "6 of Spades";
  }
  else if (p1C1 == 7) {
    p1C1C = "7 of Spades";
  }
  else if (p1C1 == 8) {
    p1C1C = "8 of Spades";
  }
  else if (p1C1 == 9) {
    p1C1C = "9 of Spades";
  }
  else if (p1C1 == 10) {
    p1C1C = "10 of Spades";
  }
  else if (p1C1 == 11) {
    p1C1C = "Jack of Spades";
  }
  else if (p1C1 == 12) {
    p1C1C = "Queen of Spades";
  }
  else if (p1C1 == 13) {
    p1C1C = "King of Spades";
  }
  else if (p1C1 == 14) {
    p1C1C = "Ace of Clubs";
  }
  else if (p1C1 == 15) {
    p1C1C = "2 of Clubs";
  }
  else if (p1C1 == 16) {
    p1C1C = "3 of Clubs";
  }
  else if (p1C1 == 17) {
    p1C1C = "4 of Clubs";
  }
  else if (p1C1 == 18) {
    p1C1C = "5 of Clubs";
  }
  else if (p1C1 == 19) {
    p1C1C = "6 of Clubs";
  }
  else if (p1C1 == 20) {
    p1C1C = "7 of Clubs";
  }
  else if (p1C1 == 20) {
    p1C1C = "8 of Clubs";
  }
  else if (p1C1 == 21) {
    p1C1C = "9 of Clubs";
  }
  else if (p1C1 == 22) {
    p1C1C = "10 of Clubs";
  }
  else if (p1C1 == 23) {
    p1C1C = "Jack of Clubs";
  }
  else if (p1C1 == 24) {
    p1C1C = "Queen of Clubs";
  }
  else if (p1C1 == 25) {
    p1C1C = "King of Clubs";
  }
  else if (p1C1 == 26) {
    p1C1C = "Ace of Hearts";
  }
  else if (p1C1 == 27) {
    p1C1C = "2 of Hearts";
  }
  else if (p1C1 == 28) {
    p1C1C = "3 of Hearts";
  }
  else if (p1C1 == 29) {
    p1C1C = "4 of Hearts";
  }
  else if (p1C1 == 30) {
    p1C1C = "5 of Hearts";
  }
  else if (p1C1 == 31) {
    p1C1C = "6 of Hearts";
  }
  else if (p1C1 == 32) {
    p1C1C = "7 of Hearts";
  }
  else if (p1C1 == 33) {
    p1C1C = "8 of Hearts";
  }
  else if (p1C1 == 34) {
    p1C1C = "9 of Hearts";
  }
  else if (p1C1 == 35) {
    p1C1C = "10 of Hearts";
  }
  else if (p1C1 == 36) {
    p1C1C = "Jack of Hearts";
  }
  else if (p1C1 == 37) {
    p1C1C = "Queen of Hearts";
  }
  else if (p1C1 == 38) {
    p1C1C = "King of Hearts";
  }
  else if (p1C1 == 39) {
    p1C1C = "Ace of Diamonds";
  }
  else if (p1C1 == 40) {
    p1C1C = "2 of Diamonds";
  }
  else if (p1C1 == 41) {
    p1C1C = "3 of Diamonds";
  }
  else if (p1C1 == 42) {
    p1C1C = "4 of Diamonds";
  }
  else if (p1C1 == 43) {
    p1C1C = "5 of Diamonds";
  }
  else if (p1C1 == 44) {
    p1C1C = "6 of Diamonds";
  }
  else if (p1C1 == 45) {
    p1C1C = "7 of Diamonds";
  }
  else if (p1C1 == 46) {
    p1C1C = "8 of Diamonds";
  }
  else if (p1C1 == 47) {
    p1C1C = "9 of Diamonds";
  }
  else if (p1C1 == 48) {
    p1C1C = "10 of Diamonds";
  }
  else if (p1C1 == 49) {
    p1C1C = "Jack of Diamonds";
  }
  else if (p1C1 == 50) {
    p1C1C = "Queen of Diamonds";
  }
  else {
    p1C1C = "King of Diamonds"; 
  }
  if (p1C2 == 1) {
    p1C2C = "Ace of Spades";
  }  
  else if (p1C2 == 2) {
    p1C2C = "2 of Spades";
  }
  else if (p1C2 == 3) {
    p1C2C = "3 of Spades";
  }
  else if (p1C2 == 4) {
    p1C2C = "4 of Spades";
  }
  else if (p1C2 == 5) {
    p1C2C = "5 of Spades";
  }
  else if (p1C2 == 6) {
    p1C2C = "6 of Spades";
  }
  else if (p1C2 == 7) {
    p1C2C = "7 of Spades";
  }
  else if (p1C2 == 8) {
    p1C2C = "8 of Spades";
  }
  else if (p1C2 == 9) {
    p1C2C = "9 of Spades";
  }
  else if (p1C2 == 10) {
    p1C2C = "10 of Spades";
  }
  else if (p1C2 == 11) {
    p1C2C = "Jack of Spades";
  }
  else if (p1C2 == 12) {
    p1C2C = "Queen of Spades";
  }
  else if (p1C2 == 13) {
    p1C2C = "King of Spades";
  }
  else if (p1C2 == 14) {
    p1C2C = "Ace of Clubs";
  }
  else if (p1C2 == 15) {
    p1C2C = "2 of Clubs";
  }
  else if (p1C2 == 16) {
    p1C2C = "3 of Clubs";
  }
  else if (p1C2 == 17) {
    p1C2C = "4 of Clubs";
  }
  else if (p1C2 == 18) {
    p1C2C = "5 of Clubs";
  }
  else if (p1C2 == 19) {
    p1C2C = "6 of Clubs";
  }
  else if (p1C2 == 20) {
    p1C2C = "7 of Clubs";
  }
  else if (p1C2 == 20) {
    p1C2C = "8 of Clubs";
  }
  else if (p1C2 == 21) {
    p1C2C = "9 of Clubs";
  }
  else if (p1C2 == 22) {
    p1C2C = "10 of Clubs";
  }
  else if (p1C2 == 23) {
    p1C2C = "Jack of Clubs";
  }
  else if (p1C2 == 24) {
    p1C2C = "Queen of Clubs";
  }
  else if (p1C2 == 25) {
    p1C2C = "King of Clubs";
  }
  else if (p1C2 == 26) {
    p1C2C = "Ace of Hearts";
  }
  else if (p1C2 == 27) {
    p1C2C = "2 of Hearts";
  }
  else if (p1C2 == 28) {
    p1C2C = "3 of Hearts";
  }
  else if (p1C2 == 29) {
    p1C2C = "4 of Hearts";
  }
  else if (p1C2 == 30) {
    p1C2C = "5 of Hearts";
  }
  else if (p1C2 == 31) {
    p1C2C = "6 of Hearts";
  }
  else if (p1C2 == 32) {
    p1C2C = "7 of Hearts";
  }
  else if (p1C2 == 33) {
    p1C2C = "8 of Hearts";
  }
  else if (p1C2 == 34) {
    p1C2C = "9 of Hearts";
  }
  else if (p1C2 == 35) {
    p1C2C = "10 of Hearts";
  }
  else if (p1C2 == 36) {
    p1C2C = "Jack of Hearts";
  }
  else if (p1C2 == 37) {
    p1C2C = "Queen of Hearts";
  }
  else if (p1C2 == 38) {
    p1C2C = "King of Hearts";
  }
  else if (p1C2 == 39) {
    p1C2C = "Ace of Diamonds";
  }
  else if (p1C2 == 40) {
    p1C2C = "2 of Diamonds";
  }
  else if (p1C2 == 41) {
    p1C2C = "3 of Diamonds";
  }
  else if (p1C2 == 42) {
    p1C2C = "4 of Diamonds";
  }
  else if (p1C2 == 43) {
    p1C2C = "5 of Diamonds";
  }
  else if (p1C2 == 44) {
    p1C2C = "6 of Diamonds";
  }
  else if (p1C2 == 45) {
    p1C2C = "7 of Diamonds";
  }
  else if (p1C2 == 46) {
    p1C2C = "8 of Diamonds";
  }
  else if (p1C2 == 47) {
    p1C2C = "9 of Diamonds";
  }
  else if (p1C2 == 48) {
    p1C2C = "10 of Diamonds";
  }
  else if (p1C2 == 49) {
    p1C2C = "Jack of Diamonds";
  }
  else if (p1C2 == 50) {
    p1C2C = "Queen of Diamonds";
  }
  else {
    p1C2C = "King of Diamonds"; 
  }
}
