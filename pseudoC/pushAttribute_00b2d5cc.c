// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushAttribute
// Entry Point: 00b2d5cc
// Size: 44 bytes
// Signature: undefined __thiscall pushAttribute(XMLPrinter * this, char * param_1, bool param_2)


/* XMLPrinter::pushAttribute(char const*, bool) */

void __thiscall XMLPrinter::pushAttribute(XMLPrinter *this,char *param_1,bool param_2)

{
  char *pcVar1;
  
  pcVar1 = "true";
  if (!param_2) {
    pcVar1 = "false";
  }
  printf((char *)this," %s=\"%s\"",param_1,pcVar1);
  return;
}


