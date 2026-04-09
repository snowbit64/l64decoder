// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_CodeOneMemBlock
// Entry Point: 00d9741c
// Size: 304 bytes
// Signature: undefined LzmaEnc_CodeOneMemBlock(void)


void LzmaEnc_CodeOneMemBlock
               (long param_1,int param_2,undefined8 param_3,long *param_4,undefined4 param_5,
               int *param_6)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  code *local_78;
  undefined8 uStack_70;
  long local_68;
  int local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = *param_4;
  *(undefined4 *)(param_1 + 0x3d338) = 0;
  local_60 = 0;
  local_78 = FUN_00d9754c;
  *(undefined4 *)(param_1 + 0x3d354) = 0;
  *(undefined4 *)(param_1 + 0x3d34c) = 0;
  uStack_70 = param_3;
  if (param_2 != 0) {
    LzmaEnc_Init(param_1);
  }
  LzmaEnc_InitPrices(param_1);
  *(undefined *)(param_1 + 0x3d2f4) = 0;
  *(undefined4 *)(param_1 + 0x3d330) = 0;
  *(undefined4 *)(param_1 + 0x3d2f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3d308) = *(undefined8 *)(param_1 + 0x3d318);
  *(undefined8 *)(param_1 + 0x3d300) = 1;
  *(undefined8 *)(param_1 + 0x3d2f8) = 0;
  iVar1 = *(int *)(param_1 + 0x3d340);
  *(code ***)(param_1 + 0x3d320) = &local_78;
  *(undefined8 *)(param_1 + 0x3d328) = 0;
  uVar3 = FUN_00d975a4(param_1,1,param_5,*param_6);
  *param_6 = *(int *)(param_1 + 0x3d340) - iVar1;
  *param_4 = *param_4 - local_68;
  if (local_60 != 0) {
    uVar3 = 7;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


