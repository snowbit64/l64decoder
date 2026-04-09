// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateHeightRegion
// Entry Point: 008eb3a0
// Size: 564 bytes
// Signature: undefined __thiscall updateHeightRegion(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4, float * param_5)


/* BaseTerrain::updateHeightRegion(int, int, unsigned int, unsigned int, float const*) */

void __thiscall
BaseTerrain::updateHeightRegion
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  uint6 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint6 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  
  uVar8 = *(uint *)(this + 0x90);
  uVar1 = param_3 + param_1;
  uVar7 = param_1;
  if ((int)uVar8 <= param_1) {
    uVar7 = uVar8 - 1;
  }
  uVar5 = 0;
  if (-1 < param_1) {
    uVar5 = uVar7;
  }
  uVar7 = param_2;
  if ((int)uVar8 <= param_2) {
    uVar7 = uVar8 - 1;
  }
  uVar29 = 0;
  if (-1 < param_2) {
    uVar29 = uVar7;
  }
  uVar7 = uVar8;
  if ((int)uVar1 <= (int)uVar8) {
    uVar7 = uVar1;
  }
  uVar2 = param_4 + param_2;
  uVar6 = 0;
  if (-1 < (int)uVar1) {
    uVar6 = uVar7;
  }
  uVar1 = uVar8;
  if ((int)uVar2 <= (int)uVar8) {
    uVar1 = uVar2;
  }
  uVar7 = 0;
  if (-1 < (int)uVar2) {
    uVar7 = uVar1;
  }
  if ((int)uVar29 < (int)uVar7) {
    uVar9 = uVar6 - uVar5;
    fVar34 = 1.0 / *(float *)(this + 0xa4);
    iVar26 = (uVar29 - param_2) * param_3;
    iVar27 = uVar29 * uVar8;
    uVar4 = uVar9 & 0xfffffff8;
    uVar1 = uVar5 + iVar27;
    uVar10 = (uVar5 + iVar26) - param_1;
    iVar28 = 0;
    iVar26 = iVar26 - param_1;
    uVar3 = uVar1;
    uVar2 = uVar10;
    do {
      if ((int)uVar5 < (int)uVar6) {
        lVar30 = *(long *)(this + 0x80);
        uVar33 = uVar5;
        if (((7 < uVar9) && (CARRY4(uVar10 + iVar28 * param_3,uVar6 + ~uVar5) == false)) &&
           (uVar24 = uVar3, uVar25 = uVar2, uVar32 = uVar4,
           CARRY4(uVar1 + uVar8 * iVar28,uVar6 + ~uVar5) == false)) {
          do {
            puVar11 = (undefined8 *)(param_5 + uVar25);
            uVar32 = uVar32 - 8;
            fVar20 = fVar34 * (float)*puVar11;
            fVar21 = fVar34 * (float)((ulong)*puVar11 >> 0x20);
            uVar44 = (undefined)((uint)fVar21 >> 8);
            uVar45 = (undefined)((uint)fVar21 >> 0x10);
            uVar46 = (undefined)((uint)fVar21 >> 0x18);
            fVar22 = fVar34 * (float)puVar11[1];
            uVar47 = (undefined)((uint)fVar22 >> 8);
            uVar48 = (undefined)((uint)fVar22 >> 0x10);
            uVar49 = (undefined)((uint)fVar22 >> 0x18);
            fVar23 = fVar34 * (float)((ulong)puVar11[1] >> 0x20);
            uVar50 = (undefined)((uint)fVar23 >> 8);
            uVar51 = (undefined)((uint)fVar23 >> 0x10);
            uVar52 = (undefined)((uint)fVar23 >> 0x18);
            fVar15 = (float)puVar11[2] * fVar34;
            fVar16 = (float)((ulong)puVar11[2] >> 0x20) * fVar34;
            uVar35 = (undefined)((uint)fVar16 >> 8);
            uVar36 = (undefined)((uint)fVar16 >> 0x10);
            uVar37 = (undefined)((uint)fVar16 >> 0x18);
            fVar17 = (float)puVar11[3] * fVar34;
            uVar38 = (undefined)((uint)fVar17 >> 8);
            uVar39 = (undefined)((uint)fVar17 >> 0x10);
            uVar40 = (undefined)((uint)fVar17 >> 0x18);
            fVar18 = (float)((ulong)puVar11[3] >> 0x20) * fVar34;
            uVar41 = (undefined)((uint)fVar18 >> 8);
            uVar42 = (undefined)((uint)fVar18 >> 0x10);
            uVar43 = (undefined)((uint)fVar18 >> 0x18);
            auVar54[4] = SUB41(fVar21,0);
            auVar54._0_4_ = fVar20;
            auVar54[5] = uVar44;
            auVar54[6] = uVar45;
            auVar54[7] = uVar46;
            auVar54[8] = SUB41(fVar22,0);
            auVar54[9] = uVar47;
            auVar54[10] = uVar48;
            auVar54[11] = uVar49;
            auVar54[12] = SUB41(fVar23,0);
            auVar54[13] = uVar50;
            auVar54[14] = uVar51;
            auVar54[15] = uVar52;
            auVar54 = NEON_fcmlt(auVar54,0,4);
            auVar53._8_4_ = 0x477fff00;
            auVar53._0_8_ = 0x477fff00477fff00;
            auVar53._12_4_ = 0x477fff00;
            auVar55[4] = SUB41(fVar21,0);
            auVar55._0_4_ = fVar20;
            auVar55[5] = uVar44;
            auVar55[6] = uVar45;
            auVar55[7] = uVar46;
            auVar55[8] = SUB41(fVar22,0);
            auVar55[9] = uVar47;
            auVar55[10] = uVar48;
            auVar55[11] = uVar49;
            auVar55[12] = SUB41(fVar23,0);
            auVar55[13] = uVar50;
            auVar55[14] = uVar51;
            auVar55[15] = uVar52;
            auVar55 = NEON_fcmgt(auVar55,auVar53,4);
            auVar12[4] = SUB41(fVar16,0);
            auVar12._0_4_ = fVar15;
            auVar12[5] = uVar35;
            auVar12[6] = uVar36;
            auVar12[7] = uVar37;
            auVar12[8] = SUB41(fVar17,0);
            auVar12[9] = uVar38;
            auVar12[10] = uVar39;
            auVar12[11] = uVar40;
            auVar12[12] = SUB41(fVar18,0);
            auVar12[13] = uVar41;
            auVar12[14] = uVar42;
            auVar12[15] = uVar43;
            auVar53 = NEON_fcmlt(auVar12,0,4);
            auVar56._8_4_ = 0x477fff00;
            auVar56._0_8_ = 0x477fff00477fff00;
            auVar56._12_4_ = 0x477fff00;
            auVar13[4] = SUB41(fVar16,0);
            auVar13._0_4_ = fVar15;
            auVar13[5] = uVar35;
            auVar13[6] = uVar36;
            auVar13[7] = uVar37;
            auVar13[8] = SUB41(fVar17,0);
            auVar13[9] = uVar38;
            auVar13[10] = uVar39;
            auVar13[11] = uVar40;
            auVar13[12] = SUB41(fVar18,0);
            auVar13[13] = uVar41;
            auVar13[14] = uVar42;
            auVar13[15] = uVar43;
            auVar56 = NEON_fcmgt(auVar13,auVar56,4);
            uVar14 = CONCAT15((char)((uint)(int)fVar16 >> 8),CONCAT14((char)(int)fVar16,(int)fVar15)
                             ) & 0xffff0000ffff;
            uVar19 = CONCAT15((char)((uint)(int)fVar21 >> 8),CONCAT14((char)(int)fVar21,(int)fVar20)
                             ) & 0xffff0000ffff;
            puVar11 = (undefined8 *)(lVar30 + (ulong)uVar24 * 2);
            puVar11[1] = CONCAT17((byte)((uint)(int)fVar18 >> 8) & ~auVar53[13] & ~auVar56[13] |
                                  auVar56[13] & ~auVar53[13],
                                  CONCAT16((byte)(int)fVar18 & ~auVar53[12] & ~auVar56[12] |
                                           auVar56[12] & ~auVar53[12],
                                           CONCAT15((byte)((uint)(int)fVar17 >> 8) &
                                                    ~auVar53[9] & ~auVar56[9] |
                                                    auVar56[9] & ~auVar53[9],
                                                    CONCAT14((byte)(int)fVar17 &
                                                             ~auVar53[8] & ~auVar56[8] |
                                                             auVar56[8] & ~auVar53[8],
                                                             CONCAT13((byte)(uVar14 >> 0x28) &
                                                                      ~auVar53[5] & ~auVar56[5] |
                                                                      auVar56[5] & ~auVar53[5],
                                                                      CONCAT12((byte)(uVar14 >> 0x20
                                                                                     ) & ~auVar53[4]
                                                                                         & ~auVar56[
                                                  4] | auVar56[4] & ~auVar53[4],
                                                  CONCAT11((byte)(uVar14 >> 8) &
                                                           ~auVar53[1] & ~auVar56[1] |
                                                           auVar56[1] & ~auVar53[1],
                                                           (byte)uVar14 & ~auVar53[0] & ~auVar56[0]
                                                           | auVar56[0] & ~auVar53[0])))))));
            *puVar11 = CONCAT17((byte)((uint)(int)fVar23 >> 8) & ~auVar54[13] & ~auVar55[13] |
                                auVar55[13] & ~auVar54[13],
                                CONCAT16((byte)(int)fVar23 & ~auVar54[12] & ~auVar55[12] |
                                         auVar55[12] & ~auVar54[12],
                                         CONCAT15((byte)((uint)(int)fVar22 >> 8) &
                                                  ~auVar54[9] & ~auVar55[9] |
                                                  auVar55[9] & ~auVar54[9],
                                                  CONCAT14((byte)(int)fVar22 &
                                                           ~auVar54[8] & ~auVar55[8] |
                                                           auVar55[8] & ~auVar54[8],
                                                           CONCAT13((byte)(uVar19 >> 0x28) &
                                                                    ~auVar54[5] & ~auVar55[5] |
                                                                    auVar55[5] & ~auVar54[5],
                                                                    CONCAT12((byte)(uVar19 >> 0x20)
                                                                             & ~auVar54[4] &
                                                                               ~auVar55[4] |
                                                                             auVar55[4] &
                                                                             ~auVar54[4],
                                                                             CONCAT11((byte)(uVar19 
                                                  >> 8) & ~auVar54[1] & ~auVar55[1] |
                                                  auVar55[1] & ~auVar54[1],
                                                  (byte)uVar19 & ~auVar54[0] & ~auVar55[0] |
                                                  auVar55[0] & ~auVar54[0])))))));
            uVar24 = uVar24 + 8;
            uVar25 = uVar25 + 8;
          } while (uVar32 != 0);
          uVar33 = uVar5 + uVar4;
          if (uVar9 == uVar4) goto LAB_008eb470;
        }
        iVar31 = uVar6 - uVar33;
        uVar32 = uVar33 + iVar27;
        uVar33 = uVar33 + iVar26;
        do {
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          fVar15 = fVar34 * param_5[uVar33];
          if (0.0 <= fVar15) {
            uVar35 = 0;
            uVar36 = 0xff;
            uVar37 = 0x7f;
            uVar38 = 0x47;
            if (fVar15 <= 65535.0) {
              uVar35 = SUB41(fVar15,0);
              uVar36 = (undefined)((uint)fVar15 >> 8);
              uVar37 = (undefined)((uint)fVar15 >> 0x10);
              uVar38 = (undefined)((uint)fVar15 >> 0x18);
            }
          }
          iVar31 = iVar31 + -1;
          uVar33 = uVar33 + 1;
          *(short *)(lVar30 + (ulong)uVar32 * 2) =
               (short)(int)(float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
          uVar32 = uVar32 + 1;
        } while (iVar31 != 0);
      }
LAB_008eb470:
      uVar29 = uVar29 + 1;
      iVar28 = iVar28 + 1;
      uVar2 = uVar2 + param_3;
      uVar3 = uVar3 + uVar8;
      iVar27 = iVar27 + uVar8;
      iVar26 = iVar26 + param_3;
    } while (uVar29 != uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x008eb5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}


