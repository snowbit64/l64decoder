// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796100
// Entry Point: 00796100
// Size: 168 bytes
// Signature: undefined FUN_00796100(void)


void FUN_00796100(float *param_1)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1[0x1c];
  fStack_3c = param_1[0x20];
  CullingGrid2D::setWorldProperties
            ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,*param_1,param_1[4],
             param_1[8],param_1[0xc],param_1[0x10],param_1[0x14],(uint)param_1[0x18],2,&local_40);
  DecalCullingStructure::setWorldProperties
            ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),*param_1,
             param_1[8],param_1[0xc],param_1[0x14],0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


