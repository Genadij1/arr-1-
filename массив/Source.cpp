#include <iostream>
#include<cstdlib>
#include<limits>
#include<ctime>
using namespace std;

int main() {

    int a, max_a = 0, min_a = numeric_limits<int>::max();
    const int b = 12;
    int arr[b + 1];
    arr[0] = 1;
    for (int k = 0; k <= b; k++) {
        arr[k] = k;
    }
    for (int i = 1; i <= b; i++) {
        cout << "Enter profit for " << arr[i] << " month: ";
        cin >> a;
    }

	system("pause>nul");
	return 0;
}