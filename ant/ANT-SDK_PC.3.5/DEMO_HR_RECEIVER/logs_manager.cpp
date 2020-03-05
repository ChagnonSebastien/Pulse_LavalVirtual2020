#include "logs_manager.h"

LogsManager::LogsManager()
{
	// open file
	_fs.open(FILENAME, std::ios::app);
	_player.age = 1;
	_player.fitnessLevel = 1;
}

void LogsManager::setUserProfile()
{
	//_age = age;
	//_fitnessLevel = fitnessLevel;
	std::string text = "player_info age: " + std::to_string(_player.age) + " fitness_level: " + std::to_string(_player.fitnessLevel);
	logInFile(text);
}

void LogsManager::log(std::string time, std::string hr)
{
	std::string text = time + " " + hr;
	logInFile(text);
}

void LogsManager::logInFile(std::string text)
{
	_fs << text << std::endl;
}

