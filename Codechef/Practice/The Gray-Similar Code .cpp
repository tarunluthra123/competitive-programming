/*
https://www.codechef.com/problems/GRAYSC

The Gray-Similar Code 
The Gray code (see wikipedia for more details) is a well-known concept. One of its important properties is that every two adjacent numbers have exactly one different digit in their binary representation.

In this problem, we will give you n non-negative integers in a sequence A[1..n] (0<=A[i]<2^64), such that every two adjacent integers have exactly one different digit in their binary representation, similar to the Gray code.

Your task is to check whether there exist 4 numbers A[i1], A[i2], A[i3], A[i4] (1 <= i1 < i2 < i3 < i4 <= n) out of the given n numbers such that A[i1] xor A[i2] xor A[i3] xor A[i4] = 0. Here xor is a bitwise operation which is same as ^ in C, C++, Java and xor in Pascal.

Input
First line contains one integer n (4<=n<=100000). Second line contains n space seperated non-negative integers denoting the sequence A.

Output
Output �Yes� (quotes exclusive) if there exist four distinct indices i1, i2, i3, i4 such that A[i1] xor A[i2] xor A[i3] xor A[i4] = 0. Otherwise, output "No" (quotes exclusive) please.

Example
Input:

5
1 0 2 3 7


Output:

Yes
*/
#include <bits/stdc++.h>
using namespace std;

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ull unsigned long long int

int main() {
    sync;
    int n;
    cin >> n;
    ull a[n] = {0};
    ull temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if(n < 130) {
            a[i] = temp;
        }
    }

    if(n >= 130) {
        cout << "Yes";
        return 0;
    }

    

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                for (int l = k+1; l < n; ++l) {
                    if((a[i]^a[j]^a[k]^a[l]) == 0) {
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No";

    return 0;
}
