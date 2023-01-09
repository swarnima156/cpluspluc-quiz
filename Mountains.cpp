#include "Mountains.h"

Mountains::Mountains(std::vector<std::string>& filenames)
{
    std::srand(std::time(0));
    this->filenames = filenames;
}

std::string Mountains::getRandomMountain()
{
    // Generate a random index between 0 and the number of filenames
    int index = std::rand() % filenames.size();

    // Open the file at the randomly-generated index
    std::ifstream file(filenames[index]);

    // Check if the file was successfully opened
    if (!file.is_open()) {
      std::cerr << "Error opening file!" << std::endl;
      return "";
    }

    // Read the names from the file into a vector
    std::vector<std::string> names;
    std::string name;
    while (std::getline(file, name)) {
      names.push_back(name);
    }

    // Check if we read any names from the file
    if (names.empty()) {
      std::cerr << "No names found in file!" << std::endl;
      return "";
    }

    // Generate a random index for a name
    int nameIndex = std::rand() % names.size();

    // Return the random mountain name
    return names[nameIndex];

}

bool Mountains::checkRange(std::string mountain, std::string range)
{
    std::map<std::string, std::string> answerKey = {
      
    
    };


  
  }


