#include <iostream>

using namespace std;

double multiply(double a, double b, double y, char math);       // declaring a function
double divide(double a, double b, double y, char math);
double subtract(double a, double b, double y, char math);
double add(double a, double b, double y, char math);




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

            case '+':
            add(a, b, y, math);
            cout << add( a, b, y, math);
            break;

            case '-':
            subtract(a, b, y, math);
            cout << subtract( a, b, y, math);
            break;

            case '*':
            multiply(a, b, y, math);
            cout << multiply( a, b, y, math);
            break;

            case '/':
            divide(a, b, y, math);
            cout << divide( a, b, y, math);
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




double multiply(double a, double b, double y, char math)
{
    y = a * b;
    return y;
}


double divide(double a, double b, double y, char math)
{
    y = a / b;
    return y;
}

double subtract(double a, double b, double y, char math)
{
    y = a - b;
    return y;
}

double add(double a, double b, double y, char math)
{
    y = a + b;
    return y;
}

