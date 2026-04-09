// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lutColorGrading
// Entry Point: 00a3f328
// Size: 696 bytes
// Signature: undefined __thiscall lutColorGrading(ScreenSpaceProcessor * this, IRenderDevice * param_1, PostFxParams * param_2)


/* ScreenSpaceProcessor::lutColorGrading(IRenderDevice*, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::lutColorGrading
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,PostFxParams *param_2)

{
  ITextureObject **ppIVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ITextureObject *pIVar5;
  void *__dest;
  undefined8 *puVar6;
  long *plVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint uVar10;
  ACCESS_MODE AVar11;
  char *local_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  char *local_a8;
  long *plStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 local_7c;
  char *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  ppIVar1 = (ITextureObject **)(this + 0x1968);
  if (*(long *)(this + 0x1968) == 0) {
    local_ac = 0x20;
    uStack_94 = 0x10;
    uStack_90 = 1;
    local_b4 = 0x20;
    uStack_b0 = 0x20;
    local_bc = 0;
    uStack_b8 = 0xffffffff;
    uStack_84 = 0x3f80000000000000;
    local_8c = 0;
    uStack_88 = 0;
    local_c0 = 0;
    local_78 = "colorLUT";
    local_7c = 0;
    local_c8 = (char *)0x0;
    local_a8 = (char *)0x1;
    plStack_a0 = (long *)0x1600000001;
    local_98 = local_98 & 0xffffff00;
    pIVar5 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,plVar4,&local_c8);
    *ppIVar1 = pIVar5;
  }
  __dest = (void *)(**(code **)(**(long **)(this + 0x19b8) + 0x10))
                             (*(long **)(this + 0x19b8),plVar4);
  memcpy(__dest,param_2 + 0x70,0x108);
  *(float *)((long)__dest + 0x3c) = *(float *)(param_2 + 0xac) * *(float *)(param_2 + 0x2e0);
  (**(code **)(**(long **)(this + 0x19b8) + 0x18))(*(long **)(this + 0x19b8),plVar4);
  puVar6 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x19c8) + 0x10))(*(long **)(this + 0x19c8),plVar4);
  uVar9 = *(undefined8 *)(param_2 + 0x178);
  uVar2 = *(undefined4 *)(param_2 + 0x188);
  puVar6[1] = *(undefined8 *)(param_2 + 0x180);
  *puVar6 = uVar9;
  *(undefined4 *)(puVar6 + 2) = uVar2;
  (**(code **)(**(long **)(this + 0x19c8) + 0x18))(*(long **)(this + 0x19c8),plVar4);
  uVar9 = *(undefined8 *)(this + 0x19b8);
  uVar10 = 0;
  plVar7 = *(long **)(this + 0x19c0);
  local_c8 = "LUTColorGradingParams";
  local_c0 = (undefined2)uVar9;
  uStack_be = (undefined2)((ulong)uVar9 >> 0x10);
  local_bc = (undefined4)((ulong)uVar9 >> 0x20);
  uStack_b8 = 0x4d95af;
  local_b4 = 0;
  uStack_b0 = (undefined4)*(undefined8 *)(this + 0x19c8);
  local_ac = (undefined4)((ulong)*(undefined8 *)(this + 0x19c8) >> 0x20);
  local_a8 = "VolumeSliceIndex";
  local_98 = 0x5119fb;
  uStack_94 = 0;
  uStack_90 = (undefined4)*(undefined8 *)(this + 0x19d0);
  local_8c = (undefined4)((ulong)*(undefined8 *)(this + 0x19d0) >> 0x20);
  plStack_a0 = plVar7;
  while( true ) {
    pfVar8 = (float *)(**(code **)(*plVar7 + 0x10))(plVar7,plVar4);
    *pfVar8 = (float)(ulong)uVar10;
    (**(code **)(**(long **)(this + 0x19c0) + 0x18))(*(long **)(this + 0x19c0),plVar4);
    AVar11 = 0;
    if (uVar10 != 0x1f) {
      AVar11 = 3;
    }
    postProcess(this,param_1,(ShaderTexture *)0x0,0,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0
                ,0,(ShaderConstantBuffer *)&local_c8,4,(AdhocShader *)(this + 0xc58),ppIVar1,1,
                AVar11,false,uVar10);
    if (uVar10 == 0x1f) break;
    plVar7 = *(long **)(this + 0x19c0);
    uVar10 = uVar10 + 1;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,1,ppIVar1,0,0,0,1);
  if (this[0x1909] != (ScreenSpaceProcessor)0x0) {
    VulkanTextureObject::executeSnapdragonHack
              ((VulkanTextureObject *)*ppIVar1,(ICommandBuffer *)plVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


