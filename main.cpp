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
	bit64* OutNumber = new bit64[Count];

	for (int i = 0; i < Count; i++)
	{
		cin >> InNumber[i];
		OutNumber[i] = 1;

		for (; (InNumber[i] / OutNumber[i]) >= 1;)
		{
			if (InNumber[i] == OutNumber[i])
			{
				break;
			}
			OutNumber[i] *= 2;
		}
	}

	for (int i = 0; i < Count; i++)
	{
		Result = Result ^ OutNumber[i];
	}

	cout << Result;

	delete[] InNumber;
	InNumber = nullptr;
	delete[] OutNumber;
	OutNumber = nullptr;

	return 0;
}