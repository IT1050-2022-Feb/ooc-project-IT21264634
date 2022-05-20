//Aggregation with fitnessPlans
//Association with Administrator
//Association with RegisteredUser

#pragma once
#include "Administrator.h"
#include "RegisteredUser.h"

class FitnessTrainers
{
	private:
		char t_name[20];
		char t_email[50];
		int t_id;
		char t_qualification[100];
		char t_address[100];
		Administrator *admini;
		RegisteredUser *Reg[10];
	public:
		FitnessTrainers();
		FitnessTrainers(char trainerName[],char trainerEmail[],int trainerId,char trainerQualification[],char trainerAddress[], Administrator *admin);
		void displayDetails();
		void enroll();
		void createProfile();
		void uploadVideos();
		void addRegisteredUser( RegisteredUser *r);
		~FitnessTrainers();
};
