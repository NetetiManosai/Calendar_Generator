#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// Function to check if a year is a leap year
bool isleapyear(int year)
{
    return (year%4==0&&year%100!=0)||(year%400==0);
}
// Function to get the number of days in a month
int daysinmonth(int month,int year)
{
    switch(month)
    {
        case 1:return 31;//January
        case 2:return isleapyear(year)?29:28;//February
        case 3:return 31;//March
        case 4:return 30;//April
        case 5:return 31;//May
        case 6:return 30;//June
        case 7:return 31;//July
        case 8:return 31;//August
        case 9:return 30;//September
        case 10:return 31;//October
        case 11:return 30;//November
        case 12:return 31;//December
        default:return 0;
    }
}
//Function to get the day of the week for January 1st of the given year
int firstdayofyear(int year)
{
    int y=year-(14-1)/12;
    int x=y+y/4-y/100+y/400;
    int m=1+12*((14-1)/12)-2;
    int d=(1+x+(31*m)/12)%7;
    return d;
}
//Function to print the calendar for a given year
void prtcalendar(int year)
{
    string months[]=
    {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
    int dayInmonth,startDay;
    startDay=firstdayofyear(year);
    for(int month=1;month<= 12;month++)
    {
        dayInmonth=daysinmonth(month,year);
        cout<<"\n  ------------"<<months[month-1]<<"-------------\n";
        cout<<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
        // Print spaces for the first day of the month
        for(int i=0;i<startDay;i++)
        {
            cout<<"     ";
        }
        // Print days of the month
        for(int day=1;day<=dayInmonth;day++)
        {
            cout<<setw(5)<<day;
            if(++startDay>6)
            {
                startDay=0;
                cout<<endl;
            }
        }
        if(startDay!=0)
        {
            cout<<endl;
        }
    }
}
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"\nCalendar for the year "<<year<<":\n";
    prtcalendar(year);
    return 0;
}
