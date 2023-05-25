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
		arr[i] = rand() % 30-10;
		cout << arr[i]<<" ";
		if (arr[i] < 0) {
			sum_negative += arr[i];
		}
	}
	for (int i = arr[i]; arr[i] >= min_element && arr[i] <= max_element; i++) {
		product_min_max *= arr[i];
	}
	cout <<endl<< "Sum negative = " << sum_negative << endl;


	system("pause>nul");
	return 0;
}