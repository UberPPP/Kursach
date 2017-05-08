//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
	int num_side=4;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn2Click(TObject *Sender)
{
    int num_side=3;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn3Click(TObject *Sender)
{
	int num_side=5;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn4Click(TObject *Sender)
{
	int num_side=6;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn5Click(TObject *Sender)
{
	int num_side=7;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn6Click(TObject *Sender)
{
	int num_side=8;
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	int num_side;
	num_side =StrToInt(Edit1->Text);
	Form2->Edit1->Text = num_side;
	Form3->Edit1->Text = num_side;
	Close();
}
//---------------------------------------------------------------------------

