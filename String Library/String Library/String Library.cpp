#include <iostream>
#include <string>
using namespace std;

#include "clsString.h"


int main()
{
    system("color f3");

    clsString String1;
    clsString String2("Taha");

    String1.Value = "Mohammed Rachedi";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number Of Words: " << String1.Count_Words() << endl;
    cout << "Number Of Words: " << String1.Count_Words("Hassania El Arouji") << endl;
    cout << "Number Of Words: " << clsString::Count_Words("Abderrazzak Rachedi") << endl;   



    clsString String3("hi how are you?");

    cout << "\nString 3 = " << String3.Value << endl;
    cout << "String Length = " << String3.Length() << endl;

    String3.Print_First_Letter_Of_Each_Word();  

    String3.Upper_First_Letter_Of_Each_Word();  
    cout << String3.Value << endl;

    String3.Lower_First_Letter_Of_Each_Word(); 
    cout << String3.Value << endl;

    String3.Upper_All_String(); 
    cout << String3.Value << endl;

    String3.Lower_All_String(); 
    cout << String3.Value << endl; 



    cout << "\nAfter Inverting a : " << clsString::Invert_Character_Case('a') << endl; 

    String3.Value = "AbCdEfg";

    String3.Invert_All_Letters_Case();
    cout << String3.Value << endl;

    String3.Invert_All_Letters_Case();
    cout << String3.Value << endl;



    cout << "\nCapital Letters Count : "
        << clsString::Count_Letters("Abderrazzak Rachedi", clsString::Capital_Letters) << endl;

    String3.Value = "Welcome to Jordan";
    cout << "\nString 3 = " << String3.Value << endl;

    cout << "Capital Letters Count :" << String3.Count_Capital_Letters() << endl;
    cout << "Small Letters Count :" << String3.Count_Small_Letters() << endl; 


    cout << "Vowels Count :" << String3.Count_Vowels() << endl; 
    String3.Print_All_Vowels(); 

    cout << "\nLetter E(e)Count :" << String3.Count_Specific_Letter('E', false) << endl;
    cout << "Is Letter A Vowel? " << clsString::Is_Vowel('a') << endl;

    cout << "Words Count : " << String3.Count_Words() << endl;
    String3.Print_Words(); 



    vector<string> vString = String3.Split();  

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }


    //Tirms
    String3.Value = "    Abderrazzak Rachedi     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Abderrazzak Rachedi     ";
    String3.Trim_Left(); 
    cout << "\n\nTrim Left  = " << String3.Value;

    String3.Value = "    Abderrazzak Rachedi     ";
    String3.Trim_Right(); 
    cout << "\nTrim Right = " << String3.Value;

    String3.Value = "    Abderrazzak Rachedi     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;



    //Joins
    vector <string> vString1 = { "Mohammed","Taha","Hassania","Abderrazzak" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::Join_String(vString1);  


    string arrString[] = { "Mohammed","Taha","Hassania","Abderrazzak" };

    cout << "\n\nJoin String From Array: \n";
    cout << clsString::Join_String(arrString, 4); 



    String3.Value = "Taha Rachedi Abu-Hahdoud";
    cout << "\n\nString     = " << String3.Value;

    String3.Reverse_Words_In_String();
    cout << "\nReverse Words : " << String3.Value << endl;


    String3.Value = "Taha Rachedi Abu-Hahdoud"; 
    String3.Replace_Words_Using_Split_And_Join("Abu-Hahdoud", "Sbe3"); 
    cout << "\nReplace : " << String3.Value << endl;   



    String3.Value = "This is: a Sample Text, With Punctuations.";
    cout << "\nString     = " << String3.Value;

    String3.Remove_Punctuations(); 
    cout << "\nRemove Punctuations : " << String3.Value << endl;

    

    system("pause>0");
    return 0;
}