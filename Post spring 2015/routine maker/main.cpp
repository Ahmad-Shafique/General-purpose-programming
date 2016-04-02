
///PROJECT INCOMPLETE


#include <iostream>

using namespace std;

#define minute 1
#define hour (60*minute)

float prayer_time[5];

struct subject_and_time
{
    string name;
    float alotted_time;
};

void assign_prayer_time()
{
    cout<<"\nEnter the different prayer timings :\n";
    cout<<"\nEnter Fajr prayer azan time\n";
    cin>>prayer_time[0];
    cout<<"\nEnter Duhr prayer azan time\n";
    cin>>prayer_time[1];
    cout<<"\nEnter Asr prayer azan time\n";
    cin>>prayer_time[2];
    cout<<"\nEnter Maghrib prayer azan time\n";
    cin>>prayer_time[3];
    cout<<"\nEnter Isha prayer azan time\n";
    cin>>prayer_time[4];
}



/*void assign_different_time()
{
    assign_prayer_time();
}*/

float calc_free_time(float total_free_time)
{
    ;
}

/*float divide_free_time(int no_of_subjects)
{
    return (calc_free_time()/no_of_subjects);
}*/

void create_routine()
{

    cout<<"\nEnter the free time you would like\n";

}


int main()
{
    //assign_prayer_time();
    /*cout<<"\nEnter the no. of subjects you would like to study :\n"
    int no_subjects;
    cin>>no_subjects;
    */
    cout<<minute<<endl<<hour;
    return 0;
}

