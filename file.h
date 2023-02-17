#pragma once
#include <fstream>
#include<vector>
#include<string>
#include<filesystem>
#include"user.h"
#include"message.h"

namespace fs = std::filesystem;

void demo_perms(fs::perms p);

class File {
	std::vector<User> _user;
	std::vector<Message> _message;

public:
	File();
	~File();
	void userFile();
	void messageFile();
};
