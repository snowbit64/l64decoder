// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDiamondWithArrows
// Entry Point: 0074e1c0
// Size: 396 bytes
// Signature: undefined __thiscall renderDiamondWithArrows(DebugMarkerManager * this, Matrix4x4 * param_1, uchar param_2, float param_3, float param_4)


/* DebugMarkerManager::renderDiamondWithArrows(Matrix4x4 const&, unsigned char, float, float) */

void __thiscall
DebugMarkerManager::renderDiamondWithArrows
          (DebugMarkerManager *this,Matrix4x4 *param_1,uchar param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float afStack_78 [4];
  float afStack_68 [4];
  float afStack_58 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  lVar1 = (ulong)param_2 * 0xc;
  local_48 = *(long *)(lVar2 + 0x28);
  Vector4::set((Vector4 *)afStack_58,*(float *)(s_colors + lVar1),*(float *)(s_colors + lVar1 + 4),
               *(float *)(s_colors + lVar1 + 8),param_4);
  DeferredDebugRenderer::addSolidMesh
            (*(DeferredDebugRenderer **)this,param_1,afStack_58,(float *)s_diamondVerts,
             (ushort *)s_diamondIndices,8,param_3,0x7ff,true);
  Vector4::set((Vector4 *)afStack_58,1.0,0.0,0.0,param_4);
  Vector4::set((Vector4 *)afStack_68,0.0,1.0,0.0,param_4);
  Vector4::set((Vector4 *)afStack_78,0.0,0.0,1.0,param_4);
  DeferredDebugRenderer::addSolidMesh
            (*(DeferredDebugRenderer **)this,param_1,afStack_58,(float *)s_diamondArrowXVerts,
             (ushort *)s_diamondArrowIndices,0xe,param_3,0x7ff,true);
  DeferredDebugRenderer::addSolidMesh
            (*(DeferredDebugRenderer **)this,param_1,afStack_68,(float *)s_diamondArrowYVerts,
             (ushort *)s_diamondArrowIndices,0xe,param_3,0x7ff,true);
  DeferredDebugRenderer::addSolidMesh
            (*(DeferredDebugRenderer **)this,param_1,afStack_78,(float *)s_diamondArrowZVerts,
             (ushort *)s_diamondArrowIndices,0xe,param_3,0x7ff,true);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


