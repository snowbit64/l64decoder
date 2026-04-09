// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVertexBuffer
// Entry Point: 008d20f0
// Size: 996 bytes
// Signature: undefined updateVertexBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::updateVertexBuffer() */

void FillPlaneGeometry::updateVertexBuffer(void)

{
  undefined auVar1 [16];
  float *pfVar2;
  long in_x0;
  long *plVar13;
  undefined8 uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  long *plVar27;
  uint uVar28;
  uint uVar29;
  undefined auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  int iVar46;
  int iVar48;
  int iVar49;
  undefined auVar47 [16];
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  float fVar57;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  
  if (*(char *)(in_x0 + 0x95) == '\0') {
    return;
  }
  *(undefined *)(in_x0 + 0x95) = 0;
  RenderDeviceManager::getInstance();
  plVar13 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  plVar27 = *(long **)(in_x0 + 0x70);
  uVar14 = (**(code **)(*plVar13 + 0x138))();
  pfVar15 = (float *)(**(code **)(*plVar27 + 0x10))
                               (plVar27,uVar14,0,*(undefined4 *)(in_x0 + 0x88),1);
  uVar19 = *(long *)(in_x0 + 0xe8) - *(long *)(in_x0 + 0xe0);
  if (uVar19 == 0) goto LAB_008d2188;
  pfVar17 = *(float **)(in_x0 + 0x158);
  uVar20 = (long)uVar19 >> 5;
  pfVar18 = *(float **)(in_x0 + 0x170);
  if (uVar19 < 0x80) {
LAB_008d2400:
    uVar23 = 0;
    pfVar16 = pfVar15;
  }
  else {
    pfVar24 = pfVar15 + uVar20 * 4 + -1;
    if (((pfVar15 < pfVar17 + uVar20 * 3 && pfVar17 < pfVar24) ||
        (pfVar15 < (float *)(in_x0 + 0xacU) && (float *)(in_x0 + 0x9cU) < pfVar24)) ||
       (pfVar15 < pfVar18 + uVar20 * 3 && pfVar18 < pfVar24)) goto LAB_008d2400;
    uVar23 = uVar20 & 0xfffffffffffffffc;
    pfVar24 = pfVar17 + 7;
    auVar30 = NEON_fmov(0x3f800000,4);
    pfVar16 = pfVar15 + uVar23 * 4;
    uVar19 = uVar23;
    pfVar25 = pfVar18;
    do {
      pfVar26 = pfVar24 + -7;
      uVar19 = uVar19 - 4;
      fVar34 = pfVar24[-5];
      fVar32 = pfVar24[-4];
      fVar35 = pfVar24[-2];
      fVar31 = pfVar24[-1];
      fVar36 = pfVar24[1];
      fVar33 = pfVar24[2];
      fVar37 = pfVar24[4];
      fVar43 = (float)*(undefined8 *)(in_x0 + 0x9c);
      fVar38 = (float)*(undefined8 *)(in_x0 + 0xa8) - fVar43;
      auVar39._0_4_ = (pfVar24[-6] - fVar43) / fVar38;
      auVar39._4_4_ = (pfVar24[-3] - fVar43) / fVar38;
      auVar39._8_4_ = (*pfVar24 - fVar43) / fVar38;
      auVar39._12_4_ = (pfVar24[3] - fVar43) / fVar38;
      fVar43 = pfVar24[-6];
      fVar38 = pfVar24[-3];
      pfVar4 = pfVar24 + 3;
      fVar44 = *pfVar24;
      pfVar24 = pfVar24 + 0xc;
      fVar45 = *pfVar4;
      fVar57 = *pfVar25;
      pfVar2 = pfVar25 + 1;
      pfVar3 = pfVar25 + 2;
      pfVar4 = pfVar25 + 3;
      pfVar5 = pfVar25 + 4;
      pfVar6 = pfVar25 + 5;
      pfVar7 = pfVar25 + 6;
      pfVar8 = pfVar25 + 7;
      pfVar9 = pfVar25 + 8;
      pfVar10 = pfVar25 + 9;
      pfVar11 = pfVar25 + 10;
      pfVar12 = pfVar25 + 0xb;
      pfVar25 = pfVar25 + 0xc;
      auVar47 = NEON_fcmlt(auVar39,0,4);
      auVar40 = NEON_fcmgt(auVar39,auVar30,4);
      iVar51 = (int)(*pfVar3 * 127.5 + 127.5);
      iVar52 = (int)(*pfVar6 * 127.5 + 127.5);
      iVar53 = (int)(*pfVar9 * 127.5 + 127.5);
      iVar54 = (int)(*pfVar12 * 127.5 + 127.5);
      auVar41[0] = auVar40[0] & ~auVar47[0];
      auVar41[1] = auVar40[1] & ~auVar47[1];
      auVar41[2] = auVar40[2] & ~auVar47[2];
      auVar41[3] = auVar40[3] & ~auVar47[3];
      auVar41[4] = auVar40[4] & ~auVar47[4];
      auVar41[5] = auVar40[5] & ~auVar47[5];
      auVar41[6] = auVar40[6] & ~auVar47[6];
      auVar41[7] = auVar40[7] & ~auVar47[7];
      auVar41[8] = auVar40[8] & ~auVar47[8];
      auVar41[9] = auVar40[9] & ~auVar47[9];
      auVar41[10] = auVar40[10] & ~auVar47[10];
      auVar41[11] = auVar40[11] & ~auVar47[11];
      auVar41[12] = auVar40[12] & ~auVar47[12];
      auVar41[13] = auVar40[13] & ~auVar47[13];
      auVar41[14] = auVar40[14] & ~auVar47[14];
      auVar41[15] = auVar40[15] & ~auVar47[15];
      iVar55 = (int)(*pfVar5 * 127.5 + 127.5);
      iVar56 = (int)(*pfVar8 * 127.5 + 127.5);
      iVar46 = (int)(fVar57 * 127.5 + 127.5);
      iVar48 = (int)(*pfVar4 * 127.5 + 127.5);
      iVar49 = (int)(*pfVar7 * 127.5 + 127.5);
      iVar50 = (int)(*pfVar10 * 127.5 + 127.5);
      auVar42._8_8_ = 0xff000000ff000000;
      auVar42._0_8_ = 0xff000000ff000000;
      auVar1[7] = (byte)(int)(auVar39._4_4_ * 255.0) & ~auVar47[7] & ~auVar40[7];
      auVar1._0_7_ = (uint7)(byte)((byte)(int)(auVar39._0_4_ * 255.0) & ~auVar47[3] & ~auVar40[3])
                     << 0x18;
      auVar1._8_3_ = 0;
      auVar1[11] = (byte)(int)(auVar39._8_4_ * 255.0) & ~auVar47[11] & ~auVar40[11];
      auVar1._12_3_ = 0;
      auVar1[15] = (byte)(int)(auVar39._12_4_ * 255.0) & ~auVar47[15] & ~auVar40[15];
      auVar42 = NEON_bsl(auVar41,auVar42,auVar1,1);
      uVar28 = (int)(*pfVar2 * 127.5 + 127.5) & 0xffff;
      uVar29 = (int)(*pfVar11 * 127.5 + 127.5) & 0xffff;
      *pfVar15 = *pfVar26;
      pfVar15[1] = fVar43;
      pfVar15[2] = fVar34;
      pfVar15[3] = (float)CONCAT13((byte)((uint)iVar51 >> 8) | auVar42[3],
                                   CONCAT12((byte)iVar51 | auVar42[2] | (byte)(uVar28 >> 8),
                                            CONCAT11(auVar42[1] | (byte)uVar28 |
                                                     (byte)((uint)iVar46 >> 8),
                                                     auVar42[0] | (byte)iVar46)));
      pfVar15[4] = fVar32;
      pfVar15[5] = fVar38;
      pfVar15[6] = fVar35;
      pfVar15[7] = (float)CONCAT13((byte)((uint)iVar52 >> 8) | auVar42[7],
                                   CONCAT12((byte)iVar52 | auVar42[6] | (byte)((uint)iVar55 >> 8),
                                            CONCAT11(auVar42[5] | (byte)iVar55 |
                                                     (byte)((uint)iVar48 >> 8),
                                                     auVar42[4] | (byte)iVar48)));
      pfVar15[8] = fVar31;
      pfVar15[9] = fVar44;
      pfVar15[10] = fVar36;
      pfVar15[0xb] = (float)CONCAT13((byte)((uint)iVar53 >> 8) | auVar42[11],
                                     CONCAT12((byte)iVar53 | auVar42[10] | (byte)((uint)iVar56 >> 8)
                                              ,CONCAT11(auVar42[9] | (byte)iVar56 |
                                                        (byte)((uint)iVar49 >> 8),
                                                        auVar42[8] | (byte)iVar49)));
      pfVar15[0xc] = fVar33;
      pfVar15[0xd] = fVar45;
      pfVar15[0xe] = fVar37;
      pfVar15[0xf] = (float)CONCAT13((byte)((uint)iVar54 >> 8) | auVar42[15],
                                     CONCAT12((byte)iVar54 | auVar42[14] | (byte)(uVar29 >> 8),
                                              CONCAT11(auVar42[13] | (byte)uVar29 |
                                                       (byte)((uint)iVar50 >> 8),
                                                       auVar42[12] | (byte)iVar50)));
      pfVar15 = pfVar15 + 0x10;
    } while (uVar19 != 0);
    pfVar15 = pfVar16;
    if (uVar20 == uVar23) goto LAB_008d2188;
  }
  lVar22 = uVar20 - uVar23;
  pfVar18 = pfVar18 + uVar23 * 3 + 1;
  pfVar17 = pfVar17 + uVar23 * 3 + 1;
  do {
    *pfVar16 = pfVar17[-1];
    pfVar16[1] = *pfVar17;
    pfVar16[2] = pfVar17[1];
    fVar31 = (*pfVar17 - *(float *)(in_x0 + 0x9c)) /
             (*(float *)(in_x0 + 0xa8) - *(float *)(in_x0 + 0x9c));
    fVar32 = 0.0;
    if ((0.0 <= fVar31) && (fVar32 = 1.0, fVar31 <= 1.0)) {
      fVar32 = fVar31;
    }
    fVar31 = *pfVar18;
    pfVar24 = pfVar18 + 1;
    lVar22 = lVar22 + -1;
    pfVar17 = pfVar17 + 3;
    pfVar15 = pfVar18 + -1;
    pfVar18 = pfVar18 + 3;
    fVar33 = (float)NEON_fmadd(*pfVar24,0x42ff0000,0x42ff0000);
    fVar34 = (float)NEON_fmadd(fVar31,0x42ff0000,0x42ff0000);
    fVar31 = (float)NEON_fmadd(*pfVar15,0x42ff0000,0x42ff0000);
    pfVar16[3] = (float)((int)(fVar32 * 255.0) << 0x18 | ((int)fVar33 & 0xffU) << 0x10 |
                         ((int)fVar34 & 0xffU) << 8 | (int)fVar31);
    pfVar16 = pfVar16 + 4;
    pfVar15 = pfVar16;
  } while (lVar22 != 0);
LAB_008d2188:
  if (*(char *)(in_x0 + 0x97) != '\0') {
    uVar19 = (*(long *)(in_x0 + 0xd0) - *(long *)(in_x0 + 200) >> 2) * 0xb6db6db7;
    if ((int)uVar19 != 0) {
      lVar22 = *(long *)(in_x0 + 0xb0);
      uVar19 = uVar19 & 0xffffffff;
      puVar21 = (undefined4 *)(*(long *)(in_x0 + 200) + 0xc);
      do {
        fVar33 = (float)puVar21[-3];
        fVar32 = (float)puVar21[-2];
        fVar31 = (float)puVar21[-1];
        if ((ulong)*(ushort *)(puVar21 + 3) != 0xffff) {
          pfVar18 = *(float **)(lVar22 + (ulong)*(ushort *)(puVar21 + 3) * 8);
          if (fVar32 <= pfVar18[1]) {
            fVar33 = fVar33 + pfVar18[10];
            fVar31 = fVar31 + pfVar18[0xb];
          }
          else {
            fVar33 = *pfVar18;
            fVar31 = pfVar18[2];
            fVar32 = pfVar18[1];
          }
        }
        *pfVar15 = fVar33;
        uVar19 = uVar19 - 1;
        pfVar15[1] = fVar32;
        pfVar15[2] = fVar31;
        fVar31 = (float)NEON_fmadd(puVar21[1],0x42ff0000,0x42ff0000);
        fVar33 = (float)NEON_fmadd(puVar21[2],0x42ff0000,0x42ff0000);
        fVar32 = (float)NEON_fmadd(*puVar21,0x42ff0000,0x42ff0000);
        pfVar15[3] = (float)((int)fVar31 << 8 & 0xff000000U |
                             (int)fVar31 << 8 & 0xffffU | ((int)fVar33 & 0xffU) << 0x10 |
                             (int)fVar32 | 0xff000000);
        pfVar15 = pfVar15 + 4;
        puVar21 = puVar21 + 7;
      } while (uVar19 != 0);
    }
  }
  plVar27 = *(long **)(in_x0 + 0x70);
  uVar14 = (**(code **)(*plVar13 + 0x138))(plVar13);
                    /* WARNING: Could not recover jumptable at 0x008d228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar27 + 0x18))(plVar27,uVar14);
  return;
}


