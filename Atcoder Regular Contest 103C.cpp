#include <bits/stdc++.h>


using namespace std;

#define endl '\n'
#define PB push_back
#define MP make_pair
#define LL long long
#define FOR(i,a,b) for(int i = (a); i <= (b); i++)
#define RE(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(int)(n)-1)
#define R(i,n) REP(i,n)
#define VI vector<int>
#define PII pair<int,int>
#define LD long double
#define FI first
#define SE second
#define st FI
#define nd SE
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

typedef long long ll;

bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

map<ll, ll> cnt[2];
vector< pair<ll ,ll> > a[2];
int main() {

    //FAST_IO();
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    cout << setprecision(5);
    cout << fixed;

    ll n, temp;


    cin >> n;

    for(int i = 0; i < n; i++) {


        cin >> temp;
        cnt[i&1][temp]++;
    }

    for(auto p: cnt[0]) a[0].push_back(make_pair(p.second, p.first));
    for(auto p: cnt[1]) a[1].push_back(make_pair(p.second, p.first));


    sort(a[0].rbegin(), a[0].rend());
    sort(a[1].rbegin(), a[1].rend());

    if(a[0][0].second != a[1][0].second) {

        cout << n - a[0][0].first - a[1][0].first << endl;
    }
    else {

        ll res = 0;

        res = max(res, a[0][1].first + a[1][0].first);
        res = max(res, a[0][0].first + a[1][1].first);

        if(a[0].size() < 2 && a[1].size() < 2) res = n/2;

        cout << n - res << endl;
    }







    return 0;
}

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}


