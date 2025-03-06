#include <iostream>
using namespace std;
double power(double n, int p) {
	double res = 1;
	if (p == 0)return 1;
	for (int  i = 1; i <= p; i++)
	
		res *= n;
		return res;
	

}
double power(double n) {
	double res = 1;
	
	for (int i = 1; i <= 2; i++)

		res *= n;
	return res;


}
