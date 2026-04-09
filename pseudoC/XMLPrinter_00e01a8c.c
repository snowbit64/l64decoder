// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XMLPrinter
// Entry Point: 00e01a8c
// Size: 168 bytes
// Signature: undefined __thiscall XMLPrinter(XMLPrinter * this, __sFILE * param_1, bool param_2, int param_3)


/* tinyxml2::XMLPrinter::XMLPrinter(__sFILE*, bool, int) */

void __thiscall
tinyxml2::XMLPrinter::XMLPrinter(XMLPrinter *this,__sFILE *param_1,bool param_2,int param_3)

{
  *(XMLPrinter **)(this + 0x10) = this + 0x18;
  this[8] = (XMLPrinter)0x0;
  *(__sFILE **)(this + 0x78) = param_1;
  *(int *)(this + 0x80) = param_3;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined8 *)(this + 0x68) = 10;
  *(undefined ***)this = &PTR__XMLPrinter_01013648;
  *(XMLPrinter **)(this + 0x110) = this + 0x118;
  this[0x89] = (XMLPrinter)param_2;
  this[0x118] = (XMLPrinter)0x0;
  *(undefined8 *)(this + 0xb2) = 0;
  *(undefined8 *)(this + 0xaa) = 0;
  *(undefined2 *)(this + 0xb0) = 0x101;
  *(undefined8 *)(this + 0x92) = 0;
  *(undefined8 *)(this + 0x8a) = 0;
  *(undefined8 *)(this + 0xa2) = 0;
  *(undefined8 *)(this + 0x9a) = 0;
  *(undefined8 *)(this + 0xc2) = 0;
  *(undefined8 *)(this + 0xba) = 0;
  *(undefined8 *)(this + 0xd2) = 0;
  *(undefined8 *)(this + 0xca) = 0;
  *(undefined8 *)(this + 0xe2) = 0;
  *(undefined8 *)(this + 0xda) = 0;
  *(undefined8 *)(this + 0xf2) = 0;
  *(undefined8 *)(this + 0xea) = 0;
  *(undefined8 *)(this + 0x102) = 0;
  *(undefined8 *)(this + 0xfa) = 0;
  this[0x70] = (XMLPrinter)0x1;
  this[0x88] = (XMLPrinter)0x1;
  this[0xac] = (XMLPrinter)0x1;
  this[0xc6] = (XMLPrinter)0x1;
  this[200] = (XMLPrinter)0x1;
  this[0xf0] = (XMLPrinter)0x1;
  this[0x106] = (XMLPrinter)0x1;
  this[0x108] = (XMLPrinter)0x1;
  *(undefined8 *)(this + 300) = 0x100000014;
  return;
}


