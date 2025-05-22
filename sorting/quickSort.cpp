#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot=arr[low];
    while(i<j){ // where I forget this is the point where we stop when i==j or i>j and we swap so only if i<j then allowed
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
         while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);

    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int parIndex = partition(arr, low, high);
    quickSort(arr, low, parIndex-1);
    quickSort(arr, parIndex + 1, high);
}

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    quickSort(arr, 0, n - 1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}