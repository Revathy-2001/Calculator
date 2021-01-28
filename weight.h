#include <iostream>
#include <algorithm>
#include <ctype.h>
using namespace std;
class Weight
{
   public:
   	string convert;
   	string toconvert;
   	int massvalue;
   	double gresult;
    double kgresult;
    double mgresult;
    double cresult;
    double muresult;
   	void set(string c,string tc,int mv)
   	{
   		convert = c;
      toconvert = tc;
      massvalue = mv;
   	}
   	double ConvertGram()
   	{
       transform(convert.begin(),convert.end(),convert.begin(),::tolower);
       if(convert == "gram" or convert == "g")
       {
         transform(toconvert.begin(),toconvert.end(),toconvert.begin(),::tolower);
         if(toconvert == "kilogram" or toconvert == "kg")
         {
            gresult = massvalue / 1000.0;   
         }
         else if(toconvert == "microgram" or toconvert == "mu")
         {
            gresult = massvalue * 1000000;
         }
         else if(toconvert == "carat" or toconvert == "ct")
         {
         	  gresult = massvalue * 5;
         }
         else if(toconvert == "milligram" or toconvert == "mg")
         {
            gresult = massvalue * 1000;
         }
         else
         {
         	  cout  << "Invalid Input!" << endl;
         }
       }
      return gresult;
     }

     double ConvertKiloGram()
     {
       transform(convert.begin(),convert.end(),convert.begin(),::tolower);
       if(convert == "kilogram" or convert == "kg")
       {
         transform(toconvert.begin(),toconvert.end(),toconvert.begin(),::tolower);
         if(toconvert == "gram" or toconvert == "g")
         {
            kgresult = massvalue * 1000;
         }
         else if(toconvert == "microgram" or toconvert == "mu")
         {
            kgresult = massvalue/0.0000000010000;
         }
         else if(toconvert == "carat" or toconvert == "ct")
         {
            kgresult = massvalue * 5000;
         }
         else if(toconvert == "milligram" or toconvert == "mg")
         {
            kgresult = massvalue * 1000000;
         }
         else
         {
            cout  << "Invalid Input!" << endl;
         }
       }
      return kgresult;
     }
     
     double ConvertMicroGram()
     {
       transform(convert.begin(),convert.end(),convert.begin(),::tolower);
       if(convert == "microgram" or convert == "mu")
       {
         transform(toconvert.begin(),toconvert.end(),toconvert.begin(),::tolower);
         if(toconvert == "gram" or toconvert == "g")
         {
            muresult = massvalue * 1000000;
         }
         else if(toconvert == "kilogram" or toconvert == "kg")
         {
            muresult = massvalue/1000000000.0;
         }
         else if(toconvert == "carat" or toconvert == "ct")
         {
            muresult = massvalue * 0.00000500000;
         }
         else if(toconvert == "milligram" or toconvert == "mg")
         {
            muresult = massvalue * 1000;
         }
         else
         {
            cout  << "Invalid Input!" << endl;
         }
       }
      return muresult;
     }

     double ConvertCarat()
     {
       transform(convert.begin(),convert.end(),convert.begin(),::tolower);
       if(convert == "carat" or convert == "ct")
       {
         transform(toconvert.begin(),toconvert.end(),toconvert.begin(),::tolower);
         if(toconvert == "gram" or toconvert == "g")
         {
            cresult = massvalue / 5;
         }
         else if(toconvert == "kilogram" or toconvert == "kg")
         {
            cresult = massvalue/5000.0;
         }
         else if(toconvert == "microgram" or toconvert == "mu")
         {
            cresult = massvalue * 200000;
         }
         else if(toconvert == "milligram" or toconvert == "mg")
         {
            cresult = massvalue * 200;
         }
         else
         {
            cout  << "Invalid Input!" << endl;
         }
       }
      return cresult;
     }

     double ConvertMilligram()
     {
       transform(convert.begin(),convert.end(),convert.begin(),::tolower);
       if(convert == "milligram" or convert == "mg")
       {
         transform(toconvert.begin(),toconvert.end(),toconvert.begin(),::tolower);
         if(toconvert == "gram" or toconvert == "g")
         {
            mgresult = massvalue / 1000;
         }
         else if(toconvert == "kilogram" or toconvert == "kg")
         {
            mgresult = massvalue/1000000;
         }
         else if(toconvert == "microgram" or toconvert == "mu")
         {
            mgresult = massvalue * 1000;
         }
         else if(toconvert == "carat" or toconvert == "ct")
         {
            mgresult = massvalue / 200;
         }
         else
         {
            cout  << "Invalid Input!" << endl;
         }
       }
      return mgresult;
     }
};