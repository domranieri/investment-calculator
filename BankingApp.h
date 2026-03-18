// BankingApp.h
#ifndef BANKING_APP_H_
#define BANKING_APP_H_

class BankingApp {
public:
    BankingApp(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numYears);

    void displayInputSummary() const;
    void displayReportWithoutMonthlyDeposits() const;
    void displayReportWithMonthlyDeposits() const;

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numYears;
};

#endif // BANKING_APP_H_


