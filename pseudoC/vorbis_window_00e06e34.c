// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_window
// Entry Point: 00e06e34
// Size: 48 bytes
// Signature: undefined vorbis_window(void)


undefined8 vorbis_window(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x88) + (long)param_2 * 4 + 8);
  if (0 < iVar1) {
    uVar2 = _vorbis_window_get(iVar1 - *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x1690));
    return uVar2;
  }
  return 0;
}


