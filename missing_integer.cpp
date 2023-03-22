/*
    Write a function:
        int solution(vector<int> &A);
        that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
        For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
        Given A = [1, 2, 3], the function should return 4.
        Given A = [−1, −3], the function should return 1.
        Write an efficient algorithm for the following assumptions:
            N is an integer within the range [1..100,000];
            each element of array A is an integer within the range [−1,000,000..1,000,000].
*/
#include<iostream>
#include<vector>

using namespace std;

int solution(vector<int> &A) {
    // Implement your solution here
    int n = sizeof(A)/sizeof(A[0]);
    int p = 0;

    for (int l=0; l<n; ++l)
    {
        if (A[l] == 1)
        {
            p = 1;
            break;
        }
    }

    if (p==0) return 1;

    for (int i=0; i<n; ++i)
    {
        if (A[i]<=0 || A[i]>n)
            A[i] = 1;
    }

    for (int t=0; t<n; ++t)
    {
        A[(A[t]-1)%n] += n;
    }

    for (int t=0; t<n; ++t)
    {
        if (A[t] <= n)
            return t+1;
    }

    return n+1;
}


int main()
{
    vector<int> A = {1,3,2,5,6};
    cout<<solution(A);

    return 0;
}
