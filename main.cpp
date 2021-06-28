// №7.1
#include <iostream>
using namespace std;



double func_hrm(double a, double b) {//рассчет среднего гармонического для двух чисел
	return (2 / ((1 / a) + (1 / b))); 

}
int main() {
	setlocale(LC_ALL, "Russian");
	//ввод чисел
	double a;
	cout << "Введите первое число для расчета: ";
	cin >> a;
	double b;
	cout << "Введите второе число для расчета: ";
	cin >> b;

	//определение и вывод результата
	double res = func_hrm(a, b);
	cout << "Результат среднего гармонического: " << res << endl;



	return 0;
}