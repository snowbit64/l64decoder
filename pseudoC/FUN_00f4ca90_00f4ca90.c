// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f4ca90
// Entry Point: 00f4ca90
// Size: 140 bytes
// Signature: undefined FUN_00f4ca90(void)


void FUN_00f4ca90(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_2 + 0xe0);
  local_70 = param_5;
  uStack_6c = param_6;
  local_68 = param_7;
  if (param_1 <= *(float *)(plVar2 + 1)) {
    local_60 = *(undefined8 *)(param_2 + 0xe8);
    uStack_48 = param_3[1];
    local_50 = *param_3;
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    puStack_58 = &local_70;
    local_30 = param_1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


