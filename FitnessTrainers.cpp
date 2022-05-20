#include "FitnessTrainers.h"
#include <cstring>

FitnessTrainers::FitnessTrainers(){
	strcpy(t_name,"");
	strcpy(t_email,"");
	t_id=0;
	strcpy(t_qualification,"");
	strcpy(t_address,"");
}

FitnessTrainers::FitnessTrainers(char trainerName[],char trainerEmail[],int trainerId,char trainerQualification[],char trainerAddress[], Administrator *admin){
	strcpy(t_name,trainerName);
	strcpy(t_email,"");
	t_id=trainerId;
	strcpy(t_qualification,trainerQualification);
	strcpy(t_address,trainerAddress);
}

void FitnessTrainers::displayDetails(){
	
}

void FitnessTrainers::enroll(){
	
}

void FitnessTrainers::uploadVideos(){
	
}

void FitnessTrainers::createProfile(){
	
}

FitnessTrainers::~FitnessTrainers(){
	cout << "Destructor runs" << endl;
}
