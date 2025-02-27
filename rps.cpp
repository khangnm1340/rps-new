
#include <cstdlib>
#include <ctime>
#include <iostream>

char getComputerMove() {
      int move;
      // generating random number between 0 - 2
      srand(time(NULL));
      move = rand() % 3;

      // returning move based on number generated
      if (move == 0) {
            return 'p';
      }

      else if (move == 1) {
            return 's';
      }
      return 'r';
};

int getResults(char playerMove, char computerMove) {
      // conditions for draw
      if (playerMove == computerMove) {
            return 0;
      }
      // conditions for win and loss according to game rule
      if (playerMove == 's' && computerMove == 'p') {
            return 1;
      }
      if (playerMove == 's' && computerMove == 'r') {
            return -1;
      }
      if (playerMove == 'r' && computerMove == 's') {
            return 1;
      }
      if (playerMove == 'r' && computerMove == 'p') {
            return -1;
      }
      if (playerMove == 'p' && computerMove == 'r') {
            return 1;
      }
      if (playerMove == 'p' && computerMove == 's') {
            return -1;
      }
      return 0;
};

char getPlayerMove() {
      char playerMove;
      while (1) {
            std::cin >> playerMove;
            if (playerMove == 'r' || playerMove == 'p' || playerMove == 's') {
                  break;
            } else {
                  std::cout << "\t\tInvalid Player Move!!! Please Try Again : ";
            }
      }
      return playerMove;
}

void printResults(int result, char playerMove, char computerMove) {
      // printing the results based on who won the game
      if (result == 0) {
            std::cout << "\n\t\tGame Draw!\n";
      } else if (result == 1) {
            std::cout << "\n\t\tCongratulations!!! Player won the game!\n";
      } else if (result == -1) {
            std::cout << "\n\t\tOh! Computer won the game!\n";
      }
      // showing both moves
      std::cout << "\t\t\tYour move: " << playerMove << std::endl;
      std::cout << "\t\t\tComputer's move: " << computerMove << std::endl;
}
