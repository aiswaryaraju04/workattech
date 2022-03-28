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
		if(a[i]%6==0)
		{
			cout<<"True";
		}
		else
		{
			cout<<"False";
		}
		cout<<"\n";
	}
	// your code goes here
	return 0;
}