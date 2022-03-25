#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v, int start, int end)
{

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }

    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;

    v.push_back(11);
    v.push_back(10);
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);

    vector<int> ans = reverse(v, 0, v.size() - 1);

    print(ans);

    return 0;
}