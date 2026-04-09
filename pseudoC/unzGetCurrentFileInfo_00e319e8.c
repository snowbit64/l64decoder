// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetCurrentFileInfo
// Entry Point: 00e319e8
// Size: 156 bytes
// Signature: undefined unzGetCurrentFileInfo(void)


void unzGetCurrentFileInfo
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e30e5c(param_1,&local_b0,0,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_2 != (undefined8 *)0x0) && (iVar2 == 0)) {
    param_2[1] = uStack_a8;
    *param_2 = local_b0;
    param_2[3] = uStack_98;
    param_2[2] = uStack_a0;
    param_2[9] = uStack_68;
    param_2[8] = local_70;
    param_2[0xb] = uStack_58;
    param_2[10] = uStack_60;
    param_2[0xd] = uStack_48;
    param_2[0xc] = local_50;
    param_2[0xf] = uStack_38;
    param_2[0xe] = uStack_40;
    param_2[0x10] = local_30;
    param_2[5] = uStack_88;
    param_2[4] = local_90;
    param_2[7] = uStack_78;
    param_2[6] = uStack_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


