// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCamera
// Entry Point: 009f6860
// Size: 204 bytes
// Signature: undefined __thiscall addCamera(DeferredDebugRenderer * this, Matrix4x4 * param_1, bool param_2, CATEGORY param_3)


/* DeferredDebugRenderer::addCamera(Matrix4x4 const&, bool, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addCamera
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,bool param_2,CATEGORY param_3)

{
  float *pfVar1;
  long lVar2;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(this + 0x2a0) & param_3) != 0) {
    pfVar1 = (float *)&DAT_0051b188;
    if (!param_2) {
      pfVar1 = (float *)&UNK_0051b0b8;
    }
    local_58 = *(undefined8 *)(param_1 + 0x30);
    local_50 = *(undefined4 *)(param_1 + 0x38);
    addPoint(this,(float *)&local_58,pfVar1,param_3);
    addProxyWireMesh(this,param_1,pfVar1,(float *)DeferredDebugProxyMeshUtil::s_cameraProxyVertices,
                     (ushort *)DeferredDebugProxyMeshUtil::s_cameraProxyIndices,
                     (ushort *)DeferredDebugProxyMeshUtil::s_cameraNumLineSegments,0x30,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


