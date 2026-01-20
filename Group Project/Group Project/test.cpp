/*
#include<iostream> 
#include<iomanip> 
using namespace std;
double price_of_food(string, char);

int main()
{
    char size, order = 'N';
    string foodcode;
    double price = 0;
    double number;
    double pricetotal = 0, dish_charge;

    cout << "                                 Menu                                       \n";
    cout << "****************************************************************************\n";
    cout << "Food code              Food and Drink                    Size(RM)           \n";
    cout << "                                                 Small(S)         Large(L)  \n";
    cout << "****************************************************************************\n";
    cout << "F01                        NasiLemak               7.5             9.5      \n";
    cout << "F02                       NasiGoreng               8.5            10.5      \n";
    cout << "F03                NasiGorengPattaya              11.5            13.5      \n";
    cout << "F04                 NasiGorengTomato               7.5             9.5      \n";
    cout << "F05                         BihunSup               8.5            10.5      \n";
    cout << "D01                        KopiPanas               1.5             3.0      \n";
    cout << "D02                          KopiAis               2.0             4.0      \n";
    cout << "D03                        MiloPanas               2.0             4.o      \n";
    cout << "D04                          MiloAis               2.5             5.0      \n";
    cout << "D05                     MiloDinosaur               4.0             8.0      \n";
    cout << "****************************************************************************\n";

    do {
        cout << "Enter the food code : ";
        cin >> foodcode;
        cout << "Enter the size of dish (S/L) : ";
        cin >> size;
        cout << "Enter the quantity of dish : ";
        cin >> number;

        price = price_of_food(foodcode, size);

        if (price > 0)
        {
            dish_charge = price * number;
            pricetotal += dish_charge;

            cout << fixed << setprecision(2);
            cout << "Price per dish: RM " << price << endl;
            cout << "Dish charge: RM " << dish_charge << endl;

        }
        cout << "\nDo you want to add on order?(Y/N)\n";
        cin >> order;
        
    } while (order == 'Y' || order == 'y');

    cout << "\nTotal charge for all orders: RM " << pricetotal << endl;
    return 0;
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
        if (size == 's' ||  size == 'S')
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
        if (size == 's' ||  size == 'S')
        {
            price = 11.5;
        }
        else if (size == 'l' ||  size == 'L')
        {
            price = 13.5;
        }
    }
    else if (foodcode == "F04" || foodcode == "f04")
    {
        if (size == 's' ||  size == 'S')
        {
            price = 7.5;
        }
        else if (size == 'l' ||  size == 'L')
        {
            price = 9.5;
        }
    }
    else if (foodcode == "F05" || foodcode == "f05")
    {
        if (size == 's' ||  size == 'S')
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
        if (size == 's' ||  size == 'S')
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
        else if (size == 'l' ||  size == 'L')
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
        else if (size == 'l' ||  size == 'L')
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
*/