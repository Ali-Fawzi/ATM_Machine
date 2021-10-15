#include<iostream>
#include<windows.h>
int main() {
	system("color 2");//set the screen colour to green.
	double amount, balance = 0.00;//used vaule in the program.
	char choice;//user choices.
	std::cout << "\t ATM MACHINE" << std::endl;//console output.

	do {//Loop till the user choices to Quit.
		std::cout << "> Press 1 for checking the balance" << std::endl;
		std::cout << "> Press 2 to deposit" << std::endl;//console output
		std::cout << "> Press 3 to withdrew" << std::endl;
		std::cout << "> Press 4 to QUIT" << std::endl;
		std::cout << "> Enter your selection";
		std::cin >> choice;//get input from the user
		switch (choice) {//switching choices
		case '1':
			std::cout << balance << "$\n";
			break;
		case '2':
			std::cout << "how much you want to depos ?\n";
			std::cin >> amount;//geting input from user
			balance = +amount;//increases the balance.
			break;
		case '3':
			std::cout << "how muce you want to withdrew >\n";
			std::cin >> amount;
			if (balance < amount)//if the money in the balance is less then the required.
				std::cout << "inseficent money!\n"; //console output.
			else
				std::cout << "done!\n";
			balance -= amount;//decreases the balance.
			break;
		case '4':
			std::cout << "See ya ^_^";
			break;
		default:
			std::cout << "invalid selection, try agin\n";
			break;
		}
	} while (choice != '4');//when the user inputs '4' the program ends.
	return 0;

}
