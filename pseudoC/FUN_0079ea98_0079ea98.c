// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ea98
// Entry Point: 0079ea98
// Size: 84 bytes
// Signature: undefined FUN_0079ea98(void)


void FUN_0079ea98(long param_1,char **param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (char *)DomXMLFile::getElementName((DomXMLFile *)(param_1 + 0x20),*param_2);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
    param_2[0x20] = (char *)0x0;
  }
  else {
    param_2[0x20] = pcVar1;
    uVar2 = 6;
    *(ushort *)((long)param_2 + 0x10c) = *(ushort *)((long)param_2 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_2 + 0x21) = uVar2;
  return;
}


