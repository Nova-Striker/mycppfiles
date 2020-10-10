#include <bits/stdc++.h>
using namespace std;

void even(int n){
	cout<<"Even numbers\n";
		for (int i=1;i<=2 * n;i++) {
			if (i%2==0)
				cout<<i<<"\n";
		}
}

int main(){
	int n = 30;
	even(n);


}
