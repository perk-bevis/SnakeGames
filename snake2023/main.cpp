#include "main.hpp"
#include "function.hpp"
#include "console.hpp"

int main() {
	try {
		ConsoleResize(127, 30);
		DeleteMenu(GetSystemMenu(GetConsoleWindow(), false), SC_MAXIMIZE, MF_BYCOMMAND);
		SetConsoleTitle(TEXT("Snake 2023"));
		ShowCur(false);
		EvenProcessing();
	}
	catch (const std::exception&) {
		std::cout << "error:";
	}
	system("pause");
	return 0;
}