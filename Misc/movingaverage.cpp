/*
		Rating moving average

	API link: https://codeforces.com/api/user.rating?handle=stefdasca
		(just insert your handle instead of the given example)
    
	Moving average plot tutorial: https://www.excel-easy.com/examples/moving-average.html
	
	You may need this tutorial too: http://libanswers.walsh.edu/faq/147605
	
	All you have to do is to copy the API data and read the data using file IO. Now, open excel and
add the rating points in table. Now, use data analysis and add the points in graph by using Excel commands.

*/


#include<bits/stdc++.h>
#define god dimasi5eks
#pragma GCC optimize("O3")
#define fi first
#define se second
#define pb push_back
#define pf push_front
 
#define fisier 1
 
using namespace std;
 
typedef long long ll;
 
const int mod = 1000000007;
const double dancila = 3.14159265359; // PI 
const double eps = 1e-9;

char x[] = "newRating";
int main()
{
 
    #ifdef fisier
        ifstream cin("input.in");
     // ofstream cout("output.out");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    char s[1000002];
    cin.get(s, 100000);
    int len = strlen(s);
    for(int i = 10; i < len; ++i)
    {
	bool ok = 1;
	for(int j = i; j <= i+8; ++j)
	    if(s[j] == x[j-i]);
	    else
		ok = 0;
	if(ok)
	{
	    int poz = i+11;
	    int nr = 0;
	    while(s[poz] >= '0' && s[poz] <= '9')
		nr = (nr * 10) + (s[poz] - '0'), ++poz;
	    cout << nr << '\n';
	}
    }	
    return 0;
}
