// Include iostream to get access to std::cout, std::cin, std::endl and std::string
#include <iostream>

int main()
{
    // Create a simple console output
    std::cout << "What's your name?" << std::endl;

    // Create a variable, where we store the input, that we're about to receive
    std::string text;

    // Request user input and store it in the variable called text
    std::cin >> text;

    // Create a console output using the user input that was stored in the variable text
    std::cout << "Hello, " << text << std::endl;

    return 0;
}