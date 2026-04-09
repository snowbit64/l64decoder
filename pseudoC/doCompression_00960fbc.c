// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doCompression
// Entry Point: 00960fbc
// Size: 872 bytes
// Signature: undefined __thiscall doCompression(MultiresTextureGpuUpdater * this, IComputeCommandBuffer * param_1, TileUpdateInfo * param_2)


/* MultiresTextureGpuUpdater::doCompression(IComputeCommandBuffer*,
   MultiresTextureGpuUpdater::TileUpdateInfo&) */

void __thiscall
MultiresTextureGpuUpdater::doCompression
          (MultiresTextureGpuUpdater *this,IComputeCommandBuffer *param_1,TileUpdateInfo *param_2)

{
  undefined8 *puVar1;
  char **ppcVar2;
  uint uVar3;
  AdhocShader *this_00;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  AdhocShader **ppAVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined **ppuVar24;
  char **ppcVar25;
  undefined8 *puVar26;
  char **ppcVar27;
  TileUpdateInfo *pTVar28;
  ulong uVar29;
  char **ppcVar30;
  undefined8 uVar31;
  MultiresTextureGpuUpdater *local_138;
  MultiresTextureGpuUpdater *pMStack_130;
  undefined8 local_128;
  char *local_120;
  char *local_118 [4];
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined *apuStack_d8 [4];
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar20 = *(long *)(this + 0x110);
  uVar3 = (int)(1L << ((ulong)*(uint *)(lVar20 + 8) & 0x3f)) + *(int *)(lVar20 + 0xc) * 2;
  uVar31 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffffdfffffffe,4);
  local_128 = CONCAT44((int)((ulong)uVar31 >> 0x20) + 7U >> 3,(int)uVar31 + 7U >> 3);
  if (*(int *)(lVar20 + 0x1c) != 0) {
    local_138 = this + 0x150;
    pMStack_130 = this + 0x250;
    uVar29 = 0;
    ppcVar30 = (char **)(param_2 + 0x78);
    pTVar28 = param_2 + 0x70;
    do {
      ppAVar8 = (AdhocShader **)&local_138;
      if (uVar29 != 0) {
        ppAVar8 = (AdhocShader **)&pMStack_130;
      }
      this_00 = *ppAVar8;
      (**(code **)(*(long *)param_1 + 0x18))(param_1,*(undefined8 *)(this_00 + 8));
      uVar18 = AdhocShader::getConstantBufferHandle(this_00,"USER");
      puVar19 = (uint *)(**(code **)(*(long *)param_1 + 0x40))
                                  (param_1,uVar18,*(undefined8 *)(this + 0x350));
      uVar6 = uVar3 >> (ulong)((int)uVar29 + 2U & 0x1f);
      *puVar19 = uVar6;
      puVar19[1] = uVar6;
      puVar19[2] = *(uint *)(this + uVar29 * 4 + 0x368);
      puVar19[3] = 0;
      (**(code **)(*(long *)param_1 + 0x48))(param_1,uVar18,*(undefined8 *)(this + 0x350));
      local_e8 = 0;
      uVar6 = *(uint *)(this + 0x28);
      uVar21 = (ulong)uVar6;
      uStack_b8 = 0xffffffff;
      apuStack_d8[3] = (undefined *)0x0;
      uStack_a8 = 0;
      pcStack_b0 = "tLayer2";
      local_120 = "oLayer0";
      puStack_98 = &UNK_00501cee;
      local_a0 = 0xffffffff;
      uStack_88 = 0xffffffff;
      uStack_90 = 0;
      apuStack_d8[0] = (undefined *)0x0;
      local_e0 = "tLayer0";
      apuStack_d8[2] = &UNK_004dbb2e;
      apuStack_d8[1] = (undefined *)0xffffffff;
      local_118[2] = (char *)0x0;
      uStack_f8 = 0;
      local_118[0] = (char *)0x0;
      local_118[1] = "oLayer1";
      local_118[3] = "oLayer2";
      local_f0 = "oLayer3";
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = uVar21 & 0xfffffffe;
          uVar23 = uVar22;
          ppuVar24 = apuStack_d8 + 3;
          puVar26 = (undefined8 *)(param_2 + 0x58);
          do {
            puVar1 = puVar26 + -1;
            puVar4 = (undefined *)*puVar26;
            puVar26 = puVar26 + 2;
            uVar23 = uVar23 - 2;
            ppuVar24[-3] = (undefined *)*puVar1;
            *ppuVar24 = puVar4;
            ppuVar24 = ppuVar24 + 6;
          } while (uVar23 != 0);
          if (uVar22 == uVar21) goto LAB_00961280;
        }
        lVar20 = uVar21 - uVar22;
        ppuVar24 = apuStack_d8 + uVar22 * 3;
        puVar26 = (undefined8 *)(param_2 + uVar22 * 8 + 0x50);
        do {
          lVar20 = lVar20 + -1;
          *ppuVar24 = (undefined *)*puVar26;
          ppuVar24 = ppuVar24 + 3;
          puVar26 = puVar26 + 1;
        } while (lVar20 != 0);
      }
LAB_00961280:
      uVar6 = *(uint *)(*(long *)(this + 0x110) + 0x18);
      uVar21 = (ulong)uVar6;
      pcVar5 = "tLayer0";
      puVar4 = (undefined *)0x0;
      uVar31 = 0xffffffff;
      puVar9 = &UNK_004dbb2e;
      uVar10 = 0;
      uVar11 = 0xffffffff;
      pcVar12 = "tLayer2";
      uVar13 = 0;
      uVar14 = 0xffffffff;
      puVar15 = &UNK_00501cee;
      uVar16 = 0;
      uVar17 = 0xffffffff;
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = uVar21 & 0xfffffffe;
          ppcVar25 = ppcVar30;
          ppcVar27 = local_118 + 2;
          uVar23 = uVar22;
          do {
            ppcVar2 = ppcVar25 + -1;
            pcVar5 = *ppcVar25;
            uVar23 = uVar23 - 2;
            ppcVar25 = ppcVar25 + 2;
            ppcVar27[-2] = *ppcVar2;
            *ppcVar27 = pcVar5;
            ppcVar27 = ppcVar27 + 4;
          } while (uVar23 != 0);
          pcVar5 = local_e0;
          puVar4 = apuStack_d8[0];
          uVar31 = apuStack_d8[1];
          puVar9 = apuStack_d8[2];
          uVar10 = apuStack_d8[3];
          uVar11 = uStack_b8;
          pcVar12 = pcStack_b0;
          uVar13 = uStack_a8;
          uVar14 = local_a0;
          puVar15 = puStack_98;
          uVar16 = uStack_90;
          uVar17 = uStack_88;
          if (uVar22 == uVar21) goto LAB_009610a8;
        }
        lVar20 = uVar21 - uVar22;
        ppcVar25 = (char **)(pTVar28 + uVar22 * 8);
        ppcVar27 = local_118 + uVar22 * 2;
        do {
          lVar20 = lVar20 + -1;
          *ppcVar27 = *ppcVar25;
          ppcVar25 = ppcVar25 + 1;
          ppcVar27 = ppcVar27 + 2;
          pcVar5 = local_e0;
          puVar4 = apuStack_d8[0];
          uVar31 = apuStack_d8[1];
          puVar9 = apuStack_d8[2];
          uVar10 = apuStack_d8[3];
          uVar11 = uStack_b8;
          pcVar12 = pcStack_b0;
          uVar13 = uStack_a8;
          uVar14 = local_a0;
          puVar15 = puStack_98;
          uVar16 = uStack_90;
          uVar17 = uStack_88;
        } while (lVar20 != 0);
      }
LAB_009610a8:
      uStack_88 = uVar17;
      uStack_90 = uVar16;
      puStack_98 = puVar15;
      local_a0 = uVar14;
      uStack_a8 = uVar13;
      pcStack_b0 = pcVar12;
      uStack_b8 = uVar11;
      apuStack_d8[3] = (undefined *)uVar10;
      apuStack_d8[2] = puVar9;
      apuStack_d8[1] = (undefined *)uVar31;
      apuStack_d8[0] = puVar4;
      local_e0 = pcVar5;
      AdhocShader::bindResourcesCs
                (this_00,param_1,(ShaderTexture *)&local_e0,4,(ShaderStructBuffer *)0x0,0,
                 (ShaderTexture *)0x0,0,(ShaderStructBuffer *)&local_120,4,
                 (ShaderConstantBuffer *)0x0,0,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3)
      ;
      uVar18 = *(undefined4 *)((long)&local_128 + uVar29 * 4);
      (**(code **)(*(long *)param_1 + 0x60))(param_1,uVar18,uVar18,1);
      uVar29 = uVar29 + 1;
      ppcVar30 = ppcVar30 + 4;
      pTVar28 = pTVar28 + 0x20;
    } while (uVar29 < *(uint *)(*(long *)(this + 0x110) + 0x1c));
  }
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


