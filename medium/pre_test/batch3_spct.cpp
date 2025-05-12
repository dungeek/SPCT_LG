/*
https://www.hackerrank.com/contests/spct2025batch-2-pretest-3/challenges/the-spct-challenge
*/

#include <bits/stdc++.h>

#define ull long long

#define mod 1000000007

#define minn LONG_MIN

#define maxx LONG_MAX

using namespace std;
 
 
void solve(){   
    int n;
    cin >> n; /*Number of pretests*/
    
    /*Get dificulty levels*/
    std::vector<std::vector<int>> preTests(n);

    for (int i = 0; i < n; ++i) {
        int numProb;
        cin >> numProb; /*Number of problems in each pretests*/

        for (int j = 0; j < numProb; j++)
        {
            cin >> preTests[i][j];
        }
        cout << endl;
    }

    /*Minimun K to start the pretest*/
    vector(int )req_K(n);

    for(int i = 0; i < n; i++){
        req_K.push_back(preTest[n][0]);
    }

    

}
 
int main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin >> t;

    while(t--) solve();

    return 0;

}
 