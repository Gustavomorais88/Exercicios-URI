#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double A, B, SOMA, MEDIA;

	cin >> A;
	cin >> B;

	SOMA = (A * 3.5) + (B * 7.5);
	MEDIA = SOMA / 11;

	cout << fixed << setprecision(5);
	cout <<"MEDIA = " << SOMA/11 << endl;

	return 0;
}
