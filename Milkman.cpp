#include <bits/stdc++.h>
using namespace std;

int main() {
	float r,h,vol,amt;
	cin>>r>>h;
	vol=3.14*r*r*h;
	vol=vol/1000;
	amt=40*vol;
	cout<<fixed<<setprecision(2)<<amt;
	
	// your code goes here
	return 0;
}