#include <iostream>
using namespace std;

int main()
{
	int maximum = 1, minimum = 0, number;
	while (1)
	{
		cout << "Enter a number(-1 to quit): "; cin >> number;

		if (number == -1)
			break;

		else if (number<1 || number>100)
		{
			cout << "\nOut of range.Enter between 1-100.\n"; continue;
		} //invalid input,do again


		maximum = (number>maximum) ? number : maximum;

		minimum = (number<minimum) ? number : minimum;

	}
	cout << "Max number is : " << maximum << endl
		<< "Min number is : " << minimum << endl;
	system("pause");
	return 0;
}
