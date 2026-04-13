#include <bits/stdc++.h>
using namespace std;

// CONTAINERS

// pairs
void pairs()
{
    pair<int, int> p = {2, 5};
    cout << p.first << " " << p.second;

    cout << endl;

    pair<int, pair<int, int>> p2 = {3, {6, 7}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
}
// vectors
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[1];
    cout << endl;
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);
    cout << v1[1].second;
    cout << endl;

    vector<int> v3(5, 75);
    cout << v3[3];
    cout << endl;

    vector<int> v4(7);
    cout << v4[6];

    cout << endl;

    vector<pair<int, int>> v5(v1);
    cout << v5[0].first;
    cout << endl;

    // we can write auto instead of vector<pair<int, int>>::iterator
    for (vector<pair<int, int>>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << " ";
    }

    cout << endl;

    for (auto i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << " ";
    }

    cout << endl;

    for (auto j : v)
    {
        cout << j << " ";
    }
    cout << endl;

    // erase
    v3.erase(v3.begin(), v3.begin() + 2);
    for (auto i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << " ";
    }

    cout << endl;

    // insert
    v3.insert(v3.end() - 2, 2, 65);
    for (auto i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << " ";
    }

    cout << endl;

    // size of vector
    cout << v3.size() << endl;

    // pop_back = to remove one elemet from the last or end
    v3.pop_back();
    for (auto k : v3)
    {
        cout << k << " ";
    }
    cout << endl;

    // to swap the vectors
    v.swap(v4);
    for (auto l : v)
    {
        cout << l << " ";
    }
    cout << endl;

    // clear the entire vector
    v4.clear();
    for (auto c : v4)
    {
        cout << c << " ";
    }
    cout << endl;

    // to check the vector is empty or not
    cout << v3.empty();
}
// list
void lists()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);
    ls.emplace_front(4);
    for (auto i : ls)
    {
        cout << i << " ";
    }

    // all the fuctions are same as the vector
}
// deque
void deques()
{
    // all the fuctions are similar thi list and vector
}
// stack = LIFO (last in first out)
void stacks()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    // there are three main function in stack puch, pop and top.cout << st.top();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    // swap the stack
    stack<int> st1, st2;
    st1.swap(st2);
}
// queue =FIFO(first in first out)
void queues()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.emplace(5);
    cout << qu.back() << endl;
    qu.back() += 3;
    cout << qu.back() << endl;
    cout << qu.front() << endl;
    qu.pop();
    cout << qu.front() << endl;
    // size,empty,swap same as stack
}
// priority_queue = the guy has the highest value stays at the top
void priority_queues()
{
    priority_queue<int> pq;
    pq.push(3);
    pq.push(6);
    pq.push(2);
    pq.push(4);
    pq.emplace(5);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // minimum heap= the guy has the lowest value will be at top
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(3);
    pq2.push(6);
    pq2.push(2);
    pq2.push(4);
    pq2.emplace(5);
    pq2.push(1);

    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;
}
// set = stores everything in sorted order and stores unique
void sets()
{
    set<int> s;
    s.insert(1);
    s.emplace(3);
    s.insert(3);
    s.insert(4);
    s.emplace(2);

    // iterator in set
    auto it = s.find(1); // to find the  memory address of 1
    auto it2 = s.find(3);
    // to erase
    s.erase(4);
    s.erase(it, it2);

    // to check the element is in the set or not
    int cnt2 = s.count(2);

    // lower bound andupper bound
    auto it3 = s.lower_bound(2);
    auto it4 = s.upper_bound(2);
}
// multiset = everything is same as set but doesn't stores the unique values
void multisets()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(1);

    // onl;y single one is erase
    ms.erase(ms.find(1));

    // all 1 is erase at a time
    ms.erase(1);

    int cnt1 = ms.count(1);
}
// unorderedset = everything is unique but doesn't stores in the sorted order
void unorderedsets()
{
    unordered_set<int> us;
    // lower and upper bound function doesn't works , rest all functions works the same
    // it has the better complexity then the set in most cases, except some when collision happens
}
// maps = maps is the container which stores everything in respect of keys(unique) and values. {key,value}.
// maps stores unique keys in sorted order
void maps()
{
    map<int, int> mp;
    mp[1] = 2;
    mp.insert({3, 4});
    mp.emplace(5, 6);

    map<pair<int, int>, int> mp2;
    mp2[{1, 2}] = 3;

    for (auto m : mp)
    {
        cout << m.first << " " << m.second << endl;
    }

    for (auto n : mp2)
    {
        cout << n.first.first << " " << n.first.second << " " << n.second << endl;
    }

    cout << mp[1] << endl;

    auto it = mp.find(5);
    cout << (*it).second;
}
// multimaps= similar to maps but we can store the similare keys in the sorted order
// unrederedmaps= similar to maps but not in  the sorted order

// Algorithm

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // if they are same
    if (p1.first > p2.first)
        return true;
    else
        return false;
}
// sorting algorithms
void sorting()
{
    int a[] = {3, 2, 1, 5, 4, 6};
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    v.emplace_back(2);
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    sort(a, a + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort it according to the second element
    // if the second element is same then
    // sor it according to the first element but in decending order
    sort(arr, arr + 3, comp);
    for (auto j : arr)
    {
        cout << j.first << " " << j.second << endl;
    }

    // to find the number of 1 in the binary form of any number or value
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl;
    long long num2 = 274937932;
    int cnt2 = __builtin_popcountll(num2);
    cout << cnt2 << endl;

    // permutation
    string s = "345";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // to give the max element from the array
    int max = *max_element(a, a + 6);
    cout << max << endl;
}

// for the output
int main()
{
    sorting();
}