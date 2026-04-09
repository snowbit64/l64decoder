// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079eb28
// Entry Point: 0079eb28
// Size: 104 bytes
// Signature: undefined FUN_0079eb28(void)


void FUN_0079eb28(undefined8 param_1,long param_2)

{
  long lVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_2 + 0x10c);
  *(undefined **)(param_2 + 0x100) = &DAT_0050a39f;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *puVar2 = *puVar2 & 0xfffe;
  lVar1 = DomXMLFile::getRootName();
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x100) = lVar1;
    *(undefined4 *)(param_2 + 0x108) = 6;
    *puVar2 = *puVar2 & 0xfffe;
  }
  return;
}


