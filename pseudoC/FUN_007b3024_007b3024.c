// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3024
// Entry Point: 007b3024
// Size: 112 bytes
// Signature: undefined FUN_007b3024(void)


void FUN_007b3024(DensityMapHeightUpdater *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)DensityMapHeightUpdater::getInterpolatedCollisionHeightAtWorldPos
                           (param_1,*param_2,param_2[4],param_2[8],&local_2c);
  param_2[0x40] = fVar2;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = local_2c;
  param_2[0x46] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


