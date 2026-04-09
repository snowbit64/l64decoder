// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24bc0
// Entry Point: 00f24bc0
// Size: 80 bytes
// Signature: undefined FUN_00f24bc0(void)


undefined8
FUN_00f24bc0(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    uVar2 = 1;
    uVar1 = ((uint)(long)*param_3 & 0xaaaaaaaa) >> 1 | ((uint)(long)*param_3 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  }
  return uVar2;
}


