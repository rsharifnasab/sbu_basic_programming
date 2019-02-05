#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int x_max,y_max;
    cin >> y_max >> x_max;
    char map[x_max][y_max];
    //getchar(); 
    for(int y=0;y<y_max;y++)
    {   
        for(int x=0;x<x_max;x++)
            cin >> map[x][y] ; 
    }

    int s_x,s_y;
    cin >> s_x>>s_y;

    while(true)
    {
        cerr <<"solder is in :"<< s_y<< " " << s_x << endl;
        if(s_x+1==x_max&&s_y+1==y_max) { cout << "Finish" << endl; return 0; }
         if(map[s_x][s_y] == 'X' ){ cout << "Soldier is Killed" << endl; return 0;}
        string order;
        cin >> order;
        if(order=="U")
        {
            int y_temp = s_y -1;
            if(y_temp >= 0) s_y = y_temp;
            else cout << "Invalid" << endl;
            if(map[s_x][s_y] == 'X' ){ cout << "Soldier is Killed" << endl; return 0;}
            
        }
        else if(order=="D")
        {
            int y_temp = s_y + 1;
            if(y_temp < y_max ) s_y = y_temp;
            else cout << "Invalid" << endl;
            if(map[s_x][s_y] == 'X' ){ cout << "Soldier is Killed" << endl; return 0;}
        }

        else if(order=="L")
        {
            int x_temp = s_x -1;
            if(x_temp >= 0) s_x = x_temp;
            else cout << "Invalid" << endl;
            if(map[s_x][s_y] == 'X' ){ cout << "Soldier is Killed" << endl; return 0;}
        }
        else if(order=="R")
        {
            int x_temp = s_x + 1;
            if(x_temp < x_max ) s_x = x_temp;
            else cout << "Invalid" << endl;
            if(map[s_x][s_y] == 'X' ){ cout << "Soldier is Killed" << endl; return 0;}
        }
        
        else if(order=="Soldier")
        {
            cout << s_y << " " << s_x << endl; // edited
        }
        
        else if(order=="Map")
        {
            for(int y=0;y<y_max;y++)
            {
                for(int x=0;x<x_max;x++)
                    cout <<map[x][y]; 
                cout<< endl;
            }
        }


    }
     
 
}