#include <iostream>
using namespace std;

using byte = unsigned long long;

int main()
{
	int Count = 0;
	byte Result = 0;

	cout << "Number Count : ";
	cin >> Count;

	byte* InNumber = new byte[Count];
	byte* OutNumber = new byte[Count];

	for (int i = 0; i < Count; i++)
	{
		cin >> InNumber[i];
		OutNumber[i] = 1;

		for (; InNumber[i] > 1;)
		{
			InNumber[i] /= 2;
			OutNumber[i] *= 2;
		}
		OutNumber[i] *= 2;
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