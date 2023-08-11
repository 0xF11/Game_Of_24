#include <iostream>
#include <typeinfo> // debugging
#include "PlaceHolderHeaderName.h"
#include <limits>
#include <Windows.h>// sleep (for cool stuff)
#include <string>
#include <random> // random_device 


std::string uInp() // Takes input from the user in string format (useless in any other context just wanted to use it! :p)
{
	std::string x;
	std::getline(std::cin >> std::ws, x);
	return x;
}



std::random_device RDevice{};

std::seed_seq seed{  RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(),
					 RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(),
					 RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(),
					 RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(),
					 RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), }; // 30 seeded seeds

std::mt19937 rng{ seed }; // rng 
std::uniform_int_distribution OneToNine(1, 9); // give one to 9

int gameimportant{ OneToNine(rng) }; // Random number 

int GMath2; // Used to add/subtract/multiply/divide by whatever the user chooses (keeps variable instead of it being locked)

// gameimportant would lock at its first variable no matter what when i first tried this without GMath2

int GameMath(char oper) // Switch for the game math
{

		switch (oper)
		{
		case '+': // Addition
		{
			return GMath2 = gameimportant += gameimportant;
			break;
		}
		case '-': // Subtraction
		{
			return GMath2 = gameimportant -= 4; // subtracted by 4 to prevent cheating (You can still cheat just alot more annoying.)
			break;
		}
		case '*': // Multiplication
		{
			return GMath2 = gameimportant *= gameimportant;
			break;
		}
		case '/': // Division
		{
			return GMath2 = gameimportant /= 2; // divided by 2 to prevent cheating.
			break;
		default:
			system("cls");
			std::cout << "Sorry! That variable is not applicable to the game, Closing now!";
			Sleep(500);
			exit(0);
		}
		}
	
}



	int main() 
{
		// bogus loading -- just looks cool :p -- // 
		std::cout << "Console loading... [=..............................] %3" << std::endl;
		Sleep(250);
		std::cout << "Console loading... [==.............................] %6" << std::endl;
		Sleep(250);
		std::cout << "Console loading... [===............................] %9" << std::endl;
		Sleep(250);
		std::cout << "Console loading... [========.......................] %27" << std::endl;
		Sleep(200);
		std::cout << "Console loading... [================...............] %57" << std::endl;
		Sleep(175);
		std::cout << "Console loading... [========================.......] %72" << std::endl;
		Sleep(150);
		std::cout << "Console loading... [===============================] %100!" << std::endl;
		std::cout << "----------------------------------------------------------\n";
		std::cout << "Clearing console...\n";
		Sleep(1000);
		system("cls");
		

		std::cout << "Hello! Please enter the username you would like to go by!: ";
		std::string UName{ uInp() }; // Takes username
		std::cout << "Nice to meet you! ";
		std::cout << UName;
		std::cout << '!';
		std::cout << "\n--------------------------------------------\n";


		std::cout << "Now, Lets get started with the game of 24!\n";

		std::cout << "Do you know how to play? Y/N: ";
		char YorN; // Yes or no for "Do you know how to play the game"
		std::cin >> YorN;
		switch (YorN)
		{
		case 'Y':
		{
			std::cout << "\nAwesome! Starting the game in 3 seconds!\n";
			std::cout << "3....\n";
			Sleep(650);
			std::cout << "2...\n";
			Sleep(650);
			std::cout << "1..\n";
			Sleep(650);
			std::cout << "PLAY!\n";
			Sleep(550);
			system("cls");
			break;
		}
		case 'y':
		{
			std::cout << "\nAwesome! Starting the game in 3 seconds!\n";
			std::cout << "3....\n";
			Sleep(650);
			std::cout << "2...\n";
			Sleep(650);
			std::cout << "1..\n";
			Sleep(650);
			std::cout << "PLAY!\n";
			Sleep(550);
			system("cls");
			break;
		}
		case 'N':
			std::cout << "\n-------------------------------------\nClearing Console...";
			Sleep(250);
			system("cls");
			std::cout << "Okay! So, " << UName << " The way you play is simple!";
			std::cout << "\nYou have the choice between: +,-,*,/!\n";
			std::cout << "Your goal is to get the number 24!, There is no way to lose unless YOU give up!\n";
			std::cout << "---------------------------------------------------------------------------------\nHappy playing!\n";
			Sleep(1250);// give user time to read before clearing console
			system("cls");
		case 'n':
			std::cout << "\n-------------------------------------\nClearing Console...";
			Sleep(250);
			system("cls");
			std::cout << "Okay! So, " << UName << " The way you play is simple!";
			std::cout << "\nYou have the choice between: +,-,*,/!\n";
			std::cout << "Your goal is to get the number 24!, There is no way to lose unless YOU give up!\n";
			std::cout << "---------------------------------------------------------------------------------\nHappy playing!\n";
			Sleep(1250);// give user time to read before clearing console
			system("cls"); 

		}

		int tries{ 0 }; // variable for how many attempts the user did during the game
		while (GMath2 != 24) // while the user has not reached 24 run the game loop
		{
			std::cout << "(+). -- Adds " << GMath2 << " into itself!" << std::endl;
			std::cout << "(-). -- Subtracts " << GMath2 << " by 4!" << std::endl;
			std::cout << "(*). -- Multiplies " << GMath2 << " into itself!" << std::endl;
			std::cout << "(/). -- Divides " << GMath2 << " by 2!" << std::endl;
			char op;
			std::cin >> op;
			GameMath(op);
			std::cout << GMath2;
	
			++tries; // adds to the users attempts per attempt throughout the loop
		}
		if (GMath2 == 24) // condition when user wins (if they do lol)
		{
			system("cls");
			std::cout << "WE HAVE A ";
			Sleep(50); std::cout << "W "; Sleep(50); std::cout << "I "; Sleep(50); std::cout << "N "; Sleep(50); std::cout << "N "; Sleep(50); std::cout << "E ";
			Sleep(50); std::cout << "R "; Sleep(50); std::cout << "!\n";
			Sleep(50); std::cout << "W I N N E R!\n";
			Sleep(50); std::cout << "W I N N E R!\n";
			Sleep(50); std::cout << "W I N N E R!\n";
			std::cout << "\nCONGRATS!! ";


			std::cout << "You won in " << tries << "!\n" << "Good job! \n";


			std::cout << "If you would like to play again you may reopen this program at any time! :)\n";
			std::cout << "Goodbye!\n";
			Sleep(10000); // lets user read for 10 seconds then exits program :)
		}
		return 0;
	


}
