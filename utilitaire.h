#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
using namespace std;

void readFileIntoString(const std::string& path, std::string& content);
void remove_punctuation(std::string& word);
void toLower(std::string& s);



