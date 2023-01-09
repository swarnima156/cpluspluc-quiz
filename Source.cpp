#include <iostream>
#include "Mountains.h"

int main() {

  std::vector<std::string> filenames = {"Alps.txt", "Pyrenees.txt", "Carpathians.txt", "Icelandic Highlands.txt"};
  // Create a Mountains object
  Mountains mountain(filenames);

  // Call the getRandomMountain function
  std::string randomMountain = mountain.getRandomMountain();

  // Print the name of the random mountain
  std::cout << "Random mountain: " << randomMountain << std::endl;

  return 0;
}
