#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    int q;
    cin>>q;
    int b[n][32];
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if((a[i]&(1<<j))!=0)
                b[i][j]=1;
            else 
                b[i][j]=0;
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<32;j++){
            b[i][j]+=b[i-1][j];
        }
    }
    while(q--){
        int l,r,res=0;
        cin>>l>>r;
        int len=r-l+1;
        for(int i=0;i<32;i++){
            if(l==0){
                if(b[r][i]==len)
                   res=res|(1<<i);
            }
            else{
                if(b[r][i]-b[l-1][i]==len)
                   res=res|(1<<i);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}