
#include <iostream>
#include "math.h"
using namespace std;

// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int searchInSorted(int arr[], int N, int K) 
{ 

    int pos = ceil((double)N/2);
    while (pos <= N-1 && pos >= 0) {
        if (pos == 0 || pos == N-1) {
            if (arr[pos] == K)
                return 1;
            else
                return -1;
        }

        if (arr[pos] == K){
            return 1;
        } 
        if (arr[pos] < K) {
            return searchInSorted(arr + pos, N/2, K);
        } 
        if (arr[pos] > K) {
            return searchInSorted(arr , N/2, K);
        }
        
    }

   return -1;
   
}

int main(int argc, char const *argv[])
{
    std::size_t N, K;
    cout << "Give N:";
    cin >> N ;
    cout << "Give K:";
    cin>> K;

    int arr[N];
    char j;

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
        cin >>j;
    }

    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }

    int res = searchInSorted(arr, N, K);
    cout << "Found in " << res ;
    return 0;
}
