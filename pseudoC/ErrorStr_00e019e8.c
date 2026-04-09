// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ErrorStr
// Entry Point: 00e019e8
// Size: 32 bytes
// Signature: undefined ErrorStr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::ErrorStr() const */

undefined * tinyxml2::XMLDocument::ErrorStr(void)

{
  long in_x0;
  undefined *puVar1;
  
  if (*(long *)(in_x0 + 0x80) != *(long *)(in_x0 + 0x88)) {
    puVar1 = (undefined *)StrPair::GetStr();
    return puVar1;
  }
  return &DAT_0050a39f;
}


