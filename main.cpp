#include <iostream>
#include <regex>

class chessNotation
{
public:
    int xPos;
    int yPos;
};

int main()
{

    /*

    Declaring all the variables we'll need to work with.

    */

    std::regex pattern("^[A-H][1-8]$");

    std::string input_first;
    std::string input_second;

    int solution[128];

    /*

    Feel free to delete this section. It is only needed to gather user input

    */

    std::cout << "Starting Position: " << std::endl
              << "> ";
    std::cin >> input_first;

    if (!std::regex_match(input_first, pattern))
    {
        std::cout << std::endl
                  << "Please provide a valid position in the chess board, e.g.: A1, H8, F3.";
        return -1;
    }

    std::cout << "Target Position: " << std::endl
              << "> ";
    std::cin >> input_second;

    if (!std::regex_match(input_second, pattern))
    {
        std::cout << std::endl
                  << "Please provide a valid position in the chess board, e.g.: A1, H8, F3.";
        return -1;
    }

    std::cout << "Loading..." << std::endl;

    /*

    Actual logic here

    */

    chessNotation first_object;
    chessNotation second_object;

    first_object.yPos = input_first[1];
    second_object.yPos = input_second[1];

    switch (input_first[0])
    {
    case 'A':
        first_object.xPos = 1;
        break;
    case 'B':
        first_object.xPos = 2;
        break;
    case 'C':
        first_object.xPos = 3;
        break;
    case 'D':
        first_object.xPos = 4;
        break;
    case 'E':
        first_object.xPos = 5;
        break;
    case 'F':
        first_object.xPos = 6;
        break;
    case 'G':
        first_object.xPos = 7;
        break;
    case 'H':
        first_object.xPos = 8;
        break;
    default:
        break;
    }

    return 0;
}