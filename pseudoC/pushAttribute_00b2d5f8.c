// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushAttribute
// Entry Point: 00b2d5f8
// Size: 20 bytes
// Signature: undefined __thiscall pushAttribute(XMLPrinter * this, char * param_1, int param_2)


/* XMLPrinter::pushAttribute(char const*, int) */

void __thiscall XMLPrinter::pushAttribute(XMLPrinter *this,char *param_1,int param_2)

{
  printf((char *)this," %s=\"%d\"",param_1,(ulong)(uint)param_2);
  return;
}


