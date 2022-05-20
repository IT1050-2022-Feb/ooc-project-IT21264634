#include "RegisteredUser.h"
#include<cstring>
using namespace std;

RegisteredUser::RegisteredUser()
{
	login_id = 0;
	strcpy(password,"");
	strcpy(dob,"");
}

RegisteredUser::RegisteredUser( int r_lid, char r_pword[], char r_dob[], FitnessTrainer *ftr)
{
	login_id = r_lid;
	strcpy(password,r_pword);
	strcpy(dob,r_dob);
}

void RegisteredUser::displayDetails()
{
	
}

void RegisteredUser::login()
{
	
}

void RegisteredUser::logout()
{
	
}

void RegisteredUser::purchasePlans()
{
	
}

void RegisteredUser::requestNutritionist()
{
	
}

void RegisteredUser::scheduleTime()
{
	
}

void RegisteredUser::selectTrainer()
{
	
}

RegisteredUser::~RegisteredUser()
{
	cout << "Destructor runs" << endl;
	
}
