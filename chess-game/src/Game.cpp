#include "Game.h"
#include "Board.h"
#include "Piece.h"
#include <iostream>

Game::Game() : currentPlayer(1), gameOver(false) {
    board.initializeBoard();
}

void Game::startGame() {
    while (!gameOver) {
        board.displayBoard();
        std::cout << "Player " << currentPlayer << "'s turn. Enter your move: ";
        std::string move;
        std::cin >> move;
        makeMove(move);
        checkGameOver();
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
    std::cout << "Game over!" << std::endl;
}

void Game::makeMove(const std::string& move) {
    // Logic to parse the move and update the board
    // This is a placeholder for actual move logic
    std::cout << "Move made: " << move << std::endl;
}

void Game::checkGameOver() {
    // Logic to check if the game is over
    // This is a placeholder for actual game over logic
    // Set gameOver to true if the game is over
}