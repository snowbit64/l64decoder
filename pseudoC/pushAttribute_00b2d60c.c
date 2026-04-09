// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushAttribute
// Entry Point: 00b2d60c
// Size: 20 bytes
// Signature: undefined __thiscall pushAttribute(XMLPrinter * this, char * param_1, uint param_2)


/* XMLPrinter::pushAttribute(char const*, unsigned int) */

void __thiscall XMLPrinter::pushAttribute(XMLPrinter *this,char *param_1,uint param_2)

{
  printf((char *)this," %s=\"%u\"",param_1,(ulong)param_2);
  return;
}


