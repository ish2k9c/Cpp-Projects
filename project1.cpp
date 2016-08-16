#include <iostream>

using namespace std;

int main()
{
    char math;
    double y,a,b;

    string output;

    cout << "ish's calculator" << "\n\n";


    do

    {
        cin >> a;
        cin >> math;
        cin >> b;


        if (math == '+')
        {
            y = a + b;
            cout << a << math << b << " = " << y;
            cout << "\n\n";
        }
        else if (math == '-')
        {
            y = a - b;
            cout << a << math << b << " = " << y;
            cout << "\n\n";
        }
        else if (math == '/')
        {
            y = a / b;
            cout << a << math << b << " = " << y;
            cout << "\n\n";
        }
        else if (math == '*')
        {
            y = a * b;
            cout << a << math << b << " = " << y;
            cout << "\n\n";
        }

        else
        {
            cout << "i think there was an error in your input please try again";
            cout << "\n\n";
        }

        cout << "would you like to do another math problem ? " << "\n" << "yes or no";
        cout << "\n\n";
        cin >> output;
        cout << "\n\n";

    }   while (output == "yes");


    return 0;
}
