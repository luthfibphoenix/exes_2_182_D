#include <iostream>
using namespace std;

int luthfi(33);
int n;
int i;
int upperbound = n - 1;
int lowerbound = 0;
int mid = (upperbound + lowerbound) / 2;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 0))
			break;
		else cout << "\nArray harus mempunyai minimal 1 dan maksimal 33 elements' \n\n";
	}
}

void BinarySearch() 
{
	 int low = 0;
	 int high = n - 1;
	 int mid = (high - low) / 2; 

	 while (luthfi[mid] = n)
	 {
		 cout << "ditemukan" << endl;
		 break;
	 }
	 if (luthfi[mid] < n)
	 {
		 upperbound = n - 1;
	 }
	 if (luthfi[mid] > n)
	 {
		 lowerbound = 0;
	 }
	 if (lowerbound + upperbound) / 2;
	 {
		 mid = (upperbound + lowerbound) / 2;
	 }
	 cout << "tidak ditemukan" << endl;
}

int main()
{
	void input();
	void BinarySearch();
	return 0;
}