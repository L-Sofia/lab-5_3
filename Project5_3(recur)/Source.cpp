#include <iostream>
#include <cmath>
using namespace std;

double t(const double x);

int main()
{
	double fp, fk, r;
	int n;
	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;

	double df = (fk - fp) / n;
	double f = fp;

	while (f <= fk)
	{
		r = t(f * f) + 2 * t(2 * f + 1) + sqrt(t(1));

		cout << f << " " << r << endl;
		f += df;
	}
	return 0;
}

double t(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x) + 1) / (exp(x) + sin(x) * sin(x)));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = (-x * x) / (4 * pow(j, 2) + 2 * j);
			//double R = -x * x / (2 * j - 3 + 1) * (2 * j - 2 + 1) * (2 * j - 1 + 1) * (2 * j + 1);
			a *= R;
			S += a;
		} while (j < 5);
		return S;
	}
}