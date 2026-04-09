// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24e88
// Entry Point: 00f24e88
// Size: 188 bytes
// Signature: undefined FUN_00f24e88(void)


undefined8
FUN_00f24e88(undefined8 param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
  if ((1 < param_4) || (param_6 < 2)) {
    return 0xffffffff;
  }
  if ((*(int *)((long)param_3 + 0xc) == 6) && (*(int *)((long)param_5 + 0xc) == 6)) {
    lVar2 = *param_3;
    if (*(char *)(lVar2 + 4) != '\0') {
      return 0xffffffff;
    }
    if (*(long *)(lVar2 + 0x10) == 0) {
      lVar1 = *param_5;
      *(long *)(lVar2 + 0x10) = lVar1;
      if (((*(byte *)(lVar2 + 1) >> 2 & 1) != 0) && ((*(byte *)(lVar1 + 1) & 3) != 0)) {
        FUN_00f0c888(param_1,lVar2);
      }
      *param_2 = lVar2;
      *(undefined4 *)((long)param_2 + 0xc) = 6;
      return 1;
    }
  }
  return 0xffffffff;
}


