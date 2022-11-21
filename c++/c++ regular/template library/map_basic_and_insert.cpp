#include <iostream>
#include <map>
using namespace std;
template <typename T, typename S>
void display(map<T, S> &mymap)
{
    for (auto it = mymap.begin(); it != mymap.end(); it++)
    {
        cout << it->first <<"\t"<< it->second << endl;
    }
}
int main(void)
{
    map<string, int> m1({{"keval", 23}, {"dharmik", 43}});
    // m1["hello"]=2;
    // m1["divyak"]=0;
    // m1.insert({"darshan",232});
    // these are the different ways to insert any variable in map .
    display(m1);

    return 0;
}