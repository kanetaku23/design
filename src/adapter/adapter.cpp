#include "adapter.hpp"


Banner::Banner(std::string string) {
	Banner::string = string;
}


void Banner::showWithParen() {
	std::cout << "(" << Banner::string << ")" << std::endl;
}


void Banner::showWithAster() {
	std::cout << "*" << Banner::string << "*" << std::endl;
}


PrintBanner::PrintBanner(std::string string): Banner(string) {
}


void PrintBanner::printWeak() {
	showWithParen();
}


void PrintBanner::printStrong() {
	showWithAster();
}


Print::~Print(void) {}

