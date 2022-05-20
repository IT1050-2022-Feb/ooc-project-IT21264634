#include "Report.h"
#include<cstring>
using namespace std;


Report::Report()
{
	strcpy(r_type,"");
}

Report::Report( char rtype[], Administrator *ad ){
	strcpy (r_type,rtype);
}

void Report::displayDetails()
{
		
}

void Report::orderReportDetails()
{
	
}

void Report::paymentReportDetails()
{
	
}

void Report::salesReportDetails()
{
	
}

Report::~Report()
{
	cout << "Destructor runs" << endl;
}

