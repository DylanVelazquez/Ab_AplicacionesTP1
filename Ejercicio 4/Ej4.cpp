//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Ej4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::CalcularClick(TObject *Sender)
{
Edit3->Text=FormatFloat("###.##",Edit1->Text.ToDouble() *
Edit2->Text.ToDouble()/ 2 );
}
//---------------------------------------------------------------------------
