#include <iostream>
using namespace std;
template <typename var>
var sum(var x, var y)
{
    return x + y;
}
int main(void)
{
    cout << "the sum of your integers is " << sum<int>(4, 7) << endl;
    cout << "the sum of your float variables is " << sum<double>(4.6, 7.12) << endl;
    cout << "the mashup of your strings is " << sum<string>("hello", " there");
    return 0;
}
/*  
    -->  using templates in this case i had to use template type variable return type because the function i made
            was not enough to return strings .
    -->  as soon as i declared retrun type as templates var I have to also specify that which data type will be used to call function
            because it was recognising data types by function arguments but then i also declared return type which was not able to identify 
            its data type so i had to specify that otherwise it wil give error ...
*/
    