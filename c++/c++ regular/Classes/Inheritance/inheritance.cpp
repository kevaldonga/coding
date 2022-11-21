#include <iostream>
using namespace std;
class parent
{
    string dark_secrets; // thing you don't know about your parents
public:
    parent() {}
    string name; // things you do know about them
    string phone_no;
    void read(void);
    void tell(void);
    void gossip(void);  // this function dont take any arguments but it can reveal any dark secrets
    void traitor(void); // there is one guy who will tell your secrets to everyone
};
class you : public parent
{
    // derived class is using only base class's public data memebers 
};
void parent ::read()
{
    cout << "tell me your name " << endl;
    cin >> name;
    cout << "tell me your mobile no " << endl;
    cin >> phone_no;
}
void parent ::tell()
{
    cout << "your name is " << name << endl;
    cout << "your mobile no is " << phone_no << endl;
}
void parent ::gossip()
{
    cout << "tell me your secrets I am your best friend " << endl; // POV you tell your bestfreinds your secrets without forseeing outcome
    cin >> dark_secrets;
}
void parent ::traitor()
{
    cout << "thier dark secret is right down here " << endl;
    cout << dark_secrets;
}
int main(void)
{
    parent mom;
    you me;
    mom.read();
    mom.tell();
    me.read();
    me.tell();
    return 0;
}
/* notes :: 
        1. by making even public visibilty heritance class you cant access private member of base class 
        2. you have to use memeber function of them // who are grandparents 
        3. default visibilty for derived class is private 
        4. if visiblity is public members of base class will be public members of derived class 
        5. if it's private then public members of base class will be private memebers of derived class
        6. you cant inheritage the private members of base class 
*/