/*
 * https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#
 */
#include <iostream>
#include <array>
#include <vector>
#include <type_traits>
#include <typeinfo>

using namespace std;

    template <typename T>
std::vector<int> solve(T arr, int n, int s)
{
    int i, k;
    std::vector<int> result;
    for (i=0; i < n; ++i)
    {

	int sum = 0;
	for (k=i; k < n; ++k)
	{
	    sum += arr[k];
	    if (sum == s){
		result.push_back(i +1);
		result.push_back(k+1);
		return result;
	    }
	    if (sum > s)
		break;
	}	    
    }
    result.push_back(-1);
    return result;
}

int  main(void ) {

    int N, i, S;
    char q;

    cout << "Give N:" ;
    cin >> N;
    cout << "\nGive S:";
    cin >> S;
    cout << "\n";

    std::array<int, 1000> A;

    for (int i = 0; i < N; i++)
    {
	cin >> A[i] ;
	cin >> q;
    }

    for (int i = 0; i < N; i++)
    {
	cout << A[i] << endl;
    }

    cout << "Output: " ;

    std::vector<int> res = solve<std::array<int,1000>>(A, N, S);

    for (int i=0; i < res.size(); ++i)
    {
	cout << res[i] << " " ;
    }
	


}
