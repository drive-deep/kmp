#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string p,t;
    cin>>p>>t;
    
    int n=p.length();
    
    int f[n+1];
    
    f[0]=0;
    
    for(int i=1; i<n; i++){
        int j=f[i-1];
        
        while(j>0 && p[i]!=p[j]){
            j=f[j-1];
        }
        if(p[i]==p[j]){
            j++;
        }
        f[i]=j;
    }
    
    int ans=0;
    int j=0;
    int i=0;
    while(i<t.length()){
        
        
        if(t[i]==p[j]){
            if(j==p.length()-1){
                ans++;
                j=f[j];
            }
            else{
                j++;
            }
            i++;
        }
        else{
        
            j=f[j-1];
        
        }
        
    }
    cout<<ans<<endl;
    return 0;
}
