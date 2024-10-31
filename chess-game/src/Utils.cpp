#include "Utils.h"
#include <iostream>
#include <string>

// Function to validate user input for moves
bool isValidInput(const std::string& input) {
    // Check if the input matches the expected format (e.g., "e2 e4")
    if (input.length() != 5 || input[2] != ' ') {
        return false;
    }
    // Additional checks can be added here for specific chess move validation
    return true;
}

// Function to convert user input into board coordinates
std::pair<int, int> convertInputToCoordinates(const std::string& input) {
    int startX = input[0] - 'a'; // Convert column from 'a'-'h' to 0-7
    int startY = 8 - (input[1] - '0'); // Convert row from '1'-'8' to 0-7
    int endX = input[3] - 'a'; // Convert column from 'a'-'h' to 0-7
    int endY = 8 - (input[4] - '0'); // Convert row from '1'-'8' to 0-7
    return {startX, startY, endX, endY};
}