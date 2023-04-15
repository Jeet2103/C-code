# include <iostream>
# include <list>
using namespace std ;
// In list function i have to use iteartor for showing the value.
void display(list<int> &l){
    list<int> :: iterator it;
   for(it=l.begin(); it!=l.end();it++){
    cout<<" The number is : "<<*it<<endl;

   }
}
int main(){ 
    int size=4;
list<int> l1 ;
l1.push_back(34);
l1.push_back(85);
l1.push_back(78);
l1.push_back(67);
// display(l1);
// list<int>:: iterator iter;
// // iter = l1.begin();
// cout<<*iter<<endl;
// iter++;
// cout<<*iter<<endl;
// iter++;
// cout<<*iter<<endl;
// iter++;
// cout<<*iter<<endl;
// iter++;
list<int> l2(3);
list<int> :: iterator iter;
iter = l2.begin();
*iter =45;
iter++;
*iter =47;
iter++;
*iter =46;
iter++;
// display(l2);
// l2.pop_back();
// l2.pop_front();
l1.sort();
l2.sort();
// l1.reverse();
// l2.reverse();
l1.merge(l2);//merge the values of l1 and l2.
l1.remove(78);
l1.remove(67);// Removing elements from the middle 
display(l1);
// display(l2);
return 0 ;
} 