#pragma once
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include "player.h"

#define FILENAME "test.txt"


class LogsManager
{
public:
	LogsManager();
	void setUserProfile();
	void log(std::string time, std::string hr);
	

private:
	Player _player;
	std::ofstream _fs;
	void logInFile(std::string text);

};




