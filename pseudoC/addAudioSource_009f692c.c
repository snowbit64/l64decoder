// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAudioSource
// Entry Point: 009f692c
// Size: 464 bytes
// Signature: undefined __thiscall addAudioSource(DeferredDebugRenderer * this, Matrix4x4 * param_1, float param_2, float param_3, float * param_4, bool param_5, CATEGORY param_6)


/* DeferredDebugRenderer::addAudioSource(Matrix4x4 const&, float, float, float const*, bool,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addAudioSource
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float param_2,float param_3,float *param_4
          ,bool param_5,CATEGORY param_6)

{
  long lVar1;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x2a0) & param_6) != 0) {
    local_98 = *(undefined8 *)param_4;
    local_68 = *(undefined8 *)(param_1 + 0x30);
    local_90 = param_4[2];
    local_60 = *(undefined4 *)(param_1 + 0x38);
    local_6c = 0x3f733333;
    local_7c = 0x3f733333;
    local_8c = 0x3f733333;
    local_88 = local_98;
    local_80 = local_90;
    local_78 = local_98;
    local_70 = local_90;
    addPoint(this,(float *)&local_68,(float *)&local_98,param_6);
    addSphere((float *)this,param_3,(float *)&local_68,(CATEGORY)&local_98,
              (Matrix4x4 *)(ulong)param_6,0,false,(Vector3 *)0x0);
    if (!param_5) {
      addProxyWireMesh(this,param_1,(float *)&local_98,
                       (float *)DeferredDebugProxyMeshUtil::s_audioProxyVertices,
                       (ushort *)DeferredDebugProxyMeshUtil::s_audioProxyIndices,
                       (ushort *)DeferredDebugProxyMeshUtil::s_audioNumLineSegments,10,param_6);
    }
    if ((0.001 < param_2) && (param_2 != param_3)) {
      local_90 = local_90 * 0.7;
      local_80 = local_80 * 0.7;
      local_70 = local_70 * 0.7;
      local_78 = CONCAT44((float)((ulong)local_78 >> 0x20) * 0.7,(float)local_78 * 0.7);
      local_8c = 0x3eaa3d70;
      local_7c = 0x3eaa3d70;
      local_98 = CONCAT44((float)((ulong)local_98 >> 0x20) * 0.7,(float)local_98 * 0.7);
      local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) * 0.7,(float)local_88 * 0.7);
      local_6c = 0x3eaa3d70;
      addSphere((float *)this,param_2,(float *)&local_68,(CATEGORY)&local_98,
                (Matrix4x4 *)(ulong)param_6,0,false,(Vector3 *)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


