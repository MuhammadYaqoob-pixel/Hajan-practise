#include<iostream>
using namespace std;
int main()
{
//   tables 5
  
// int i=1;
// for(i=1;i<=10;i++)
// {
//     cout<<"5 * "<<i<<" = "<<5*i<<endl;
// }

// stars in reactangle

// for(int i=1;i<=5;i++){
// {
//     for(int j=1;j<=5;j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// 1
// 12
// 123
// 1234
// 12345

// for(int i=1;i<=5;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;
// }


int day;
cout<<"Enter the day number: ";
cin>>day;
switch(day)
{
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"Wednesday";
    break;
    case 4:
    cout<<"Thursday";
    break;
    case 5:
    cout<<"Friday";
    break;
    case 6:
    cout<<"Saturday";

    break;
    case 7:
    cout<<"Sunday";
    break;
    default:
    cout<<"Invalid day number";
    break;
  
} 
    return 0;
}