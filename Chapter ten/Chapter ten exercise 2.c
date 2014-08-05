/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter ten programe exercise 2

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
int main ()
{
	struct business
	{
		char CustomName[21]		;
		char CustomAddress[41]  ;
		char model[21]			;
		struct cash * CashStyle	;
		struct loan * LoanStyle ;
	    struct rent * rentStyle ;
	};

	struct cash
	{
		float ManufactuerSuggestedRealtailPriece ;
		float ActualSellingPrice;
		float SalesTax;
		float LicensingFee;
	};

	struct rent
	{
		float ActualSellingPrice;
		float DownPayment;
		float SecurityDeposit;
		float MonthlyPayment;
		int   LeaseTerm;
	};

	struct loan
	{
		float ManufactuerSuggestedRealtailPriece;
		float ActualSellingPrice;
		float DownPagment;
		float SecurityDeposit;
		float MonthlyPayment;
		float LeaseTerm;
	};
	return 0;
}
