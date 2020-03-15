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
        void takeInput(string x, string y, string z, string b, int a)
        {
            name=x;
            format=y;
            language=z;
            venue = b;
            duration=a;
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
    int ch;
    while(1)
    {
        cout << "Do you want to add movies ?:- Press 1 for Yes  for No. ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter the name of the movie :- ";
            string name;
            getline(cin, name);
            cin.ignore();
            cout << "Enter the movie format :- ";
            string format;
            getline(cin, format);
            cin.ignore();
            cout << "Enter language :- ";
            string language;
            getline(cin, language);
            cin.ignore();
            cout << "Enter duration :- ";
            string duration;
            getline(cin, duration);
            cin.ignore();
            cout << "Enter venue :- ";
            string venue;
            getline(cin, venue);
            cin.ignore();
            arr[i++].takeInput(name, format,language, venue, duration);
        }else if(ch==2)
            break;
        }
        
    }





   /*Movie m1("Fury", "2D","English","PVR:Avani Mall", 2);
   cout << m1.getName() << " " << m1.getDuration() << "hrs" << " " << m1.getFormat() << " " << m1.getVenue() << " " << m1.getLanguage() << "\n"; */
}