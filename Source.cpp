#include <iostream>
#include <ctime>
using namespace std;
	//Proc23. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами(x, y).С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами.
	//int Quarter(int x, int y)
	//{
	//	if (x > 0 and y > 0) return 1;
	//	if (x > 0 and y < 0) return 2;
	//	if (x < 0 and y < 0) return 3;
	//	if (x < 0 and y > 0) return 4;
	//}
	//int main() {
	//	int i;
	//	double x, y;
	//	for (i = 0; i <= 3; i++) {
	//		cout << "x = " << i << x;
	//		cout << "y = " << i << y;
	//		cout << "Quarter number: " << Quarter(x, y);
	//	}
	//}
//Proc24. Описать функцию Even(K) логического типа, возвращающую TRUE, если целый параметр K является четным, и FALSE в противном случае.С ее помощью найти количество четных чисел в наборе из 10 целых чисел.
//bool Even(int k) {
//	int sum = 0;
//	int k = 1;
//	int i = 1;
//	for (int i = k; i <= 10; i++);
//	if (i % 2 == 0)
//		sum += i;
//	else
//		cout << "false " << endl;
//cout << "sum = " << sum << endl;
//}
//int main()
//{
//	cout << Even(1) << endl;
//}
//Proc32. Описать функцию DegToRad(D) вещественного типа, находящую величину угла в радианах, если дана его величина D в градусах (D — вещественное число, 0 < D < 360). Воспользоваться следующим соотношением: 180◦ = π радианов.В качестве значения π использовать 3.14.С помощью функции DegToRad перевести из градусов в радианы пять данных углов.
//double DegToRad(double d) {
//	return d * 3.14 / 180;
//}
//int main() {
//	int i;
//	double d;
//	for (i = 1; i <= 5; i++) {
//		cout << "d = ";
//		cin >> d;
//		cout << DegToRad(d) << endl;
//	}
//}
//Proc34. Описать функцию Fact(N) вещественного типа, вычисляющую значение факториала N! = 1·2·. . .·N (N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).С помощью этой функции найти факториалы пяти данных целых чисел.
//double Fact(int n) {
//	int t = 1;
//	int i;
//	for (i = 1; i <= n; i++) {
//		return t;
//	}
//}
//int main() {
//	int i, n;
//	for (i = 1; i <= 5; i++) {
//		cout << "N: ";
//		cin >> n;
//		cout << Fact(n) << endl;
//	}
//}