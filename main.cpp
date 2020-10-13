#include <iostream>
using namespace std;

int main()
{
int S;

cout << "Please input the size of a rose: " << endl;
cin >> S;      
while(S % 2==0 || S < 5){      
      cout << "Invalid input size!"<< endl;
      cout << "Please input the size of a rose: " << endl;
      cin >> S;  
}
int roseSize;
//one dimensional interpretation of the whole output
roseSize = (2*S+S+((S+1)/2)-1)*(S+2*(S-1));
char rose[roseSize];
for (int i=0; i<roseSize; i++){
    rose[i]=' ';
    }
// vertical lines belonging to the petal    
for(int i=0; i<(S*(3*S-2)); i++){
    if(i%(3*S-2)==0){
    rose[i]= '*';
    rose[i+3*S-3]= '*';
    }
    }
//long hypotenuse
for(int i=0; i<S; i++){
    rose[i*(3*S+1)]= '*';
    }
//short hypotenuse
for(int i=0; i<((S+1)/2); i++){
    rose[((i+1)*3*S-5*i-3)]= '*';
    }
// bottom hypRight
for(int i=0; i<((S+1)/2); i++){
    
    rose[((i+1)*3*S-5*i-3)+(S-1)*(3*S-2)]= '*';
    }
// bottom hypLeft
for(int i=0; i<((S+1)/2); i++){
    rose[i*(3*S+1)+(S-1)*(3*S-2)]= '*';
    }
//Rose stem
for(int i=0; i<(2*S); i++){
    rose[(S+((S+1)/2)-1)*(3*S-2)+((3*S-3)/2)+i*(3*S-2)]= '*';
    }
  
//Rose leaf left
for(int i=0; i<((S+1)/2); i++){
    for(int j=0; j<=i; j++){
        rose[i*(3*S+1)+(S-1+((S+1)/2)+2)*(3*S-2)-j*(3*S-2)]= '*';
        }
    
    }
//rose leaf right
for(int i=0; i<((S+1)/2); i++){
    for(int j=0; j<=i; j++){
        rose[((i+1)*3*S-5*i-3)+(S-1+S+2)*(3*S-2)-j*(3*S-2)]= '*';
        }
    
    }
//needed two dimensional interpretation of the whole output    
    for(int i=0; i<roseSize; i++){
    if(i%(3*S-2)==0 && i>0){
        
            cout<<endl << rose[i] ;
            
        
        }
    else{
        cout<< rose[i];
        }    
    }
 // I made one big array for the output,
 //initially assigned every element of that array as space
 //replaced space to star where is needed
 //made the code to display the array in two dimensional form to recieve the desired rose
}
