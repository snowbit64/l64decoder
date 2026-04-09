// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderWireframeNode
// Entry Point: 00a159dc
// Size: 1336 bytes
// Signature: undefined __thiscall renderWireframeNode(Renderer * this, ScenegraphNode * param_1, float * param_2, ICommandBuffer * param_3, ITextureObject * param_4)


/* Renderer::renderWireframeNode(ScenegraphNode*, float const*, ICommandBuffer*, ITextureObject*) */

void __thiscall
Renderer::renderWireframeNode
          (Renderer *this,ScenegraphNode *param_1,float *param_2,ICommandBuffer *param_3,
          ITextureObject *param_4)

{
  uint uVar1;
  uint uVar2;
  ScenegraphNode SVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  TempData *pTVar7;
  ulong uVar8;
  RenderPathManager *this_00;
  float *pfVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  char *local_198;
  ITextureObject *local_190;
  ulong local_188;
  undefined4 local_180;
  undefined8 local_178;
  uint local_170;
  undefined8 local_168;
  ScenegraphNode *local_160;
  long *local_158;
  Renderer *pRStack_150;
  long *local_140;
  long *local_138;
  undefined8 local_110;
  undefined8 local_f0;
  Renderer *local_e8;
  Renderer *local_e0;
  Renderer *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (((byte)param_1[0x11] >> 3 & 1) != 0) {
    plVar13 = *(long **)(param_1 + 0x170);
    if ((plVar13 != (long *)0x0) && ((*(byte *)(plVar13 + 6) >> 2 & 1) == 0)) {
      RawTransformGroup::updateWorldTransformation();
      uStack_98 = *(undefined8 *)(param_1 + 0xe0);
      local_a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
      local_c0 = *(undefined8 *)(param_1 + 0xb8);
      local_88._0_4_ = (float)*(undefined8 *)(param_1 + 0xf0);
      uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_b0 = *(undefined8 *)(param_1 + 200);
      local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(this + 0xcb4) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0xe8) -
                          (float)*(undefined8 *)(this + 0xcb4));
      local_88 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20),
                          (float)local_88 - *(float *)(this + 0xcbc));
      if (((byte)param_1[0x11] >> 4 & 1) == 0) {
        (**(code **)(*(long *)param_3 + 0x48))(param_3,*(undefined8 *)(this + 0x1b98));
        pcVar10 = *(code **)(*(long *)param_3 + 0x68);
      }
      else {
        local_198 = "sceneDepthMap";
        local_e8 = *(Renderer **)
                    (*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x70) + 0x110) + 0x68);
        local_188 = local_188 & 0xffffffff00000000;
        local_e0 = (Renderer *)((ulong)local_e0 & 0xffffffff00000000);
        local_f0 = "terrainHeightMap";
        local_190 = param_4;
        AdhocShader::bindResourcesPs
                  ((AdhocShader *)(this + 0x1bd0),param_3,(ShaderTexture *)&local_198,1,
                   (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
                   (ShaderSampler *)0x0,0);
        AdhocShader::bindResourcesVs
                  ((AdhocShader *)(this + 0x1bd0),param_3,(ShaderTexture *)&local_f0,1,
                   (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)0x0,0,(ShaderSampler *)0x0,0)
        ;
        pfVar9 = (float *)(**(code **)(*(long *)param_3 + 0xa0))
                                    (param_3,0,*(undefined8 *)(this + 0x1ba8));
        ShaderStructLayout::setMatrix3x4(pfVar9 + 0x10,(Matrix4x4 *)&local_c0);
        ShaderStructLayout::setMatrix4x4(pfVar9,(Matrix4x4 *)(this + 0xc34));
        uVar12 = *(undefined8 *)param_2;
        *(undefined8 *)(pfVar9 + 0x1e) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(pfVar9 + 0x1c) = uVar12;
        lVar15 = *(long *)(param_1 + 0x170);
        lVar14 = *(long *)(lVar15 + 0x70);
        iVar6 = BaseTerrain::getHeightMapSize();
        pfVar9[0x24] = (float)(ulong)(iVar6 - 1);
        iVar6 = BaseTerrain::getHeightMapSize();
        pfVar9[0x25] = 1.0 / (float)(ulong)(iVar6 - 1);
        fVar17 = (float)BaseTerrain::getUnitsPerPixel();
        pfVar9[0x26] = fVar17;
        pfVar9[0x27] = *(float *)(lVar14 + 0xa4);
        fVar17 = (float)Camera::getNearClip();
        pfVar9[0x28] = fVar17;
        fVar17 = (float)Camera::getFarClip();
        pfVar9[0x29] = fVar17;
        uVar12 = NEON_ucvtf(*(undefined8 *)(lVar15 + 0x80),4);
        *(undefined8 *)(pfVar9 + 0x20) = uVar12;
        iVar6 = BaseTerrain::getHeightMapSize();
        pfVar9[0x22] = (float)(ulong)(iVar6 - 2);
        fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar15 + 0x90));
        pfVar9[0x23] = fVar17;
        param_4 = *(ITextureObject **)(this + 0x1ba8);
        pcVar10 = *(code **)(*(long *)param_3 + 0xa8);
      }
      (*pcVar10)(param_3,0,param_4);
      (**(code **)(*plVar13 + 0x20))(plVar13,*(undefined2 *)(param_1 + 0x196));
      local_e8 = this + 0x38;
      local_d8 = this + 0x560;
      local_f0 = (char *)CONCAT44(local_f0._4_4_,0x41200000);
      uStack_d0 = *(undefined8 *)(this + 0x8e4);
      local_c8 = *(undefined4 *)(this + 0x8ec);
      local_e0 = this + 0x960;
      pTVar7 = (TempData *)
               RenderController::getRenderQueueItemAllocatorTempDataForThreadIdx
                         ((RenderController *)(this + 0xf20),0xffffffff);
      RenderQueueItemAllocator::RenderQueueItemAllocator
                ((RenderQueueItemAllocator *)&local_198,pTVar7);
      local_180 = 0x3f800000;
      local_190 = *(ITextureObject **)(this + 0x1bb0);
      local_178 = 0;
      local_188 = 0x41200000;
      local_160 = param_1;
      local_158 = plVar13;
      pRStack_150 = this + 0x960;
      uVar8 = GsMaterial::getIsAlphaBlended();
      local_168 = 0;
      local_170 = 5;
      if ((uVar8 & 1) == 0) {
        local_170 = 3;
      }
      local_110 = 0;
      this_00 = (RenderPathManager *)RenderPathManager::getInstance();
      local_168 = RenderPathManager::getRenderPass(this_00,local_170);
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_198,*(undefined2 *)(param_1 + 0x196),&local_f0);
      lVar15 = *local_138;
      lVar14 = local_138[1];
      if ((lVar15 != lVar14) && (lVar14 != lVar15)) {
        do {
          lVar16 = *local_140;
          uVar8 = (ulong)*(uint *)(lVar15 + 0x24) & 0x3fffffff;
          lVar11 = lVar16 + uVar8 * 0xf0;
          uVar1 = *(uint *)(lVar11 + 0x9c);
          if (*(int *)(lVar11 + 0x30) == 0) {
            lVar11 = lVar16 + uVar8 * 0xf0;
            uVar2 = *(uint *)(lVar11 + 0x34);
            ((undefined8 *)(lVar11 + 0x38))[uVar2] = *(undefined8 *)(lVar11 + 0x38);
            *(uint *)(lVar11 + 0x34) = uVar2 + 1;
            SVar3 = param_1[0x11];
          }
          else {
            SVar3 = param_1[0x11];
          }
          if (((byte)SVar3 >> 4 & 1) == 0) {
            pfVar9 = (float *)(**(code **)(*(long *)param_3 + 0xa0))
                                        (param_3,0,*(undefined8 *)(this + 0x1ba0));
            ShaderStructLayout::setMatrix3x4(pfVar9 + 0x10,(Matrix4x4 *)&local_c0);
            ShaderStructLayout::setMatrix4x4(pfVar9,(Matrix4x4 *)(this + 0xc34));
            lVar11 = lVar16 + uVar8 * 0xf0;
            uVar12 = *(undefined8 *)param_2;
            *(undefined8 *)(pfVar9 + 0x1e) = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)(pfVar9 + 0x1c) = uVar12;
            uVar4 = *(ushort *)(lVar11 + 0xda);
            if (((uVar4 & 0x7fff) == 4) && (*(short *)(lVar11 + 0xd8) == 1)) {
              plVar13 = (long *)(lVar16 + uVar8 * 0xf0 + 0xe0);
              if ((short)uVar4 < 0) {
                plVar13 = (long *)*plVar13;
              }
              uVar12 = *plVar13;
              pfVar9[0x22] = *(float *)(plVar13 + 1);
              *(undefined8 *)(pfVar9 + 0x20) = uVar12;
              fVar17 = *(float *)((long)plVar13 + 0xc);
            }
            else {
              fVar17 = 1.0;
              pfVar9[0x22] = 0.0;
              *(undefined8 *)(pfVar9 + 0x20) = 0;
            }
            pfVar9[0x23] = fVar17;
            fVar17 = (float)Camera::getNearClip();
            pfVar9[0x24] = fVar17;
            fVar17 = (float)Camera::getFarClip();
            pfVar9[0x25] = fVar17;
            (**(code **)(*(long *)param_3 + 0xa8))(param_3,0,*(undefined8 *)(this + 0x1ba0));
          }
          lVar16 = lVar16 + uVar8 * 0xf0;
          lVar15 = lVar15 + (ulong)uVar1 * 0x28;
          (**(code **)(*(long *)param_3 + 0x50))
                    (param_3,lVar16 + 0x38,*(undefined4 *)(lVar16 + 0x34),
                     *(undefined8 *)(lVar16 + 0x80));
          (**(code **)(*(long *)param_3 + 0x58))(param_3,*(undefined8 *)(lVar16 + 0x78));
          (**(code **)(*(long *)param_3 + 0xe8))
                    (param_3,*(undefined4 *)(lVar16 + 100),*(undefined4 *)(lVar16 + 0x68),
                     *(undefined4 *)(lVar16 + 0x74),*(undefined4 *)(lVar16 + 0x6c),
                     *(undefined4 *)(lVar16 + 0x70));
        } while (lVar15 != lVar14);
      }
    }
    (**(code **)(*(long *)param_3 + 0x68))(param_3,0,0);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


