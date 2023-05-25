#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;

int main() {
	const int N = 20;
	int arr[N + 1];
	srand(time(NULL));
	int min_element = numeric_limits<int>::min(), max_element = numeric_limits<int>::max();
	int product_min_max = 1;
	int sum_negative = 0;
	int product_paired_el = 1;
	int sum_minstart_minend = 0;
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 20-10;
		cout << arr[i]<<" ";
		if (i % 2 == 0) {
			product_paired_el *= arr[i];
		}
		if (arr[i] < 0) {
			sum_negative += arr[i];
		}
	}
	cout <<endl<< "Sum negative = " << sum_negative << endl;
	cout << "product_paired_el = " << product_paired_el << endl;


	system("pause>nul");
	return 0;
}