// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRectScreenSpace
// Entry Point: 009fc330
// Size: 128 bytes
// Signature: undefined __thiscall addRectScreenSpace(DeferredDebugRenderer * this, float param_1, float param_2, float param_3, float param_4, float * param_5, CATEGORY param_6)


/* DeferredDebugRenderer::addRectScreenSpace(float, float, float, float, float*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addRectScreenSpace
          (DeferredDebugRenderer *this,float param_1,float param_2,float param_3,float param_4,
          float *param_5,CATEGORY param_6)

{
  long lVar1;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_50 = param_1 + param_3;
  local_28 = *(long *)(lVar1 + 0x28);
  fStack_44 = param_2 + param_4;
  local_58 = param_1;
  fStack_54 = param_2;
  fStack_4c = param_2;
  local_48 = param_1;
  local_40 = local_50;
  fStack_3c = param_2;
  local_38 = local_50;
  fStack_34 = fStack_44;
  local_30 = param_1;
  fStack_2c = fStack_44;
  addTrianglesScreenSpace(this,&local_58,*param_5,param_5[1],param_5[2],param_5[3],2,param_6);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


