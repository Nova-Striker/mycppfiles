#include <bits/stdc++.h>
using namespace std;

int multi(int x , int y , int p)
{
	int lw=0 , up=0 , req=0;
	lw = floor(x/p) +1;
	up = ceil(y/p) -1;
	req = up-lw+1;
	return req;
}
int main()
{
	string arr[7] = {"mon","tue","wed","thu","fri","sat","sun",}
	int x = 0;
	x= multi(0,30,2);	
	cout<<x<<"\n";
}
