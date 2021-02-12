#include <iostream>
#include <string>
#include "init.h"

int main(int argc, char** argv) {

  if (argc != 2) {
    std::cout << "usage: ./imageDisplay <option>" << "\n\n";
    std::cout << "options" << "\n";
    std::cout << "       webcam      - initialize with webcam" << "\n";
    std::cout << "       <imagePath> - open imagen located in <imagePath>" << "\n";
    std::cout << "       default     - open with the default image for testing" << "\n";
    return -1;
  }

  std::string userOption = argv[1];

  Init init(userOption);
  std::cout << "Get image from " << init.printUserOption() << "\n";
  init.start();
}