#include "Mountains.h"


Mountains::Mountains(vector<string>& filenames)
{ 
    this->filenames = filenames;
}

string Mountains::getRandomMountain() {

  srand(time(0));

  vector<string> filenames = {"Alps.txt", "Pyrenees.txt", "Carpathians.txt", "Icelandic Highlands.txt"};

  

  int index = rand() % filenames.size();

  string filename = filenames[index];

  ifstream infile(filename);

  if (!infile) {
    cerr << "Error: could not open file " << filename << " for reading" << endl;
  }

  // Read the contents of the file into a vector of strings
  vector<string> names;
  string name;
  while(getline(infile, name)) {
    names.push_back(name);
  }

  infile.close();

  int nameIndex = rand() % names.size();

  string randomMountain = names[nameIndex];

  return randomMountain;

}

bool Mountains::checkRange(string mountain, string range)
{

  
  }

 


