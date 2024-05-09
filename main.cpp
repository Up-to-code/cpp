#include <cstdlib>
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
typedef std::string text_t;
using num = int;
using namespace std;

int rnum()
{
    srand((unsigned int)time(NULL));
    int rnum = rand() % 10 + 1;
    cout << rnum;

    return 0;
}

int sq()
{

    double a;
    double b;
    double c;
    cout << "add A\n";
    cin >> a;
    cout << "add B\n";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "c is " << c;
    return 0;
}

int anything()
{
    int rows = 8; // set the number of rows to 8

    // Print the top half of the pyramid with increasing numbers
    for (int i = 0; i <= rows; i++)
    { // loop through each row
        for (int j = 1; j <= i; j++)
        {                     // loop through each column in the row
            cout << j << " "; // print the current column number followed by a space
        }
        cout << endl; // move to the next line after printing all the columns in the current row
    }

    // Print the bottom half of the pyramid with decreasing numbers
    for (int i = rows - 1; i >= 1; i--)
    { // loop through each row in reverse order
        for (int j = 1; j <= i; j++)
        {                     // loop through each column in the row
            cout << j << " "; // print the current column number followed by a space
        }
        cout << endl; // move to the next line after printing all the columns in the current row
    }

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 0; i <= rows; i++)
    {
        for (int j = rows; 1 <= j; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int Searsh()
{
    // this is lnier Search
    const string Arr[4] = {"Ahmed",
                           "Mansour",
                           "anyName",
                           "jake"};
    double size = sizeof(Arr) / sizeof(Arr[0]);
    string myName;
    cout << "Entter Name \n";
    getline(cin, myName);
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == myName)
        {
            cout << myName << " is here \n";
        }
    }

    return 0;
}

int TotilPrice()
{
    const double Prics[] = {51.77, 814.4, 484.18, 47.15, 481.54};
   // int size = sizeof(Prics) / sizeof(Prics[0]);
    double totile;
    for (double Pric: Prics)
    {
        totile += Pric ;
    }
    cout << totile << "\n";

    return 0;
}

int main()
{

    //  const double n = (int)3.55;
    //  cout << "\t" << n << "\n";

    // cout << "Hello\n";
    // text_t Aname = "ahmed name \n";

    // cout << Aname;
    // string name = "ahmed\n \t";
    // cout << name + "\n";

    // // Take input using cin
    // cin >> name;
    // // Print output
    // cout << " \n" + name + "";
    //  like if  15 == 16 ? cout << "yes " : cout<< "no";

    return 0;
}