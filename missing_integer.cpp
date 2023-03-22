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
    int n = A.size();

    // Step 1: Mark elements that are not in range [1, n]
    for (int i=0; i<n; ++i)
    {
        if (A[i]<=0 ||A[i]>n)
        {
            A[i] = 0;
        }
    }

    // Step 2: Mark elements as visited by using the array indices
    for (int i=0; i<n; ++i)
    {
        int index = abs(A[i])-1;
        if (index<n && A[index]>=0)
            A[index] = -abs(A[index]);
    }
     // Step 3: Find the smallest positive integer not in A
     for (int i=0; i<n; ++i)
     {
         if (A[i]>=0)
            return i+1;
     }

    // If all positive integers from 1 to n are present in A, return n+1
    return n+1;
}


int main()
{
    vector<int> A = {1,3,2,5,6};
    cout<<solution(A);

    return 0;
}
