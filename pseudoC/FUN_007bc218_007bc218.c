// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc218
// Entry Point: 007bc218
// Size: 124 bytes
// Signature: undefined FUN_007bc218(void)


void FUN_007bc218(DensityMapEntity *param_1,uint *param_2)

{
  long lVar1;
  undefined **local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = &PTR__ResourceDesc_00fdba40;
  uStack_4c = param_2[8];
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  local_50 = 1;
  local_30 = 0;
  DensityMapEntity::createNew
            (param_1,(DensityMapDesc *)&local_58,*param_2,param_2[4],*(bool *)(param_2 + 0xc));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


