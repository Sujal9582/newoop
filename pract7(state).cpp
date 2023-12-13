#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> mymap;
    int n, i, pop;
    string state;
    cout << "Enter the total no of state to be entered :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter name of state :\n";
        cin >> state;
        cout << "Enter the population :\n";
        cin >> pop;
        mymap.insert(pair<string, int>(state, pop));
    }
    cout << "Enter the state to be search :";
    cin >> state;
    cout << "Popllution of " << state << " is :" << mymap[state];
    return(0);
}