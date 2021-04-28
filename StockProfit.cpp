//Made by Marcus Gerard Riccio
//StockProfit.cpp
//+maxProfit() : calculates the maximum potential profit based on i days
//returns : maximum potential profit of the best day to sell the stock
//+print() : prints vector contents to terminal

#include <vector>
#include <string>
#include <algorithm>
#include <float.h>
#include <iostream>
#include <climits>

using namespace std;

class StockProfit {
    public:
        double maxProfit(vector<double>& prices) {
            double minimum = DBL_MAX;
            double total = 0.00;
            for (double i = 0; i < prices.size(); i++) {
                //prices[i] == price of stock on i day
                minimum = min(minimum, prices[i]);
                //maxProfit = max(maxProfit, price of stock on i day - minimum)
                total = max(total, prices[i] - minimum);
            }
            return total;
        }
};

void print(vector<double>& prices) {
    cout << "Given stock prices(MON-FRI)...\n";

    for(auto i = 0; i < prices.size(); i++) {
        cout << prices.at(i) << ' ' << endl;
    }
    
}

int main() {
    //Test main function
    vector<double> prices = {90.32, 169.56, 220.39, 100.66, 73.11};
    vector<double> pricesWeek2 = {420.69, 1005.51, 2019.63, 3500.96, 5675.32};
    StockProfit priceTest;
    
    print(prices);
    
    cout << "Maximum Profit: \n" << priceTest.maxProfit(prices) << '\n';
    
    print(pricesWeek2);
    
     cout << "Maximum Profit: \n" << priceTest.maxProfit(pricesWeek2) << '\n';
}