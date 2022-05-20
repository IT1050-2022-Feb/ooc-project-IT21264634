#include "Payment.h"
#include "Administrator.h"
//Association with Administrator
//Association with payment


class Report
{
	private:
		char r_type[20];
		Payment *pay;
		Administrator *Admin;
	public:
		Report();
		Report( char rtype[], Administrator *ad );
		void displayDetails();
		void salesReportDetails();
		void orderReportDetails();
		void paymentReportDetails();
		~Report();
};
