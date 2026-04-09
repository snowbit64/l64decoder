// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bab1c
// Entry Point: 007bab1c
// Size: 124 bytes
// Signature: undefined FUN_007bab1c(void)


void FUN_007bab1c(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  undefined8 local_38;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  AnimalHusbandry::getAnimalRotation(param_1,*param_2,(Vector3 *)&local_38);
  param_2[0x40] = (uint)local_38;
  param_2[0x42] = 4;
  param_2[0x44] = local_38._4_4_;
  param_2[0x46] = 4;
  param_2[0x48] = local_30;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


