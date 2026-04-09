// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80cf4
// Entry Point: 00e80cf4
// Size: 224 bytes
// Signature: undefined FUN_00e80cf4(void)


void FUN_00e80cf4(undefined8 param_1,short param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = 0;
  if (param_7 / 1000 != 0) {
    iVar1 = (param_2 * 0x9a7) / (param_7 / 1000);
  }
  local_30 = iVar1 * -0x1d7 + 0x10000000;
  local_38 = CONCAT44(iVar1 * 0x3ae + -0x20000000,local_30);
  local_40 = (undefined4)
             ((ulong)(((long)iVar1 * (long)iVar1 * 0x10000 + -0x80000000000000 >> 0x20) *
                     ((long)((ulong)local_30 << 0x20) >> 0x26)) >> 0x10);
  uStack_3c = (undefined4)((ulong)((long)((int)local_30 >> 6) * (long)((int)local_30 >> 6)) >> 0x10)
  ;
  if (param_6 == 1) {
    silk_biquad_alt_stride1();
  }
  else {
    silk_biquad_alt_stride2_c(param_1,&local_38,&local_40,param_4,param_3,param_5);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


