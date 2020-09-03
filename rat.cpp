#include<bits/stdc++.h>
using namespace std;
int valid(int x, int y)
{
    if(x>2 || y>2)
    {
        cout<<"Limit Exceded"<<endl;
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int check(int maze[3][3],int sol[3][3] , int x , int y)
{       
    
    if(maze[x][y]==1)
    {   
        cout<<"x:"<<x<<endl;
        sol[x][y]=1;
        check(maze ,sol,x+1,y );
    }
    
    if(maze[x+1][y]==0)
    {   
        check(maze, sol ,x , y+1 );
    }

    if(x==2)
    {
        cout<<"Target Compelete"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<sol[i][j];
            }
            cout<<endl;
        }
    }
    
    
    


}
int main()
{
int maze[3][3]={1,0,0,1,1,0,1,1,1};
int solution[3][3]={0};
check(maze,solution,0,0);
return 0;
}