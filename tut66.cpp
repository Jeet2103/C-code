#include <iostream>
#include <map>
#include <string>
using namespace std;
void display(map<string, int> &m)
{
    map<string, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << " The name of the student is : " << (*iter).first << endl;
        cout << " the getting marks of the student is : " << (*iter).second << endl;
    }
}

int main()
{
    map<string, int> m1;
    m1["Jeet"] = 100;
    m1["Neel"] = 70;
    m1["Pratyush"] = 80;
    m1.insert({{"Subha", 78}, {"Sunny", 97}});
    display(m1);
    cout<< " The size of this map is : "<<m1.size()<<endl;
    cout<< " The max size of this map is : "<<m1.max_size()<<endl;
    cout<< " The empty's of this map is : "<< m1.empty()<<endl;

    return 0;
}