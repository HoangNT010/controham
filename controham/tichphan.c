#include "tichphan.h"


double tinhTichPhan(double a, double b, double (*fx)(double))
{
	double tichphan = 0;

	double h = (b - a) / 1000;

	for (int i = 0; i < 1000; i++)
	{
		double dientich = 0;
		double Xa = a + (h * i);
		double Ya = fx(Xa);
		double Xb = a + (h * ((double)i + 1));
		double Yb = fx(Xb);
		dientich = (Ya + Yb) / 2 * h;
		tichphan += dientich;
	}
	return tichphan;
}
