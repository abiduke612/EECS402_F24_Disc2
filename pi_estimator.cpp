#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int num_points;
    cout << "Enter number of iterations to run: ";
    cin >> num_points;
    int in_circle = 0;
    int i = 0;
    while (i < num_points) {

        double x_val = (double) rand() / RAND_MAX * 2 - 1;
        double y_val = (double) rand() / RAND_MAX * 2 - 1;

        double y_min = -sqrt(1 - x_val * x_val);
        double y_max = sqrt(1 - x_val * x_val);
    
        if (y_min < y_val && y_val < y_max) {
            in_circle += 1;
        }

        ++i;
    }

    double pi_estimate = (double) in_circle / num_points * 4;
    cout << "PI estimate is: " << pi_estimate << endl;
    return 0;
}

