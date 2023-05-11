#include <iostream>
using namespace std;

int giant[20];
int n;
int i;
int low;
int high;

void input() {
	while (true) {
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray hanya memiliki minimum 1 dan maksimum 20 element.\n\n";
	}

	cout << "\n=========================================\n";
	cout << " Masukkan data \n";
	cout << "\n=========================================\n";

	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> giant[i];
	}
}

//void binarySearch() {

//	while (low <= high) {
//		int mid = low + (high - low) / 2;
//
//		if (giant[1] == mid)
//			return;
//		if (giant[1] > mid) {
//			low= mid = 1;
//		}
//		if (giant[1] < mid) {
//			high = mid - 1;
//		}
//	}
//}

void search() {
	char ch;            

	do {
		
		cout << "\nMasukkan angka yang ingin dicari : ";                           
		int item;
		cin >> item;

		for (i = 0; i < n; i++) {  
			if (giant[i] == item) {                                                       
				cout << "\n" << item << " ditemukkan pada posisi " << (i + 1) << endl;
				break;
			}
		}

		if (i == n) {
			cout << "\n" << item << " tidak ditemukkan di dalam array!\n";
		}

		cout << "\nLanjutkan pencarian (y/n) : ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	search();
}

