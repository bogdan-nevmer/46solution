#include<iostream>
using namespace std;

int main() {
	int n, m;
	cout << "input size of matrix(N and M)";
	cin >> n >> m;
	 
	int size = m * n;
	int* matrix = new int[n * m];

	for (int i = 0; i < size; i++)
	{
		matrix[i] = rand() % 100;

	}

	for (size_t i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[m * i + j] << " ";
		}
		cout << endl;
	}

	delete[] matrix;

	return 0;
}