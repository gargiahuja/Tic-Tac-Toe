#include<iostream>
using namespace std;
char player1,player2;
char p;
bool check(char tray[3][3])
{
    if ((tray[0][0] == tray[0][1]) && (tray[0][0] == tray[0][2])) return true;
    if ((tray[1][0] == tray[1][1]) && (tray[1][0] == tray[1][2])) return true;
    if ((tray[2][0] == tray[2][1]) && (tray[2][0] == tray[2][2])) return true;
    if ((tray[0][0] == tray[1][0]) && (tray[2][0] == tray[0][0])) return true;
    if ((tray[0][1] == tray[1][1]) && (tray[2][1] == tray[0][1])) return true;
    if ((tray[0][2] == tray[1][2]) && (tray[2][2] == tray[0][2])) return true;
    if ((tray[0][0] == tray[1][1]) && (tray[0][0] == tray[2][2])) return true;
    if ((tray[0][2] == tray[1][1]) && (tray[0][2] == tray[2][0])) return true;
    return false;
}
int show(char tray[3][3])
{
    cout<<tray[0][0]<<"|"<<tray[0][1]<<"|"<<tray[0][2]<<endl;
    cout<<"_|_|_\n";
    cout<<tray[1][0]<<"|"<<tray[1][1]<<"|"<<tray[1][2]<<endl;
    cout<<"_|_|_\n";
    cout<<tray[2][0]<<"|"<<tray[2][1]<<"|"<<tray[2][2]<<endl;
    return 0;
}
int enter(char tray[3][3],char player,char p,int &count)
{
    char c;
    cin>>c;
    if(c=='1')
    {
        if((tray[0][0]!='X'&&tray[0][0]!='O')&&(p=='X'))
        {
            tray[0][0]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        else if((tray[0][0]!='X'&&tray[0][0]!='O')&&(p=='O'))
        {
            tray[0][0]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='2')
    {
        if((tray[0][1]!='X'&&tray[0][1]!='O')&&(p=='X'))
        {
            tray[0][1]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        else if((tray[0][1]!='X'&&tray[0][1]!='O')&&(p=='O'))
        {
            tray[0][1]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='3')
    {
        if((tray[0][2]!='X'&&tray[0][2]!='O')&&(p=='X'))
        {
            tray[0][2]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[0][2]!='X'&&tray[0][2]!='O')&&(p=='O'))
        {
            tray[0][2]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='4')
    {
        if((tray[1][0]!='X'&&tray[1][0]!='O')&&(p=='X'))
        {
            tray[1][0]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[1][0]!='X'&&tray[1][0]!='O')&&(p=='O'))
        {
            tray[1][0]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='5')
    {
        if((tray[1][1]!='X'&&tray[1][1]!='O')&&(p=='X'))
        {
            tray[1][1]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[1][1]!='X'&&tray[1][1]!='O')&&(p=='O'))
        {
            tray[1][1]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='6')
    {
        if((tray[1][2]!='X'&&tray[1][2]!='O')&&(p=='X'))
        {
            tray[1][2]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[1][2]!='X'&&tray[1][2]!='O')&&(p=='O'))
        {
            tray[1][2]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }

        }
    }
    else if(c=='7')
    {
        if((tray[2][0]!='X'&&tray[2][0]!='O')&&(p=='X'))
        {
            tray[2][0]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[2][0]!='X'&&tray[2][0]!='O')&&(p=='O'))
        {
            tray[2][0]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }
        }
    }
    else if(c=='8')
    {
        if((tray[2][1]!='X'&&tray[2][1]!='O')&&(p=='X'))
        {
            tray[2][1]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[2][1]!='X'&&tray[2][1]!='O')&&(p=='O'))
        {
            tray[2][1]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }
        }
    }
    else if(c=='9')
    {
        if((tray[2][2]!='X'&&tray[2][2]!='O')&&(p=='X'))
        {
            tray[2][2]='X';
            count++;
            player=player1;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='O';
                enter(tray,player,p,count);
            }

        }
        if((tray[2][2]!='X'&&tray[2][2]!='O')&&(p=='O'))
        {
            tray[2][2]='O';
            count++;
            player=player2;
            show(tray);
            if(check(tray))
            {
                cout<<player<<" wins\n";
                return 0;
            }
            else if(count==9)
            {
                cout<<"DRAW";
                return 0;
            }
            else{
                p='X';
                enter(tray,player,p,count);
            }
        }
    }
}
int main()
{
    char tray[3][3]={
                {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}
            };
    cout<<"enter the name of player 1\n";
    cin>>player1;
    cout<<"enter the name of player 2\n";
    cin>>player2;
    int count=0;
    show(tray); 
    enter(tray,player1,'X',count);   
    return 0;
}