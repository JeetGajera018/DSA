#include <bits/stdc++.h>
using namespace std;

// Digits
void digits()
{
    // extraction of digit
    int N;
    cin >> N;
    while (N > 0)
    {
        int last_digit = N % 10;
        N = N / 10;
        cout << last_digit << endl;
    }
}

// Count digits
void countDigit()
{
    int N;
    cin >> N;
    int cnt = 0;
    while (N > 0)
    {
        int last_digit = N % 10;
        N = N / 10;
        cnt += 1;
    }

    cout << "total digit = " << cnt << endl;

    // another way
    int Num = 236782;
    int count = log10(Num) + 1;
    cout << "total digit method 2 = " << count << endl;
}

// Reverse number
void reverseNumber()
{
    int N;
    cin >> N;
    int revN = 0;
    while (N > 0)
    {
        int last_digit = N % 10;
        revN = (revN * 10) + last_digit;
        N = N / 10;
    }
    cout << revN << endl;
}

// Palindrome number = palindrome numbers are the numbers for which the reverse is exactly same as the original one.
void palindromeNumber()
{
    int N;
    cin >> N;
    int Num = N;
    int revN = 0;
    while (N > 0)
    {
        int last_digit = N % 10;
        revN = (revN * 10) + last_digit;
        N = N / 10;
    }

    if (revN == Num)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

// Armstrong numbers = Sum of each digit raised to the power of total digits = original number
//(sum of (each digit)^n) = number
// 371= 3^3 + 7^3 + 1^3 = 371 which is equal to the number itself, then it is called armstrong number otherwise not
void armstrongNumber()
{
    // only for three digit number
    int N;
    cin >> N;
    int Num = N;
    int sum = 0;
    while (N > 0)
    {
        // ld is last_digit
        int ld = N % 10;
        sum = sum + (ld * ld * ld);
        N = N / 10;
    }
    if (sum == Num)
    {
        cout << Num << " is an Armstrong number" << endl;
    }
    else
    {
        cout << Num << " is not an Armstrong number" << endl;
    }
}

// Print all Divisors
void PrintallDivisors()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << endl;

    // another method
    vector<int> Num;
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            Num.push_back(i);
            int x = N / i;
            if (x != i)
            {
                Num.push_back(x);
            }
        }
    }
    sort(Num.begin(), Num.end());
    for (auto j : Num)
    {
        cout << j << " ";
    }
}

// Check for Prime Number = the number which has exactly two factors;1 and number itself.
void CheckForPrimeNumber()
{
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            cnt++;
            int x = N / i;
            if (x != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        cout << N << " is a Prime Number" << endl;
    }
    else
    {
        cout << N << " is not a Prime Number" << endl;
    }
}

// GCD of Two Numbers or HCF = greatest common divisor or highest common factor
void GCD()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
}
// Euclidean Algorithm =>  gcd(n1,n1)  =  gcd(n1-n2,n2) where n1>n2 OR
//                         gcd(n1,n1)  =  gcd(n1%n2,n2) where n1>n2
// equilateral algorithm
void equilateral()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2;
    else
        cout << n1;
}
int main()
{
    equilateral();
}