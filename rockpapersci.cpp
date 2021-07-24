#include <iostream> 
#include <stdlib.h>

int main() {

// user choice
  int user = 0;

// randomize computer choice
  srand (time(NULL));
// computer choice selection either 1, 2 or 3
  int computer = rand() % 3 + 1;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
 
std::cout << "shoot! ";

// store user input into user 
std::cin >> user;
std::cout << "You";
if (user == 1)
{
  std::cout << "Rock\n";
}
else if (user == 2)
{
  std::cout << "Paper\n";
}
else if (user == 3)
{
  std::cout << "Scissors\n";
}
else 
{
  std::cout << "Invalid\n";
}
std::cout << "BOT: ";
if (computer == 1)
{
  std::cout << "Rock\n";
}
else if (computer == 2)
{
  std::cout << "Paper\n";
}
else if (computer == 3)
{
  std::cout << "Scissors\n";
}
else 
{
  std::cout << "Invalid\n";
}
if (user == computer)
{
  std::cout << "Draw";
}

/* 
1 = rock
2 = paper 
3 = scissors 
*/ 
else if (user == 1 && computer == 2)
{
  std::cout << "computer wins...";
}
else if (user == 1 && computer == 3)
{
  std::cout << "You win...";
}
else if (user == 2 && computer == 1)
{
  std::cout << "computer wins...";
}
else if (user == 2 && computer == 3)
{
  std::cout << "computer wins...";
}
else if (user == 3 && computer == 1)
{
  std::cout << "you win...";
}
else if (user == 3 && computer == 2)
{
  std::cout << "computer wins...";
}
}
