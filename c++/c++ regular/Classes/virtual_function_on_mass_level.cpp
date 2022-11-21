#include <iostream>
using namespace std;
class electronics
{
protected:
    string name;
    double price, disc;

public:
    electronics(string, double);
    virtual void discount(bool check) = 0;
};
electronics ::electronics(string word, double money) : name(word), price(money)
{
}
class laptop : public electronics
{
protected:
    int ram, storage;

public:
    laptop(string, double, int, int);
    void discount(bool check);
    void print(void);
};
laptop ::laptop(string word, double money, int primary, int secondary) : electronics(word, money), ram(primary), storage(secondary)
{
    cout << "purchasing new laptop named " << word << " worth of " << money <<"/-"<< endl;
}
void laptop ::print()
{
    cout << "the details of your laptop is as follows " << endl;
    cout << "name --> " << name << endl;
    cout << "price --> " << price << "/-" << endl;
    cout << "discount --> " << disc << "/-" << endl;
    cout << "ram --> " << ram << " GBs" << endl;
    cout << "storage --> " << storage << " GBs" << endl;
}
void laptop ::discount(bool check)
{ // default discont will be 5% and with gst it will be 18%
    if (check == true)
    {
        disc = 18.0;
    }
    else
    {
        disc = 5.0;
    }
    price = price - ((price * disc) / 100);
    disc = ((price * disc) / 100);
}
class smartphone : public electronics
{
protected:
    string processor, storage_specs;

public:
    smartphone(string, double, string, string);
    void discount(bool check);
    void print(void);
};
smartphone ::smartphone(string word, double money, string chip, string space) : electronics(word, money), processor(chip), storage_specs(space)
{
    cout << "purchasing new smartphone named " << word << " worth of " << money <<"/-"<< endl;
}
void smartphone ::discount(bool check)
{
    if (check == true)
    {
        disc = 18.0;
    }
    else
    {
        disc = 5.0;
    }
    price = price - ((price * disc) / 100);
    disc = ((price * disc) / 100);
}
void smartphone ::print()
{
    cout << "the details of your smartphone is as follows " << endl;
    cout << "name --> " << name << endl;
    cout << "price --> " << price << "/-" << endl;
    cout << "discount --> " << disc << "/-" << endl;
    cout << "processor --> " << processor << endl;
    cout << "storage --> " << storage_specs << " GBs" << endl;
}
int discountcheck()
{
    int chk;
    int a;
    string check;
    cout << "which discount you can have " << endl;
    cout << "1. 5% discont with axis credit card " << endl;
    cout << "2. 18% discount with gst invoice " << endl;
    cout << "3. I dont have any of these " << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "enter your axis card number " << endl;
        cin >> check;
        if (check.length() != 12)
        {
            cout << "intialization failed " << endl;
            chk = 2;
            return chk;
        }
        else if (check.length() == 12)
        {
            cout << "intializing ...." << endl;
            chk = 0;
            return chk;
        }
        else
        {
            cout << "invalid format !!!" << endl;
            chk = 2;
            return chk;
        }
    }
    else if (a == 2)
    {
        cout << "enter gst invoice number " << endl;
        cin >> check;
        if (check.length() != 10)
        {
            cout << "intialization failed " << endl;
            chk = 2;
            return chk;
        }
        else if (check.length() == 10)
        {
            cout << "intializing ...." << endl;
            chk = 1;
            return chk;
        }
        else
        {
            cout << "invalid format !!!" << endl;
            chk = 2;
            return chk;
        }
    }
    else if (a == 3)
    {
        cout << "thanks for choosing us " << endl;
        chk = 2;
        return chk;
    }
    else
    {
        chk = 2;
        return chk;
    }
}
int main(void)
{
    electronics *ptr[2];
    laptop keval("dell vostrov", 46299, 8, 1256);
    ptr[0] = &keval;
    int check = discountcheck();
    if (check == 1)
    {
        keval.discount(true);
        keval.print(); // ptr[0]->print();   will give an error because |
    }                  //                                               v
    /* you cant use pointer to access function(* print ) with arrow operator because 
    it is base class pointer and it has no function named print so you have to use object name 
    to get access of print function and it will works completely fine
    */
    else if (check == 0)
    {
        keval.discount(false);
        keval.print();
    }
    else if (check == 2)
    {
        keval.print();
    }
    smartphone darshan("samsung M30s", 15999, "snapdragon 865+", "128 + 6 ");
    ptr[1] = &darshan;
    check = discountcheck();
    if (check == 1)
    {
        darshan.discount(true);
        darshan.print();
    }
    else if (check == 0)
    {
        darshan.discount(false);
        darshan.print();
    }
    else if (check == 2)
    {
        darshan.print();
    }
    delete[] ptr;
    /*
    --> when i used bool variable in discount function i cannot return values type of 2 which is 
    true and false but i wanted to return value types of 3 so i removed bool variable and instead of that i used 
    integer which will retrun 1,2,3 as per conditions
*/
    return 0;
}