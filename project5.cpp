#include <iostream>

using namespace std;


class MyFunction{

    public:

        void multiply(double a, double b, double y, char math)
        {
            y = a * b;
            cout << a << math << b << " = " << y;
        }


        void divide(double a, double b, double y, char math)
        {
            y = a / b;
            cout << a << math << b << " = " << y;
        }


        void subtract(double a, double b, double y, char math)
        {
            y = a - b;
            cout << a << math << b << " = " << y;
        }


        void add(double a, double b, double y, char math)
        {
            y = a + b;
            cout << a << math << b << " = " << y;
        }


};

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


        switch(math)
        {

            MyFunction myfunction;

            case '+':
            myfunction.add( a, b, y, math);
            break;

            case '-':
            myfunction.subtract( a, b, y, math);
            break;

            case '*':
            myfunction.multiply( a, b, y, math);
            break;

            case '/':
            myfunction.divide( a, b, y, math);
            break;

            default:
            cout << "i think there was an error in your input please try again";
            break;

        }


        cout << "\n\n";

        cout << "would you like to do another math problem ? " << "\n" << "yes or no";
        cout << "\n\n";
        cin >> output;
        cout << "\n\n";

    }   while (output == "yes");

    return 0;
}




