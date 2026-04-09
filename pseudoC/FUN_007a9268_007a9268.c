// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9268
// Entry Point: 007a9268
// Size: 456 bytes
// Signature: undefined FUN_007a9268(void)


void FUN_007a9268(LightSource *param_1,double *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = LightSource::hasMergedShadow();
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined8 *)LightSource::getMergedShadowSettings();
    local_50._0_4_ = (float)*puVar3;
    switch(*(float *)(param_2 + 1)) {
    case 1.401298e-45:
      local_50._0_4_ = (float)(int)*(float *)param_2;
      break;
    case 2.802597e-45:
      local_50._0_4_ = (float)NEON_ucvtf(*(float *)param_2);
      break;
    case 5.605194e-45:
      local_50._0_4_ = *(float *)param_2;
      break;
    case 7.006492e-45:
      local_50._0_4_ = (float)*param_2;
    }
    local_50._4_4_ = (float)((ulong)*puVar3 >> 0x20);
    switch(*(float *)(param_2 + 3)) {
    case 1.401298e-45:
      local_50._4_4_ = (float)(int)*(float *)(param_2 + 2);
      break;
    case 2.802597e-45:
      local_50._4_4_ = (float)NEON_ucvtf(*(float *)(param_2 + 2));
      break;
    case 5.605194e-45:
      local_50._4_4_ = *(float *)(param_2 + 2);
      break;
    case 7.006492e-45:
      local_50._4_4_ = (float)param_2[2];
    }
    uStack_48._0_4_ = (float)puVar3[1];
    switch(*(float *)(param_2 + 5)) {
    case 1.401298e-45:
      uStack_48._0_4_ = (float)(int)*(float *)(param_2 + 4);
      break;
    case 2.802597e-45:
      uStack_48._0_4_ = (float)NEON_ucvtf(*(float *)(param_2 + 4));
      break;
    case 5.605194e-45:
      uStack_48._0_4_ = *(float *)(param_2 + 4);
      break;
    case 7.006492e-45:
      uStack_48._0_4_ = (float)param_2[4];
    }
    uStack_48._4_4_ = (float)((ulong)puVar3[1] >> 0x20);
    switch(*(float *)(param_2 + 7)) {
    case 1.401298e-45:
    case 2.802597e-45:
      uStack_48._4_4_ = *(float *)(param_2 + 6);
      break;
    case 5.605194e-45:
      uStack_48._4_4_ = (float)(int)*(float *)(param_2 + 6);
      break;
    case 7.006492e-45:
      uStack_48._4_4_ = (float)(int)param_2[6];
    }
    LightSource::setMergedShadowSettings(param_1,(MergedShadowSettings *)&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


