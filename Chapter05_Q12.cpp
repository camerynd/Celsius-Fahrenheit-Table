#include <iostream>
#include <iomanip>
using namespace std;
//function prototype
void display_table(int& cel, int& far);

int main()
{
    int celsius, farenheit;//local variables

    display_table(celsius, farenheit);//calling function

    cout << endl;

    return 0;
}

void display_table(int& cel, int& far)
{
    cout << "   CELSIUS  |  FARENHEIT   " << endl;//shows where celsius and farenheit values are
    cout << "---------------------------" << endl;
    for (cel = 1; cel <= 20; cel++)//for loop initializes celsius as 1, repeats as long as
    //celsius is <= 20, and adds 1 to celsius each time loop is repeated
    {
        far = (cel * 1.8) + 32;//equation toconvert celsius to farenheit
        cout << setw(5) << cel << "°      |" << setw(9) << far << "°";//displaying values
        cout << endl;
    }
}