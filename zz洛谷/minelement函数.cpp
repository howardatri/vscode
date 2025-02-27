#include<bits/stdc++.h>
using namespace std;
int a[1100],n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<*min_element(a,a+n);
    return 0;
}