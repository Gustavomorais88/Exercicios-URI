#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double A, B, C, SOMA, MEDIA;
	cin >> A;
 	cin >> B;
 	cin >> C;

 	SOMA = (A * 2) + (B * 3) + (C * 5);
 	MEDIA = SOMA / 10;
 	cout << fixed << setprecision(1);
 	cout <<"MEDIA = "<< SOMA/10 << endl;
	return 0;
}
