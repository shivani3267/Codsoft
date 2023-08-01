  /*  Guessing the number game  */
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    cout<<"\t\t\t\t..........................GUESSING THE NUMBER GAME.........................."<<endl;
    cout<<"\n\t\t********************************WELCOME*****************************************"<<endl;
    srand((unsigned int) time(NULL));
    int number=rand()%100;
    int guess_number=0;
    do
    {
        cout<<"Enter your guess number(1-99):";
        cin>>guess_number;
        if(guess_number > number)
       {
            cout<<"Too high! \n"<<"Try Again."<<endl;
       }
        else if(guess_number < number)
        {
            cout<<"Too low! \n"<<"Try Again"<<endl;
        }
        else
        {
            cout<<"Congrats! You Won"<<endl;
        }
    } while (guess_number!=number);
    
    return 0;
}
