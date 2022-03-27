#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
	}
	
	for(int i=0;i<t;i++)
	{
	 if(n[i]%2==0)
	 {
		cout<<"EVEN";
	 }
	 else
	 {
		cout<<"ODD";
	 }
		cout<<endl;
	}
		
		
	// your code goes here
	return 0;
}