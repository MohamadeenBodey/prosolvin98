#include <bits/stdc++.h>
using namespace std;

typedef long double   	  LD;
typedef vector<int>       VI;
typedef vector<double>    VD;
typedef vector< vi >      VVI;
typedef vector< vd >      VVD;
typedef vector<string>    VS;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;
typedef vector< PII > VPII;

#define PI 3.14159265359
#define mod 1000000007 // depend on your input
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define eps 1e-9

const LL OO = 1e8;

#define all(v) v.begin(),v.end()
#define srtva(v) sort(all(v))
#define srtvd(v) sort(v.rbegin(),v.rend())
#define srtaa(a,n) sort(a,a+n)
#define srtad(a,n) sort(a,a+n),reverse(a,a+n)

#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfi4(v1,v2,v3,v4) scanf("%d %d %d %d",&v1,&v2,&v3,&v4)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfll4(v1,v2,v3,v4) scanf("%I64d %I64d %I64d %I64d",&v1,&v2,&v3,&v4)
#define sfstr(v) scanf("%s", v)
#define sfch1(ch) scanf("%c",&ch)
#define chr getchar()
#define pi(x) printf("%d",x)
#define p2i(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define p2l(x,y) printf("%lld %lld",x,y)
#define pfstr(ch) printf("%s",ch)
#define pfch(ch) printf("%c",ch)
#define sf scanf
#define pf printf
void PLAY() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << fixed << setprecision(4);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)
#define sz(v) (int)v.size()

#define nl printf("\n")
#define SS stringstream

#define pb push_back
#define mp make_pair

#define debug(x) cout<<#x<<" = { "<<x<<" }\n"

#define FOR(i,s,e) for(int i = s; i < e; i++)
#define FORD(i,e,s) for(int i=e-1,i>=s;i--)
#define lp(i,n) FOR(i,0,n)
#define lpd(i,n) FORD(i,n-1,0)
#define rev(i,s,e) FORD(i,s,e)
#define rep(i,v) FOR(i,0,sz(v))

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
#define mem(ara,val) memset(ara,val,sizeof(ara))
#define ssz(a) strlen(a)

template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T ModInv (T b,T m){return BigMod(b,m-2,m);}
template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
template <typename T> T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template <typename T> T Bigmod(T b,T p,T m){ if(p==0) return 1; else if (!(p&1)) return SQR(Bigmod(b,p/2,m)) % m;else return ((b % m) * Bigmod(b,p-1,m)) % m;}
template <typename T> T Dis(T x1,T y1,T x2, T y2){return sqrt( SQR(x1-x2) + SQR(y1-y2) );}
template <typename T> T Angle(T x1,T y1,T x2, T y2){ return atan( double(y1-y2) / double(x1-x2));}
template <typename T> T DIFF(T a,T b) { T d = a-b;if(d<0)return -d;else return d;}
template <typename T> T ABS(T a) {if(a<0)return -a;else return a;}
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template <typename T> T euclide(T a,T b,T &x,T &y) {if(a<0){T d=euclide(-a,b,x,y);x=-x;return d;}   if(b<0){T d=euclide(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=euclide(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template <typename T> void ia (T a[],int n){for (int i=0; i<n; i++) cin >> a[i];}
template <typename T> void pa (T a[],int n){for (int i=0; i<n-1; i++) cout << a[i] << " ";cout << a[n-1] << endl;}
template <typename T> LL isLeft(T a,T b,T c) { return (a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y); }
template <class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
template <class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

vector<ll> genrate_divisors(ll num = (ll) (1e12)){
    vector<ll> v;
    ll i = 1;
    for(;i*i<num;++i)
        if(num % i == 0)
            v.pb(i),v.pb(num/i);
    if(i * i == num)
        v.pb(i);
    return v;
}


void lsVec3(vector<int> test){
    vector<int>::iterator it = test.begin();
    while(it != test.end()){
        cout<< *it<<" ";
        it++;
    }
}
