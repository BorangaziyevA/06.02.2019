#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

int binarySearch(int A[], int size, int key)
{
	int low = 0, high = size - 1, middle;

	do
	{
		middle = (low + high) / 2;
		if (A[middle] < key)
		{
			low = middle + 1;
		}
		else if (A[middle] > key)
		{
			high = middle - 1;
		}
		else return middle;

	} while (low <= high);

	return -1;
}

void change_var(int &a)
{
	a = 100;
}

void fillArray(int A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		A[i] = (i + 1) * 10;
	}
}

void printArray(int A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout <<A[i]<<" ";
		cout << endl;
	}
}


//////////////////17/////////
void ARRAY(int A[],int B[],int C[], int a)
{
	int pol;

	for (size_t i = 0; i < a; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	for (size_t i = 0; i < a; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;

	for (size_t i = 0; i < a; i++)
	{
		pol = (A[i] + B[i]) / 2;
		C[i] = pol;
		cout << C[i] << endl;
	}
} 

///////////18//////////////
double okr(double var, int a)
{
	var = double(int(var*pow(10, a) + 0.5) / pow(10, a));
	return var;
}

//////////////19/////////////
int zeros(int A[], int n)
{
	int k = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (A[i]  == 0)
		{
			k++;
		}
		cout << A[i] << " ";
	}
	cout << endl;
	return k;
}

///////////////19//////////
int zeros(double A[], int n)
{
	int k = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (A[i] == 0)
		{
			k++;
		}
		cout << A[i] << " ";
	}
	cout << endl;
	return k;
}

////////////22//////////
int MinArray(int a[], int size, int &minIndex)
{
	int min = 100;
	for (size_t i = 0; i < size; i++)
	{
		a[i] = 0 + rand() % 100;
		cout << i << " = " << a[i] << " ";
		if (a[i] < min)
		{
			min = a[i];
			minIndex = i;
		}
	}
	return min;
}

int GreaterThanA(int a[], int n, int A)
{

}

int main()
{
	srand(time(NULL));

	int flag = 0;
	do
	{


		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

	/////////////////////22////////////
	//int A[10] = { 0 }, a;

	//cout << MinArray(A, 10, a) << endl;
	//cout << a << endl;

	/////////////////19//////////////
	//int A[5];
//double B[5] = { -1,0.5,25.31 };
//for (size_t i = 0; i < 5; i++)
//{
//	A[i] = 0 + rand() % 3;
//}

//cout << zeros(B, 5) << endl;

	///////////////////18///////////
	//double x;
	//int n;
	//cin >> x >> n;

	//cout << fixed << setprecision << okr(x, n) << endl;

	/////////////////17////////////
	//for (size_t i = 0; i < 5; i++)
//{
//	 A[i] = 0 + rand() % 100;
//	 B[i] = 0 + rand() % 100;
//	 C[i] = 0;
//}
//ARRAY(A, B, C, 5);


	system("pause");
	return 0;
}