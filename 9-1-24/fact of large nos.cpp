#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
	vector<int> a;
	int size=1,carry=0;
	a.push_back(1);
	int product=1;
	for(int i=2;i<=n;i++){
	    int carry=0;
	    for(int j=0;j<size;j++){
	        product=i*a[j]+carry;
	        a[j]=product%10;
	        carry=product/10;
	    }
	    while(carry>0){
            a.push_back(carry%10);
            size++;
            carry=carry/10;
    	}
	}
// 	for(int i=0;i<a.size();i++)
// 	   cout<<a[i];
	int ans=0;
	int p=1;
	for(int i=0;i<a.size();i++){
	    ans=ans+a[i]*p;
	    p=p*10;
	}
	cout<<ans;
	return 0;
}