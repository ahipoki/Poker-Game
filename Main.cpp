#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main() {
  char playerOne[2];
  playerOne[0] = rand() % 52 + 1;
  playerOne[1] = rand() % 52 + 1;
  cout << "Player One's first number: " << playerOne[0] << endl;
  cout << "Player One's second number: " << playerOne[1] << endl;
}

#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

char playerOne[2];
char playerTwo[2];
char river[5];
int pot = 0;

void askBet();
void addCard();
void convertCard();

int main() {
  bool stillPlaying = true;
  int playerNumber = 0;
  int pot = 0;
  char betInput[80];
  char playInput[80];
  int bet = 0;
  cout<<"This is a poker simulator"<<endl;
  cout<<"The actions you can perform are: Bet or Check" <<endl;
  //cout << "How many players do you want to have?" << endl;
  //cin >> playerNumber;
  //Use this to make more players
  while(stillPlaying==true){
    playerOne[0] = rand() % 52 + 1;
    playerOne[1] = rand() % 52 + 1;
    cout<<"Your first card: "<<playerOne[0]<<endl;
    cout<<"Your second card: "<<playerOne[1]<<endl;
    playerTwo[0] = rand() % 52 + 1;
    playerTwo[1] = rand() % 52 + 1;
    askBet();
    river[0] = rand() % 52 + 1;
    river[1] = rand() % 52 + 1;
    river[2] = rand() % 52 + 1;
    cout<<"First card in the river: "<<river[0]<<endl;
    cout<<"Second card in the river: "<<river[1]<<endl;
    cout<<"Third card in the river: "<<river[2]<<endl;
    askBet();
    river[3] = rand() % 52 + 1;
    cout<<"Fourth card in the river: "<<river[3]<<endl;
    askBet();
    river[4] = rand() % 52 + 1;
    cout<<"Fifth card in the river: "<<river[4]<<endl;
    askBet();
    cout<<"Pot's Value: "<<pot<<endl;
    cout<<"Your Bet: "<<bet<<endl;
    //for(int i = 0;playerOne[i];i++){
      //cout<<playerOne[i]<<endl;
    //}
    //for(int i = 0;playerTwo[i];i++){
      //cout<<playerTwo[i]<<endl;
    //}
    //for (int i = 0;river[i];i++){
      //cout<<river[i]<<endl;
    //}
    cout << "Do you want to play again?" << endl;
    cin.getline(playInput, sizeof(playInput));
    if (strcmp(playInput, "Yes") == 0) {
      stillPlaying = true;
    }
    else if (strcmp(playInput, "No") == 0) {
      stillPlaying = false;
    }
    else {
      cout << "That's an invalid option" << endl;
    }
  }
}

void askBet() {
  char betInput[80];
  int bet = 0;
  cout << "Do you want to bet anything?" << endl;
  cin.getline(betInput, sizeof(betInput));
  if (strcmp(betInput, "Yes") == 0) {
    cout << "How much do you want to bet?" << endl;
    cin >> bet;
    pot += bet;
  }
  else if (strcmp(betInput, "No") == 0) {
    pot += bet;
  }
}

void addCard() {

}

void convertCard() {
  for (int i; playerOne[i]; i++) {

  }
}
