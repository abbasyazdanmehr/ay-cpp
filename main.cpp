#include <bits/stdc++.h>
#include "aydebug.h"

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int a[20];
    random_initial(a, 20, 40);
    print(a, 20);

    vector<int> v(20, 0);
    random_initial(v, 40);
    print(v);

    queue<int> q;
    random_initial(q, 6, 20);
    print(q);

    pair<int, char> p(1, 'k');
    print(p);

    pair<int, int> p1(1, 1), p2(2, 3), p3(3, 4), p4(4, 9);
    vector<pair<int, int> /**/> vp;
    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);
    print(vp);

    queue<pair<int, int> /**/> qp;
    qp.push(p1);
    qp.push(p2);
    qp.push(p3);
    print(qp);

    map<int, int> mii;
    mii[0] = 1;
    mii[2] = 1;
    mii[4] = 3;
    print(mii);

    map<char, int> mci;
    mci['c'] = 1;
    mci['t'] = 1;
    mci['k'] = 3;
    print(mci);

    map<string, int> msi;
    msi["akbar"] = 1;
    msi["taghi"] = 1;
    msi["naghi"] = 3;
    print(msi);

    map<string, string> mss;
    mss["akbar"] = "nasrin";
    mss["taghi"] = "nooshin";
    mss["naghi"] = "kobra";
    print(mss);

    map<char, char> mcc;
    mcc['t'] = 'k';
    mcc['b'] = 'j';
    mcc['s'] = 'm';
    print(mcc);

    return 0;
}
