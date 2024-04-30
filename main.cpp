#include <iostream>
#include <fstream>
#include <string> 

int main() {
    std::string text;
    
    std::cout << "Creating a new text file (Output.txt) to operate..." << "\n";
    std::ofstream outputFile("Output.txt");

    if(outputFile.is_open()) {
        std::cout << "Editor opened. Type 'PROGRAM.EXIT' at any time to exit." << "\n\n";

        while (true) {
            std::getline(std::cin, text);

            if(text == "PROGRAM.EXIT") {
                std::cout << "Editor closed. ";
                break;
            }
            else {
                outputFile << text << std::endl;
            }
        }

        outputFile.close();
        std::cout << "Text has been written to the file." << "\n\n";
    }
    else {
        std::cout << "Failed to create the file." << "\n\n";
    }
    std::string exit;
    std::cout << "Press ENTER to exit...";
    std::cin.ignore();

    return 0;
}
