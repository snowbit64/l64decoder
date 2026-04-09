// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initShadowMapRegion
// Entry Point: 00a456f4
// Size: 1480 bytes
// Signature: undefined __thiscall initShadowMapRegion(ShadowRenderController * this, ShadowQueueItem * param_1, Matrix4x4 * param_2, Matrix4x4 * param_3, uint param_4)


/* ShadowRenderController::initShadowMapRegion(ShadowQueueItem*, Matrix4x4 const&, Matrix4x4 const&,
   unsigned int) */

void __thiscall
ShadowRenderController::initShadowMapRegion
          (ShadowRenderController *this,ShadowQueueItem *param_1,Matrix4x4 *param_2,
          Matrix4x4 *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  uint uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  uint uVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar19 = *(undefined4 *)param_3;
  fVar22 = *(float *)(param_3 + 4);
  fVar17 = *(float *)(param_2 + 0x10);
  fVar14 = *(float *)(param_2 + 0x14);
  fVar31 = *(float *)(param_2 + 0x1c);
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(undefined4 *)param_2;
  uVar13 = *(undefined4 *)(param_2 + 4);
  fVar15 = *(float *)(param_2 + 0x18);
  uVar34 = *(undefined4 *)(param_3 + 0x10);
  fVar38 = *(float *)(param_3 + 0x14);
  uVar40 = *(undefined4 *)(param_2 + 8);
  uVar51 = *(undefined4 *)(param_2 + 0xc);
  uVar28 = NEON_fmadd(uVar19,uVar11,fVar22 * fVar17);
  uVar32 = NEON_fmadd(uVar19,uVar13,fVar22 * fVar14);
  uVar43 = *(undefined4 *)(param_3 + 8);
  uVar48 = *(undefined4 *)(param_3 + 0xc);
  uVar64 = *(undefined4 *)(param_2 + 0x2c);
  uVar36 = NEON_fmadd(uVar19,uVar40,fVar22 * fVar15);
  uVar19 = NEON_fmadd(uVar19,uVar51,fVar22 * fVar31);
  uVar61 = *(undefined4 *)(param_2 + 0x30);
  uVar23 = *(undefined4 *)(param_2 + 0x34);
  uVar29 = NEON_fmadd(uVar43,uVar10,uVar28);
  uVar28 = *(undefined4 *)(param_3 + 0x18);
  uVar26 = *(undefined4 *)(param_3 + 0x1c);
  uVar19 = NEON_fmadd(uVar43,uVar64,uVar19);
  puVar9 = *(uint **)(param_1 + (ulong)param_4 * 8 + 8);
  uVar25 = NEON_fmadd(uVar48,uVar61,uVar29);
  uVar29 = NEON_fmadd(uVar34,uVar11,fVar17 * fVar38);
  uVar46 = *(undefined4 *)(param_2 + 0x38);
  uVar24 = *(undefined4 *)(param_2 + 0x3c);
  uVar60 = NEON_fmadd(uVar34,uVar13,fVar14 * fVar38);
  uVar27 = NEON_fmadd(uVar34,uVar40,fVar15 * fVar38);
  uVar35 = NEON_fmadd(uVar34,uVar51,fVar31 * fVar38);
  uVar16 = puVar9[2];
  uVar29 = NEON_fmadd(uVar28,uVar10,uVar29);
  uVar34 = NEON_fmadd(uVar48,uVar24,uVar19);
  uVar54 = *(undefined4 *)(param_2 + 0x24);
  uVar58 = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *puVar9;
  uVar63 = puVar9[1];
  uVar20 = NEON_fmadd(uVar26,uVar61,uVar29);
  uVar35 = NEON_fmadd(uVar28,uVar64,uVar35);
  uVar32 = NEON_fmadd(uVar43,uVar54,uVar32);
  uVar43 = NEON_fmadd(uVar43,uVar58,uVar36);
  uVar60 = NEON_fmadd(uVar28,uVar54,uVar60);
  uVar29 = *(undefined4 *)(param_3 + 0x20);
  fVar44 = *(float *)(param_3 + 0x24);
  uVar19 = NEON_fmadd(uVar28,uVar58,uVar27);
  uVar36 = NEON_fmadd(uVar26,uVar24,uVar35);
  fVar38 = (float)NEON_fmadd(uVar48,uVar23,uVar32);
  uVar48 = NEON_fmadd(uVar48,uVar46,uVar43);
  fVar22 = (float)NEON_fmadd(uVar26,uVar23,uVar60);
  uVar26 = NEON_fmadd(uVar26,uVar46,uVar19);
  uVar49 = *(undefined4 *)(param_3 + 0x30);
  fVar30 = *(float *)(param_3 + 0x34);
  uVar19 = NEON_fmadd(uVar29,uVar11,fVar17 * fVar44);
  uVar45 = *(undefined4 *)(param_3 + 0x28);
  uVar27 = *(undefined4 *)(param_3 + 0x2c);
  uVar28 = NEON_fmadd(uVar29,uVar13,fVar14 * fVar44);
  uVar60 = NEON_fmadd(uVar29,uVar40,fVar15 * fVar44);
  uVar35 = NEON_fmadd(uVar45,uVar10,uVar19);
  uVar29 = NEON_fmadd(uVar29,uVar51,fVar31 * fVar44);
  uVar43 = NEON_fmadd(uVar45,uVar54,uVar28);
  uVar11 = NEON_fmadd(uVar49,uVar11,fVar17 * fVar30);
  uVar13 = NEON_fmadd(uVar49,uVar13,fVar14 * fVar30);
  uVar19 = NEON_fmadd(uVar49,uVar40,fVar15 * fVar30);
  uVar28 = *(undefined4 *)(param_3 + 0x38);
  uVar40 = *(undefined4 *)(param_3 + 0x3c);
  uVar32 = NEON_fmadd(uVar27,uVar61,uVar35);
  uVar60 = NEON_fmadd(uVar45,uVar58,uVar60);
  uVar35 = NEON_fmadd(uVar49,uVar51,fVar31 * fVar30);
  uVar29 = NEON_fmadd(uVar45,uVar64,uVar29);
  fVar15 = (float)NEON_fmadd(uVar27,uVar23,uVar43);
  uVar10 = NEON_fmadd(uVar28,uVar10,uVar11);
  uVar11 = NEON_fmadd(uVar28,uVar54,uVar13);
  uVar13 = NEON_fmadd(uVar28,uVar58,uVar19);
  uVar19 = NEON_fmadd(uVar28,uVar64,uVar35);
  uVar28 = NEON_fmadd(uVar27,uVar46,uVar60);
  uVar35 = NEON_fmadd(uVar40,uVar61,uVar10);
  fVar14 = (float)NEON_fmadd(uVar40,uVar23,uVar11);
  uVar10 = NEON_fmadd(uVar40,uVar46,uVar13);
  uVar13 = NEON_fmadd(uVar27,uVar24,uVar29);
  uVar11 = NEON_fmadd(uVar40,uVar24,uVar19);
  RenderDeviceManager::getInstance();
  plVar7 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  lVar8 = (**(code **)(*plVar7 + 0x28))();
  bVar6 = *(char *)(lVar8 + 0x9d) != '\0';
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar3 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar3 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar29 = *puVar4;
  uVar19 = puVar4[1];
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar27 = puVar3[2];
  puVar3 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar3 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar5 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar5 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  fVar17 = (float)puVar4[4];
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  fVar31 = (float)puVar3[5];
  fVar30 = (float)puVar5[6];
  puVar3 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar3 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  fVar44 = (float)puVar4[7];
  uVar23 = puVar3[3];
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar3 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar3 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar5 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar5 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar43 = NEON_fmadd(uVar25,uVar29,fVar38 * fVar17);
  uVar60 = NEON_fmadd(uVar20,uVar29,fVar22 * fVar17);
  uVar40 = NEON_fmadd(uVar32,uVar29,fVar15 * fVar17);
  uVar29 = NEON_fmadd(uVar35,uVar29,fVar14 * fVar17);
  uVar24 = puVar4[8];
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar45 = NEON_fmadd(uVar25,uVar19,fVar38 * fVar31);
  uVar46 = NEON_fmadd(uVar25,uVar27,fVar38 * fVar30);
  uVar49 = NEON_fmadd(uVar25,uVar23,fVar38 * fVar44);
  uVar51 = NEON_fmadd(uVar20,uVar19,fVar22 * fVar31);
  uVar54 = NEON_fmadd(uVar20,uVar27,fVar22 * fVar30);
  uVar58 = NEON_fmadd(uVar20,uVar23,fVar22 * fVar44);
  uVar61 = NEON_fmadd(uVar32,uVar19,fVar15 * fVar31);
  uVar64 = NEON_fmadd(uVar32,uVar27,fVar15 * fVar30);
  uVar55 = NEON_fmadd(uVar32,uVar23,fVar15 * fVar44);
  uVar19 = NEON_fmadd(uVar35,uVar19,fVar14 * fVar31);
  uVar32 = puVar3[9];
  uVar20 = NEON_fmadd(uVar35,uVar27,fVar14 * fVar30);
  uVar25 = puVar5[10];
  uVar27 = NEON_fmadd(uVar35,uVar23,fVar14 * fVar44);
  uVar35 = puVar4[0xb];
  uVar23 = NEON_fmadd(uVar48,uVar24,uVar43);
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar45 = NEON_fmadd(uVar48,uVar32,uVar45);
  uVar46 = NEON_fmadd(uVar48,uVar25,uVar46);
  uVar49 = NEON_fmadd(uVar48,uVar35,uVar49);
  uVar51 = NEON_fmadd(uVar26,uVar32,uVar51);
  uVar65 = puVar4[0xc];
  uVar43 = NEON_fmadd(uVar28,uVar24,uVar40);
  uVar48 = NEON_fmadd(uVar28,uVar32,uVar61);
  uVar40 = NEON_fmadd(uVar28,uVar25,uVar64);
  uVar28 = NEON_fmadd(uVar28,uVar35,uVar55);
  puVar4 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar4 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar3 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar3 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  puVar5 = (undefined4 *)RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE;
  if (bVar6) {
    puVar5 = &RenderDeviceUtil::CLIPSPACE_TO_IMAGESPACE_Y_FLIP;
  }
  uVar60 = NEON_fmadd(uVar26,uVar24,uVar60);
  uVar54 = NEON_fmadd(uVar26,uVar25,uVar54);
  uVar58 = NEON_fmadd(uVar26,uVar35,uVar58);
  uVar24 = NEON_fmadd(uVar10,uVar24,uVar29);
  uVar35 = NEON_fmadd(uVar10,uVar35,uVar27);
  uVar26 = puVar4[0xd];
  uVar19 = NEON_fmadd(uVar10,uVar32,uVar19);
  uVar27 = puVar3[0xe];
  uVar10 = NEON_fmadd(uVar10,uVar25,uVar20);
  uVar29 = puVar5[0xf];
  uVar23 = NEON_fmadd(uVar34,uVar65,uVar23);
  fVar50 = (float)NEON_fmadd(uVar34,uVar26,uVar45);
  fVar41 = (float)NEON_fmadd(uVar34,uVar27,uVar46);
  uVar20 = NEON_fmadd(uVar36,uVar65,uVar60);
  fVar15 = (float)NEON_fmadd(uVar34,uVar29,uVar49);
  fVar47 = (float)NEON_fmadd(uVar36,uVar26,uVar51);
  fVar31 = (float)NEON_fmadd(uVar36,uVar27,uVar54);
  fVar22 = (float)NEON_fmadd(uVar36,uVar29,uVar58);
  fVar38 = (float)NEON_fmadd(uVar13,uVar27,uVar40);
  uVar34 = NEON_fmadd(uVar13,uVar65,uVar43);
  fVar37 = (float)NEON_fmadd(uVar13,uVar26,uVar48);
  fVar17 = (float)NEON_fmadd(uVar13,uVar29,uVar28);
  uVar13 = NEON_fmadd(uVar11,uVar65,uVar24);
  fVar44 = (float)NEON_fmadd(uVar11,uVar26,uVar19);
  fVar30 = (float)NEON_fmadd(uVar11,uVar27,uVar10);
  fVar14 = (float)NEON_fmadd(uVar11,uVar29,uVar35);
  if (*(char *)(lVar8 + 0x9d) == '\0') {
    fVar52 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1c));
    fVar12 = 1.0 - (float)(ulong)(uVar16 + uVar63) / fVar52;
  }
  else {
    fVar52 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1c));
    fVar12 = (float)(ulong)uVar63 / fVar52;
  }
  fVar18 = (float)(ulong)uVar16;
  fVar56 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x18));
  fVar52 = fVar18 / fVar52;
  fVar59 = fVar18 / fVar56;
  uVar10 = NEON_fmadd(uVar20,0,fVar47 * fVar52);
  uVar26 = NEON_fmadd(fVar31,0,uVar10);
  uVar10 = NEON_fmadd(uVar23,fVar59,fVar50 * 0.0);
  fVar62 = (float)NEON_fmadd(uVar23,0,fVar50 * 0.0);
  uVar11 = NEON_fmadd(uVar23,0,fVar50 * fVar52);
  fVar56 = (float)(ulong)uVar1 / fVar56;
  uVar27 = NEON_fmadd(fVar41,0,uVar10);
  uVar10 = NEON_fmadd(uVar20,fVar59,fVar47 * 0.0);
  uVar29 = NEON_fmadd(fVar41,0,uVar11);
  fVar42 = (float)NEON_fmadd(fVar41,0,fVar62);
  fVar50 = (float)NEON_fmadd(uVar20,0,fVar47 * 0.0);
  uVar11 = NEON_fmadd(fVar31,0,uVar10);
  fVar47 = (float)NEON_fmadd(fVar31,0,fVar50);
  uVar28 = NEON_fmadd(uVar34,fVar59,fVar37 * 0.0);
  uVar10 = NEON_fmadd(uVar34,0,fVar37 * fVar52);
  fVar37 = (float)NEON_fmadd(uVar34,0,fVar37 * 0.0);
  uVar63 = NEON_fmadd(fVar15,0,fVar41 + fVar62);
  uVar34 = NEON_fmadd(uVar13,fVar59,fVar44 * 0.0);
  uVar19 = NEON_fmadd(uVar13,0,fVar44 * fVar52);
  fVar44 = (float)NEON_fmadd(uVar13,0,fVar44 * 0.0);
  uVar28 = NEON_fmadd(fVar38,0,uVar28);
  puVar9[0xf] = uVar63;
  fVar41 = (float)NEON_fmadd(fVar38,0,fVar37);
  uVar10 = NEON_fmadd(fVar38,0,uVar10);
  uVar57 = NEON_fmadd(fVar15,fVar56,uVar27);
  uVar53 = NEON_fmadd(fVar22,0,fVar31 + fVar50);
  puVar9[0x10] = (uint)(fVar42 + fVar15);
  fVar31 = (float)NEON_fmadd(fVar30,0,fVar44);
  puVar9[0x14] = (uint)(fVar47 + fVar22);
  uVar33 = NEON_fmadd(fVar22,fVar56,uVar11);
  uVar13 = NEON_fmadd(fVar30,0,uVar34);
  uVar11 = NEON_fmadd(fVar30,0,uVar19);
  uVar63 = NEON_fmadd(fVar15,fVar12,uVar29);
  uVar16 = NEON_fmadd(fVar22,fVar12,uVar26);
  uVar21 = NEON_fmadd(fVar17,fVar12,uVar10);
  uVar39 = NEON_fmadd(fVar17,fVar56,uVar28);
  puVar9[0x13] = uVar53;
  puVar9[0x11] = uVar33;
  uVar33 = NEON_fmadd(fVar17,0,fVar38 + fVar37);
  puVar9[0xe] = uVar63;
  uVar63 = NEON_fmadd(fVar14,fVar56,uVar13);
  puVar9[0x12] = uVar16;
  uVar16 = NEON_fmadd(fVar14,fVar12,uVar11);
  puVar9[0x16] = uVar21;
  uVar21 = NEON_fmadd(fVar14,0,fVar30 + fVar44);
  puVar9[0xd] = uVar57;
  puVar9[0x15] = uVar39;
  puVar9[0x17] = uVar33;
  puVar9[0x18] = (uint)(fVar41 + fVar17);
  puVar9[0x19] = uVar63;
  puVar9[0x1a] = uVar16;
  puVar9[0x1b] = uVar21;
  puVar9[0x1c] = (uint)(fVar31 + fVar14);
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x18));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1c));
  Vector4::set((Vector4 *)&local_98,(float)(ulong)uVar1 / fVar14,fVar12,fVar14 / fVar18,
               fVar15 / fVar18);
  *(undefined *)((long)puVar9 + 0x25) = 1;
  *(undefined8 *)(puVar9 + 0x1f) = uStack_90;
  *(undefined8 *)(puVar9 + 0x1d) = local_98;
  puVar9[0xb] = puVar9[0xb] + 1;
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


