#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double d;
	double x1, x2;
	printf("Введите коэффициенты a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a == 0.0){ 
		printf("Коэффициент а должен быть ненулевым.");	
		return 1;
	}
	d = b * b - 4 * a * c;
	if(d < 0.0){
		printf("Решений нет.");
	} else {
		d = sqrt(d);
		x1 = (-b + d) / (2.0 * a);
		x2 = (-b - d) / (2.0 * a);
		printf("Решения уравнения: x1 = %lf, x2 = %lf", x1, x2);
	}
	return 0;
}