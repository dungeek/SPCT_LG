/*https://www.acmicpc.net/problem/1032
 25/2/2025*/
#include <bits/stdc++.h>
#include <vector>

#define ull long long

#define mod 1000000007

#define minn LONG_MIN

#define maxx LONG_MAX

using namespace std;
 
 
void solve(){   
    int n;
    cin >> n; /*Number n of file name*/
    
    /*Get n files*/
    vector<string> files(n);
    for (int i = 0; i < n; i++) {
        cin >> files[i]; 
    }
    
    /*Assume pattern is the first filename*/
    string pattern = files[0]; 
    
    /*Iterate through the rest*/
    for (int i = 1; i < n; i++) {
        /*Compare each char in pattern with corresponding file*/
        for (int j = 0; j < pattern.size(); j++) {
            if (pattern[j] != files[i][j]) {
                pattern[j] = '?';
            }
        }
    }

    cout << pattern << "\n";
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin >> t;

    while(t--) solve();

    return 0;
}
 