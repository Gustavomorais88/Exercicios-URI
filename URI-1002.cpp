#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double n = 3.14159;
	double raio;
	double areaA;

	cin >> raio;

	areaA = n * raio * raio;
	cout << fixed << setprecision(4);
	cout <<"A="<< n*raio*raio << endl;

	return 0;
}
