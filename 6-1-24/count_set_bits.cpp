#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        while(n>0){
            if(n&(1)==1)
            c+=1;
            n=n>>1;
        }
        cout<<c<<endl;
    }
}