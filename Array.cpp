#include <bits/stdc++.h>
using namespace std;

// largest element in the array
void largest_element(int a[], int n)
{
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    cout << largest;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    largest_element(a,n);
}