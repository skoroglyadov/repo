//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <System.Zip.hpp> //Хидер для ZIP
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 TZipFile *zip = new TZipFile();
 zip ->ZipDirectoryContents("C:\\111\\zip.zip", "C:\\222"); //В какую папку сделать архив. Какую папку заархивировать.
 zip ->Close(); //Закрываем
 zip ->Free(); //Очищаем
}
//--