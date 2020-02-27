#include "logs_manager.h"

LogsManager::LogsManager()
{
	// open file
	_fs.open(FILENAME, std::ios::app);
}

void LogsManager::setUserProfile(int age, int fitnessLevel)
{
	_age = age;
	_fitnessLevel = fitnessLevel;
	std::string text = "(player info) age: " + std::to_string(age) + " fitness level: " + std::to_string(fitnessLevel);
	logInFile(text);
}

void LogsManager::log(std::string time, std::string hr)
{
	std::string text = time + " " + hr;
	logInFile(text);
}

void LogsManager::logInFile(std::string text)
{
	_fs << text;
}

