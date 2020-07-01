#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int age, tickets, persons, price, total_price;
    persons = 1, total_price = 0;

    cout << "How many tickets do you want? ";
    cin >> tickets;
    cout << "Number of tickets: " << tickets << endl;
    while (tickets >= persons) {
        cout << "Enter age for person " << persons << ": ";
        cin >> age;

        {
            if (age > 15)
                price = 80;
            else if (age < 8)
                price = 0;
            else
                price = 30;
        }

        price + total_price;

        persons++;
    }
    cout << "Total price is: " << total_price;

    return 0;
}
