#include <iostream>						//CLINIC SYSTEM MANAGEMENT by SYED
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
	char name [50], appointmentType[10], deliveryOrNo, address[40],medicineType[20], month [20],checkupType[32];
	double servicePrice, totalPrice, cost, newPrice;
	int typeOfService, choice, quantity, date, time;
	
	cout<<"****KLINIK JANNAH SDN BHD****\n";
	cout<<"         Welcome!!!\n";
	
	cout<<"Type '1' to to set an appointment, \nType '2' to purchase a medicine:\n"; //To choose either to make appointment or for the pharmacy
	cin>>typeOfService; //Enter 1 or 2, other == error

	switch (typeOfService)//To compare either the user wants '1' for appoiintment or '2' for pharmacy
	{
		case 1:
		{
			cout<<"\n**TYPE OF APPOINTMENTS:\n";
			cout<<"|NUM.|  TYPE                     |CODE|\n";
			cout<<"|  1.|  Medical checkup.         | MC |\n";
			cout<<"|  2.|  Consultation.            | C  |\n";
			cout<<"|  3.|  Orthodontic.             | O  |\n";
			cout<<"|  4.|  Chronic Desease Treatment| CDT|\n";
			
			
			cout<<"\nEnter the type of appointment (ENTER THE CODE IN CAPITAL):\n ";
			cin>>appointmentType;//User inputs either MC,C,O,CDT
			
			cout<<"Please enter your name:\n ";
			cin.ignore();
			cin.getline(name, 50);//Enter the patient name
			
			
			if (strcmp(appointmentType, "MC")== 0)//compare for Medical checkup option
			{
				cout<<"\nCHOOSE THE TYPE OF MEDICAL CHECKUP (ENTER THE NAME)\n";
				cout<<"1. Pre Employment medical checkup\n";
				cout<<"2. Student medical checkup\n";
				cout<<"3. Routine medical checkup\n";
				cout<<"4. X RAY\n";
			
				
				
				cin.getline(checkupType, 32);//Enter the type of medical checkup you want, enter the full name
				
				cout<<"Enter the date and month (month in letter) for the appointment:\n EXAMPLE :22 OCTOBER\n";
				cin>>date>>month;//Enter the date for the appointment 
				
				
				if (!(strcmp(month, "JANUARY") == 0 || strcmp(month, "FEBRUARY") == 0 || strcmp(month, "MARCH") == 0 || strcmp(month, "APRIL") == 0 || strcmp(month, "MAY") == 0 || strcmp(month, "JUNE") == 0 || strcmp(month, "JULY") == 0 || strcmp(month, "AUGUST") == 0 || strcmp(month, "SEPTEMBER") == 0 || strcmp(month, "OCTOBER") == 0 || strcmp(month, "NOVEMBER") == 0 || strcmp(month, "DECEMBER") == 0))				
				{
					cout<<"\nCheck your spelling or enter a valid month\n";//error if wrong spelling of the month
					return 0;
				}	
				
				cout<<"Enter appointment time i n 24h format (enter from 1000 to 1800):\n";
				cin>>time;//Enter the desired appointmeent time in 24h format,
				
				if (time < 1000 || time > 1800)//comparing to make sure the user enters the time in their opening hours
				{
					cout<<"Please enter the time according to the business hours.\n";
					return 0;
				}
				
				cout<<"\nCongrats, you have created an appointment!!!\n";
			}
		
			
			else if (strcmp(appointmentType, "C")== 0)//comparing for Consulting option
			{
				cout<<"\nEnter the date and month (month in letter and CAPITALIZED) for the appointment:\nEXAMPLE :22 MARCH\n ";
				cin>>date>>month;//Enter the date of appointment
				
				if (!(strcmp(month, "JANUARY") == 0 || strcmp(month, "FEBRUARY") == 0 || strcmp(month, "MARCH") == 0 || strcmp(month, "APRIL") == 0 || strcmp(month, "MAY") == 0 || strcmp(month, "JUNE") == 0 || strcmp(month, "JULY") == 0 || strcmp(month, "AUGUST") == 0 || strcmp(month, "SEPTEMBER") == 0 || strcmp(month, "OCTOBER") == 0 || strcmp(month, "NOVEMBER") == 0 || strcmp(month, "DECEMBER") == 0))				
				{
					cout<<"\nCheck your spelling or enter a valid month\n";//^error if wrong spelling of the month
					return 0;
				}	
				
				cout<<"\nEnter appointment time i n 24h format (enter from 1000 to 1800):\n";
				cin>>time;//Enter the desired appointmeent time in 24h format,
				
				
				if (time < 1000 || time > 1800)//comparing to make sure the user enters the time in their opening hours
				{
					cout<<"Please enter the time according to the business hours.\n";
					return 0;
				}
				
				cout<<"\nCongrats, you have created an appointment!!!\n";
			}
							
			else if (strcmp(appointmentType, "CDT")== 0)//to compare for Chronic desease treatment
			{
				cout<<"\nCHOOSE THE TYPE OF TREATMENT:(ENTER THE NAME CORRECTLY)\n";
				cout<<"1. Hypertension\n";
				cout<<"2. Diabetes\n";
				cout<<"3. Heart Desease\n";
				cout<<"4. Asthma\n";
				cout<<"5. Dsylipidamea (colestrol)\n";
				cout<<"6. Eczema\n";
				
			
				cin.getline(checkupType, 32);//inputs the type of treatment needed(full name)
				
				
				cout<<"\nEnter the date and month (month in letter) for the appointment:\n EXAMPLE :22 JUNE\n";
				cin>>date>>month;//Enter the date of appointment
				
				if (!(strcmp(month, "JANUARY") == 0 || strcmp(month, "FEBRUARY") == 0 || strcmp(month, "MARCH") == 0 || strcmp(month, "APRIL") == 0 || strcmp(month, "MAY") == 0 || strcmp(month, "JUNE") == 0 || strcmp(month, "JULY") == 0 || strcmp(month, "AUGUST") == 0 || strcmp(month, "SEPTEMBER") == 0 || strcmp(month, "OCTOBER") == 0 || strcmp(month, "NOVEMBER") == 0 || strcmp(month, "DECEMBER") == 0))				
				{
					cout<<"\nCheck your spelling or enter a valid month\n";//^error if wrong spelling of the month
					return 0;
				}	
				
				cout<<"\nEnter appointment time i n 24h format (enter from 1000 to 1800):\n";
				cin>>time;//Enter the desired appointmeent time in 24h format,
				
				
				if (time < 1000 || time > 1800)//comparing to make sure the user enters the time in their opening hours
				{
					cout<<"Please enter the time according to the business hours.\n";//error message if time 
					return 0;
				}
				
				cout<<"\nCongrats, you have created an appointment!!!\n";
			}
			
			else if (strcmp(appointmentType, "O")== 0)//For Orthodontic treatment
			{
				cout<<"\n**DEPARTMENT OF ORTHDENTIC****\n";
				cout<<"TYPE THE ORTHODENTIC TREATMENT:\n";
				cout<<"1.Dental Check-up\n";
				cout<<"2.Braces\n";
				cout<<"3.Scalling and polishing\n";
				cout<<"4.Composite filling\n";
				cout<<"5.Tooth extraction\n";
				
				
				cin.getline( checkupType, 32);//input the type of checkup
				
				cout<<"\nEnter the date and month (month in letter) for the appointment:\n EXAMPLE :22 MAY\n";
				cin>>date>>month;
				
				if (!(strcmp(month, "JANUARY") == 0 || strcmp(month, "FEBRUARY") == 0 || strcmp(month, "MARCH") == 0 || strcmp(month, "APRIL") == 0 || strcmp(month, "MAY") == 0 || strcmp(month, "JUNE") == 0 || strcmp(month, "JULY") == 0 || strcmp(month, "AUGUST") == 0 || strcmp(month, "SEPTEMBER") == 0 || strcmp(month, "OCTOBER") == 0 || strcmp(month, "NOVEMBER") == 0 || strcmp(month, "DECEMBER") == 0))				
				{
					cout<"\nCheck your spelling or enter a valid month\n";//^error if wrong spelling of the month
					return 0;
				}	
				
				cout<<"\nEnter appointment time i n 24h format (enter from 1000 to 1800):\n";//error message
				cin>>time;
				
				
				if (time < 1000 || time > 1800)//comparing to make sure the user enters the time in their opening hours
				{
					cout<<"Please enter the time according to the business hours.\n";//error message
					return 0;
				}
				
				cout<<"\nCongrats, you have created an appointment!!!\n";
				
			}
			
			else
			{
				cout<<"\n\nEnter a valid code!!";//error if the user enters the wrong code (MC, C, CDT, O
				return 0;
			}
			
			cout<<"\n\n======================================\n";//print the appointment card with all information
			cout<<"        KLINIK JANNAH                 \n";	
			cout<<"*******APPOINTMENT CARD***************\n\n";
			cout<<"Patient name:    "<<name<<endl;
			cout<<"Department code  "<<appointmentType<<endl;
			cout<<"appointmentType  "<<checkupType<<endl;
			cout<<"Date             "<<date<<" "<<month<<endl;
			cout<<"Time             "<<time<<endl;
			cout<<"======================================\n";
			break;//to break case 1= appointments
		}
		
		case 2://for medicine shop(pharmacy)
		{
			cout<<"TYPE OF MEDICINE:\n";
			cout<<"1. Paracetamol...... RM10\n";
			cout<<"2. Antibiotic....... RM20\n";
			cout<<"3. Antihistamine.... RM12\n";
			cout<<"4. Cough syrup...... RM15\n";
			cout<<"5. Eyedrop.......... RM11\n";
			cout<<"6. Cold and flu..... RM17\n";
			
			cout<<"Enter the type of medicine you would like to purchase\n(Enter the medicine name CORRECTLY):";
			cin.ignore();
			cin.getline(medicineType, 20);//inputs the name of medicine CORRETCLY, enter based on the shown table

			cout<<"Enter the quantity: ";
			cin>>quantity;//the quantity of medicine needed
			
			if (strcmp(medicineType, "Paracetamol")==0)
			{
				cost = 10;//cost of paracetamol
			}
						
			else if (strcmp(medicineType, "Antibiotic")==0)
			{
				cost = 20;//cost of antibiotic
			}
					
			else if (strcmp(medicineType, "Antihistamine")==0)
			{
				cost = 12;//cost of antihistamine
			}
				
					
			else if (strcmp(medicineType, "Cough syrup")==0)
			{
				cost = 13;//cost of cough syrup
				
			}
					
			else if (strcmp(medicineType, "Eyedrop")==0)
			{
				cost = 11;//cost of eyedrop
			}
				
					
			else if (strcmp(medicineType, "Cold and flu")==0)
			{
					cost = 17;//cost for cold and flu meds
			}
				
			else
			{
				cout<<"CHECK the spelling of the medicine or enter a valid medicine code.\n";//error if the medicine name is spelt wrongly
				return 0;//exit the program
			}
	
			
			totalPrice = cost * quantity;//formula to calculate the total price of medicine
			
			cout<<"Do you want to pick up or want it to be delivered to your house\n";
			cout<<"P to pick up, D to delivered (Delivery fee included)\n";
			cin>>deliveryOrNo;//Enter either P to pickup the item, or D for it to be delivered
			
			
			switch(deliveryOrNo)//comparing delivery Option
			{
				case 'D':
				{
					cout<<"A delivery charge, RM5 will be added for delivery option.\n ";//Just a statement to specify about additional fees
					cout<<"Please enter your name:\n ";
					cin.ignore();
					cin.getline(name, 50);//inputs your name
					cout<<"Enter your address:\n";
					
					cin.getline(address, 40);//inputs your address	
					
					newPrice = totalPrice + 5;//calculates the price with additional delivery fee
					
					cout<<"\n\n======================================\n";//print the reciept for the delivery
					cout<<"******KLINIK JANNAH SDN BHD**********\n";
					cout<<"     	  DETAILS                   \n";
					cout<<"Reciever name:"<<name<<"             \n";
					cout<<"Reciever address : "<<address<<"      \n";
					cout<<"  "<<medicineType<<"   "<<quantity<<"\n";
					cout<<"  RM"<<cost<<"                         \n";
					cout<<"   \nTotal price .   RM"<<totalPrice<<"\n";
					cout<<"   \nDelivery fee .           RM5.00 \n";
					cout<<"   \nTotal price .     RM"<<newPrice<<"\n";
					cout<<"   Thank you!! Please come again!!   \n";
					cout<<"======================================\n";
					break;
				}
				
				case 'P'://pickup option, no addition inputs needed.
				{
					cout<<"\n\n======================================\n";//print the reciept for pick up
					cout<<"******KLINIK JANNAH SDN BHD***********\n";
					cout<<"	\tRECIEPT\n                  \n";
					cout<<"  "<<medicineType<<"   "<<quantity<<"\n";
					cout<<"  RM"<<cost<<"                         \n";
					cout<<"   \nTotal price .   RM"<<totalPrice<<"\n";
					cout<<"   Thank you!! Please come again!!   \n";
					cout<<"======================================\n";
					break;
				}
				
				default:
				{
					cout<<"\nEnter ONLY either D or P";//error if user entered the wrong code
					return 0;
				}
			
			break;//break for the outer switch case 2, pharmacy department
			}
		
		default:
			cout<<"\nEnter ONLY either 1 for appointment or 2 for pharmacy\n";//error if user entered other number instead of 1 or 2
		}		
	}
}
