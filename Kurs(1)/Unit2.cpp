//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit4.h"
#include <fstream>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
AnsiString filename;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if (OpenDialog1->Execute()){
		filename = OpenDialog1 ->FileName;
		Memo1->Lines->LoadFromFile(filename);
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	if (SaveDialog1->Execute()){
		Memo2->Lines->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
 Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{

AnsiString text = Memo1->Text;
AnsiString text1 = Memo1->Text;
int side = StrToInt(Edit1->Text);//���������� ������ �������
if (text.Length()%side!=0) {
	for (int i = 0; i < side-text.Length()%side; i++) {
		Memo1->Lines->Text = Memo1->Lines->Text + "o";
	}
}
//--------���� ������� �� ������ �������� ������ (������� ��� ��������)---------
text = Memo1->Text;
char **mass = new char *[text.Length()/side];
for (int i=0; i < text.Length()/side; i++) {
	mass[i] = new char [side];
}
//----------������� ��������� ������ ��� ���� ����� ������� ����� �� ���� (�������)---
int k=1;
for (int i=0; i < text.Length()/side; i++) {
	for (int j=0; j < side; j++) {
		mass[i][j] = text[k];
		k++;
	}
}
int c=1;
//----------------������ ������� ��� ������� ��������-------[10][4]----------
for (int i=0; i < side; i++) {
	for (int j=0; j < text.Length()/side; j++) {
		text[c]=mass[j][i];
		c++;
	}
}
Memo1->Text = text1;
Memo2->Text = text;
//---------------------����������� ������� � ������ - ������� � ������� � ����--------
}
//---------------------------------------------------------------------------

