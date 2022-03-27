#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, n;
  int arr[100];
	cin >> n;
	for(i = 0; i < n; ++i) {
    cin >> arr[i];
  }
	for(i = 1;i < n; ++i) {
		if(arr[0] < arr[i])
      arr[0] = arr[i];
  }
	if(arr[0]%2==0)
	{
		cout<<"WON";
	}
	else
	{
		cout<<"LOST";
	}
	
	
	// your code goes here
	return 0;
}