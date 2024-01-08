#include <iostream>
#include <math.h>
using namespace std;
int fun(int n){
    if((n>0) and (n&(n-1))==0)
       return 1;
    int c=ceil(log2(n)); 
    return 1+fun(n-(1<<(c-1)));
}
int main() {
	int n;
	cin>>n;
	int c=fun(n);
	cout<<c;
	return 0;
}