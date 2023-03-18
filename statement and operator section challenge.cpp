#include <iostream>
using namespace std;

int main() {
    const int dollarValue{100}, quarterValue{25}, dimeValue{10}, nickelValue{5}, pennyValue{1};
    int change;
    cout << "Enter an amount in cents: ";
    cin >> change;

    int dollars = change / dollarValue;
    change %= dollarValue;

    int quarters = change / quarterValue;
    change %= quarterValue;

    int dimes = change / dimeValue;
    change %= dimeValue;

    int nickels = change / nickelValue;
    change %= nickelValue;

    int pennies = change / pennyValue;

    cout << "You can provide this change as follows:\n";
    cout << "Dollars: " << dollars << '\n';
    cout << "Quarters: " << quarters << '\n';
    cout << "Dimes: " << dimes << '\n';
    cout << "Nickels: " << nickels << '\n';
    cout << "Pennies: " << pennies << '\n';
    return 0;
}
