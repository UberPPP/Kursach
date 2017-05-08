//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
AnsiString filename;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
	if (SaveDialog1->Execute()){
		Memo2->Lines->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	if (OpenDialog1->Execute()){
		filename = OpenDialog1 ->FileName;
		Memo1->Lines->LoadFromFile(filename);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
AnsiString text = Memo1->Text;
AnsiString text1 = Memo1->Text;
int side = StrToInt(Edit1->Text);//количество граней скиталы

//--------если таблица не полная добавить символ (условие для шифровки)---------
text = Memo1->Text;
char **mass = new char *[side];
for (int i=0; i < side; i++) {
	mass[i] = new char [text.Length()/side];
}
//----------создаем двумерный массив для того чтобы занести буквы из мемо (скитала)---
int k=1;
for (int i=0; i < side; i++) {
	for (int j=0; j < text.Length()/side; j++) {
		mass[i][j] = text[k];
		k++;
	}
}
int c=1;
//----------------делаем таблицу для задания маршрута-------[10][4]----------
for (int i=0; i < text.Length()/side; i++) {
	for (int j=0; j < side; j++) {
		text[c]=mass[j][i];
		c++;
	}
}
Memo1->Text = text1;
Memo2->Text = text;
}
//---------------------------------------------------------------------------

