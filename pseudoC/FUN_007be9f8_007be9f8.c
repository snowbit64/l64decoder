// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007be9f8
// Entry Point: 007be9f8
// Size: 180 bytes
// Signature: undefined FUN_007be9f8(void)


void FUN_007be9f8(float *param_1)

{
  long lVar1;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0.0;
  local_30 = 0.0;
  local_38 = 0;
  local_3c = 0.0;
  HeatmapUtil::getStatsAtWorldPos
            (*param_1,param_1[4],param_1[8],&local_2c,&local_30,(float *)((long)&local_38 + 4),
             (float *)&local_38,&local_3c);
  param_1[0x40] = local_2c;
  param_1[0x42] = 5.605194e-45;
  param_1[0x44] = local_30;
  param_1[0x4c] = (float)local_38;
  param_1[0x48] = local_38._4_4_;
  param_1[0x46] = 5.605194e-45;
  param_1[0x4a] = 5.605194e-45;
  param_1[0x4e] = 5.605194e-45;
  param_1[0x50] = local_3c;
  param_1[0x52] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


