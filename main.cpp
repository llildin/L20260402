#include <iostream>
using namespace std;

using bit64 = unsigned long long;

int main()
{
	int Count = 0;
	bit64 Result = 0;

	cout << "Number Count : ";
	cin >> Count;

	bit64* InNumber = new bit64[Count];
	bit64 OutNumber;

	for (int i = 0; i < Count; i++)
	{
		OutNumber = 1;
		cin >> InNumber[i];

		while (InNumber[i] > OutNumber)
		{
			OutNumber = OutNumber << 1;
		}
		Result = Result ^ OutNumber;
	}

	cout << Result;

	delete[] InNumber;
	InNumber = nullptr;

	return 0;
}