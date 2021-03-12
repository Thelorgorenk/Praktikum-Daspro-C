#include <bits/stdc++.h>
using namespace std;

#define numMaxi 1000
bool check[numMaxi][numMaxi];
int numMaxis[numMaxi][numMaxi];
int counterSum(int* nums, int N, int K, int iter);

int main()
{
    int N, K;
    cin >> N;
    int nums[N+20];
    for (int i = 0; i<N; i++) cin >> nums[i];
    cin >> K;
    cout << counterSum(nums, N, K, 0);
    return 0;
}

int counterSum(int *nums, int N, int K, int iter)
{
    if (check[iter][K+5] == true) return numMaxis[iter][K+5];
    if (N == iter)
    {
        if (K != 0) return 0;
        else return 1;
    }
    numMaxis[iter][K+5] = counterSum(nums, N, K-nums[iter], iter+1)+counterSum(nums, N, K, iter+1);
    check[iter][K+5] = true;
    return numMaxis[iter][K+5];
}
