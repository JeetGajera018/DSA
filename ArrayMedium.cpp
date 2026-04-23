#include <bits/stdc++.h>
using namespace std;

// Two Sum
// Brute Approch
void TwoSum1(vector<int> &a, int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)

        {
            if (a[i] + a[j] == sum)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}
// Better Approch
void TwoSum2(vector<int> &a, int n, int sum)
{
    map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        int b = a[i];
        int more = sum - b;
        if (mapp.find(more) != mapp.end())
        {
            cout << b << " " << more << endl;
        }
        mapp[b] = i;
    }
}

// Optimal Approch
void TwoSum3(vector<int> &a, int n, int sum)
{
    int right = n - 1;
    int left = 0;
    sort(a.begin(), a.end());
    while (left < right)
    {
        int Add = a[left] + a[right];
        if (Add == sum)
        {
            cout << left << " " << right << endl;
            return;
        }
        else
        {
            if (Add < sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return;
}

// Sort an array of 0's 1's and 2's
void sortarray012(vector<int> &a, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
    for (auto it : a)
    {
        cout << it << " ";
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
    // int sum;
    // cin >> sum;
    // TwoSum3(a, n, sum);
    sortarray012(a, n);
}
