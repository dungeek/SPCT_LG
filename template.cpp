#include <bits/stdc++.h>

#define ull long long

#define mod 1000000007

#define minn LONG_MIN

#define maxx LONG_MAX

using namespace std;
 
 
void solve(){   

}
 
int main()

{

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin >> t;

    while(t--) solve();

    return 0;

}
 
// RL
int binarySearch(vector<int>& arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] <= x) // Check for valid subsequence sum
            l = m + 1;  // Search in the right half
        else
            r = m - 1;  // Search in the left half
    }
    return l; // l is the correct size of the subsequence
}