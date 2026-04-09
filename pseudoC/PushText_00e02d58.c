// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushText
// Entry Point: 00e02d58
// Size: 152 bytes
// Signature: undefined __thiscall PushText(XMLPrinter * this, char * param_1, bool param_2)


/* tinyxml2::XMLPrinter::PushText(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,char *param_1,bool param_2)

{
  size_t sVar1;
  
  *(int *)(this + 0x84) = *(int *)(this + 0x80) + -1;
  SealElementIfJustOpened();
  if (param_2) {
    Write(this,"<![CDATA[",9);
    sVar1 = strlen(param_1);
    Write(this,param_1,sVar1);
    Write(this,"]]>",3);
    return;
  }
  PrintString(this,param_1,true);
  return;
}


