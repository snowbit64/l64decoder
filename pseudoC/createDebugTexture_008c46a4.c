// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDebugTexture
// Entry Point: 008c46a4
// Size: 1152 bytes
// Signature: undefined __thiscall createDebugTexture(GsMaskedOcclusionCulling * this, IRenderDevice * param_1)


/* GsMaskedOcclusionCulling::createDebugTexture(IRenderDevice*) */

undefined8 __thiscall
GsMaskedOcclusionCulling::createDebugTexture(GsMaskedOcclusionCulling *this,IRenderDevice *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  byte *pbVar8;
  byte *pbVar9;
  undefined (*pauVar10) [16];
  byte *pbVar11;
  undefined8 uVar12;
  float fVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  byte *local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  int local_9c;
  int iStack_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pauVar10 = (undefined (*) [16])
             operator_new__((ulong)(uint)(*(int *)(this + 4) * *(int *)this) << 2);
  (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10),pauVar10,0);
  iVar1 = *(int *)this;
  iVar2 = *(int *)(this + 4);
  uVar3 = iVar2 * iVar1;
  uVar19 = (ulong)uVar3;
  pbVar11 = (byte *)operator_new__((ulong)(uVar3 * 4));
  if ((int)uVar3 < 1) goto LAB_008c49f0;
  fVar20 = 0.0;
  fVar13 = 3.402823e+38;
  pauVar14 = pauVar10;
  uVar16 = uVar19;
  do {
    fVar21 = *(float *)*pauVar14;
    fVar5 = fVar21;
    if (fVar21 <= 0.0 || fVar13 <= fVar21) {
      fVar5 = fVar13;
    }
    fVar13 = fVar5;
    if (fVar21 <= 0.0 || fVar21 <= fVar20) {
      fVar21 = fVar20;
    }
    fVar20 = fVar21;
    uVar16 = uVar16 - 1;
    pauVar14 = (undefined (*) [16])(*pauVar14 + 4);
  } while (uVar16 != 0);
  fVar20 = fVar20 - fVar13;
  if (uVar3 < 8) {
    uVar15 = 0;
    pbVar9 = pbVar11;
  }
  else {
    if (uVar3 < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar15 = uVar19 & 0xfffffff0;
      uVar16 = uVar15;
      pauVar14 = pauVar10;
      pbVar9 = pbVar11;
      do {
        auVar7 = *pauVar14;
        auVar6 = pauVar14[1];
        uVar16 = uVar16 - 0x10;
        fVar5 = auVar7._0_4_ - fVar13;
        fVar21 = auVar7._4_4_ - fVar13;
        auVar41 = NEON_fcmgt(auVar7,0,4);
        auVar38 = pauVar14[2];
        auVar40 = pauVar14[3];
        pauVar14 = pauVar14 + 4;
        auVar43 = NEON_fcmgt(auVar40,0,4);
        auVar42 = NEON_fcmgt(auVar38,0,4);
        auVar39 = NEON_fcmgt(auVar6,0,4);
        bVar22 = (byte)(long)((fVar5 * 223.0) / fVar20 + 32.0) & auVar41[0];
        bVar23 = (byte)(long)(((float)(CONCAT26((short)((uint)fVar21 >> 0x10),
                                                CONCAT24(SUB42(fVar21,0),fVar5)) >> 0x20) * 223.0) /
                              fVar20 + 32.0) & auVar41[4];
        bVar24 = (byte)(long)(((auVar7._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar41[8];
        bVar25 = (byte)(long)(((auVar7._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar41[12];
        bVar26 = (byte)(long)(((auVar6._0_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar39[0];
        bVar27 = (byte)(long)(((auVar6._4_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar39[4];
        bVar28 = (byte)(long)(((auVar6._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar39[8];
        bVar29 = (byte)(long)(((auVar6._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar39[12];
        bVar30 = (byte)(long)(((auVar38._0_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar42[0];
        bVar31 = (byte)(long)(((auVar38._4_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar42[4];
        bVar32 = (byte)(long)(((auVar38._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar42[8];
        bVar33 = (byte)(long)(((auVar38._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar42[12];
        bVar34 = (byte)(long)(((auVar40._0_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar43[0];
        bVar35 = (byte)(long)(((auVar40._4_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar43[4];
        bVar36 = (byte)(long)(((auVar40._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar43[8];
        bVar37 = (byte)(long)(((auVar40._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar43[12];
        *pbVar9 = bVar22;
        pbVar9[1] = bVar22;
        pbVar9[2] = 0;
        pbVar9[3] = 0x80;
        pbVar9[4] = bVar23;
        pbVar9[5] = bVar23;
        pbVar9[6] = 0;
        pbVar9[7] = 0x80;
        pbVar9[8] = bVar24;
        pbVar9[9] = bVar24;
        pbVar9[10] = 0;
        pbVar9[0xb] = 0x80;
        pbVar9[0xc] = bVar25;
        pbVar9[0xd] = bVar25;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0x80;
        pbVar9[0x10] = bVar26;
        pbVar9[0x11] = bVar26;
        pbVar9[0x12] = 0;
        pbVar9[0x13] = 0x80;
        pbVar9[0x14] = bVar27;
        pbVar9[0x15] = bVar27;
        pbVar9[0x16] = 0;
        pbVar9[0x17] = 0x80;
        pbVar9[0x18] = bVar28;
        pbVar9[0x19] = bVar28;
        pbVar9[0x1a] = 0;
        pbVar9[0x1b] = 0x80;
        pbVar9[0x1c] = bVar29;
        pbVar9[0x1d] = bVar29;
        pbVar9[0x1e] = 0;
        pbVar9[0x1f] = 0x80;
        pbVar9[0x20] = bVar30;
        pbVar9[0x21] = bVar30;
        pbVar9[0x22] = 0;
        pbVar9[0x23] = 0x80;
        pbVar9[0x24] = bVar31;
        pbVar9[0x25] = bVar31;
        pbVar9[0x26] = 0;
        pbVar9[0x27] = 0x80;
        pbVar9[0x28] = bVar32;
        pbVar9[0x29] = bVar32;
        pbVar9[0x2a] = 0;
        pbVar9[0x2b] = 0x80;
        pbVar9[0x2c] = bVar33;
        pbVar9[0x2d] = bVar33;
        pbVar9[0x2e] = 0;
        pbVar9[0x2f] = 0x80;
        pbVar9[0x30] = bVar34;
        pbVar9[0x31] = bVar34;
        pbVar9[0x32] = 0;
        pbVar9[0x33] = 0x80;
        pbVar9[0x34] = bVar35;
        pbVar9[0x35] = bVar35;
        pbVar9[0x36] = 0;
        pbVar9[0x37] = 0x80;
        pbVar9[0x38] = bVar36;
        pbVar9[0x39] = bVar36;
        pbVar9[0x3a] = 0;
        pbVar9[0x3b] = 0x80;
        pbVar9[0x3c] = bVar37;
        pbVar9[0x3d] = bVar37;
        pbVar9[0x3e] = 0;
        pbVar9[0x3f] = 0x80;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar16 != 0);
      if (uVar15 == uVar19) goto LAB_008c49f0;
      uVar16 = uVar15;
      if ((uVar3 >> 3 & 1) == 0) {
        pbVar9 = pbVar11 + uVar15 * 4;
        goto LAB_008c4ab4;
      }
    }
    uVar15 = uVar19 & 0xfffffff8;
    pbVar9 = pbVar11 + uVar15 * 4;
    lVar18 = uVar16 - uVar15;
    pbVar8 = pbVar11 + uVar16 * 4;
    pauVar14 = (undefined (*) [16])(*pauVar10 + uVar16 * 4);
    do {
      auVar7 = *pauVar14;
      auVar6 = pauVar14[1];
      lVar18 = lVar18 + 8;
      fVar5 = auVar7._0_4_ - fVar13;
      fVar21 = auVar7._4_4_ - fVar13;
      auVar40 = NEON_fcmgt(auVar7,0,4);
      auVar38 = NEON_fcmgt(auVar6,0,4);
      bVar22 = (byte)(long)((fVar5 * 223.0) / fVar20 + 32.0) & auVar40[0];
      bVar23 = (byte)(long)(((float)(CONCAT26((short)((uint)fVar21 >> 0x10),
                                              CONCAT24(SUB42(fVar21,0),fVar5)) >> 0x20) * 223.0) /
                            fVar20 + 32.0) & auVar40[4];
      bVar24 = (byte)(long)(((auVar7._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar40[8];
      bVar25 = (byte)(long)(((auVar7._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar40[12];
      bVar26 = (byte)(long)(((auVar6._0_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar38[0];
      bVar27 = (byte)(long)(((auVar6._4_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar38[4];
      bVar28 = (byte)(long)(((auVar6._8_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar38[8];
      bVar29 = (byte)(long)(((auVar6._12_4_ - fVar13) * 223.0) / fVar20 + 32.0) & auVar38[12];
      *pbVar8 = bVar22;
      pbVar8[1] = bVar22;
      pbVar8[2] = 0;
      pbVar8[3] = 0x80;
      pbVar8[4] = bVar23;
      pbVar8[5] = bVar23;
      pbVar8[6] = 0;
      pbVar8[7] = 0x80;
      pbVar8[8] = bVar24;
      pbVar8[9] = bVar24;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0x80;
      pbVar8[0xc] = bVar25;
      pbVar8[0xd] = bVar25;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0x80;
      pbVar8[0x10] = bVar26;
      pbVar8[0x11] = bVar26;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0x80;
      pbVar8[0x14] = bVar27;
      pbVar8[0x15] = bVar27;
      pbVar8[0x16] = 0;
      pbVar8[0x17] = 0x80;
      pbVar8[0x18] = bVar28;
      pbVar8[0x19] = bVar28;
      pbVar8[0x1a] = 0;
      pbVar8[0x1b] = 0x80;
      pbVar8[0x1c] = bVar29;
      pbVar8[0x1d] = bVar29;
      pbVar8[0x1e] = 0;
      pbVar8[0x1f] = 0x80;
      pbVar8 = pbVar8 + 0x20;
      pauVar14 = pauVar14 + 2;
    } while (lVar18 != 0);
    if (uVar15 == uVar19) goto LAB_008c49f0;
  }
LAB_008c4ab4:
  lVar18 = uVar19 - uVar15;
  pfVar17 = (float *)(*pauVar10 + uVar15 * 4);
  do {
    if (0.0 < *pfVar17) {
      bVar22 = (byte)(int)(((*pfVar17 - fVar13) * 223.0) / fVar20 + 32.0);
    }
    else {
      bVar22 = 0;
    }
    *pbVar9 = bVar22;
    lVar18 = lVar18 + -1;
    pbVar9[1] = bVar22;
    pfVar17 = pfVar17 + 1;
    *(undefined2 *)(pbVar9 + 2) = 0x8000;
    pbVar9 = pbVar9 + 4;
  } while (lVar18 != 0);
LAB_008c49f0:
  local_a8 = 0;
  local_7c = 0x100000001;
  local_84 = 5;
  uStack_8c = 0;
  local_94 = 0x100000001;
  local_80 = 0;
  local_a4 = 0xffffffff00000000;
  local_64 = 0;
  uStack_6c = 0x3f80000000000000;
  local_74 = 0;
  local_60 = "GsMaskedOcclusionCulling";
  local_b0 = pbVar11;
  local_9c = iVar1;
  iStack_98 = iVar2;
  uVar12 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar12 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar12,&local_b0);
  operator_delete__(pbVar11);
  operator_delete__(pauVar10);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


