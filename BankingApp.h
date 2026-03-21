// BankingApp.h
#ifndef BANKING_APP_H_
#define BANKING_APP_H_

class BankingApp {
public:
    // Constructor: validates and stores investment parameters
    BankingApp(double initialInvestment, double monthlyDeposit,
               double annualInterest, int numYears);

    // Prints a formatted summary of the current investment parameters
    void displayInputSummary() const;

    // Prints yearly balance and earned interest, assuming no monthly deposits
    void displayReportWithoutMonthlyDeposits() const;

    // Prints yearly balance and earned interest, factoring in monthly deposits
    void displayReportWithMonthlyDeposits() const;

    // Getters
    double getInitialInvestment() const { return m_initialInvestment; }
    double getMonthlyDeposit()    const { return m_monthlyDeposit; }
    double getAnnualInterest()    const { return m_annualInterest; }
    int    getNumYears()          const { return m_numYears; }

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest; // stored as a percentage
    int    m_numYears;

    // prints the column header used by both report methods
    void printReportHeader() const;
};

#endif // BANKING_APP_H_
