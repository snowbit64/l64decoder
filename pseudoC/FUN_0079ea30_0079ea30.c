// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ea30
// Entry Point: 0079ea30
// Size: 52 bytes
// Signature: undefined FUN_0079ea30(void)


void FUN_0079ea30(long param_1,char **param_2)

{
  undefined4 uVar1;
  
  uVar1 = DomXMLFile::getNumChildren((DomXMLFile *)(param_1 + 0x20),*param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x21) = 1;
  return;
}


