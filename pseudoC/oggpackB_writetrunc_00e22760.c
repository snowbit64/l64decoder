// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_writetrunc
// Entry Point: 00e22760
// Size: 64 bytes
// Signature: undefined oggpackB_writetrunc(void)


void oggpackB_writetrunc(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    lVar2 = param_1[2];
    lVar3 = (long)param_2 >> 3;
    *param_1 = lVar3;
    *(int *)(param_1 + 1) = (int)(param_2 & 7);
    uVar1 = *(undefined4 *)(&DAT_0055a428 + (param_2 & 7) * 4);
    param_1[3] = lVar2 + lVar3;
    *(byte *)(lVar2 + lVar3) = *(byte *)(lVar2 + lVar3) & (byte)uVar1;
  }
  return;
}


