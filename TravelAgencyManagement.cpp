/*
Name: Jainam Barbhaya
Subject: Mini Project(C++)
Topic: Travel Agency Management
*/

#include <iostream>
#include <fstream>
using namespace std;

class passengerInfo // Class to take input of passengers details
{
    private:
        string firstName, lastName;
        char gender;
        char input; // To take details weather the women is pregnant or no 
        int age;

    public:
        void userInput();
        void userOutput();
};
void passengerInfo :: userInput()  
{                                     
    cout << "Enter Name: ";
    cin >> firstName;
    cout << "Enter Surname: ";
    cin >> lastName;

    cout << "Enter Gender(M/F): ";
    cin >> gender;

    if(gender == 'F')
    {
        cout << "Is The Women Pregnant?(Y/N): ";
        cin >> input;
    }
    cout << "Enter Age: ";
    cin >> age;
}
void passengerInfo :: userOutput()
{   
     
    if(gender == 'F')  // Females
    {
        if(input == 'Y') // Females(Pregnent)
        {
            if(age >= 18)
            {
                cout << "Name: " << firstName << " " << lastName << endl;
                cout << "Gender: " << gender << "(Pregnant)" << endl;
                cout << "Age: " << age << "(Adult)" << endl;
            }
        }
        else if(input == 'N')  // Females(Not-Pregnant)
        {
            if(age > 1 && age < 18)
            {
                cout << "Name: " << firstName << " " << lastName << endl;
                cout << "Gender: " << gender << endl;
                cout << "Age: " << age << "(Child)" << endl;
            }
            else
            {
                cout << "Name: " << firstName << " " << lastName << endl;
                cout << "Gender: " << gender << endl;
                cout << "Age: " << age << "(Infant)" << endl;
            }
        }
    }
    else if(gender == 'M') // Males
    {
        if(age > 0 && age <= 1)
        {
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << "(Infant)" << endl;
        }
        else if(age >= 2 && age <= 18)
        {
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << "(Child)" << endl;
        }
        else
        {
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << "(Adult)" << endl;
        }
    }
}

class travelMode: public passengerInfo
{
    protected:
        int selectMode;                                                        // Ask User To Enter The Mode Of Travelling
        int roadSelect, vehicleType;                                           // 'roadSelect' To Select The Mode Of Travelling By Road
        char location[50], destination[50];                                    //location and destination of user
        int dateOfTravelling, monthOfTravelling, yearOfTravelling;             //Select the start date  date
        int end_dateOfTravelling, end_monthOfTravelling, end_yearOfTravelling; //Select the start date  date
        char cargo;                                                            //Cargo for ship input
        int weight;                                                            //weight of the cargo input
        int domestic_flightName, international_flightName;
        int numberOfDays;
    
    public:
        void modeInput();
        void modeOutput();
};

void travelMode :: modeInput()
{
    cout << "\n\n****** CHOICE ******\n\n";
    cout << "1. Roadways" << endl;
    cout << "2. Waterways" << endl;
    cout << "3. Airways" << endl;
    cout << "Please Enter Your Choice For Bookings: ";
    cin >> selectMode;
    cout << "\n";

    if(selectMode == 1)     // For Roadways
    {
        cout << "Do You Want To Travel?" << endl;
        cout << "1. Inter-State" << endl;
        cout << "2. Intra-State" << endl;
        cout << "Enter Choice: ";
        cin >> roadSelect;
        cout << "\n";

        cout << "Type Of Vehicle?" << endl;
        cout << "1. 4 Seater" << endl;
        cout << "2. 6 Seater" << endl;
        cout << "3. 8 Seater" << endl;
        cout << "4. Mini-Bus" << endl;
        cout << "5. Bus" << endl;
        cout << "Enter Choice: ";
        cin >> vehicleType;
        cout << "\n";

        cout << "Please Enter Your Locaton: ";
        cin >> location;
        cout << "Please Select Your Destination: ";
        cin >> destination;
        cout << "\n";

        cout << "Please Enter Start Date Of Travelling: ";
        cin >> dateOfTravelling >> monthOfTravelling >> yearOfTravelling;
        cout << "Please Enter Last Date Of Travelling: ";
        cin >> end_dateOfTravelling >> end_monthOfTravelling >> end_yearOfTravelling;
        numberOfDays = end_dateOfTravelling - dateOfTravelling;
        cout << "\n";
    }
    else if(selectMode == 2)    // For Waterways
    {
        cout << "Please Select The Mode Of Travel: " << endl;
        cout << "1. Domestic" << endl;
        cout << "2. International" << endl;
        cout << "Enter Choice: ";
        cin >> roadSelect;
        cout << "\n";

        cout << "Please Enter Your Locaton: ";
        cin >> location;
        cout << "Please Select Your Destination: ";
        cin >> destination;
        cout << "\n";

        cout << "Is There Any Cargo?(Y/N): ";
        cin >> cargo;
        if(cargo == 'Y')
        {
            cout << "Enter The approx. Weight Of The Cargo(kg): ";
            cin >> weight;
        }
        cout << "Please Enter Start Date Of Travelling: ";
        cin >> dateOfTravelling >> monthOfTravelling >> yearOfTravelling;
        cout << "Please Enter Last Date Of Travelling: ";
        cin >> end_dateOfTravelling >> end_monthOfTravelling >> end_yearOfTravelling;
        cout << "\n";
    }
    else  // For Airways
    {
        cout << "Please Select The Mode Of Travel:" << endl;
        cout << "1. Domestic  "<< endl;
        cout << "2. International" << endl;
        cout << "Enter Choice: ";
        cin >> roadSelect;
        cout << "\n";

        if(roadSelect == 1)
        {
            cout << "Enter The Name Of The Flight: " << endl;
            cout << "1. Air India" << endl;
            cout << "2. Indigo" << endl;
            cout << "3. SpiceJet" << endl;
            cout << "4. Vistara Airlines" << endl;
            cout << "Enter Choice: ";
            cin >> domestic_flightName;
            cout << "\n";

            cout << "Please Enter Your Locaton: ";
            cin >> location;
            cout << "Please Select Your Destination: ";
            cin >> destination;
            cout << "\n";

            cout << "Please Enter Start Date Of Travelling: ";
            cin >> dateOfTravelling >> monthOfTravelling >> yearOfTravelling;
            cout << "Please Enter Last Date Of Travelling: ";
            cin >> end_dateOfTravelling >> end_monthOfTravelling >> end_yearOfTravelling;
            numberOfDays = end_dateOfTravelling - dateOfTravelling;
            cout << "\n";
        }
        else
        {
            cout << "Enter The Name Of The Flight: " << endl;
            cout << "1. Air Asia Airlines" << endl;
            cout << "2. Air India Express" << endl;
            cout << "3. Flydubai Airlines" << endl;
            cout << "4. Kuwait Airways" << endl;
            cout << "Enter Choice: ";
            cin >> international_flightName;
            cout << "\n";

            cout << "Please Enter Your Locaton: ";
            cin >> location;
            cout << "Please Select Your Destination: ";
            cin >> destination;
            cout << "\n";

            cout << "Please Enter Start Date Of Travelling: ";
            cin >> dateOfTravelling >> monthOfTravelling >> yearOfTravelling;
            cout << "Please Enter Last Date Of Travelling: ";
            cin >> end_dateOfTravelling >> end_monthOfTravelling >> end_yearOfTravelling;
            numberOfDays = end_dateOfTravelling - dateOfTravelling;
            cout << "\n";
        }
    }
}
void travelMode :: modeOutput()
{
    if(selectMode == 1)                                 // Roadways
    {
        if(roadSelect == 1)                             // Inter-state
        {
            if(vehicleType == 1)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType << "(4 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (500 * numberOfDays) + 1000 << endl;
            }
            else if(vehicleType == 2)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(6 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (1000 * numberOfDays) + 1000 << endl;
            }
            else if(vehicleType == 3)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(8 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (1500 * numberOfDays) + 1000 << endl;
            }
            else if(vehicleType == 4)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(Mini-Bus)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2000 * numberOfDays) + 1000 << endl;
            }
            else
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(Bus)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2500 * numberOfDays) + 1000 << endl;
            }
        }
        else                                            // Intra-state
        {
           if(vehicleType == 1)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType << "(4 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (1000 * numberOfDays) + 2000 << endl;
            }
            else if(vehicleType == 2)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(6 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (1500 * numberOfDays) + 2000 << endl;
            }
            else if(vehicleType == 3)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(8 Seater)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2000 * numberOfDays) + 2000 << endl;
            }
            else if(vehicleType == 4)
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(Mini-Bus)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2500 * numberOfDays) + 2000 << endl;
            }
            else
            {
                cout << "\n###### Roadways Inter-State ######\n";
                cout << "Vehicle: " << vehicleType <<"(Bus)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (3000 * numberOfDays) + 2000 << endl;
            } 
        }
    }
    else if(selectMode == 2) // Waterways
    {  
        if(roadSelect == 1)
        {
            if(cargo == 'Y')
            {
                cout << "\n###### Waterways Domestic ######\n";
                cout << "Cargo Weight: " << cargo << endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (50 * weight) + 1000 << endl;
            }
            else
            {
                cout << "\n###### Waterways Domestic ######\n";
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << 1050 << endl;
            }
        }
        else
        {
            if(cargo == 'Y')
            {
                cout << "\n###### Waterways International ######\n";
                cout << "Cargo Weight: " << cargo << endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (500 * weight) + 2000 << endl;
            }
            else
            {
                cout << "\n###### Waterways International ######\n";
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << 2500 << endl;
            }
        }

    }
    else   // Airways
    {
        if(roadSelect == 1)
        {
            if(domestic_flightName == 1)
            {
                cout << "\n###### Airways Domestic ######\n";
                cout << "Flight Name: " << domestic_flightName <<"(Air India)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else if(domestic_flightName == 2)
            {
                cout << "\n###### Airways Domestic ######\n";
                cout << "Flight Name: " << domestic_flightName <<"(Indigo)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (2500 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else if(domestic_flightName == 3)
            {
                cout << "\n###### Airways Domestic ######\n";
                cout << "Flight Name: " << domestic_flightName <<"(SpiceJet)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (3000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else
            {
                cout << "\n###### Airways Domestic ######\n";
                cout << "Flight Name: " << domestic_flightName << "(Vistara Airlines)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (3500 * numberOfDays) + 1000 <<" per person"<< endl;
            }

        }
        else
        {
            if(international_flightName == 1)
            {
                cout << "\n###### Airways International ######\n";
                cout << "Flight Name: " << international_flightName << "(Air Asia Airlines)" << endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (10000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else if(international_flightName == 2)
            {
                cout << "\n###### Airways International ######\n";
                cout << "Flight Name: " << international_flightName <<"(Air India Express)" << endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (15000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else if(international_flightName == 3)
            {
                cout << "\n###### Airways International ######\n";
                cout << "Flight Name: " << international_flightName <<"(Flydubai Airlines)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (20000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
            else
            {
                cout << "\n###### Airways International ######\n";
                cout << "Flight Name: " << international_flightName <<"(Kuwait Airlines)"<< endl;
                cout << "Your Location: " << location << endl;
                cout << "Destination: " << destination << endl;
                cout << "Start Date: " << dateOfTravelling << "-" << monthOfTravelling << "-" << yearOfTravelling << endl;
                cout << "End Date: " << end_dateOfTravelling << "-" << end_monthOfTravelling << "-" << end_yearOfTravelling << endl;
                cout << "Total Cost: " << (25000 * numberOfDays) + 1000 <<" per person"<< endl;
            }
        }
    }
}
int main()
{
    int n, i;    // 'n' To take total number of passengers ; 'i' used in for loop
    char bookingConfirmation;
    int paymentMode;
    cout << "\n****** Welcome To Travel Agency ******\n\n";

    cout << "Enter Total Passengers: ";
    cin >> n;

    passengerInfo pI[n];  // Object declared for passengerInfo  
    travelMode tM;  //Object Declared for mode of travelling                                        

    for(i=0; i<n; i++)
    {
        cout << "\n##### PASSENGER " << i+1 << " INFORMATION #####" << endl;
        pI[i].userInput();
    }
    tM.modeInput();

    cout << "********** PLEASE CONFIRM YOUR DETAILS **********\n\n";
    for(i=0; i<n; i++)
    {
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
        cout << "\n##### PASSENGERS " << i+1 << " #####\n" << endl;
        pI[i].userOutput();
        tM.modeOutput();
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
    }

    cout << "Are You Sure You Want To Proceed For Payments?(Y/N): ";
    cin >> bookingConfirmation;

    if(bookingConfirmation == 'Y')
    {
        cout << "\nThank You For Confirming!!, Please Proceed Further For Payments\n\n" << endl;

        cout << "1. Credit Card\n";
        cout << "2. Debit Card\n";
        cout << "3. UPI\n";
        cout << "Enter Choice: ";
        cin >> paymentMode;
    }
    else
    {
        exit(0);
    }
    int ccn; // Credit Card Number
    int expDate; //credit card expiry date
    int cvv; //CVV Number
    int upiID; //UPI ID

    switch (paymentMode)
    {
    case 1:
    {
        cout << "Enter Your Credit Card Number: ";
        cin >> ccn;
        cout << "Please Enter Card Expiry Date(dd-mm-yyyy): ";
        cin >> expDate;
        cout << "Please Enter Your CVV Number: ";
        cin >> cvv;
        break;
    }
    case 2:
    {
        cout << "Enter Your Credit Card Number: ";
        cin >> ccn;
        cout << "Please Enter Card Expiry Date(dd-mm-yyyy): ";
        cin >> expDate;
        cout << "Please Enter Your CVV Number: ";
        cin >> cvv;
        break;
    }
    case 3:
    {
        cout << "Enter Your UPI ID: ";
        cin >> upiID;
        break;
    }
    default:
        cout << "Please Select A Valid Payment Option\n";
        break;
    }

    cout << "\n\n$$$$$$$$$$ TICKET CONFIRMED $$$$$$$$$$\n\n";

    for(i=0; i<n; i++)
    {
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
        cout << "\n##### PASSENGERS " << i+1 << " #####\n" << endl;
        pI[i].userOutput();
        tM.modeOutput();
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
    }

    return 0;
}