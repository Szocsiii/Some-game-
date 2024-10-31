# Chess Game

This project is a simple console-based chess game implemented in C++. It allows two players to play chess against each other, managing the game state, player turns, and piece movements.

## Project Structure

```
chess-game
├── src
│   ├── main.cpp        # Entry point of the application
│   ├── Game.cpp        # Implementation of the Game class
│   ├── Game.h          # Declaration of the Game class
│   ├── Board.cpp       # Implementation of the Board class
│   ├── Board.h         # Declaration of the Board class
│   ├── Piece.cpp       # Implementation of the Piece class
│   ├── Piece.h         # Declaration of the Piece class
│   └── Utils.cpp       # Utility functions
├── CMakeLists.txt      # CMake configuration file
└── README.md           # Project documentation
```

## Building the Project

To build the project, you need to have CMake installed. Follow these steps:

1. Clone the repository or download the project files.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```

## Running the Game

After building the project, you can run the game by executing the generated binary. The command may vary depending on your operating system:

- On Linux or macOS:
  ```
  ./chess-game
  ```

- On Windows:
  ```
  chess-game.exe
  ```

## Gameplay Instructions

- The game is played between two players.
- Players take turns to move their pieces according to standard chess rules.
- The game ends when a player checkmates the opponent's king.

## Contributing

Feel free to contribute to this project by submitting issues or pull requests. Your feedback and contributions are welcome!