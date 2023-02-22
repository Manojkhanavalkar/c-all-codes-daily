//vowel or consonant
#include<iostream>
using namespace std;
// int main()
// {
//     char c;
//     cout<<"\nEnter any alphabet: ";
//     cin>>c;
//     switch(c)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':cout<<"\nEntered alphabet is vowel";
//                  break;
//         default:cout<<"\nEnterd alphabet os consonant";
//     }
//  return 0;
// }
//print even numbers from 1 to 10
int main()
{
    int i;
    for ( i = 1; i <= 10; i++)
    {
        if(i%2!=0)
        {
           continue; 
        }
        cout<<i<<"\t";
    }
    
}