// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9e1c
// Entry Point: 007b9e1c
// Size: 180 bytes
// Signature: undefined FUN_007b9e1c(void)


void FUN_007b9e1c(VehicleNavigationMapGenerator *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  float local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[4];
  local_48 = param_2[0xc];
  local_50 = 0.0;
  local_4c = 0xffffffff;
  local_30 = param_2[8];
  uStack_44 = param_2[0x10];
  local_40 = param_2[0x14];
  VehicleNavigationMapGenerator::findClosestSplinePosition
            (param_1,(Vector3 *)&local_38,(Vector3 *)&local_48,(float)param_2[0x18],&local_4c,
             &local_50);
  param_2[0x42] = 1;
  uVar1 = 0;
  if (local_4c != 0xffffffff) {
    uVar1 = local_4c;
  }
  param_2[0x44] = local_50;
  param_2[0x46] = 4;
  param_2[0x40] = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


