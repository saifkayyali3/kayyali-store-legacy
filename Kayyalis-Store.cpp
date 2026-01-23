#include <iostream>
using namespace std;


void main_menu() {
	cout << "*****************************The Kayyali Family's Fruits and Vegetables Store***************************" << endl;
	cout << "1- Apple 0.50 JD \t 2- Orange 0.60 JD\t3- Pear 0.25 JD" << endl;
	cout << "4- Carrot 0.75 JD\t5- Cucumber 0.70 JD\t6- Strawberry 0.10 JD" << endl;
	cout << "7- Banana 0.20 JD\t8- Potato 1.00 JD\t9- Tomato 0.10 JD" << endl;
	cout << "10- Broccoli 1.50 JD\t11- Eggplant 0.40 JD\t12- Mushroom 0.50" << endl;
	cout << "                                 13- See Total" << endl;
}													


int main()
{
	float total = 0.00;
	
	int choice;
	main_menu();
	while ( true) {
		
	
		cout << "Enter the number of what you want:" << endl;
		cin >> choice;
		if (choice == 13) {
			cout << total <<" JD" << endl;
			break;
		}	
		switch (choice) {
		case 12:
			total += 0.50;
			break;
		case 11:
			total += 0.40;
			break;
		case 10:
			total += 1.50;
			break;
		case 9:
			total += 0.10;
			break;
		case 8:
			total += 1.00;
			break;
		case 7:
			total += 0.20;
			break;
		case 6:
			total += 0.10;
			break;
		case 5:
			total += 0.70;
			break;
		case 4:
			total += 0.75;
			break;
		case 3:
			total += 0.25;
			break;
		case 2:
			total += 0.60;
			break;
		case 1:
			total += 0.50;
			break;
		default:
			cout << "Invalid choice, please try again!" << endl;

		}
	}
	system("pause"); // Minimal addition to not quit immediately, rest is written by younger me
    return 0;
}



