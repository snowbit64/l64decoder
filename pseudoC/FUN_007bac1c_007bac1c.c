// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bac1c
// Entry Point: 007bac1c
// Size: 108 bytes
// Signature: undefined FUN_007bac1c(void)


void FUN_007bac1c(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  float local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (float)param_2[8];
  uStack_34 = param_2[0xc];
  local_30 = param_2[0x10];
  uStack_2c = param_2[0x14];
  AnimalHusbandry::setAnimalShaderParameters(param_1,*param_2,*(char **)(param_2 + 4),&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


