#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float mealCost;
    int taxCost;
    int tipCost;
    cin >> mealCost;
    cin >> tipCost >> taxCost;
    //printf("%f\n",(float)taxCost/100);
    float tip = mealCost * (float)tipCost/100;
    //printf("%f\n",tip);
    float tax = mealCost * (float)taxCost/100;
    //printf("%f\n",tax);
    //int totalCost = (int) mealCost + (int)tip + (int)tax;
    float totalCost = mealCost + tip + tax;
    printf("The total meal cost is %.0f dollars.\n",round(totalCost));
    return 0;
}
