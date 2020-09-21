#ifndef FILEIO_H
#define FILEIO_H
#include <string>
#include <vector>
#include "constants.h"
using namespace std;
int loadData(const std::string filename, vector<process> &myProcesses);
int saveData(const std::string filename, vector<process> &myProcesses);
#endif