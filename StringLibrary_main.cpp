

/*
Yasmine_Mohamed
*/

#include <iostream>
#include"ClsString.h"
using namespace std;
int main()
{
	///////////////////////1-try the values of objects/////////////////////////////////////////////////////////////
	ClsString String1;
	String1.Value = " Vanadis Yaren ";
	ClsString String2("Vanadis");
    ClsString String3("Vanadis!!!!!Yaren???");
	cout << String1.Value << endl;
	cout << String2.Value << endl;
	cout << String3.Value << endl;
	///////////////////////2-try the split function ///////////////////////////////////////////////////////////////
	vector<string>Vstring;
	Vstring = String3.SplitString(" ");
	cout <<"The Size Of Vector After Store The Words in it: "<< Vstring.size() << endl;
	for (string& Sword : Vstring)
	{
		cout << Sword << endl;
	}
	/////////////////////////////////3-try the CountWord function by three ways//////////////////////////////////////
	/*This Way Not The Correct One*/
	cout << "The Number After Converted is : " << String1.CountWords(String1.Value)<< endl;
	///*This Way Of The OverLoading Way is The Correct One*/
	cout << "The Number After Converted is : " << String2.CountWords() << endl;
	///////*This Way if You Want to Calling Function Inside the Class without Using Object ,you will make the function static*/
	cout << "The Number After Converted is : " << ClsString::CountWords("Vanadis Yaren") << endl;
	/////////////////////////////////////////////4-the trimleft Function//////////////////////////////////////////////////
	cout << String3.TrimLeft() << endl;
	////////////////////////////////////////////5-thr trimRight Function//////////////////////////////////////////////////
	cout << String3.TrimRight() << endl;
	////////////////////////////////////////////6-The trim Function////////////////////////////////////////////////
	cout << String3.Trim() << endl;
	////////////////////////////////////////////7-The //////////////////////////////////////////
	vector<string>Vstring2 = {"Vanadis","Yaren","Vanadiso"};
	cout << ClsString::Join_fun(Vstring, "//") << endl;
	///////////////////////////////////////////8-Overloading Concept /////////////////////////////////////////////
	string Array[] = { "Vanadis","Yaren","Vanadiso" };
	cout << ClsString::Join_fun(Array, 3, "////") << endl;
	///////////////////////////////////////////9-/////////////////////////////////////////////
	cout << String3.reversestring() << endl;
	//////////////////////////////////////////10-///////////////////////////////////////////
	cout << String3.LowerAllString() << endl;
	///////////////////////////////////////////11-/////////////////////////////////////////
	cout << ClsString::ReplaceFunctionUsingSplitFunction("Jasmine Yannis","Jasmine","Vanadis",false) << endl;
	//cout << ClsString::ReplaceFunctionUsingSplitFunction(String3.Value, "Yasmine", "Nour") << endl;
	///////////////////////////////////////////12-///////////////////////////////////////////
	cout << String3.REmovePuncfromString() << endl;
	////////////////////////////////////////13-//////////////////////////////////////////////
	cout << String3.Length() << endl;
	//////////////////////////////////////////14-///////////////////////////////////////////
	String3.UpperFirstLetterOfEachWord();
	cout << String3.Value << endl;

	////////////////////////////////////////////////////////////////////////////////////////
	String3.LowerFirstLetterOfEachWord();
	cout << String3.Value << endl;
	//////////////////////////////////////////////////////////////////
	cout << String3.CountVowels() << endl;
	//////////////////////////////////////////////////////////////////
	 String3.UpperAllString() ;
	 cout << String3.Value << endl;
	/////////////////////////////////////////////////////////////////
	 String3.InvertAllLettersCase() ;
	 cout << String3.Value << endl;
	 ////////////////////////////////////////////////////////////////
	 cout << ClsString::CountLetters(String3.Value,ClsString::SmallLetters) << endl;
	return 0;
   
}
