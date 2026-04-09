// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_read
// Entry Point: 00e06960
// Size: 44 bytes
// Signature: undefined vorbis_synthesis_read(void)


undefined8 vorbis_synthesis_read(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28) + param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x24) < iVar1)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return 0;
}


