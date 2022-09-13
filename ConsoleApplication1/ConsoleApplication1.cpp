#include <iostream>
using namespace std;
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int num;
	int sum=1;
	int i;
	cout << "Fatorial:" << endl;
	cout << "Enter a number:";
	cin >> num;
	while (num <= 0) {
		cout << "Nice try, please enter a POSITIVE number....:";
		cin >> num;
	}
	cout << num << "!=" << 1;
	for (i=2; i <= num; i++)
	{
		cout << "*" << i;
		sum = sum * i;
	}
	cout << "=" << sum << endl;
}
void arithmetic() {
	int num;
	int n;
	int a;
	int i;
	int sum;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> num;
	sum = num;
	cout << "Enter the number to add each time: ";
	cin >> n;
	cout << "Enter the number of elements in the series:";
	cin >> a;
	cout << num;

	for (i = 1; i < a; i++) {
		num = num + n;
		sum = sum + num;
		cout << " + " << num;
	}
	cout << " = " << sum << endl;
}
void geometric() {
	int num;
	int A;
	int B;
	int sum;
	int i;
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at : ";
	cin >> num;
	sum = num;
	cout << "Enter a number to multiply by each time : ";
	cin >> A;
	cout << "Enter the number of elements in the series : ";
	cin >> B;
	cout << num;
	for (i = 1; i < B; i++) {
		num = num * A;
		sum = sum + num;
		cout << " + " << num;
	}
	cout << " = " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}