#include <iostream>
#include <iomanip>
#include "BankingApp.h"

BankingApp::BankingApp(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numYears)
    : m_initialInvestment(t_initialInvestment), m_monthlyDeposit(t_monthlyDeposit),
    m_annualInterest(t_annualInterest), m_numYears(t_numYears) {}

void BankingApp::displayInputSummary() const {
    std::cout << "\n--------------------------------------------\n";
    std::cout << "Investment Summary:\n";
    std::cout << "Initial Investment Amount: $" << m_initialInvestment << '\n';
    std::cout << "Monthly Deposit: $" << m_monthlyDeposit << '\n';
    std::cout << "Annual Interest: %" << m_annualInterest << '\n';
    std::cout << "Number of Years: " << m_numYears << '\n';
    std::cout << "--------------------------------------------\n";
    std::cout << "Press any key to continue...";
    std::cin.ignore();
    std::cin.get();
}

void BankingApp::displayReportWithoutMonthlyDeposits() const {
    std::cout << "\n     Balance and Interest Without Monthly Deposits\n";
    std::cout << "==========================================================\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    std::cout << "----------------------------------------------------------\n";

    double yearEndBalance = m_initialInvestment;

    for (int year = 1; year <= m_numYears; ++year) {
        double interest = yearEndBalance * (m_annualInterest / 100);
        yearEndBalance += interest;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << year << "\t$" << yearEndBalance << "\t\t$" << interest << '\n';
    }
}

void BankingApp::displayReportWithMonthlyDeposits() const {
    std::cout << "\n       Balance and Interest With Monthly Deposits\n";
    std::cout << "==========================================================\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    std::cout << "----------------------------------------------------------\n";

    double balance = m_initialInvestment;

    for (int year = 1; year <= m_numYears; ++year) {
        double yearlyInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            balance += m_monthlyDeposit;
            double monthlyInterest = balance * ((m_annualInterest / 100) / 12);
            yearlyInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << year << "\t$" << balance << "\t\t$" << yearlyInterest << '\n';
    }
}