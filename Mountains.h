#pragma once
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib> 
#include<ctime>
#include<map>
using namespace std;


class Mountains
{

private: 
  	vector<string> filenames;	

public:
	//Time complexity: 
	Mountains(vector<string>& filenames);

	//Time complexity:
	string getRandomMountain();

	//Time complexity:
	bool checkRange(string mountain, string range);
};