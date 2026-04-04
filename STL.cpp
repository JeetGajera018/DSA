#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    priority_queues();
}