#include <iostream>
using namespace std;

int main(){
int n = 0;
cout << "Please enter the count of numbers: ";
cin >> n;

int row[n], col[n], arr[n], j = 0;
cout << "Enter " << n << " numbers\n";

for(int i = 0;i < n;i++)
{
    cin >> arr[i];
}

// finding factors of the number
for(int i = 1;i <= n;i++)
{

    if(n%i == 0)
    {
        row[j] = i; //number of rows set as factors
        col[j] = n / i; //finding corresponding number of columns
        j++;
    }
}
    cout << "there are " << j << " matrices that can be printed"<< endl;

for(int i = 0;i<=j;i++){
    int m = 0;
    
    for(int r = 0; r < row[i]; r++){
        for(int c = 0; c< col[i];++c){
        
            cout << arr[m] << " ";
            m++;
        }
        cout<<"\n\n";
    }
    cout << "\n\n";
}


return 0;
}
