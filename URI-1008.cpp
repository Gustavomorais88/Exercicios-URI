#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int F, D;
	double H;

	cin >> F;
	cin >> D;
	cin >> H;


	cout <<"NUMBER = " << F << endl;
	cout << fixed << setprecision(2) << "SALARY = U$ " << D*H <<  endl;

	return 0;
}
