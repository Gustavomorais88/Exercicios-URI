#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int A, B, C, D, DIFERENCA;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;

	DIFERENCA = (A * B - C * D);
	cout <<"DIFERENCA = " << A*B-C*D << endl;
	return 0;
}
