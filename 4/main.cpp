#include<iostream>
using namespace std;

int main() {
	
	int** matrix;
	int n, m;


	cout << "input size of the matrix";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}


	for (int i = 0; i < n; i++)
	{

		delete[] matrix[i];
	}


	return 0;
}