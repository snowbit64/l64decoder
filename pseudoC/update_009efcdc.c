// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 009efcdc
// Size: 1064 bytes
// Signature: undefined __thiscall update(AtmosphereRenderControllerShared * this, IRenderDevice * param_1, ITextureObject * param_2, PostFxParams * param_3)


/* AtmosphereRenderControllerShared::update(IRenderDevice*, ITextureObject*, PostFxParams const&) */

void __thiscall
AtmosphereRenderControllerShared::update
          (AtmosphereRenderControllerShared *this,IRenderDevice *param_1,ITextureObject *param_2,
          PostFxParams *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  AdhocShader *this_00;
  long *plVar7;
  long **pplVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  char *local_e0;
  ITextureObject *pIStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  long *plStack_b0;
  undefined4 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  init(this,param_1,(ICommandBuffer *)plVar5);
  GlobalTimeManager::getInstance();
  fVar9 = (float)GlobalTimeManager::getCurrentDt();
  fVar9 = fVar9 * 0.001;
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x2c8),fVar9,*(undefined4 *)(this + 0x2a8));
  *(undefined4 *)(this + 0x2a8) = uVar12;
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x2cc),fVar9,*(undefined4 *)(this + 0x2ac));
  *(undefined4 *)(this + 0x2ac) = uVar12;
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x290),fVar9,*(undefined4 *)(this + 0x2b0));
  *(undefined4 *)(this + 0x2b0) = uVar12;
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x294),fVar9,*(undefined4 *)(this + 0x2b4));
  *(undefined4 *)(this + 0x2b4) = uVar12;
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x2c0),fVar9,*(undefined4 *)(this + 700));
  *(undefined4 *)(this + 700) = uVar12;
  puVar6 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x30) + 0x10))(*(long **)(this + 0x30),plVar5);
  uVar10 = *(undefined8 *)(param_3 + 0x18c);
  puVar6[1] = *(undefined8 *)(param_3 + 0x194);
  *puVar6 = uVar10;
  uVar13 = *(undefined8 *)(param_3 + 0x1bc);
  uVar11 = *(undefined8 *)(param_3 + 0x1d4);
  uVar10 = *(undefined8 *)(param_3 + 0x1cc);
  uVar15 = *(undefined8 *)(param_3 + 0x1a4);
  uVar14 = *(undefined8 *)(param_3 + 0x19c);
  uVar17 = *(undefined8 *)(param_3 + 0x1b4);
  uVar16 = *(undefined8 *)(param_3 + 0x1ac);
  puVar6[7] = *(undefined8 *)(param_3 + 0x1c4);
  puVar6[6] = uVar13;
  puVar6[9] = uVar11;
  puVar6[8] = uVar10;
  puVar6[3] = uVar15;
  puVar6[2] = uVar14;
  puVar6[5] = uVar17;
  puVar6[4] = uVar16;
  *(undefined4 *)puVar6 = *(undefined4 *)(this + 0x2a8);
  *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(this + 0x2ac);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(this + 0x2b8);
  (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),plVar5);
  puVar6 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x38) + 0x10))(*(long **)(this + 0x38),plVar5);
  uVar12 = *(undefined4 *)(param_3 + 0x1e4);
  *puVar6 = *(undefined8 *)(param_3 + 0x1dc);
  *(undefined4 *)(puVar6 + 1) = uVar12;
  (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),plVar5);
  if (this[0x2c0] != (AtmosphereRenderControllerShared)0x0) {
    processFx(this,(ICommandBuffer *)plVar5,(AdhocShader *)(this + 0x170),(ShaderTexture *)0x0,0,
              *(ITextureObject **)(this + 0x50),(ShaderConstantBuffer *)0x0,0);
    (**(code **)(*plVar5 + 0x120))(plVar5,1,this + 0x50,0,0,0,1);
    this[0x2c0] = (AtmosphereRenderControllerShared)0x0;
  }
  pplVar8 = (long **)(this + 0x48);
  local_80 = *pplVar8;
  uStack_88 = *(undefined8 *)(this + 0x40);
  uStack_78 = 0;
  local_90 = 0;
  (**(code **)(*plVar5 + 0x120))(plVar5,2,&uStack_88,0,&local_90,1,0xc);
  uStack_98 = *(undefined8 *)(this + 0x38);
  plStack_b0 = *(long **)(this + 0x40);
  uStack_f0 = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
  local_e8 = 0xffffffff;
  local_a0 = "CloudTypeParams";
  local_f8 = "cloudTypeAtlasTexture";
  local_b8 = "outMip1";
  local_a8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  this_00 = (AdhocShader *)
            AdhocShader::ShaderVariants::getShader((ShaderVariants *)(this + 0x270),0);
  AdhocShader::bindResourcesCs
            (this_00,(ICommandBuffer *)plVar5,(ShaderTexture *)&local_f8,1,(ShaderStructBuffer *)0x0
             ,0,(ShaderTexture *)&local_b8,1,(ShaderStructBuffer *)&local_c8,0,
             (ShaderConstantBuffer *)&local_a0,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,
             3);
  plVar7 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar7 + 0x60))(plVar7,1,1,1);
  (**(code **)(*plVar5 + 0x120))(plVar5,1,pplVar8,0,0,1,0xc);
  uStack_f0 = *(undefined8 *)(*(long *)(this + 0x20) + 0x68);
  local_e8 = 0xffffffff;
  local_e0 = "localCloudCoverageMap";
  local_d0 = 0xffffffff;
  local_f8 = "cloudCoverageNoise";
  uStack_98 = *(undefined8 *)(this + 0x30);
  local_a0 = "CloudCoverageParams";
  pIStack_d8 = param_2;
  iVar4 = (**(code **)(**pplVar8 + 0x20))();
  uVar1 = iVar4 + 7U >> 3;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  iVar4 = (**(code **)(**pplVar8 + 0x28))(*pplVar8);
  plStack_b0 = *pplVar8;
  uVar2 = iVar4 + 7U >> 3;
  local_b8 = "outMip1";
  local_a8 = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + 0x70),(ICommandBuffer *)plVar5,(ShaderTexture *)&local_f8,2,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_b8,1,(ShaderStructBuffer *)0x0,0,
             (ShaderConstantBuffer *)&local_a0,1,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,
             3);
  plVar7 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar7 + 0x60))(plVar7,uVar1,uVar2,1);
  (**(code **)(*plVar5 + 0x120))(plVar5,2,&uStack_88,0,0,0,8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


