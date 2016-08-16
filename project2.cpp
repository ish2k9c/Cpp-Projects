#include <iostream>

using namespace std;

int main()
{

    char math;
    double a,b,c;
    string output;

    cout << "ish's calculator \n\n";




    do
    {
        cin >> a;
        cin >> math;
        cin >> b;

        switch(math)
        {

            case '+':
            c=a+b;
            cout << a << math << b << " = "<<c;
            break;

            case '-':
            c=a-b;
            cout << a << math << b << " = "<<c;
            break;

            case '*':
            c=a*b;
            cout << a << math << b << " = "<<c;
            break;

            case '/':
            c=a/b;
            cout << a << math << b << " = "<<c;
            break;

            default:
            cout << "i think there was an error in your input please try again";
            break;
        }


            cout << "\n\n" << "would you like to do another math problem ? " << "\n" << "yes or no" << "\n\n";
            cin >> output;
            cout << "\n\n";

    } while (output == "yes");







    return 0;
}
