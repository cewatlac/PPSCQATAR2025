#include <iostream>
#include "vector"
#include "deque"
#include "algorithm"
#include "cmath"
#include "numeric"
using namespace std;
long long a , b , n;
long long mod = 1e9+7;
long long fac[1000000+5];
int gcd(int a , int b){
    if (b == 0)return a;
    return gcd(b , a%b);
}
int lcm(int a , int b){
    return (a*b)/(gcd(a, b));
}
void solve(){
    fac[0]= 1;
    for (long long i = 1 ; i <= 1e6+5 ; i++){
        fac[i] = fac[i-1] *i;
        fac[i] %=mod;
    }
}
long long mod_fast_power(long long num , long long p){
    if (!p)return 1;
    long long a = mod_fast_power(num , p>>1);
    a = ((a%mod) *(a%mod))%mod;
    if (p&1)a =((a%mod) *(num%mod))%mod;
    return a %mod;
}
long long nCr (long long n , long long r){
    if (r > n)return 0;
    if (n == r)return 1;
    long long ret = (fac[n]  % mod )* mod_fast_power(((fac[r]%mod) * (fac[n-r]%mod)) %mod , mod-2)%mod;
    ret%=mod;
    return ret;
}
bool ck(long long nm){
    while (nm){
        int digit = nm % 10;
        if (digit != a && digit  != b)return false;
        nm /= 10;
    }
    return true;
}
bool valid (long long md , long long cows , vector <long long > free_slots){
    long long c = 1;
    long long lastt_pos = free_slots[0];
    //cout <<"MID " << md << "\n";
    for (int i = 1 ; i < free_slots.size() ; i++){
        long long des = free_slots[i] - lastt_pos;
        if (des >= md){
            lastt_pos = free_slots[i];
            c++;
            if (c >= cows)return true;
        }
    }
    return false;
}
int main() {
    int n , m;
    cin >> n >> m;
    vector < int > v1(n) , v2(m);
    for (int i = 0  ; i < n ; i ++){
        cin >> v1[i];
    }
    for (int i = 0  ; i < m ; i ++){
        cin >> v2[i];
    }
    sort(v1.begin() , v1.end());
    for (int i = 0  ; i < m ; i ++){
        long long ans = upper_bound(v1.begin(),v1.end() , v2[i]) - v1.begin();
        cout << ans <<" ";
        
    }
    



}
