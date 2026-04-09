// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDiamond
// Entry Point: 0074e10c
// Size: 180 bytes
// Signature: undefined __thiscall renderDiamond(DebugMarkerManager * this, Matrix4x4 * param_1, uchar param_2, float param_3, float param_4)


/* DebugMarkerManager::renderDiamond(Matrix4x4 const&, unsigned char, float, float) */

void __thiscall
DebugMarkerManager::renderDiamond
          (DebugMarkerManager *this,Matrix4x4 *param_1,uchar param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float afStack_48 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  lVar1 = (ulong)param_2 * 0xc;
  local_38 = *(long *)(lVar2 + 0x28);
  Vector4::set((Vector4 *)afStack_48,*(float *)(s_colors + lVar1),*(float *)(s_colors + lVar1 + 4),
               *(float *)(s_colors + lVar1 + 8),param_4);
  DeferredDebugRenderer::addSolidMesh
            (*(DeferredDebugRenderer **)this,param_1,afStack_48,(float *)s_diamondVerts,
             (ushort *)s_diamondIndices,8,param_3,0x7ff,true);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


