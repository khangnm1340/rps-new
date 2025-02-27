#include "rps.h"
// driver code
int main() {
      std::cout << "\n\n\n\t\tWelcome to Stone Paper Scissor Game\n ";
      std::cout << "\n\tEnter r for ROCK, p for PAPER, and s for SCISSOR: ";
      char playerMove{getPlayerMove()};
      char computerMove{getComputerMove()};
      int result{getResults(playerMove, computerMove)};
      printResults(result, playerMove, computerMove);
      return 0;
}
