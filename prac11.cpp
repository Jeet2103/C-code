#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << "The value of " << i + 1 << " is : " << v[i] << endl;
  }
}

int main()
{
  vector<int> v1;
  int size, elements;
  cout << " Enter the size : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cout << " Enter the value " << i + 1 << " : " << endl;
    cin >> elements;
    v1.push_back(elements);
  }

  cout << " The size of v1 vector is : " << v1.size() << endl;
  vector<int>::iterator iter = v1.begin();
  v1.insert(iter, 34);

  v1.pop_back();
  display(v1);
  vector<char> v2(4);
  v2.push_back('J');
  v2.push_back('E');
  v2.push_back('E');
  v2.push_back('T');
  display(v2);
  vector<char> v3(v2);
  display(v3);
  vector<int> v4(5, 8);
  display(v4);
  return 0;
}