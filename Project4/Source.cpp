# include <iostream>

using namespace std;

int main()
{
	void intfrac(float, float&, float&);
	float number, intpart, fracpart;
	do
	{
		cout << "Please! Enter number: ";
		cin >> number;
		intfrac (number, intpart, fracpart);
		cout << "The whole part is: " << intpart << "The fractional part is: " <<
			fracpart << endl;
	} while (number != 0.0);
system("pause");
return 0;
}

void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);
	intp = static_cast<float>(temp);
	fracp = n - intp;
}