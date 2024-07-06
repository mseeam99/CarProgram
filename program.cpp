/*
clear && g++ -o exe program.cpp && ./exe
*/

# include <iostream>
using namespace std;

struct previousOwnerDetails {
    string userName         ;
    string userAddress      ;
    int yearUsedByUser      ;
};

class Car{
    private:
        string Name;
        int Year;
        double Milage;
        bool PreviousAccident;
        previousOwnerDetails previousDetails;

    public:
        Car(){ 
            Name                            = "HONDA";
            Year                            = 2024;
            Milage                          = 0.00;
            PreviousAccident                = false;
            previousDetails.userName        = "-----  NOT AVAILABLE  -----";
            previousDetails.userAddress     = "-----  NOT AVAILABLE  -----";
            previousDetails.yearUsedByUser  = 0;
        }

        Car(string r_name, int r_year, double r_milage , bool r_previousAccident, string userName, string address, int usedYear){ 
            Name                            = r_name;
            Year                            = r_year;
            Milage                          = r_milage;
            PreviousAccident                = r_previousAccident;
            previousDetails.userName        = userName;
            previousDetails.userAddress     = address;
            previousDetails.yearUsedByUser  = usedYear;
        }

        void setName(string name){
            Name = name;
        }

        void setYear(int year){
            Year = year;
        }

        void setMilage(double milage){
            Milage = milage;
        }

        void setPreviousAccident(bool previousAccident){
            PreviousAccident = previousAccident;
        }

        void setUserName(string userName){
            previousDetails.userName = userName;
        }

        void setUserAddress(string userAddress){
            previousDetails.userAddress = userAddress;
        }

        void setUsedYear(int usedYear){
            previousDetails.yearUsedByUser = usedYear;
        }

        string getName(){
            return Name;
        }

        int getYear(){
            return Year;
        }

        double getMilage(){
            return Milage;
        }

        bool getPreviousAccident(){
            return PreviousAccident;
        }

        string getUserName(){
            return previousDetails.userName;
        }

        string getUserAddress(){
            return previousDetails.userAddress;
        }

        int getUsedYear(){
            return previousDetails.yearUsedByUser;
        }

        double getCurrentPrize(){

            int finalPrize = 0;

            if (Name == "HONDA"){
                finalPrize+=10000;
            }else if (Name == "CAMRY"){
                finalPrize+=9000;
            }else if (Name == "CIVIC"){
                finalPrize+=8000;
            }else if (Name == "TOYOTA"){
                finalPrize+=7000;
            }else if (Name == "BMW"){
                finalPrize+=6000;
            }else{
                finalPrize+=3000;
            }

            if (Year >= 2010){
                finalPrize+=5000;
            }else{
                finalPrize+=1000;
            }

            if (Milage >= 50000){
                finalPrize+=1000;
            }else{
                finalPrize+=5000;
            }

            if (PreviousAccident == true){
                finalPrize/=2;
            }else{
                finalPrize = finalPrize;
            }

            return finalPrize;
        }
};

int main(){

    cout<<"PROGRAM STARTED.........."<<endl;
    cout<<endl;

    Car objectOne;

    objectOne.setName("CAMRY");
    objectOne.setYear(2000);
    objectOne.setMilage(30000);
    objectOne.setPreviousAccident(true);
    objectOne.setUserName("NIPA");
    objectOne.setUserAddress("SAVAR");
    objectOne.setUsedYear(10);
    

    cout<<"CAR NAME             : "<<objectOne.getName()<<endl;
    cout<<"CAR YEAR             : "<<objectOne.getYear()<<endl;
    cout<<"CAR MILAGE           : "<<objectOne.getMilage()<<endl;
    cout<<"CAR PREVIOUS ACCIDENT: "<<objectOne.getPreviousAccident()<<endl;
    cout<<"CAR CURRENT PRICE    : "<<objectOne.getCurrentPrize()<<endl;
    cout<<"CAR USER NAME        : "<<objectOne.getUserName()<<endl;
    cout<<"CAR USER ADDRESS     : "<<objectOne.getUserAddress()<<endl;
    cout<<"CAR USER USEDYEAR    : "<<objectOne.getUsedYear()<<endl;
    
    cout<<endl;
    Car objectTwo;
    
    objectTwo.setName("BMW");
    objectTwo.setYear(2000);
    objectTwo.setMilage(0.0);
    objectTwo.setPreviousAccident(false);

    cout<<"CAR NAME             : "<<objectTwo.getName()<<endl;
    cout<<"CAR YEAR             : "<<objectTwo.getYear()<<endl;
    cout<<"CAR MILAGE           : "<<objectTwo.getMilage()<<endl;
    cout<<"CAR PREVIOUS ACCIDENT: "<<objectTwo.getPreviousAccident()<<endl;
    cout<<"CAR CURRENT PRICE    : "<<objectTwo.getCurrentPrize()<<endl;
    cout<<"CAR USER NAME        : "<<objectTwo.getUserName()<<endl;
    cout<<"CAR USER ADDRESS     : "<<objectTwo.getUserAddress()<<endl;
    cout<<"CAR USER USEDYEAR    : "<<objectTwo.getUsedYear()<<endl;

    cout<<endl;
    Car objectThree;

    cout<<"CAR NAME             : "<<objectThree.getName()<<endl;
    cout<<"CAR YEAR             : "<<objectThree.getYear()<<endl;
    cout<<"CAR MILAGE           : "<<objectThree.getMilage()<<endl;
    cout<<"CAR PREVIOUS ACCIDENT: "<<objectThree.getPreviousAccident()<<endl;
    cout<<"CAR CURRENT PRICE    : "<<objectThree.getCurrentPrize()<<endl;
    cout<<"CAR USER NAME        : "<<objectThree.getUserName()<<endl;
    cout<<"CAR USER ADDRESS     : "<<objectThree.getUserAddress()<<endl;
    cout<<"CAR USER USEDYEAR    : "<<objectThree.getUsedYear()<<endl;

    return 0;

}

/*
PROGRAM STARTED..........

CAR NAME             : CAMRY
CAR YEAR             : 2000
CAR MILAGE           : 30000
CAR PREVIOUS ACCIDENT: 1
CAR CURRENT PRICE    : 7500
CAR USER NAME        : NIPA
CAR USER ADDRESS     : SAVAR
CAR USER USEDYEAR    : 10

CAR NAME             : BMW
CAR YEAR             : 2000
CAR MILAGE           : 0
CAR PREVIOUS ACCIDENT: 0
CAR CURRENT PRICE    : 12000
CAR USER NAME        : -----  NOT AVAILABLE  -----
CAR USER ADDRESS     : -----  NOT AVAILABLE  -----
CAR USER USEDYEAR    : 0

CAR NAME             : HONDA
CAR YEAR             : 2024
CAR MILAGE           : 0
CAR PREVIOUS ACCIDENT: 0
CAR CURRENT PRICE    : 20000
CAR USER NAME        : -----  NOT AVAILABLE  -----
CAR USER ADDRESS     : -----  NOT AVAILABLE  -----
CAR USER USEDYEAR    : 0
*/

