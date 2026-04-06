#include <bits/stdc++.h>
using namespace std;

// Recursion = when a function call itself until a specified condition is met

// int cnt = 0;
// void recursion()
// {
//     if(cnt==4)//this stop condition is known as the base condition
//     {
//         return;
//     }else {
//         cout<<cnt<<endl;
//         cnt++;
//         recursion();
//     }
// }

// //basic recursion problem
// void printingName(int i, int n, string name)
// {
//     if (i >= n)
//         return;
//     cout << name << endl;
//     printingName(i + 1, n, name);
// }

// Print Linearly from 1 to N
// void printLinearly(int i, int n)
// {
//     if (i >= n)
//         return;
//     cout << i << endl;
//     printLinearly(i + 1, n);
// }

// Print Linearly from N to 1
// void printReverseLinearly(int i,int n){
//     if(i<=0) return;
//     cout<<i<<endl;
//     printReverseLinearly(i-1,n);
// }

// Print linearly from 1 to N usimg backtrack
//  void linearlyBacktrack(int i,int n){
//      if(i<1)return;
//      linearlyBacktrack(i-1,n);
//      cout<<i<<endl;
//  }

// Print linearly from N to 1 usimg backtrack
//  void linearlyReverseBacktrack(int i,int n){
//      if(i>n)return;
//      linearlyReverseBacktrack(i+1,n);
//      cout<<i<<endl;
//  }

// sum of first N numbers

// method-1 Parameterised way
// void parameterisedSum(int i,int sum)
// {
//     if (i < 1)
//     {
//         cout<<sum;
//         return;
//     }else{
//         parameterisedSum(i-1,sum+i);
//     }
// }

// Method-2 Functional recursion
// int FunctionalRecursionSum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + FunctionalRecursionSum(n - 1);
//     }
// }
// factorial of N using Functional recursion
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// reverse an array using the recursion

// void reverseArray1(int a[], int l, int r)
// {
//     if (l >= r)
//     {
//         return;
//     }
//     else
//     {
//         swap(a[l], a[r]);
//         reverseArray1(a, l + 1, r - 1);
//     }
// }

// void reverseArray2(int a[], int i,int n)
// {
//     if (i >= n/2)
//     {
//         return;
//     }
//     else
//     {
//         swap(a[i], a[n-i-1]);
//         reverseArray2(a, i+1, n);
//     }
// }

// Check if String is Palindrome or Not
// Palindrome = A string on reverse , reads the same.
// bool Palindrome(int i, string s)
// {
//     if (i >= s.size())
//         return true;
//     if (s[i] != s[s.size() - i - 1])
//         return false;
//     return Palindrome(i + 1, s);
// }


//  Fibonacci Number
int Fibonacci(int n){
    if(n<=1) return n;
    int last=Fibonacci(n-1);
    int last_second=Fibonacci(n-2);
    return last + last_second;
}





int main()
{
    // recursion();
    // int n;
    // cin>>n;
    // string name;
    // cin>>name;
    // printingName(0,n,name);

    // int n;
    // cin >> n;
    // printLinearly(0, n);
    // printReverseLinearly(n,n);
    // linearlyBacktrack(n,n);
    // linearlyReverseBacktrack(1, n);

    // int n;
    // cin >> n;
    // parameterisedSum(n, 0);
    // cout << FunctionalRecursionSum(n);
    // cout << factorial(n);

    // int n;
    // cin>>n;
    // int a[n] ;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // // reverseArray1(a, 0, n-1);
    // reverseArray2(a,0,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // string s = "jeet";
    // cout << Palindrome(0, s);

    int n;
    cin>>n;
    cout<<Fibonacci(n);
}