// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrintError
// Entry Point: 00e01a08
// Size: 52 bytes
// Signature: undefined PrintError(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::PrintError() const */

int tinyxml2::XMLDocument::PrintError(void)

{
  int iVar1;
  long in_x0;
  char *__s;
  
  if (*(long *)(in_x0 + 0x80) != *(long *)(in_x0 + 0x88)) {
    __s = (char *)StrPair::GetStr();
    iVar1 = puts(__s);
    return iVar1;
  }
  iVar1 = puts("");
  return iVar1;
}


