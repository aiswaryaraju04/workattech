#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int temp[n],hum[n];
	for(int i=1;i<=n;i++)
	{
	cin>>temp[i]>>hum[i];
	}
	for(int i=1;i<=n;i++)
	{
	
	{
	if(temp[i]>=30&&hum[i]>=90)
	{
		cout<<"Hot and Humid\n";
	}
	else if(temp[i]>=30&&hum[i]<90)
	{
		cout<<"Hot\n";
	}
	else if(temp[i]<30&&hum[i]>=90)
	{
		cout<<"Cool and Humid\n";
	}
	else if(temp[i]<30&&hum[i]<90)
	{
		cout<<"Cool\n";
	}
		
	}
	}
	
	// your code goes here
	return 0;
}
