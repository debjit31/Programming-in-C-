#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Movie{
    private:
        string name;
        string format;
        string language;
        string venue;
        int duration;
    public:
        Movie(string x, string y, string z, string b, int a)
        {
            name=x;
            format=y;
            language=z;
            venue = b;
            duration=a;
        }
        Movie(){
            
        }
        string getName(){
            return name;
        }
        string getFormat(){
            return format;
        }
        string getLanguage(){
            return language;
        }
        string getVenue(){
            return venue;
        }
        int getDuration(){
            return duration ;
        }
};
int main(){
    
    Movie arr[10];
    int i = 0;
    while(1){
        int ch;
        cout << "Do you want to add movies ?:- Press 1 for Yes  for No. ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter the name of the movie :- ";
            string name;
            getline(cin, name);
            cout << "Enter the movie format :- ";
            string format;
            getline(cin, format);
            //arr[i] = m1("Fury", "2D","English","PVR:Avani Mall", 2);
        }
    }





   /*Movie m1("Fury", "2D","English","PVR:Avani Mall", 2);
   cout << m1.getName() << " " << m1.getDuration() << "hrs" << " " << m1.getFormat() << " " << m1.getVenue() << " " << m1.getLanguage() << "\n"; */
}