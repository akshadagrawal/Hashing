#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,sum=0;
    map<int, int > m;
    for(int i=0; i< n; i++) {
        cin>>x;
        sum+= x;
        m[sum]++;
    }
    int ans= 0;

    for(auto x: m ) {
        //cout<<x.first<<" "<<x.second<<endl;
        ans += (x.second * (x.second -1))/2;
        if(x.first == 0 ) ans += x.second;
    }
 cout<<ans;
}