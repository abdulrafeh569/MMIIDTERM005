#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	double cost;
	double quantity;
	double tax;
	int total_cost;
	const double discount = 0.10;
	string answer;
	do
	{
		cout << "\nEnter price: ";
		cin >> cost;
		if (cost < 0)
		{
			cout << "Enter positive number \n";

		}
		cout << "Enter quantity: ";
		cin >> quantity;
		if (quantity < 0)
		{
			cout << "invalid entery\nEnter positive number \n";
		}
		cout << "Enter the tax rate in decimals: ";
		cin >> tax;
		if (tax < 0 || tax>1)
		{
			cout << "invalid entery\nEnter tax between 0 and 1 \n";
		}
		total_cost = cost * quantity;
		if (quantity >= 10)
		{
			total_cost -= total_cost * discount;
		}
		total_cost += total_cost * tax;

		cout << "Price\t" << "Quantity\t" << "tax" << endl << cost << "\t" << quantity << "\t\t" << tax << endl;
		cout << "Total price is: $" << total_cost << endl;
		cout << "Thank You <3" << endl;

	} while (1);
	system("pause");
	return 0;

}