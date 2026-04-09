// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processDepth
// Entry Point: 00a3dfc0
// Size: 2120 bytes
// Signature: undefined __thiscall processDepth(ScreenSpaceProcessor * this, IRenderDevice * param_1, ITextureObject * param_2, RenderArgs * param_3, PostFxParams * param_4)


/* ScreenSpaceProcessor::processDepth(IRenderDevice*, ITextureObject*, RenderArgs const*,
   PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::processDepth
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ITextureObject *param_2,
          RenderArgs *param_3,PostFxParams *param_4)

{
  ITextureObject **ppIVar1;
  ITextureObject **ppIVar2;
  long **pplVar3;
  ScreenSpaceProcessor SVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ICommandBuffer *pIVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  ITextureObject *pIVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  ITextureObject *local_1c0;
  ITextureObject *local_1b8;
  char *local_1b0;
  long *plStack_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  char *local_188;
  long *plStack_180;
  undefined4 local_178;
  char *local_170;
  ITextureObject *pIStack_168;
  undefined4 local_160;
  char *local_158;
  undefined8 uStack_150;
  char *local_148;
  ITextureObject *pIStack_140;
  undefined4 local_138;
  char *local_130;
  undefined8 uStack_128;
  char *local_120;
  ITextureObject *pIStack_118;
  undefined4 local_110;
  char *local_108;
  undefined8 uStack_100;
  char *local_f8;
  long *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  char *local_c8;
  ITextureObject *local_c0;
  undefined4 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  local_1b8 = param_2;
  if ((this[0x187c] != (ScreenSpaceProcessor)0x0) && (this[0x187b] != (ScreenSpaceProcessor)0x0)) {
    plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    if (*(long *)(this + 0x1b18) != 0) {
      local_f8 = *(char **)(this + (ulong)*(uint *)(this + 0x1b38) * 8 + 0x1b18);
      local_f0 = *(long **)(this + 0x1b28);
      uVar13 = *(undefined8 *)(this + (ulong)(1 - *(uint *)(this + 0x1b38)) * 8 + 0x1b18);
      local_e8 = *(undefined8 *)(this + 0x1b30);
      *(char **)(this + 0x1970) = local_f8;
      *(undefined8 *)(this + 0x1978) = uVar13;
      (**(code **)(*plVar8 + 0x120))(plVar8,1,&local_1b8,0,0,0,1);
      if (((*(int *)(this + 0x1b40) != 0) && (*(float *)(this + 0x1b68) < 1.0)) ||
         ((*(long *)(this + 0x1b70) != 0 && (*(int *)(*(long *)(this + 0x1b70) + 0x97c) != 0)))) {
        uVar13 = 3;
      }
      else {
        uVar13 = 1;
      }
      (**(code **)(*plVar8 + 0x120))(plVar8,uVar13,&local_f8,0,0,1,0xc);
      pIVar9 = (ICommandBuffer *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
      processDepthBuffer(this,pIVar9,local_1b8,param_3,*(ITextureObject **)(this + 0x1970),
                         *(ITextureObject **)(this + 0x1b28),*(ITextureObject **)(this + 0x1b30));
      if (((*(int *)(this + 0x1b40) != 0) && (*(float *)(this + 0x1b68) < 1.0)) ||
         ((*(long *)(this + 0x1b70) != 0 && (*(int *)(*(long *)(this + 0x1b70) + 0x97c) != 0)))) {
        uVar13 = 3;
      }
      else {
        uVar13 = 1;
      }
      (**(code **)(*plVar8 + 0x120))(plVar8,uVar13,&local_f8,0,0,0,8);
      if (*(long *)(this + 0x1b20) != 0) {
        *(int *)(this + 0x1b38) = 1 - *(int *)(this + 0x1b38);
      }
    }
    if ((this[0x1878] != (ScreenSpaceProcessor)0x0) && (*(int *)(this + 0x1b40) != 0)) {
      fVar21 = *(float *)(param_3 + 0x80);
      fVar23 = *(float *)(param_3 + 0x94);
      pplVar3 = (long **)(this + 0x1b28);
      if (1.0 <= *(float *)(this + 0x1b68)) {
        pplVar3 = (long **)(this + 0x1970);
      }
      plVar14 = *pplVar3;
      uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14);
      local_b0 = 2.0 / (fVar21 * (float)(uVar10 & 0xffffffff));
      uVar10 = (**(code **)(*plVar14 + 0x28))(plVar14);
      SVar4 = this[0x1b79];
      fStack_a8 = -1.0 / fVar21;
      fStack_ac = 2.0 / (fVar23 * (float)(uVar10 & 0xffffffff));
      fStack_a4 = -1.0 / fVar23;
      pfVar11 = (float *)(**(code **)(**(long **)(this + 0x19b0) + 0x10))
                                   (*(long **)(this + 0x19b0),plVar8);
      *(ulong *)(pfVar11 + 0x12) = CONCAT44(fStack_a4,fStack_a8);
      *(ulong *)(pfVar11 + 0x10) = CONCAT44(fStack_ac,local_b0);
      uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14);
      uVar7 = (**(code **)(*plVar14 + 0x28))(plVar14);
      fVar21 = (float)TransformArgs::getImagePlanePixelsPerMeter
                                ((TransformArgs *)param_3,uVar6,uVar7);
      pfVar11[0x14] = fVar21;
      *(undefined8 *)(pfVar11 + 0x15) = *(undefined8 *)(param_4 + 0x23c);
      fVar21 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1b40));
      pfVar11[0x17] = fVar21;
      pfVar11[0x19] = *(float *)(param_3 + 0xc0);
      if (SVar4 == (ScreenSpaceProcessor)0x0) {
        uVar6 = 2;
        pfVar11[0x18] = 0.0;
      }
      else {
        fVar21 = (float)MathUtil::getRandomMinMax(0.0,1.0);
        pfVar11[0x18] = fVar21 * 3.1415;
        fVar28 = *(float *)(param_3 + 0x154);
        fVar21 = *(float *)(param_3 + 0x120);
        fVar23 = *(float *)(param_3 + 0x124);
        uVar31 = *(undefined4 *)(param_3 + 0x150);
        uVar18 = *(undefined4 *)(param_3 + 0x110);
        uVar20 = *(undefined4 *)(param_3 + 0x114);
        fVar26 = *(float *)(param_3 + 0x128);
        fVar27 = *(float *)(param_3 + 300);
        fVar34 = *(float *)(param_3 + 0x164);
        uVar36 = NEON_fmadd(uVar31,uVar18,fVar28 * fVar21);
        uVar39 = NEON_fmadd(uVar31,uVar20,fVar28 * fVar23);
        uVar32 = *(undefined4 *)(param_3 + 0x158);
        uVar16 = *(undefined4 *)(param_3 + 0x130);
        uVar19 = *(undefined4 *)(param_3 + 0x134);
        uVar30 = *(undefined4 *)(param_3 + 0x118);
        uVar22 = *(undefined4 *)(param_3 + 0x11c);
        uVar37 = NEON_fmadd(uVar32,uVar16,uVar36);
        uVar24 = *(undefined4 *)(param_3 + 0x160);
        uVar40 = NEON_fmadd(uVar32,uVar19,uVar39);
        uVar41 = NEON_fmadd(uVar31,uVar30,fVar28 * fVar26);
        uVar33 = *(undefined4 *)(param_3 + 0x15c);
        uVar39 = NEON_fmadd(uVar31,uVar22,fVar28 * fVar27);
        uVar31 = *(undefined4 *)(param_3 + 0x140);
        uVar43 = NEON_fmadd(uVar24,uVar18,fVar21 * fVar34);
        uVar44 = NEON_fmadd(uVar24,uVar20,fVar23 * fVar34);
        uVar36 = *(undefined4 *)(param_3 + 0x144);
        uVar45 = NEON_fmadd(uVar24,uVar30,fVar26 * fVar34);
        uVar29 = *(undefined4 *)(param_3 + 0x138);
        uVar35 = NEON_fmadd(uVar24,uVar22,fVar27 * fVar34);
        uVar25 = *(undefined4 *)(param_3 + 0x13c);
        uVar38 = NEON_fmadd(uVar33,uVar31,uVar37);
        uVar42 = *(undefined4 *)(param_3 + 0x168);
        uVar40 = NEON_fmadd(uVar33,uVar36,uVar40);
        uVar41 = NEON_fmadd(uVar32,uVar29,uVar41);
        uVar37 = *(undefined4 *)(param_3 + 0x148);
        uVar24 = NEON_fmadd(uVar32,uVar25,uVar39);
        uVar39 = *(undefined4 *)(param_3 + 0x14c);
        uVar43 = NEON_fmadd(uVar42,uVar16,uVar43);
        uVar44 = NEON_fmadd(uVar42,uVar19,uVar44);
        uVar32 = *(undefined4 *)(param_3 + 0x16c);
        uVar45 = NEON_fmadd(uVar42,uVar29,uVar45);
        uVar41 = NEON_fmadd(uVar33,uVar37,uVar41);
        uVar35 = NEON_fmadd(uVar42,uVar25,uVar35);
        uVar24 = NEON_fmadd(uVar33,uVar39,uVar24);
        local_f8 = (char *)CONCAT44(uVar40,uVar38);
        uVar33 = NEON_fmadd(uVar32,uVar31,uVar43);
        uVar38 = NEON_fmadd(uVar32,uVar36,uVar44);
        fVar28 = *(float *)(param_3 + 0x174);
        uVar42 = *(undefined4 *)(param_3 + 0x180);
        local_f0 = (long *)CONCAT44(uVar24,uVar41);
        uVar24 = NEON_fmadd(uVar32,uVar37,uVar45);
        uVar32 = NEON_fmadd(uVar32,uVar39,uVar35);
        local_e8 = CONCAT44(uVar38,uVar33);
        uVar33 = *(undefined4 *)(param_3 + 0x170);
        fVar34 = *(float *)(param_3 + 0x184);
        local_e0 = (char *)CONCAT44(uVar32,uVar24);
        uVar24 = NEON_fmadd(uVar33,uVar18,fVar21 * fVar28);
        uVar40 = NEON_fmadd(uVar33,uVar20,fVar23 * fVar28);
        uVar35 = NEON_fmadd(uVar33,uVar30,fVar26 * fVar28);
        uVar38 = NEON_fmadd(uVar33,uVar22,fVar27 * fVar28);
        uVar41 = *(undefined4 *)(param_3 + 0x178);
        uVar18 = NEON_fmadd(uVar42,uVar18,fVar21 * fVar34);
        uVar20 = NEON_fmadd(uVar42,uVar20,fVar23 * fVar34);
        uVar30 = NEON_fmadd(uVar42,uVar30,fVar26 * fVar34);
        uVar32 = NEON_fmadd(uVar42,uVar22,fVar27 * fVar34);
        uVar33 = *(undefined4 *)(param_3 + 0x188);
        uVar22 = NEON_fmadd(uVar41,uVar16,uVar24);
        uVar24 = NEON_fmadd(uVar41,uVar19,uVar40);
        uVar35 = NEON_fmadd(uVar41,uVar29,uVar35);
        uVar40 = NEON_fmadd(uVar41,uVar25,uVar38);
        uVar38 = *(undefined4 *)(param_3 + 0x17c);
        uVar16 = NEON_fmadd(uVar33,uVar16,uVar18);
        uVar19 = NEON_fmadd(uVar33,uVar19,uVar20);
        uVar30 = NEON_fmadd(uVar33,uVar29,uVar30);
        uVar25 = NEON_fmadd(uVar33,uVar25,uVar32);
        uVar18 = *(undefined4 *)(param_3 + 0x18c);
        uVar20 = NEON_fmadd(uVar38,uVar31,uVar22);
        uVar22 = NEON_fmadd(uVar38,uVar36,uVar24);
        local_d0 = NEON_fmadd(uVar38,uVar37,uVar35);
        uStack_cc = NEON_fmadd(uVar38,uVar39,uVar40);
        uVar31 = NEON_fmadd(uVar18,uVar31,uVar16);
        uVar16 = NEON_fmadd(uVar18,uVar36,uVar19);
        uVar36 = NEON_fmadd(uVar18,uVar37,uVar30);
        uVar18 = NEON_fmadd(uVar18,uVar39,uVar25);
        local_d8 = CONCAT44(uVar22,uVar20);
        local_c8 = (char *)CONCAT44(uVar16,uVar31);
        local_c0 = (ITextureObject *)CONCAT44(uVar18,uVar36);
        ShaderStructLayout::setMatrix4x4(pfVar11,(Matrix4x4 *)&local_f8);
        uVar6 = 3;
      }
      (**(code **)(**(long **)(this + 0x19b0) + 0x18))(*(long **)(this + 0x19b0),plVar8);
      local_d8 = *(undefined8 *)(this + 0x1b30);
      local_f8 = "resolvedSceneDepthHalfTexture";
      local_e0 = "reconstructedNormalsHalfResTexture";
      ppIVar1 = (ITextureObject **)(this + (ulong)*(uint *)(this + 0x1940) * 8 + 0x1948);
      uVar10 = (ulong)~*(uint *)(this + 0x1940) & 1;
      local_c0 = *ppIVar1;
      ppIVar2 = (ITextureObject **)(this + uVar10 * 8 + 0x1948);
      local_c8 = "sceneTexture";
      uStack_100 = *(undefined8 *)(this + 0x19b0);
      local_e8 = CONCAT44(local_e8._4_4_,0xffffffff);
      local_108 = "SaoParams";
      local_d0 = 0xffffffff;
      local_b8 = 0xffffffff;
      local_f0 = plVar14;
      postProcess(this,param_1,(ShaderTexture *)&local_f8,uVar6,(ShaderStructBuffer *)0x0,0,
                  (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_108,1,
                  (AdhocShader *)(this + 0x1358),ppIVar2,1,0,false,0);
      *(int *)(this + 0x1940) = (int)uVar10;
      pIStack_118 = *ppIVar2;
      local_110 = 0xffffffff;
      uStack_128 = *(undefined8 *)(this + 0x19a0);
      local_130 = "SaoBlurParams";
      local_120 = "sceneTexture";
      (**(code **)(*plVar8 + 0x120))(plVar8,1,ppIVar2,0,0,0,1);
      postProcess(this,param_1,(ShaderTexture *)&local_120,1,(ShaderStructBuffer *)0x0,0,
                  (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_130,1,
                  (AdhocShader *)(this + 0x1458),ppIVar1,1,0,false,0);
      pIStack_140 = *ppIVar1;
      ppIVar2 = (ITextureObject **)(this + 0x1958);
      if (1.0 <= *(float *)(this + 0x1b68)) {
        ppIVar2 = (ITextureObject **)(this + 0x1960);
      }
      pIVar15 = *ppIVar2;
      local_148 = "sceneTexture";
      uStack_150 = *(undefined8 *)(this + 0x19a8);
      local_138 = 0xffffffff;
      local_158 = "SaoBlurParams";
      local_1c0 = pIVar15;
      (**(code **)(*plVar8 + 0x120))(plVar8,1,ppIVar1,0,0,0,1);
      postProcess(this,param_1,(ShaderTexture *)&local_148,1,(ShaderStructBuffer *)0x0,0,
                  (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_158,1,
                  (AdhocShader *)(this + 0x1458),&local_1c0,1,0,false,0);
      if (*(float *)(this + 0x1b68) < 1.0) {
        uVar13 = *(undefined8 *)(this + 0x1868);
        plStack_1a8 = *(long **)(this + 0x19e8);
        uVar17 = NEON_ucvtf(uVar13,4);
        local_188 = "resolvedSceneDepthHalfTexture";
        local_190 = 0xffffffff;
        local_178 = 0xffffffff;
        local_160 = 0xffffffff;
        local_170 = "sceneTexture";
        uStack_198 = *(undefined8 *)(this + 0x1970);
        uStack_98 = 0;
        uVar13 = NEON_ucvtf(CONCAT44((int)((ulong)uVar13 >> 0x20) + 1,(int)uVar13 + 1) &
                            0xfffffffefffffffe,4);
        local_1a0 = "resolvedSceneDepthTexture";
        local_1b0 = "CopyTextureParams";
        local_a0 = CONCAT44((float)((ulong)uVar17 >> 0x20) / (float)((ulong)uVar13 >> 0x20),
                            (float)uVar17 / (float)uVar13);
        plStack_180 = plVar14;
        pIStack_168 = pIVar15;
        puVar12 = (undefined8 *)(**(code **)(*plStack_1a8 + 0x10))(plStack_1a8,plVar8);
        puVar12[1] = uStack_98;
        *puVar12 = local_a0;
        uVar13 = NEON_ucvtf(*(undefined8 *)(this + 0x1868),4);
        puVar12[2] = uVar13;
        (**(code **)(**(long **)(this + 0x19e8) + 0x18))(*(long **)(this + 0x19e8),plVar8);
        (**(code **)(*plVar8 + 0x120))(plVar8,1,&local_1c0,0,0,0,1);
        postProcess(this,param_1,(ShaderTexture *)&local_1a0,3,(ShaderStructBuffer *)0x0,0,
                    (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_1b0,1,
                    (AdhocShader *)(this + 0x1558),(ITextureObject **)(this + 0x1960),1,0,false,0);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


