/******************************************************************************
Calculate average marks
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Defining Variables
    int phy, chem, maths;
    float avg;
    
    //taking values of input
    cout<<"Enter Physics, Chemistry, Maths Marks:";
    cin >> phy;
    cin >> chem;
    cin >> maths;
    
    //calculating output
    avg = (phy + chem + maths)/3.0;
    
    //printing output
    cout<< "Average Marks="<< avg;
    return 0;
}
