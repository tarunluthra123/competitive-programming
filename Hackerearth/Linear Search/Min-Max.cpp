/*
https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/

Min-Max
Given A Series Of N Positive Integers a1,a2,a3........an. , Find The Minimum And Maximum Values That Can Be Calculated By Summing Exactly N-1 Of The N Integers. Then Print The Respective Minimum And Maximum Values As A Single Line Of Two Space-Separated Long Integers.

Input Format

First Line Take Input Value Of N

Second Line Take Input N Space Separated Integer Value

Output Format

Two Space Separated Value ( One Maximum Sum And One Minimum Sum )

Constraints

0 < N < 100001
0 <= ai < 1013
SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
10 14
Explanation
Our initial numbers are 1,2,3,4 and 5. We can calculate the following sums using four of the five integers:

If we sum everything except 1, our sum is 2+3+4+5=14 .
If we sum everything except 2, our sum is 1+3+4+5=13 .
If we sum everything except 3, our sum is 1+2+4+5=12 .
If we sum everything except 4, our sum is 1+3+4+5=11 .
If we sum everything except 5, our sum is 1+2+3+4=10 .
As you can see, the minimal sum is 1+2+3+4=10 and the maximal sum is 2+3+4+5=14. Thus, we print these minimal and maximal sums as two space-separated integers on a new line.
*/

//C++ Template
//By Tarun Luthra
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define FOI(i, a, n) for( i = int(a); i <= int(n); i++)
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007

#define ll  long long int
#define pii pair<lli, lli>
#define vi  vector<ll>

int main() { 
    sync;
    ll n,i;
    cin >> n;
    vi v(n);
    ll sum = 0 ;
    FOI(i, 0, n-1) {
        cin >> v[i];
        sum += v[i];
    }

    ll a=INT_MAX;
    ll b=INT_MIN;
    FOI(i, 0, n-1) {
        a = min(a,sum-v[i]);
        b = max(b,sum-v[i]);
    }

    cout << a << " " << b;

    return 0;
}

