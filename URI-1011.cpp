#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double r;
	double p = 3.14159;

	cin >> r;
	cout << fixed << setprecision(3);
	cout <<"VOLUME = " << (4/3.0)*p*(r*r*r) << endl;
	return 0;
}
