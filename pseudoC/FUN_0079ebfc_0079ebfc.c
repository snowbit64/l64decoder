// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ebfc
// Entry Point: 0079ebfc
// Size: 56 bytes
// Signature: undefined FUN_0079ebfc(void)


void FUN_0079ebfc(long param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = DomXMLFile::saveToFile((DomXMLFile *)(param_1 + 0x20),*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


