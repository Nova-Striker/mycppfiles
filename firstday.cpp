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
	string arr[7] = {"mon","tue","wed","thu","fri","sat","sun"};
	int i=0 , d=0 , f=0 ,noly=0 , r=0 , p=0 , q=0,shift=0 , k=0 , day = 0;

	cout<<"Enter the initial year : ";
	cin>>i;
	for (int ini=0 ; ini<7 ;ini++){
		cout<<ini+1<<" : "<<arr[ini]<<"\n";
	}
	cout<<"Enter the first day of "<<i<<" in digit ";
	cin>>d;
	cout<<"Enter the year to be calculated ";
	cin>>f;
	k = d+1;
	r = multi( i , f ,4 );
	p = multi( i , f ,100 );
	q = multi( i , f ,400 );
	noly = r-p+q;
	shift = noly + f-i;
	day = (k+shift%7)%7 +1;
	cout<<day<<"\n";

}
