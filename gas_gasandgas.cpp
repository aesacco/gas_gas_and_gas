#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Gas, Gas, and Gas program.
    cout << "Welcome to Gas, Gas, and Gas" << '\n';
    
    // variable declaration
    int cust_response = 1;
    double gal_gas = 0.0;
    int num_tacos = 0;
    int num_propane_tanks = 0;
    double price_gas = 4.339;
    double price_taco = 2.50;
    int price_propane = 15;
    double total_without_tax;
    double total_with_tax;
    double cust_payment;
    double cust_change;
    int total_enough = 0;
    double tax_rate = 1.10; // WA tax rate

    while (cust_response != 0)
    {
        cout << "Please select 1 for fuel, 2 for beef and bean tacos, or 3 for propane. Select 0 for your total." << '\n';
        cin >> cust_response;
        if (cust_response == 1)
        {
            cout << "Gas is currently $4.339 a gallon. How many gallons of gas do you want?" << '\n';
            cin >> ++gal_gas;
        }
        else if (cust_response == 2)
        {
            cout << "Beef and bean tacos are $2.50 each. How many beef and bean tacos do you want?" << '\n';
            cin >> ++num_tacos;
        }
        else if (cust_response == 3)
        {
            cout << "Tanks of propane are $15 each. How many tanks of propane do you want?" << '\n';
            cin >> ++num_propane_tanks;
        }
    }

    // Tell customer total amount of gas, gas, gas and gas, then give him his total and sales tax. 
    // get payment and give change
    total_without_tax = gal_gas * price_gas + num_tacos * price_taco + num_propane_tanks * price_propane;
    total_with_tax = total_without_tax * tax_rate;
    cout << "You have a total of " << gal_gas << " gallons of gas, " << num_tacos << " beef and bean tacos, and " << num_propane_tanks << " propane tanks." << '\n';
    while (total_enough == 0)
    {
        cout << "Your total before tax is $" << ceil(total_without_tax * 100.0) / 100.0 << ". Your tax rate is " << (tax_rate - 1) * 100 << "%." << '\n';
        cout << "Your total after tax is $" << ceil(total_with_tax * 100.0) / 100.0 << ". How much are you paying?" << '\n';
        cin >> cust_payment;
        if (cust_payment >= total_with_tax)
        {
            cust_change = cust_payment - total_with_tax;
            cout << "Your change is $" << ceil(cust_change * 100.0) / 100.0 << ". Have a gassy day!" << '\n';
            total_enough = 1;
        }
        else
            cout << "That's not enough to cover your bill. Please pay at least $" << ceil(total_with_tax * 100.0) / 100.0 << '\n';
     }
    
    return 0;   
}