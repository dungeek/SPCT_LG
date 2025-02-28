/*https://www.acmicpc.net/problem/1037
 25/2/2025*/
 /*For a positive number A to be a real divisor of N, N must be a multiple of A, 
 and A must not be 1 or N. Given all the real divisors of a number N, write a program to find N.*/
 #include <bits/stdc++.h>

 #define ull long long
 
 #define mod 1000000007
 
 #define minn LONG_MIN
 
 #define maxx LONG_MAX
 
 using namespace std;
  
  
 void solve(){   
     /*Number of real divisor*/
     int n;
     cin >> n;
 
     vector<int> divisors(n);
     for (int i = 0; i < n; i++) {
         cin >> divisors[i]; 
     }
 
     int minDiv = INT_MAX, maxDiv = INT_MIN;
      
      /*We find the multiple of max and min divisor */
     for (int i = 0; i < n; i++)
     {
         if (divisors[i] < minDiv)
         {
             minDiv = divisors[i];
         }
         if (divisors[i] > maxDiv)
         {
             maxDiv = divisors[i];
         }
     }
 
     cout<< maxDiv*minDiv;
 }
  
 int main()
 
 {
 
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
     int t; cin >> t;
 
     while(t--) solve();
 
     return 0;
 
 }
  