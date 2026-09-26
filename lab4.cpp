#include <iostream>
using namespace std;

int main(){ //считает моду ряда чисел массива вне зависимости от длины этого массива

	/*/int arr[] = {1, 2, -3, -4, -5, 67, 52};
	int n = sizeof(arr)/ sizeof(arr[0]);
	for (int i = 0; i < n;i++) {
		if (arr[i] < 0) {
			for (int j = i + 1; j < n;j++) {
				arr[j - 1] = arr[j];
			}
			n--; i--;
		}
	}
	for (int i = 0; i < n;i++) {
		cout << arr[i] << " ";
	}
		  return 0;*/
	int arr[] = {4,6,5,4,7,6,8,5,4,4,7};
	int k = sizeof(arr) / sizeof(arr[0]);
	int most_freq = arr[0]; int max_count = 0;
	for (int i = 0; i < k;i++) {
		int curr_count = 0;
			for (int j = 0; j < k;j++) {
				if  (arr[i] == arr[j]) {
					curr_count++;
			}
		}
			if (curr_count > max_count) {
				max_count = curr_count;
				most_freq = arr[i];
			}
	}
		cout << "the most frequenly encoutered num is: " << most_freq<< endl ;
	
	return 0;
}


