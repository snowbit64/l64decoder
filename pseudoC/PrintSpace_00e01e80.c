// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrintSpace
// Entry Point: 00e01e80
// Size: 80 bytes
// Signature: undefined __thiscall PrintSpace(XMLPrinter * this, int param_1)


/* tinyxml2::XMLPrinter::PrintSpace(int) */

void __thiscall tinyxml2::XMLPrinter::PrintSpace(XMLPrinter *this,int param_1)

{
  if (0 < param_1) {
    do {
      Write(this,"    ",4);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


