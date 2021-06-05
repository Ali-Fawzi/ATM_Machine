#include<iostream>
#include<windows.h>
int main() {
	system("color 2");
	double amount, balance = 0.00;
	char choice;
	std::cout << "\t ATM MACHINE" << std::endl;

	do {
		std::cout << "> Press 1 for checking the balance" << std::endl;
		std::cout << "> Press 2 to deposit" << std::endl;
		std::cout << "> Press 3 to withdrew" << std::endl;
		std::cout << "> Press 4 to QUIT" << std::endl;
		std::cout << "> Enter your selection";
		std::cin >> choice;
		switch (choice) {
		case '1':
			std::cout << balance << "$\n";
			break;
		case '2':
			std::cout << "how much you want to depos ?\n";
			std::cin >> amount;
			balance = +amount;
			break;
		case '3':
			std::cout << "how muce you want to withdrew >\n";
			std::cin >> amount;
			if (balance < amount)
				std::cout << "inseficent money!\n";
			else
				std::cout << "done!\n";
			balance -= amount;
			break;
		case '4':
			std::cout << "See ya ^_^";
			break;
		default:
			std::cout << "invalid selection, try agin\n";
			break;
		}
	} while (choice != '4');
	return 0;

}
