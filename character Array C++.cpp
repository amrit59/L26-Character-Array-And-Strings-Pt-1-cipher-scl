 #include<iostream>
using namespace std;
int main()
{
    char name[5];
    int i;
    for(i=0;i<5;i++){
        cin>>name[i];
    }
    cout<<"The name you have just entered is "<<endl;

    for(i=0;i<5;i++){
        cout<<name[i];
    }
}
