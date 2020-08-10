#include "adapter.hpp"

int main(void) {
	Print* p = new PrintBanner("Hello");
	p->printStrong();
	p->printWeak();
}