#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string nome;
	double s, v;

	cin >> nome;
	cout << fixed << setprecision(2);

	cin >> s;
	cin >> v;

	cout << fixed << setprecision(2) <<"TOTAL = R$ " << (v*15)/100+s << endl;
	return 0;
}
