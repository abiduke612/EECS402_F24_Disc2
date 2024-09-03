#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  for(mat_num = 0; mat_num < 5; ++mat_num) {
    for(n = 0; n < 10; ++n) {
      double total = 0

	// get_exp_result() takes in 2 int and calculates tensile strength and returns a double
      double tensile_strength = get_exp_result(mat_num, n) // No errors in function

 total += tensile_strength
    }
    int average = total / 10
    cout << "Material #" << mat_num
         << " has " << average << " avg. tensile strength." << endl
    if (average = 0) {
       cout << "Material # " << mat_num << " is weak" << endl
    }
  }
}

