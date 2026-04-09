// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796080
// Entry Point: 00796080
// Size: 128 bytes
// Signature: undefined FUN_00796080(void)


void FUN_00796080(float *param_1)

{
  long lVar1;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1[0x1c];
  fStack_2c = param_1[0x20];
  CullingGrid2D::setWorldProperties
            ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),*param_1,param_1[4],
             param_1[8],param_1[0xc],param_1[0x10],param_1[0x14],(uint)param_1[0x18],2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


