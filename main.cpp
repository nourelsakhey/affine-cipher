// FCI - programming 1 - 2018 - assignment 2.
// program name : Affine cipher .cpp.
// last modification 1/2/2018.
// Author 1 and ID and group: Nour el hoda khaled 20170320 12.
// Author 1 and ID and group: Mai rady hassan 20170302 12.
// Author 1 and ID and group: Androew emad aziz 20170061 12.
// Teaching assistant : khadeaga khaled and dina mahmoud.
// purpose : to cipher and decipher a message.


#include <iostream>

using namespace std;

int main()
{
     while (true){
    float retroactivepay;
    float monthlysalary;
    float annualsalary;
    float previousannualsalary;
    const float payincrease=0.076;
    cout<<"the previous annual salary is :";
    cin>>previousannualsalary;
    retroactivepay = (previousannualsalary/2)*payincrease;
    annualsalary = (previousannualsalary)+retroactivepay;
    monthlysalary=annualsalary/12;
    cout<<"the retroactive pay is :"<<retroactivepay <<endl<<"the annual salary is :"<<annualsalary<<endl <<"the monthly salary is :"<<monthlysalary<<endl;
    }
    return 0;
}
