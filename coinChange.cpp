#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int S, coin[] = {1, 3, 4};

int main()
{
	int F[10000];
	F[0] = 0;
	for(int i = 1; i <= S; i++)
	{
		F[i] = 1e9;
		for(int c : coin)
		{
			if(i >= c)
			{
				F[i] = min(F[i], F[i-c] + 1);
			}
		}
	}
}
