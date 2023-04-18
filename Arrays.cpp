#include <iostream>
using namespace std;

bool areEqual(int arr1[], int length1, int arr2[], int lenght2)
{
	if (length1 != lenght2)
	{
		cout << "Not equal";
		return false;
	}
	else
	{
		for (int i = 0; i < length1; i++)
		{
			if (arr1[i] != arr2[i])
			{
				cout << "Not equal";
				return false;
			}
		}
		cout << "equal";
		return true;
	}

}


int main()
{
	int length1;
	cin >> length1;

	int arr1[100];

	for (int i = 0; i < length1; i++)
	{
		int num;
		cin >> num;

		arr1[i] = num;
	}

	int length2;
	cin >> length2;

	int arr2[100];

	for (int j = 0; j < length2; j++)
	{
		int num2;
		cin >> num2;

		arr2[j] = num2;
	}

	areEqual(arr1, length1, arr2, length2);
}

