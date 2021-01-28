#include <iostream>
#include <cctype>
#include "weight.h"
#include <algorithm>
#include <string>
using namespace std;
int main()
{
   int userchoice; 
   cout << "What do you wish to do?" << endl;
   cout << "If you wish to use calculator, Please do enter 2: " << endl;
   cout << "If you wish to use convertor, Please do enter 4: " << endl;
   cin >> userchoice;
   if(userchoice == 2)
   {
     int number;
     double ans = 0;
     double lnum,rnum;
     string optr;
     bool first = true;
     bool over = true;
     cout << "Enter the First Number:";
     cin >> lnum;
     cout << "Enter the Operator:";
     cin >> optr;
     cout << "Enter the next Number:";
     cin >> rnum;
     while(over && optr != "=" )
     {
        if(optr == "+")
        {
        	if(first)
          {
         	   ans = lnum + rnum;
         	   first = false;
         	 }
         	else
             ans = ans + number; 
        }
        else if(optr == "-")
        {
        	if(first)
          {
         	   ans = lnum - rnum;
         	   first = false;
         	 }
         	else
             ans = ans - number; 
        }
        else if(optr == "*")
        {
        	if(first)
          {
         	   ans = lnum * rnum;
         	   first = false;
         	}
         	else
             ans = ans * number;
        }
        else if(optr == "/")
        {
          if(number != 0)
          {
             if(first)
             {
         	      ans = lnum / rnum;
         	      first = false;
         	   }
         	   else
         	   {
             ans = ans / number;
             }
          }
          else
          {
          	cout << "You cannot divide any Number by 0" << endl;
          	over = false;
          }
        }
        else
        {
        	cout << "Invalid Operator!";
        }
        if(over)
        {
          cout << "Enter the Operator:";
     	    cin >> optr;
     	    if(optr != "=")
     	    {
             cout << "Enter the Number:";
     	       cin >> number; 
     	    }
        }
       }
     	  if(over)
          cout << "Your Output is " << ans << endl; 
        else
          cout << "cannot proceed!" << endl;  	
     }
     else if(userchoice == 4)
     {
        cout << "If you want to convert gram Enter gram or g: " << endl;
        cout <<  "If you want to convert kilogram Enter kilogram or kg: " << endl;
        cout <<  "If you want to convert microgram Enter microgram or mu: " << endl;
        cout <<  "If you want to convert milligram Enter milligram or mg: " << endl;
        cout <<  "If you want to convert carat Enter carat or ct: " << endl;
        cout << endl;
        string c,tc;
        int mv;
        double output;
          Weight W; 
          cout << "Enter what to convert?" << endl;
          cin.get();
          getline(cin,c);
          transform(c.begin(),c.end(),c.begin(),::tolower);
          if(c == "gram" || c == "g")
          {
          transform(tc.begin(),tc.end(),tc.begin(),::tolower);
          cout << "What to convert into what? " << endl;
          getline(cin,tc);
          cout << "Enter the Massvalue: " << endl;
          cin >> mv; 
          W.set(c,tc,mv);
          output =  W.ConvertGram();
          cout << "Your final answer is " << output << endl;
          }
          else if(c == "kilogram" || c == "kg")
          {
          transform(tc.begin(),tc.end(),tc.begin(),::tolower);
          cout << "What to convert into what? " << endl;
          getline(cin,tc);
          cout << "Enter the Massvalue: " << endl;
          cin >> mv; 
          W.set(c,tc,mv);
          output =  W.ConvertKiloGram();
          cout << "Your final answer is " << output << endl;
          }
          else if(c == "microgram" || c == "mu")
          {
          transform(tc.begin(),tc.end(),tc.begin(),::tolower);
          cout << "What to convert into what? " << endl;
          getline(cin,tc);
          cout << "Enter the Massvalue: " << endl;
          cin >> mv; 
          W.set(c,tc,mv);
          output =  W.ConvertMicroGram();
          cout << "Your final answer is " << output << endl;
          }
          else if(c == "carat" || c == "ct")
          {
          transform(tc.begin(),tc.end(),tc.begin(),::tolower);
          cout << "What to convert into what? " << endl;
          getline(cin,tc);
          cout << "Enter the Massvalue: " << endl;
          cin >> mv; 
          W.set(c,tc,mv);
          output =  W.ConvertCarat();
          cout << "Your final answer is " << output << endl;
          }
          else if(c == "milligram" || c == "mg")
          {
          transform(tc.begin(),tc.end(),tc.begin(),::tolower);
          cout << "What to convert into what? " << endl;
          getline(cin,tc);
          cout << "Enter the Massvalue: " << endl;
          cin >> mv; 
          W.set(c,tc,mv);
          output =  W.ConvertMilligram();
          cout << "Your final answer is " << output << endl;
          }
          else 
          {
            cout << "Not Valid!" << endl;
          }
        }
        else
        {
           cout << "OOPS! Please give valid Number!" << endl;
        }
      
}