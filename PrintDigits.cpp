#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a[100],div,rem;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		div=a[i]/10;
		rem=a[i]%10;
		cout<<div<<" "<<rem<<"\n";
	}
	
	
	// your code goes here
	return 0;
}