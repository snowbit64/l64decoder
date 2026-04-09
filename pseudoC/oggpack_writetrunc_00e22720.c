// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_writetrunc
// Entry Point: 00e22720
// Size: 64 bytes
// Signature: undefined oggpack_writetrunc(void)


void oggpack_writetrunc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    lVar1 = param_1[2];
    lVar2 = (long)param_2 >> 3;
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = (int)(param_2 & 7);
    uVar3 = *(undefined8 *)(&DAT_0055a320 + (param_2 & 7) * 8);
    param_1[3] = lVar1 + lVar2;
    *(byte *)(lVar1 + lVar2) = *(byte *)(lVar1 + lVar2) & (byte)uVar3;
  }
  return;
}


