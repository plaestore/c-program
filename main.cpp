#include <iostream>
using namespace std;

int main()

{
    double grossIncome;
    const double incomeTax = 0.23;
    const double ssnitmainContribution = 0.05;
    const double ssnitTier2 = 0.03;
    const double fundDeduction = 0.15;

    cout<<"Input gross income "<<grossIncome<<endl;
    cin>>grossIncome;
    incomeTax;

    double incomeTaxAmount = grossIncome * incomeTax;
    double ssnitmainContributionAmount = grossIncome * ssnitmainContribution;
    double ssnitTier2Amount = grossIncome * ssnitTier2;
    double fundDeductionAmount = grossIncome * fundDeduction;
    double totaltaxDeductible = incomeTax + ssnitmainContribution + ssnitTier2;
    double netIncome = grossIncome - totaltaxDeductible;


    cout<<"Total Gross Income earned in Ghc = "<<grossIncome<<endl;
    cout<<"Total Income Tax Payable = "<<incomeTax<<endl;
    cout<<"SSNIT Main Contribution = "<<ssnitmainContribution<<endl;
    cout<<"SSNIT Tier 2 Contribution = "<<ssnitTier2<<endl;
    cout<<"Voluntary Provident Fund Deduction = "<<fundDeduction<<endl;
    cout<<"Total Tax Deductible = "<<totaltaxDeductible<<endl;
    cout<<"Net Income = "<<netIncome<<endl;


    return 0;
}
