#include <iostream>
#include <math.h>

using namespace std;

int numLength;
int number;
int choice;
string strNum;
int numDigit;
int numWord;
int isTen = 0;
char choi;
bool repeatChoice = false;
int numNext;
int numModulo;
int numPlace;
bool goOut = false;
int numTens;
char capChoi;

void startPage()
{
    do
      {
      cout<<"Welcome to the number writer! Please insert the number(1 - 9,999,999) That you want to be spelled out for you: ";
      cin>>number;
      strNum = to_string(number);
      repeatChoice = false;
      if(number <= 0 || number > 9999999)
      {
        cout<<"You have inputted an invalid number. Please provide a number between 0 and 1,000,000."<<endl<<endl;
        repeatChoice = true;
      }
      }
    while(repeatChoice == true);
}



void numberTen(int x)
{
    
    switch(x)
    {
        case 1:
          cout<<"Eleven"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 2:
          cout<<"Twelve"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 3:
          cout<<"Thirteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 4:
          cout<<"Fourteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 5:
          cout<<"Fifteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 6:
          cout<<"Sixteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 7:
          cout<<"Seventeen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 8:
          cout<<"Eighteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
        case 9:
          cout<<"Nineteen"<<endl<<endl;
          if(numPlace == 2)
          {
          goOut = true;
          }
          break;
    }
    
}

void numberTensWord()
{  
    switch(numDigit)
    {
        case 1:
          numberTen(numTens);
          break;
        case 2:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Twenty ";
          }
          break;
        case 3:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Thirty ";
          }
          break;
        case 4:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Forty ";
          }
          break;
        case 5:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Fifty ";
          }
          break;
        case 6:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Sixty ";
          }
          break;
        case 7:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Seventy ";
          }
          break;
        case 8:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Eighty ";
          }
          break;
        case 9:
          if(numPlace == 1 || numPlace == 2 || numPlace == 3  || numPlace == 5 || numPlace == 6  || numPlace == 7 || ((numPlace == 4) && (numDigit != 0)))
          {
          cout<<"Ninety ";
          }
          break;

    }

}


void numberDivide(int x)
{
    numDigit = numWord / pow(10,x);
    numModulo = fmod(numWord, pow(10,x));
    numTens = numModulo / pow(10,x-1);

}

void numberWord()
{
    if(numPlace == 1  || numPlace == 3  || ((numPlace == 4) && (numDigit != 0))  || numPlace == 6  || numPlace == 7 )
    {

    switch(numDigit)
    {
        case 1:
          cout<<"One ";
          break;
        case 2:
          cout<<"Two ";
          break;
        case 3:
          cout<<"Three ";
          break;
        case 4:
          cout<<"Four ";
          break;
        case 5:
          cout<<"Five ";
          break;
        case 6:
          cout<<"Six ";
          break;
        case 7:
          cout<<"Seven ";
          break;
        case 8:
          cout<<"Eight ";
          break;
        case 9:
          cout<<"Nine ";
          break;
    }
    }
    else
    {
     numberTensWord();
    }
    
}




void placeNumber()
{
    switch(numPlace)
    {
        case 7:
        cout<<"million ";
        break;
        case 6:
        cout<<"hundred ";
        break;
        case 4:
        cout<<"thousand ";
        break;
        case 3:
        cout<<"hundred ";
        break;
    }
    
}



int main()
{
    do{
       startPage();
       numLength = strNum.length();
       numWord = stoi(strNum);
       numPlace = numLength;
       for(int x = numLength - 1; x >= 0; x--)
       {
       numberDivide(x);
       numberWord();
       if(goOut == true)
       {
         goto End;
       }
       placeNumber();
       numWord = numModulo;
       numPlace --;
       }
       End:
       cout<<endl<<endl<<"Do you want to do it again? (y/n): "<<endl;
       cin>>capChoi;
       choi = toupper(capChoi);
    }
    while(choi == 'Y');
    cout<<"ending"<<endl;

    return 0;
}