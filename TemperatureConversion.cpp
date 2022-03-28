#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	float a[100];
	double f;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		f= ((9*a[i])/5)+32;
		cout<<fixed<<setprecision(2)<<f<<"\n";
	}
	// your code goes here
	return 0;
}