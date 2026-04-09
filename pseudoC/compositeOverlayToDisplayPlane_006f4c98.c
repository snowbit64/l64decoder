// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compositeOverlayToDisplayPlane
// Entry Point: 006f4c98
// Size: 904 bytes
// Signature: undefined __cdecl compositeOverlayToDisplayPlane(IRenderDevice * param_1, IDisplay * param_2, uint param_3, float param_4, COLORSPACE param_5, ITextureObject * param_6, ISamplerObject * param_7, float * param_8)


/* OverlayRenderManager::compositeOverlayToDisplayPlane(IRenderDevice*, IDisplay*, unsigned int,
   float, IDisplay::COLORSPACE, ITextureObject*, ISamplerObject*, float const*) */

void OverlayRenderManager::compositeOverlayToDisplayPlane
               (IRenderDevice *param_1,IDisplay *param_2,uint param_3,float param_4,
               COLORSPACE param_5,ITextureObject *param_6,ISamplerObject *param_7,float *param_8)

{
  AdhocShader *this;
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  char *local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  ISamplerObject *pIStack_a0;
  undefined4 local_98;
  char *local_90;
  ISamplerObject *pIStack_88;
  undefined4 local_80;
  long local_78;
  
  plVar10 = (long *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar6 = initializeShadersForDisplay
                    ((OverlayRenderManager *)param_1,(IRenderDevice *)param_2,(IDisplay *)plVar10,
                     (COLORSPACE)param_6);
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)(**(code **)(*(long *)param_2 + 0x138))(param_2);
    (**(code **)(*plVar10 + 0xa8))(plVar10,param_2,param_5,0);
    uVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,param_5);
    lVar2 = (uVar6 & 0xffffffff) * 0x100 + ((ulong)param_6 & 0xffffffff) * 0x800;
    this = (AdhocShader *)(param_1 + lVar2 + 8);
    iVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,param_5);
    (**(code **)(*plVar7 + 0x48))(plVar7,*(undefined8 *)(param_1 + lVar2 + 0x10));
    iVar4 = AdhocShader::getConstantBufferHandle(this,"DeviceParameters");
    if (iVar4 != -1) {
      puVar8 = (undefined8 *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,iVar4,*(undefined8 *)(param_1 + 0x4018));
      *(float *)(puVar8 + 3) = param_4;
      *(float *)((long)puVar8 + 0x1c) = param_4;
      puVar8[1] = 0x3f8000003f800000;
      *puVar8 = 0;
      puVar8[2] = 0x460ca000461c4000;
      (**(code **)(*plVar7 + 0xa8))(plVar7,iVar4,*(undefined8 *)(param_1 + 0x4018));
    }
    iVar5 = AdhocShader::getConstantBufferHandle(this,"PreRotationParams");
    if (iVar5 != -1) {
      puVar9 = (undefined4 *)
               (**(code **)(*plVar7 + 0xa0))(plVar7,iVar5,*(undefined8 *)(param_1 + 0x4038));
      plVar10 = (long *)(**(code **)(*(long *)param_2 + 0x80))(param_2);
      uVar11 = (**(code **)(*plVar10 + 0xd0))();
      *puVar9 = uVar11;
      (**(code **)(*plVar7 + 0xa8))(plVar7,iVar5,*(undefined8 *)(param_1 + 0x4038));
    }
    pIStack_a0 = *(ISamplerObject **)param_1;
    if (param_7 != (ISamplerObject *)0x0) {
      pIStack_a0 = param_7;
    }
    pIStack_88 = *(ISamplerObject **)param_1;
    if (iVar3 != 0) {
      pIStack_88 = *(ISamplerObject **)(param_1 + 0x4008);
    }
    local_90 = "overlayTexture";
    local_a8 = "sceneTexture";
    uStack_c0 = *(undefined8 *)(param_1 + 0x4010);
    local_98 = 0xffffffff;
    local_80 = 0xffffffff;
    local_c8 = "sceneSampler";
    local_b8 = "overlaySampler";
    uStack_b0 = uStack_c0;
    (**(code **)(*plVar7 + 0xb8))(plVar7,*(undefined8 *)(param_1 + 0x4020));
    (**(code **)(*plVar7 + 0xb0))(plVar7,*(undefined8 *)(param_1 + 0x4028));
    (**(code **)(*plVar7 + 0xc0))(plVar7,*(undefined8 *)(param_1 + 0x4030));
    (**(code **)(*plVar7 + 0x50))(plVar7,0,0,0);
    (**(code **)(*plVar7 + 0x58))(plVar7,0);
    AdhocShader::bindResourcesPs
              (this,(ICommandBuffer *)plVar7,(ShaderTexture *)&local_a8,2,(ShaderStructBuffer *)0x0,
               0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(ShaderSampler *)&local_c8,2);
    (**(code **)(*plVar7 + 0xe8))(plVar7,3,0,0,0,0);
    AdhocShader::unbindResourcesPs
              (this,(ICommandBuffer *)plVar7,(ShaderTexture *)&local_a8,2,(ShaderStructBuffer *)0x0,
               0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(ShaderSampler *)&local_c8,2);
    if (iVar4 != -1) {
      (**(code **)(*plVar7 + 0x88))(plVar7,iVar4,0);
    }
    if (iVar5 != -1) {
      (**(code **)(*plVar7 + 0x88))(plVar7,iVar5,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


