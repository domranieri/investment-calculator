#include <iostream>
#include "BankingApp.h"

int main() {
    char userChoice;

    std::cout << "Welcome to the Banking Investment Calculator!\n";

    do {
        double t_initialInvestment;
        double t_monthlyDeposit;
        double t_annualInterest;
        int t_numYears;

        // Get user input
        std::cout << "\nEnter Initial Investment Amount: $";
        std::cin >> t_initialInvestment;

        std::cout << "Enter Monthly Deposit: $";
        std::cin >> t_monthlyDeposit;

        std::cout << "Enter Annual Interest (%): ";
        std::cin >> t_annualInterest;

        std::cout << "Enter Number of Years: ";
        std::cin >> t_numYears;

        std::cout << "Press any key to continue...";
        std::cin.ignore();
        std::cin.get();

        // Create investment object and set values
        AirgeadBankingApp investment(t_initialInvestment, t_monthlyDeposit, t_annualInterest, t_numYears);

        // Display reports
        investment.displayInputSummary();
        investment.displayReportWithoutMonthlyDeposits();
        investment.displayReportWithMonthlyDeposits();

        std::cout << "\nWould you like to enter another scenario? (Y/N): ";
        std::cin >> userChoice;

    } while (userChoice == 'Y' || userChoice == 'y');

    std::cout << "\nThank you for using the Banking Investment Calculator!\n";

    return 0;
}