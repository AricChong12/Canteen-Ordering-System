#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void DisplayMenu(void);
void DisplayData(void);
double price_of_food(string, char);
void Asking();

struct variable {
    char size, order = 'N';
    string foodcode;
    double price = 0;
    double number;
    double pricetotal = 0, dish_charge;
    string customerName;
    char newCustomer;
};

variable myStructure;

int main() {

    
    DisplayMenu();
	DisplayData();


    do {
        Asking();

        //reset total price
        myStructure.pricetotal = 0;

        cout << "Is there any customer? (Y/N) : ";
        cin >> myStructure.newCustomer;
        cout << endl;

        if (myStructure.newCustomer == 'N' || myStructure.newCustomer == 'n') {
            break;
        }
    } while (myStructure.newCustomer == 'Y' || myStructure.newCustomer == 'y');
    

    
	return 0;
}

// display header menu
void DisplayMenu(void) {
	cout << "							Menu							" << endl;
	cout << "************************************************************************************************************************" << endl;
}


// display MenuData
void DisplayData(void) {
	char id[4];
	char fd[25];
	double priceS, priceL;

	ifstream inFile("MenuData.txt", ios::in);

	if (!inFile) {
		cout << "File could not be open" << endl;
		exit(1);
	}

	cout << "Code" << setw(60) << "Food and Drink" << setw(46) << "Size(RM)" << endl;
	cout << setw(100) << "Small(S)" << setw(20) << "Large(L)" << endl;

	while (inFile >> id >> fd >> priceS >> priceL) {
		cout << id << setw(60) << fd << setw(35) << priceS << setw(22) << priceL;
	}
	cout << "************************************************************************************************************************";

}


double price_of_food(string foodcode, char size)
{
    double price = 0;

    if (foodcode == "F01" || foodcode == "f01")
    {
        if (size == 's' || size == 'S')
        {
            price = 7.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 9.5;
        }
    }
    else if (foodcode == "F02" || foodcode == "f02")
    {
        if (size == 's' || size == 'S')
        {
            price = 8.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 10.5;
        }
    }
    else if (foodcode == "F03" || foodcode == "f03")
    {
        if (size == 's' || size == 'S')
        {
            price = 11.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 13.5;
        }
    }
    else if (foodcode == "F04" || foodcode == "f04")
    {
        if (size == 's' || size == 'S')
        {
            price = 7.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 9.5;
        }
    }
    else if (foodcode == "F05" || foodcode == "f05")
    {
        if (size == 's' || size == 'S')
        {
            price = 8.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 10.5;
        }
    }
    else if (foodcode == "D01" || foodcode == "d01")
    {
        if (size == 's' || size == 'S')
        {
            price = 1.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 3;
        }
    }
    else if (foodcode == "D02" || foodcode == "d02")
    {
        if (size == 's' || size == 'S')
        {
            price = 2;
        }
        else

            if (size == 'l' || size == 'L')
            {
                price = 4;
            }
    }
    else if (foodcode == "D03" || foodcode == "d03")
    {
        if (size == 's' || size == 'S')
        {
            price = 2;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 4;
        }
    }
    else if (foodcode == "D04" || foodcode == "d04")
    {
        if (size == 's' || size == 'S')
        {
            price = 2.5;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 5;
        }
    }
    else if (foodcode == "D05" || foodcode == "d05")
    {
        if (size == 's' || size == 'S')
        {
            price = 4;
        }
        else if (size == 'l' || size == 'L')
        {
            price = 8;
        }
    }
    else
    {
        cout << "Invalid food code!!\n";
        price = 0;
    }
    return price;
}

void Asking() {



    cout << "Enter customer name : ";
    cin >> myStructure.customerName;

    do {

        cout << "Enter the food code : ";
        cin >> myStructure.foodcode;

        cout << "Enter the size of dish (S/L) : ";
        cin >> myStructure.size;

        cout << "Enter the quantity of dish : ";
        cin >> myStructure.number;

        myStructure.price = price_of_food(myStructure.foodcode, myStructure.size);

        if (myStructure.price > 0)
        {
            myStructure.dish_charge = myStructure.price * myStructure.number;
            myStructure.pricetotal += myStructure.dish_charge;

            cout << fixed << setprecision(2);
            cout << "Price per dish: RM " << myStructure.price << endl;
            cout << "Dish charge: RM " << myStructure.dish_charge << endl;

        }
        cout << "\nDo you want to add on order? (Y/N) : ";
        cin >> myStructure.order;
        cout << endl;

    } while (myStructure.order == 'Y' || myStructure.order == 'y');

    cout << "\nTotal charge for all orders: RM " << myStructure.pricetotal << endl << endl;

}
