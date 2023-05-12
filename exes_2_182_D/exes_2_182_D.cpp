#include <iostream>
using namespace std;

int luthfi(33);
int n;

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