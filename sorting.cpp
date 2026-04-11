#include <bits/stdc++.h>
using namespace std;

// selection sort
// select minimum and swap

void selection_sort(int a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

// bubble sort
// it pushes the maximum to the last by adjacent swap
// time complexity=o(n^2) is worst as well as the average
// but the best time complexity=o(n)
void bubble_sort(int a[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
}

// insertion sort
// takes an element and place it in the correct order
// time complexity=o(n^2) is worst as well as the average
// but the best time complexity=o(n)
void insertion_sort(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
}

// merge sort
// divide and merge
// time complexity =N logN
// space complexity=0(N)
void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}
void merge_sort(vector<int> &a, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, high);
}

// quick sort
// can sort any data set into asending order but you do some minor twicks to it it will be sort in desending order
// time complexity =N logN
// space complexity=0(1)
// steps=> pick a pivot(pivot can be any element by your choise)
// place the pivot in its correct place in the sorted array

// smaller on the left and larger on the right
int f(vector<int> &a, int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i <= high)
        {
            i++;
        }
        while (a[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}
void quick_sort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int partition = f(a, low, high);
        quick_sort(a, low, partition - 1);
        quick_sort(a, partition + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // selection_sort(a,n);
    // insertion_sort(a, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // merge_sort(a, 0, n - 1);
    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}