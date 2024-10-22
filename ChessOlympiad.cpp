#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int MOD=1e9+7;

string s;
vector<ll> arr;
 
ll t, r, c, k, x, A, B, y, z, m, n;
 
bool isPalin(string& s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}
 
bool isIncr(vector<ll>& a) {
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}
 
vector<pair<int, int>> adj = { {0, 1}, {1, 0} , {0, -1}, {-1, 0} };
 
bool inBounds(int i, int j, int n, int m) {
	return (i >= 0 && i < n&& j >= 0 && j < m);
}
 
 
ll fact(ll n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
 
ll power(ll x, ll y, ll m) {
	if (y == 0)
		return 1;
	ll p = power(x, y / 2, m) % m;
	p = (p * p) % m;
 
	return (y % 2 == 0) ? p : (x * p) % m;
}
 
 
int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
 
}
ll modInverse(ll a, ll m)
{
	ll g = gcd(a, m);
	if (g != 1)return -1;
	else
	{
		return power(a, m - 2, m);
	}
}
 
void print(vector<ll>& arr) {
	for (auto x : arr) {
		cout << x << " ";
	}
	cout << endl;
}

/// Euclid
double euclid(pair<int, int>& f, pair<int, int>& s) {
	return sqrt((f.second - s.second) * (f.second - s.second) + (f.first - s.first) * (f.first - s.first));
}


ll sum(ll n) {
 
	ll inverse = modInverse(2, MOD);
	n = ((n % MOD) * ((n + 1) % MOD)) % MOD;
	n *= inverse;
	return n % MOD;
}

/// how many digits in number
int numDigits(int result) {
	int ans = 0;
 
	while (result > 0) {
		ans++;
		result /= 10;
	}
	return ans;
}

struct Interval {
    int start, end;
};

// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

/// solve 
void solved( ) {
 
}
 
 
/// main
int main() {
 
	clock_t start = clock();
	fast_cin();
	int x,y,z; cin>>x>>y>>z;
	int sum=y*0.5+z, anti_sum=4-sum;
	if(sum<anti_sum) cout<<"Yes"<<endline;
	else cout<<"No"<<endline;
	
	return 0;
}
