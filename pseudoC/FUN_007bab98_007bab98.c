// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bab98
// Entry Point: 007bab98
// Size: 132 bytes
// Signature: undefined FUN_007bab98(void)


void FUN_007bab98(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  AnimalHusbandry::getAnimalShaderParameters
            (param_1,*param_2,*(char **)(param_2 + 4),(float *)&local_38);
  param_2[0x40] = (uint)local_38;
  param_2[0x44] = local_38._4_4_;
  param_2[0x42] = 4;
  param_2[0x46] = 4;
  param_2[0x48] = (uint)local_30;
  param_2[0x4a] = 4;
  param_2[0x4c] = local_30._4_4_;
  param_2[0x4e] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


