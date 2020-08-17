#include "tichphan.h"

void selectfx( double a, double b)
{
	int flag = 0;
	do {
		flag = 0;
		int x = 0;
		printf_s("\t 1-f(x) = x^2 \r\n\t 2-f(x) = x^2 + 2 \r\n\t 3-f(x) = sin(x) \r\n\t 4-f(x) = cos(x) \r\n\t 5-f(x) = tan(x) \r\n Chon ham f(x): ");
		scanf_s("%d", &x);
		switch (x)
		{
			case 1:
			{
				double t_powx2 = tinhTichPhan(a, b, fx_xpow2);
				printf_s("Gia tri cua tich phan f(x) = x^2 : %lf\n", t_powx2);
				break;
			}
			case 2:
			{
				double t_powx2plus2 = tinhTichPhan(a, b, fx_xpow2plus2);
				printf_s("Gia tri cua tich phan f(x) = x^2 + 2 : %lf\n", t_powx2plus2);
				break;
			}
			case 3:
			{
				double t_sinx = tinhTichPhan(a, b, fx_sinx);
				printf_s("Gia tri cua tich phan f(x) = sin(x) : %lf\n", t_sinx);
				break;
			}
			case 4:
			{
				double t_cosx = tinhTichPhan(a, b, fx_cosx);
				printf_s("Gia tri cua tich phan f(x) = cos(x) : %lf\n", t_cosx);
				break;
			}
			case 5:
			{
				double t_tanx = tinhTichPhan(a, b, fx_tanx);
				printf_s("Gia tri cua tich phan f(x) = tan(x) : %lf\n", t_tanx);
				break;
			}
			default:
				printf_s("Ngoai pham vi ho tro cua chuong trinh. Xin vui long chon lai\r\n");
				flag = 1;
				break;
		}	
	} while (flag != 0);
}


int main()
{
	double a = 0, b = 0;
	printf_s("Nhap gia tri 2 mut cua doan [a,b]: ");
	scanf_s("%lf%lf", &a, &b);
	selectfx(a, b);

	return 0;
}