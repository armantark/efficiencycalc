//
//  main.cpp
//  Efficiency
//
//  Created by Arman Tarkhanian on 11/1/15.
//  Copyright (c) 2015 Arman Tarkhanian. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    char doYouKnowMoneyPerHourQuery = 0;
    int moneyMadePerHour = 0;
    int moneyPerHourOrCalculate = 0;
    double moneyCostPerHour1 = 0;
    int costOfProduct1 = 0;
    double xpPerProduct1 = 0;
    double xpPerHour1 = 0;
    double efficiencyRating1 = 0;
    double efficiencyRating2 = 0;
    double moneyCostPerHour2 = 0;
    int costOfProduct2 = 0;
    int xpPerProduct2 = 0;
    double xpPerHour2 = 0;
    double  moneyPerHourNeededForEfficiency = 0;
    
    cout << "Welcome to the Runescape efficiency calculator\n\n";
    cout << "For this calculator to work, do NOT use shorthand (i.e. k for 1000) or commas.\n\n";
    cout << "Do you know how much money you make per hour? (Y/N)\n";
    
    cin >> doYouKnowMoneyPerHourQuery;
    if (doYouKnowMoneyPerHourQuery == 'Y' || doYouKnowMoneyPerHourQuery == 'y'){
        //Make some functions for this... it's kind of messy
        cout << "How much?\n";
        cin >> moneyMadePerHour;
        cout << "Do you know how much money per hour your method is, or shall I calculate it from the cost of the product, the experience per hour, and the experience per product? (1 for former, 2 for latter)\n";
        cin >> moneyPerHourOrCalculate;
        if (moneyPerHourOrCalculate == 1){
            cout << "Enter it (only use negative signs if your method *makes* money):\n";
            cin >> moneyCostPerHour1;
            moneyCostPerHour1 = -moneyCostPerHour1;
        } else if (moneyPerHourOrCalculate == 2 ){
            cout << "What's the cost of the product?\n";
            cin >> costOfProduct1;
            cout << "What's the experience per product?\n";
            cin >> xpPerProduct1;
            cout << "Finally, what's the experience per hour?\n";
            cin >> xpPerHour1;
            moneyCostPerHour1 = (xpPerHour1*costOfProduct1)/xpPerProduct1;
            cout << "Money cost per hour: " << moneyCostPerHour1 << endl;
        } else;
        cout << "Now tell me the experience per hour of your method\n";
        cin >> xpPerHour1;
        efficiencyRating1 = (moneyMadePerHour - moneyCostPerHour1)/xpPerHour1;
        cout << "Here's the efficiency rating for your first method: " << efficiencyRating1 << endl;
        cout << "Now for your second method...\n";
        cout << "Do you know how much money per hour your method is, or shall I calculate it from the cost of the product, the experience per hour, and the experience per product? (1 for former, 2 for latter)\n";
        cin >> moneyPerHourOrCalculate;
        if (moneyPerHourOrCalculate == 1){
            cout << "Enter it (only use negative signs if your method *makes* money):\n";
            cin >> moneyCostPerHour1;
            moneyCostPerHour1 = -moneyCostPerHour1;
        } else if (moneyPerHourOrCalculate == 2 ){
            cout << "What's the cost of the product?\n";
            cin >> costOfProduct1;
            cout << "What's the experience per product?\n";
            cin >> xpPerProduct1;
            cout << "Finally, what's the experience per hour?\n";
            cin >> xpPerHour1;
            moneyCostPerHour1 = (xpPerHour1*costOfProduct1)/xpPerProduct1;
            cout << "Money cost per hour: " << moneyCostPerHour1 << endl;
        } else;
        cout << "Now tell me the experience per hour of your method\n";
        cin >> xpPerHour1;
        efficiencyRating2 = (moneyMadePerHour - moneyCostPerHour1)/xpPerHour1;
        cout << "Here's the efficiency rating for your second method: " << efficiencyRating2 << endl;
        cout << "To refresh your memory, the efficiency rating for your first method: " << efficiencyRating1 << endl;
        if (efficiencyRating1 < efficiencyRating2)
            cout << "Because the first value is smaller, the first method is more efficient.\n";
        else if (efficiencyRating2 < efficiencyRating1)
            cout << "Because the second value is small, the second method is more efficient.\n";
        else cout << "They're both equally efficient or you dun goofed";
    }
    else if (doYouKnowMoneyPerHourQuery == 'N' || doYouKnowMoneyPerHourQuery == 'n'){
        cout << "First I'll ask you questions about your first method (the slower/less expensive one)\n";
        cout << "Do you know how much money per hour your method is, or shall I calculate it from the cost of the product, the experience per hour, and the experience per product? (1 for former, 2 for latter)\n";
        cin >> moneyPerHourOrCalculate;
        if (moneyPerHourOrCalculate == 1){
            cout << "Enter it (only use negative signs if your method *makes* money):\n";
            cin >> moneyCostPerHour1;
            moneyCostPerHour1 = -moneyCostPerHour1;
        } else if (moneyPerHourOrCalculate == 2 ){
            cout << "What's the cost of the product?\n";
            cin >> costOfProduct1;
            cout << "What's the experience per product?\n";
            cin >> xpPerProduct1;
            cout << "Finally, what's the experience per hour?\n";
            cin >> xpPerHour1;
            moneyCostPerHour1 = -(xpPerHour1*costOfProduct1)/xpPerProduct1;
            cout << "Money cost per hour: " << -moneyCostPerHour1 << endl;
        } else;
        cout << "Now tell me the experience per hour of your method\n";
        cin >> xpPerHour1;
        cout << "Now I'll ask you questions about your second method (the faster/more expensive one)\n";
        cout << "Do you know how much money per hour your method is, or shall I calculate it from the cost of the product, the experience per hour, and the experience per product? (1 for former, 2 for latter)\n";
        cin >> moneyPerHourOrCalculate;
        if (moneyPerHourOrCalculate == 1){
            cout << "Enter it (only use negative signs if your method *makes* money):\n";
            cin >> moneyCostPerHour2;
            moneyCostPerHour2 = -moneyCostPerHour2;
        } else if (moneyPerHourOrCalculate == 2 ){
            cout << "What's the cost of the product?\n";
            cin >> costOfProduct2;
            cout << "What's the experience per product?\n";
            cin >> xpPerProduct2;
            cout << "Finally, what's the experience per hour?\n";
            cin >> xpPerHour2;
            moneyCostPerHour2 = -(xpPerHour2*costOfProduct2)/xpPerProduct2;
            cout << "Money cost per hour: " << -moneyCostPerHour2 << endl;
        } else;
        cout << "Now tell me the experience per hour of your method\n";
        cin >> xpPerHour2;
        moneyPerHourNeededForEfficiency = ((moneyCostPerHour1*xpPerHour2)-(moneyCostPerHour2*xpPerHour1))/(xpPerHour2-xpPerHour1);
        cout << "\nHere is how much money you'll need to make per hour for the second, more expensive method to be more efficient: " << moneyPerHourNeededForEfficiency << endl;
        cout << "If the number is negative, it means you put the more expensive method first. The number is still correct, however; just remove the negative sign.\n";
    }
    return 0;
}