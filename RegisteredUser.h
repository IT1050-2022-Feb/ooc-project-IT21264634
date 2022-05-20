//Inheritance with UnregisteredUser
//Association with FitnessTrainers
#include "FitnessTrainers.h"
class RegisteredUser : public UnregisteredUser
{
	protected:
		int login_id;
		char password[10];
		char dob[15];
		FitnessTrainer *ft;
	public:
		RegisteredUser();
		RegisteredUser( int r_lid, char r_pword[], char r_dob[], FitnessTrainer *ftr );
		void login();
		void displayDetails();
		void logout();
		void purchasePlans();
		void selectTrainer();
		void requestNutritionist();
		void scheduleTime();
		~RegisteredUser();
};
