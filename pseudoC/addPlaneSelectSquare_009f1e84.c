// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPlaneSelectSquare
// Entry Point: 009f1e84
// Size: 208 bytes
// Signature: undefined __thiscall addPlaneSelectSquare(DeferredDebugRenderer * this, int param_1, float * param_2, float param_3, Matrix4x4 * param_4, CATEGORY param_5)


/* DeferredDebugRenderer::addPlaneSelectSquare(int, float const*, float, Matrix4x4 const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPlaneSelectSquare
          (DeferredDebugRenderer *this,int param_1,float *param_2,float param_3,Matrix4x4 *param_4,
          CATEGORY param_5)

{
  long lVar1;
  float afStack_78 [3];
  float afStack_6c [3];
  float afStack_60 [3];
  float afStack_54 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_5 == 0x7ff) || ((*(uint *)(this + 0x2a0) & param_5) != 0)) {
    getPlaneSelectSquares(param_1,param_3,param_4,(Vector3 *)afStack_78);
    addTriangle(this,afStack_78,param_2,afStack_60,param_2,afStack_6c,param_2,param_5);
    addTriangle(this,afStack_78,param_2,afStack_54,param_2,afStack_60,param_2,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


