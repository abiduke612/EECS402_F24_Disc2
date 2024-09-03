#include <iostream>
using namespace std;

int main() {

    double coffee_price = 5.0;
    
    double your_wallet;
    int num_coffees_to_buy;
    
    cout << "Welcome to the 402 cafe! Coffees cost " << coffee_price 
         << "each. Please input how much money you have:" << endl;
    cin >> your_wallet;

    cout << "Enter how many coffees you would like to buy:" << endl;
    cin >> num_coffees_to_buy;

    // TODO: Write if-else statements to tell the user if they have
    //      more than enough, exactly enough, or not enough to buy that
    //      many coffees

    return 0;
}
