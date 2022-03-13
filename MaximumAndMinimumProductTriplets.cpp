/* 
MaximumAndMinimumProductTriplets.cpp : Write two functions:
                                       One that returns the maximum product of three numbers in an array.
                                       One that returns the minimum product of three numbers in an array.
*/

#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

int maxProduct(vector<int> arr) 
{
    int max = 0;
    for (int i = 0; i < (arr.size() - 2); i++)
        for (int j = i + 1; j < (arr.size() - 1); j++)
            for (int u = j + 1; u < arr.size(); u++)
                if (max < (arr[i] * arr[j] * arr[u]))
                    max = arr[i] * arr[j] * arr[u];
    return max;
}

int minProduct(vector<int> arr)
{
    int min = 0;
    for (int i = 0; i < (arr.size() - 2); i++)
        for(int j = i + 1; j < (arr.size() - 1); j++)
            for(int u = j + 1; u < arr.size(); u++)
                if (min > (arr[i] * arr[j] * arr[u]))
                    min = arr[i] * arr[j] * arr[u];
    return min;
}

int main()
{
    vector<int> arr;
    int x;

    cout << "Enter numbers of array (enter 'end' to stop): \n";

    while (cin >> x)
    {
        if (cin.fail())
            goto exit;
        arr.push_back(x);
    }

    exit:
    cout << "Max product: " << maxProduct(arr) << endl << "Min product: " << minProduct(arr);
}

