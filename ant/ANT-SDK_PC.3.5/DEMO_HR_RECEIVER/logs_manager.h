#pragma once
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>

#define FILENAME "test.txt"


class LogsManager
{
public:
	LogsManager();
	void setUserProfile(int age, int fitnessLevel);
	void log(std::string time, std::string hr);
	

private:
	int _age;
	int _fitnessLevel;
	std::ofstream _fs;
	void logInFile(std::string text);

};




