#pragma once
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib> 
#include<ctime>
#include<map>

class Mountains
{

private: 
  	std::vector<std::string> filenames;	

public:
	//Time complexity: 
	Mountains(std::vector<std::string>& filenames);

	//Time complexity:
	std::string getRandomMountain();

	//Time complexity:
	bool checkRange(std::string mountain, std::string range);
};