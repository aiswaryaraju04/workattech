#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>7)
		{
			cout<<"UP";
		}
		else if(a[i]==7)
		{
			cout<<"EQUAL";
		}
		else{
			cout<<"DOWN";
		}
		cout<<"\n";
	}
	// your code goes here
	return 0;
}