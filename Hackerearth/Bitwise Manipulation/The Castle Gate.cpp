/*
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-castle-gate-july-easy/

The Castle Gate

Gudi, a fun loving girl from the city of Dun, travels to Azkahar - a strange land beyond the mountains. She arrives at the gates of Castle Grey, owned by Puchi,the lord of Azkahar to claim the treasure that it guards. However, destiny has other plans for her as she has to move through floors, crossing obstacles on her way to reach the treasure.
The gates of the castle are closed. An integer N is engraved on the gates. A writing on the wall says

Tap the gates as many times as there are unordered pairs of distinct integers from 1 to N whose bit-wise XOR does not exceed N.


Help her find the number of the times she has to tap.
Input:
First line contains an integer T, T testcases follow.
Each testcase consists of an integer N.

Output:
Print the answer to each testcase in a newline.

Constraints:
1<=T<=100
1<=n<=2000

SAMPLE INPUT 
3
4
6
8
SAMPLE OUTPUT 
3
12
21
Explanation
For N=4, pairs are (1,2) , (1,3) and (2,3)
*/

#include <iostream>
using namespace std;
int main() 
{
    int testCases,n,i,ans,j;
    cin>>testCases;
    while(testCases--)
    {
        ans=0;
        cin>>n;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {   
                if((i^j)<=n)
                {ans++; }
            }
            //cout<<endl;
        }
        cout<<ans<<endl;
    }
}

