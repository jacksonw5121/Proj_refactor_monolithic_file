//============================================================================
// Name        : fileio.h
// Author      : Jackson M. Walker
// Version     :
// Copyright   : Steal this code!
// Description : Contains loadData and saveData function declarations and all 
//               necessary includes.
//============================================================================

#ifndef FILEIO_H_
#define FILEIO_H_
#include <string>
#include <vector>
#include "constants.h"

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, std::vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif // FILEIO_H_