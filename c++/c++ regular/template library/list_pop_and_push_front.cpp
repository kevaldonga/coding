#include <iostream>
#include <list>
using namespace std;
template <typename T>
void display(list<T> &s)
{
    // typename list<T>::iterator myit;
    // list<T>::iterator myit;    it will give an error because list<T> is dependent scope so we have to use typename
    // also have to use it in other containers...... OR MAY BE IN STL ALSO I DONT KNOW
    for (auto myit = s.begin(); myit != s.end(); myit++)
    {
        cout << (*myit) << "    ";
    }
    cout << endl<<endl;
}
int main(void)
{
    list<int> l1{4, 223, 564, 134};
    l1.push_front(6);
    l1.push_front(23);
    display<int>(l1);
    l1.pop_front();
    display<int>(l1);
    return 0;
}
/* 
        note -> 
                -> if you are suning STL then you have to probably make variables that are not predefined whether they will be numbers,or 
                strings so mostly in iterators we actually declare it like as usual cause there is no proper type defined 
                and even in that if you assign any value or return type of any function then it will give an error cause compiler that iterator
                is not defined .
                -> so we have to use one of two keywords which are auto and typename these both keyowrds ensures that compiler make decision on
                run time about their type they both work completely the same .
                -> but we have to write more code in typename as we have to put in front of the declaration of iterator like this 
                // typename list<T>::iterator myit;
                -> but auto is really efficient in this it was introduced in c++ 11 .
                -> we have to just use auto instead of any type and assign it to the value .accorfing to the value assigned to it ,complier will
                change the type just like this .
                auto myit = s.begin();  // it will be assigned as iterator by the way.
*/
