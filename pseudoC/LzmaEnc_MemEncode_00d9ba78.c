// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_MemEncode
// Entry Point: 00d9ba78
// Size: 220 bytes
// Signature: undefined LzmaEnc_MemEncode(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void LzmaEnc_MemEncode(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  long lVar1;
  int iVar2;
  code *local_58;
  undefined8 uStack_50;
  long local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0xa0) = param_5;
  local_48 = *param_3;
  *(undefined8 *)(param_1 + 0x78) = param_4;
  local_40 = 0;
  local_58 = FUN_00d9754c;
  *(undefined4 *)(param_1 + 0x3d338) = param_6;
  *(code ***)(param_1 + 0x3d320) = &local_58;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined8 *)(param_1 + 0xa0) = param_5;
  *(undefined4 *)(param_1 + 0x3d360) = 1;
  uStack_50 = param_2;
  iVar2 = FUN_00d96f80(param_1,0,param_8,param_9);
  if (iVar2 == 0) {
    iVar2 = FUN_00d9b524(param_1,param_7);
  }
  *param_3 = *param_3 - local_48;
  if (local_40 != 0) {
    iVar2 = 7;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


