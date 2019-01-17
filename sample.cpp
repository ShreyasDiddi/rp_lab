#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef stringstream SS;

#define MP make_pair
#define PB push_back
#define RB pop_back

#define M 1000000007

#define FOR_AUTO(n) for(auto i=0;i<n;i++)
#define FOR(a,b) for(int i =a;i<b;i++)
#define FORR(a,b) for(int i=a;i>b;i--)
#define FORK(a,b,k) for(int i=a;i<b;i+=k)
#define FORN(n) for(int i=0;i<n;i++)
#define FORRN(n) FORR(n,-1)
#define FORNK(n,k) for(int i=0;i<n;i+=k)
#define FORNKR(n,k) for(int i=n;i>=0;i-=k)
#define FOREACH(l) for (auto it = l.cbegin(); it != l.cend(); ++it)

#define oo 0x3f3f3f3f //infinity !! not for long long!!!
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX3(a, b, c) max(a, MAX(b, c))
#define MIN3(a, b, c) min(a, MIN(b, c))
#define ABS(x) ((x)<0?-(x):(x))
#define GCD(a,b) __gcd(a,b)
#define pow2(x) ((x)*(x))
#define isPow2(n) n&&(!(n&(n-1)))
#define isEVEN(n) ~n&1

#define MOD(x, m) ((((x) % (m)) + (m)) % (m))
#define MODM(x) (x%M)
#define MOD_ADD(a,b,m) MOD(MOD(a,m)+MOD(b,m),m)
#define MODM_ADD(a,b) MOD_ADD(a,b,M)	
	
#define print printf 
#define print_ARR(a,n) FORN(n){cout<<a[i]<<" ";}print("\n");
#define print_RARR(a,n) FORRN(n-1){print("%d ",a[i]);}
#define print_VCTR(v) FOREACH(v) cout<<*it<<" ";print("\n"); 
#define SCI(n) scanf("%d",&n);
#define SCI_ARR(a,n) FORN(n){SCI(a[i])}
#define SCLI(n) scanf("%ld",&n);
#define SCLI_ARR(a,n) FORN(n){SCLI(a[i])}
#define SCLLI(n) scanf("%lld",&n);
#define SCLLI_ARR(a,n) FORN(n){SCLLI(a[i])}
#define SCC(c) scanf("%c",&c);
#define SCC_ARR(a,n) FORN(n){SCC(a[i])}
#define SCS(s) scanf("%s",&s);
#define SCS_ARR(a,n) FORN(n){SCS(a[i])}
#define SCF(n) scanf("%f",&n);
#define SCF_ARR(a,n) FORN(n){SCF(a[i])}
#define SCD(n) scanf("%lf",&n);
#define SCD_ARR(a,n) FORN(n){SCD(a[i])}
void SCLLI_ARR_SORT(int64 * a,int64 *p, int n){  p = new int64[n]; FORN(n){ SCLLI(a[i]); p[i] = i; }sort(p, p + n, [=](int i, int j) { return a[i] < a[j]; }); }
void SCLI_ARR_SORT(int32 * a,int32 *p, int n){  p = new int32[n]; FORN(n){ SCLI(a[i]); p[i] = i; }sort(p, p + n, [=](int i, int j) { return a[i] < a[j]; }); }
void SCI_ARR_SORT(int * a,int* p, int n){ p = new int[n]; FORN(n){ SCI(a[i]); p[i] = i; }sort(p, p + n, [=](int i, int j) { return a[i] < a[j]; }); }
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
vector<int> SCI_VCTR(){vector<int> a;string str;getline(cin,str);stringstream ss(str);int tmp;while(ss>>tmp)a.push_back(tmp);return a;}

void SWAPS(char *x, char *y){ char temp; temp = *x; *x = *y; *y = temp; }
void SWAPI(int *a, int *b){ int temp; temp = *a; *a = *b; *b = temp; }

#define IN(A, B, C) ( B <= A && A <= C)

int main() {
	VI a = SCI_VCTR();
	print_VCTR(a);
}

