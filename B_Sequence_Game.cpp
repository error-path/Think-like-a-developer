#include <bits/stdc++.h>
#define ll long long int
#define take(n) int n;cin>>n;
#define takestr(s) string s;cin>>s;
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a,b) for(int i=a;i>b;i--)
#define takearr(n) ll arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define prntarr(n) for(int i=0;i<n;i++) cout<<arr[i]; cout<<endl;
#define cout(n) cout<<n<<endl;
int fact(int n){ return (n==1 || n==0)? 1 : n * fact(n - 1); }
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll b[n];
        vector<ll> a;
        cin>>b[0];
        a.push_back(b[0]);
        f(i,1,n){
            cin>>b[i];
            if(b[i]<b[i-1]){
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
            else{
                a.push_back(b[i]);
            }
        }
        cout<<a.size()<<endl;
        f(i,0,a.size()){
            cout<<a[i]<<" ";
        }cout<<endl;

    }
    return 0;
}