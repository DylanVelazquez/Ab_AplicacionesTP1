# Ab_AplicacionesTP1
 Añadir al ejercicio anterior los componentes de la imagen.

 Cambiar el evento: OnClick del botón Button1 por:

void __fastcall TForm1::Button1Click(TObject *Sender)

{

Edit3->Text=FormatFloat("###.##",Edit1->Text.ToDouble() *

Edit2->Text.ToDouble()/ 2 );

}
