
#include <iostream>

int main()
//Create an application that allows to users to play Tic-Tac-Toe. The game
//should be able to played until the users decide to quit by either hitting the X button on
//the window or they should have an on screen prompt in your application that pops up after
//each game.If the user does not exit the game they must have an option to restart the game without
//having to relaunch the application.You must provide a document breaking down the steps taken to
//solve the problem.


{
	std::cout<< 				"Welcome to Tic Tack Toe";

	std::cout<<					"The rules of Tic Tack Toe";

	std::cout << "1.The condition that must be met for a player to win is to have 3 of their selected type of pieces in a row.";
	
	std::cout << "2.The players must take turns place thier pieces on the playing grid.";
	
	std::cout << "3.The players can not put a piece in a place where the other player has placed one";
	
	std::cout << "4.The players select which game piece they want to use they must choose either X or O.";
	
	std::cout << "5.If there are no spots to the players pieces the game is a draw.";

	std::cout << "Steps of playing Tic Tac Toe.";
		std::cout << "1. Create a playing grid with a size of 3x3.";

		std::cout << "2. The players select their playing pieces.";
		
		std::cout << "3. The players determine playing order.";
		
		std::cout << "4. The players than take turns placing their pieces in spots on the playing grid no playing pieces inside of it.";
		
		std::cout << "5. Once one player has three pieces in a row the game winning condition is met.";
		
		std::cout << "6. If winning condition is met the players are than given a choice of playing again.";
		
		std::cout << "7. If winning condition is met and the players select to play again the game is than restarted.";
		
		std::cout << "8. If winning condition is met and the players select to end the game than the game is than ended.";
	
		system("pause");

		std::cout << "_1_|_2_|_3_";
		
		std::cout << "_4_|_5_|_6_";
		
		std::cout << "_7_|_8_|_9_";
		
		std::cout << "_#_|_0_|_*_";
};

