#include <iostream>
using namespace std;

int main() {
   
   int top= -1;
   int SN = 6;//Size of array
   int inpNumS ;
   int inpAdd;
   int inpIdel;
   
    //Creating Array
    int Numbers[SN];
    
    //Adding elements
    for(int x=0;x < SN; x++){
        Numbers[x]=0;
        top++;}
    if(top + 1 == SN){
        cout<<"The Array is full"<<endl;}
    
    //First check
    cout<<"elements:"<<endl;
    for(int x=0;x<SN;x++){
        cout<<x<<" with value " << Numbers[x]<<endl;
    }
    cout<<endl;
    
    //Editing element
    Numbers[2]=5;
    
    //Searching on element (SN = 5)
    cout<<"*Input number to research on"<<endl;
    cin>>inpNumS;
    
    for(int x=0;x < SN;x++)
    {
        if(Numbers[x]==inpNumS){
            cout<<"The Value of " << inpNumS <<" is existed "<<endl;
            break;
        }
        if(x + 1 == SN){
            if(Numbers[x]==inpNumS){
            cout<<"The Value of " << inpNumS <<" is existed "<<endl;
            break;
            }
            else{
                cout<<"The Value of " << inpNumS <<" is not existed "<<endl;}
        }
    }
    cout<<endl;
   
    //Adding element
    cout<<"*Input number to Add at the end of array"<<endl;
    cin>>inpAdd;
    
    cout<<Numbers[top]<<" Before change"<<endl;
    if(top + 1 == SN){
        cout<<"The Array is full"<<endl;
        SN++;
        top++;
        Numbers[top]=inpAdd;}
    else{
        cout<<"The Array is not full"<<endl;}
    cout<<Numbers[top]<<" After change"<<endl;
    cout<<endl;
    
    //Deleting element
    cout<<"*Input Index to remove its value "<<endl;
    cin>>inpIdel;
    
    cout<<Numbers[inpIdel]<<" Before change"<<endl;
    for(int x = inpIdel;x <= top;x++){
        Numbers[x]=Numbers[x+1];}
    if(top + 1 == SN){
        cout<<"The Array is full"<<endl;}
    else{
        cout<<"The Array is not full"<<endl;}
    cout<<Numbers[inpIdel]<<" After change"<<endl;
    
    //Last check
    cout<<"elements:"<<endl;
    for(int x=0;x<SN;x++){
        cout<<x<<" with value " << Numbers[x]<<endl;
    }
    return 0;
}
