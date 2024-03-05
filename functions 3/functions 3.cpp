// write a program that outputs inflation rates for two successive years and determines whether the inflation is increasing or decreasing.

//input: Ask the user to input the current price of an item (currPrice), its price one year ago (oneYearPrice) and two years ago (twoYearPrice).
// proccesing: To calculate the inflation rate for a year, subtract the price of the item (for that year) from the price of the item one year ago and then divide the result by the price a year ago.
// outputs:The function would output the inflation rates and also tell us if inflation is on the rise or declining.


#include <iostream>
using namespace std;

int computeInflation(int oneYearPrice, int twoYearPrice);
double	computeInflation(double oneYearPrice, double twoYearPrice);
double	computeInflation(double oneYearPrice, int twoYearPrice);
double	computeInflation(int oneYearPrice, double twoYearPrice);

int main()
{

    int currPrice;
    int oneYearPrice;
    int twoYearPrice;
    int prevInf{};
    int currInf{};

    if (currInf > prevInf)
    {
        cout << "The inflation rate is increasing" << endl;
    }
    else if (currInf < prevInf)
    {
        cout << "The inflation rate is decreasing" << endl;
    }
    else
    {
        cout << "There is no change in the inflation rate" << endl;
    }

    system("PAUSE");
    return 0;
    cout << "what is the current price" << endl;
    cin >> currPrice;
    cout << "what is the  price of one year ago" << endl;
    cin >> oneYearPrice;
    cout << "what is the  price of two years ago" << endl;
    cin >> twoYearPrice;

    currInf = (currPrice - oneYearPrice) / (oneYearPrice);

    currInf = (currPrice - twoYearPrice) / (twoYearPrice);

    return currInf;

    cout << "your total tax is $" << currInf << " per month" << endl;

    system("PAUSE");
    return 0;
}

int computeInflation(int oneYearPrice, int twoYearPrice)
{
    return 0;
}

double computeInflation(double oneYearPrice, double twoYearPrice)
{
    return 0.0;
}

double computeInflation(double oneYearPrice, int twoYearPrice)
{
    return 0.0;
}

double computeInflation(int oneYearPrice, double twoYearPrice)
{
    return 0.0;
}
