#include <bits/stdc++.h>

using namespace std;

#define line __LINE__

// // ------------------------------------ sep ------------------------------------

void sep()
{
    cout << "-------------------------------\n";
}

// ------------------------------------ print ------------------------------------

// error line finding
void print()
{
    cout << "HERE IS DEBUG!\n";
}

// primitives
template <typename T>
void print(T t)
{
    cout << t << "\n";
}

// 1d array //
template <typename T>
void print(T a[], int n)
{
    cout << "{";
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << "}\n";
}

// 1d vector //
template <typename T>
void print(vector<T> v)
{
    cout << "{";
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << "}\n";
}

// 1d queue //
template <typename T>
void print(queue<T> q)
{
    cout << "{";
    while (!q.empty())
    {
        cout << q.front() << ", ";
        q.pop();
    }
    cout << "}\n";
}

// 1d pair //
template <typename T, typename U>
void print(pair<T, U> p)
{
    cout << "(" << p.first << ", " << p.second << ")\n";
}

// vector of pairs //
template <typename T, typename U>
void print(vector<pair<T, U> /**/> vp)
{
    cout << "\n-- vector of pairs ---\n";
    for (size_t i = 0; i < vp.size(); i++)
    {
        print(vp[i]);
    }
    cout << "----------------------\n";
}

// queue of pairs //
template <typename T, typename U>
void print(queue<pair<T, U> /**/> q)
{
    cout << "\n-- queue of pairs ---\n";
    while (!q.empty())
    {
        print(q.front());
        q.pop();
    }
    cout << "----------------------\n";
}

// 1d map //
void print(map<int, int> m)
{
    map<int, int>::iterator it = m.begin();

    cout << "{";
    while (it != m.end())
    {
        cout << "(" << it->first << ": " << it->second << "),  ";
        ++it;
    }
    cout << "}\n";
}

// //
void print(map<char, int> m)
{
    map<char, int>::iterator it = m.begin();

    cout << "{";
    while (it != m.end())
    {
        cout << "(" << it->first << ": " << it->second << "),  ";
        ++it;
    }
    cout << "}\n";
}

// //
void print(map<string, int> m)
{
    map<string, int>::iterator it = m.begin();

    cout << "{";
    while (it != m.end())
    {
        cout << "(" << it->first << ": " << it->second << "),  ";
        ++it;
    }
    cout << "}\n";
}

// //
void print(map<string, string> m)
{
    map<string, string>::iterator it = m.begin();

    cout << "{";
    while (it != m.end())
    {
        cout << "(" << it->first << ": " << it->second << "),  ";
        ++it;
    }
    cout << "}\n";
}

// //
void print(map<char, char> m)
{
    map<char, char>::iterator it = m.begin();

    cout << "{";
    while (it != m.end())
    {
        cout << "(" << it->first << ": " << it->second << "),  ";
        ++it;
    }
    cout << "}\n";
}

// queue of vectors
template <typename T>
void print(queue<vector<T> /**/> qv)
{
    cout << "\n-- queue of vectors ---\n";
    while (!qv.empty())
    {
        print(qv.front());
        qv.pop();
    }
    cout << "----------------------\n";
}

void print(map<int, vector<int> /**/> mv)
{
    map<int, vector<int> /**/>::iterator it = mv.begin();

    cout << "\n-- map of vectors ---\n";
    while (it != mv.end())
    {
        cout << it->first << ": ";
        print(it->second);
        ++it;
    }
    cout << "----------------------\n";
}

template <typename T>
void print(stack<T> s)
{
    stack<T> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
 
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
 
        s.push(t); 
    }

    cout << "\n";
}

// 2d vector //
template <typename T>
void print(vector<vector<T> /**/> vv)
{
    cout << "\n-- vector 2d ---\n";
    for (size_t i = 0; i < vv.size(); i++)
    {
        print(vv[i]);
    }
    cout << "----------------------\n";
}

// ------------------------------------ random_initial ------------------------------------

// 1d array //
template <typename T>
void random_initial(T a[], int n, int limit)
{
    for (size_t i = 0; i < n; i++)
    {
        a[i] = rand() % limit;
    }
}

// 1d vector //
template <typename T>
void random_initial(vector<T> &v, int limit)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        v[i] = rand() % limit;
    }
}

// //
template <typename T>
void random_initial(vector<T> &v, int n, int limit)
{
    for (size_t i = 0; i < n; i++)
    {
        v.push_back(rand() % limit);
    }
}

// 1d queue //
template <typename T>
void random_initial(queue<T> &q, int n, int limit)
{
    for (size_t i = 0; i < n; i++)
    {
        q.push(rand() % limit);
    }
}

// ------------------------------------ misc ------------------------------------
// //
string random_string(int ch)
{
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                      'h', 'i', 'j', 'k', 'l', 'm', 'n',
                      'o', 'p', 'q', 'r', 's', 't', 'u',
                      'v', 'w', 'x', 'y', 'z'};
    string result = "";
    for (int i = 0; i < ch; i++)
        result = result + alpha[rand() % 26];

    return result;
}