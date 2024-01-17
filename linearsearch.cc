//Linear search.
#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> v, int s, int num)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
            return 1;
    }
    return 0;
}

int main()
{
    int num, n, s, temp;
    vector<int> v;

    cout << "Enter the no. of elements: ";
    cin >> num;

    cout << "Enter the elements: ";
    for (int j = 0; j < num; j++)
    {
        cin >> n;
        v.push_back(n);
    }
    cout << "Enter the element to search: ";
    cin >> s;
    
    temp = linear_search(v, s, num);
    (temp == 1) ? cout << "Element is present." << endl : cout << "Element is not present." << endl;
    return 0;
}

//@BKY