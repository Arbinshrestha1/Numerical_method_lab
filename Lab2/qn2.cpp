
#include<iostream>
#include<stdlib.h>
#include <iomanip>
using namespace std;

float u_cal(float u, int n){
	
	float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u - i);
	return temp;
}

int fact(int n){
	
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main(){

	int n = 4;

	float x[n];

	float y[n][n];

	cout<<"Enter given values:"<<endl;
	for(int i=0; i<n; i++){
		cin>>x[i];
	}

	cout<<"Enter value for the differnece table:"<<endl;
	for(int i=0; i<n; i++){
		cin>>y[i][0];
	}


	for (int i = 1; i < n; i++){
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}

	for (int i = 0; i < n; i++) {
		cout << setw(4) << x[i]
			<< "\t";
		for (int j = 0; j < n - i; j++)
			cout << setw(4) << y[i][j]
				<< "\t";
		cout << endl;
	}


	float value = 52;
	float sum = y[0][0];
	float u = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[0][i]) /
								fact(i);
	}

	cout << "\n Value at " << value << " is "
		<< sum << endl;
	return 0;
}
