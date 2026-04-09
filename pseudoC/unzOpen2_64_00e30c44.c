// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzOpen2_64
// Entry Point: 00e30c44
// Size: 100 bytes
// Signature: undefined unzOpen2_64(void)


void unzOpen2_64(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    local_38 = 0;
    uStack_30 = 0;
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    param_2 = &local_80;
  }
  FUN_00e30258(param_1,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


