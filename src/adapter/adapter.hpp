#pragma once
#include <iostream>
#include <string>


class Banner {
private:
	std::string string;

public:
	Banner(std::string string);
	void showWithParen(void);
	void showWithAster(void);
};


class Print {
public:
	~Print(void);
	virtual void printWeak() = 0;
	virtual void printStrong() = 0;
};


class PrintBanner : public Print , public Banner{
public:
	PrintBanner(std::string string);
	void printWeak();
	void printStrong();
};

