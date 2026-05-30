#include<iostream>
#include<string>
using namespace std;

string product_name[50];
float product_price[50];
int product_stock[50];
int product_count = 0;

void add_product()//Function which allows users to add an item to add to their trolley by typing in the name of the product.
{
	cout << "\t Adding Product : \n";
	cout << " Enter Product name : \n";
	cin >> product_name[product_count];
	cout << " Enter Product price : \n";
	cin >> product_price[product_count];
	cout << " Enter stock quantity  : \n";
	cin >> product_stock[product_count];

	product_count++;

	cout << " Product added successfully !\n";
}
void show_product()//This allows users to get a display of all the products in their tray.
{
	cout << "\t Showing the Product : \n";
	for (int i = 0; i < product_count; i++)
	{
		cout << i + 1 << " . " << product_name[i] << "\n" << "Rs  " << product_price[i] << "  Stock :" << product_stock[i];
		cout << endl;
	}
}
float total_discount(float sub_total)//This function calculates the total discount if applicable.
{
	float discount = 0;
	if (sub_total > 10000)
		discount = sub_total * 0.10;
	else if (sub_total > 5000)
		discount = sub_total * 0.05;
	return discount;
}
void display_bill(string product_name, int quantity, float subtotal, float discount, float tax, float total_bill)//This function displays the final total payable bill.
{
	cout << "\n--- Order Summary ---\n";
	cout << "Product: " << product_name << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Subtotal: Rs. " << subtotal << endl;
	cout << "Discount: Rs. " << discount << endl;
	cout << "Tax (8%): Rs. " << tax << endl;
	cout << "Total Bill: Rs. " << total_bill << endl;
}

void place_order()//This function allows the user to finalize their shopping and place thier order.
{
	int choice, quantity;
	float sub_total = 0, discount = 0, tax = 0, total_bill;
	cout << "\t Placing an order :\n";
	show_product();
	cout << "Enter your choice : \n";
	cin >> choice;
	if (choice<1 || choice>product_count)
	{
		cout << " invalid choice entered!\n";
		return;
	}
	cout << "Enter the quantity :\n";
	cin >> quantity;
	if (quantity > product_stock[choice - 1])
	{
		cout << " not enough stock available!";
		return;
	}
	sub_total = product_price[choice - 1] * quantity;
	product_stock[choice - 1] -= quantity;

	discount = total_discount(sub_total);
	tax = (sub_total - discount) * 0.08;
	total_bill = (sub_total - discount) + tax;

	display_bill(product_name[choice - 1], quantity, sub_total, discount, tax, total_bill);
}
int main()
{
	int userchoice;
	do {
		cout << "\t Order Management System \n";
		cout << "1. Add Product\n";
		cout << "2. Show Products\n";
		cout << "3. Place the Order\n";
		cout << "4. Exit system\n";
		cout << "Enter your choice: ";
		cin >> userchoice;

		if (userchoice == 1) {
			add_product();
		}
		else if (userchoice == 2) {
			show_product();
		}
		else if (userchoice == 3) {
			place_order();
		}
		else if (userchoice == 4) {
			cout << "Exiting the program \n";
		}
		else {
			cout << "Invalid choice!\n";
		}

	} while (userchoice != 4);

	return 0;
}