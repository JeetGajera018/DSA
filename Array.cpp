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
    cout << largest << endl;

    int second_largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (second_largest < a[i] && a[i] != largest)
        {
            second_largest = a[i];
        }
    }
    cout << second_largest;
}

// second largest element in the array
void SecondLargest_element(int a[], int n)
{
    int largest = a[0];
    int second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (largest < a[i])
        {
            second_largest = largest;
            largest = a[i];
        }
        else
        {
            if (a[i] < largest && a[i] > second_largest)
            {
                second_largest = a[i];
            }
        }
    }
    cout << second_largest << endl;
}

// Check if the Array is Sorted II
void checksArraySorted(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            cout << false;
        }
    }
    cout << true;
}

// Remove duplicates from Sorted array
void Removeduplicates(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    cout << i + 1;
}

// Left Rotate Array by One
void leftRotate(int a[], int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

// Left Rotate Array by K Places
void leftRotateByK(int a[], int n, int d)
{
    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);
}

// right Rotate Array by K Places
void RightRotateByK(int a[], int n, int d)
{
    reverse(a + n - d, a + n);
    reverse(a, a + n - d);
    reverse(a, a + n);
}

// Move Zeros to End
void MoveZerosToEnd(int a[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
}

// Linear Search
int LinearSearch(int a[], int n, int number)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == number)
        {
            return i;
        }
    }
    return -1;
}

// Union of two sorted arrays

void unionOfArray(int a[], int b[], int n, int n2)
{
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while (i < n && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    for (auto it : unionArr)
    {
        cout << it << " ";
    }
}

void InterSectionOfArray(int a[], int b[], int n, int n2)
{

    vector<int> intersectionArr;
    int i = 0;
    int j = 0;

    while (i < n && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            if (intersectionArr.size() == 0 || intersectionArr.back() != a[i])
            {
                intersectionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    for (auto it : intersectionArr)
    {
        cout << it << " ";
    }
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
    int n2;
    cin >> n2;
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    // number of rotate
    // int d;
    // cin >> d;

    //  number
    // int number;
    // cin >> number;

    // Largest_element(a, n);
    // SecondLargest_element(a, n);
    // checksArraySorted(a, n);
    // Removeduplicates(a, n);
    // leftRotate(a, n);
    // leftRotateByK(a,n,d);
    // RightRotateByK(a,n,d);
    // MoveZerosToEnd(a, n);
    // int linear = LinearSearch(a, n, number);
    // cout << linear;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // unionOfArray(a, b, n, n2);
    InterSectionOfArray(a, b, n, n2);
}