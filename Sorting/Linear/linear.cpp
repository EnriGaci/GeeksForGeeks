#include <iostream>

#define LEN(ARR) sizeof(ARR) / sizeof(*ARR)
using namespace std;

template<typename T>
int solve(T* arr, int N, T K) {

    for (int i=0; i<N; ++i) {
        if (K == arr[i]) {
            return i;
        }
    }
    return -1;

}

int main(void){
    int N, K;
    cin >> N >> K;

    int arr[N];

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
        char j;
        cin >>j;
    }
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    
    int res = solve(arr, N, K);
    (res == -1 ) ?
        cout << "K = " << K << "isn't found in the given array." :
        cout << "K = " << K << " is found in the given array at position " << res + 1 << endl;
}