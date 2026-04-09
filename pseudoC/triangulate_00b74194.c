// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangulate
// Entry Point: 00b74194
// Size: 1164 bytes
// Signature: undefined __cdecl triangulate(Vector3 * param_1, uint param_2, Vector3 * param_3, float param_4, vector * param_5)


/* TriangulateUtil::triangulate(Vector3 const*, unsigned int, Vector3 const&, float,
   std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >&) */

bool TriangulateUtil::triangulate
               (Vector3 *param_1,uint param_2,Vector3 *param_3,float param_4,vector *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  float *pfVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 *puVar22;
  uint *puVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  
  if (param_2 < 3) {
    return false;
  }
  uVar27 = (ulong)param_2;
  fVar45 = *(float *)param_3 * *(float *)param_3;
  fVar34 = *(float *)(param_3 + 4) * *(float *)(param_3 + 4);
  fVar37 = *(float *)(param_3 + 8) * *(float *)(param_3 + 8);
  uVar19 = 2;
  if (fVar37 <= fVar45 || fVar34 >= fVar37) {
    uVar19 = 0;
  }
  uVar19 = (uint)(fVar45 < fVar34) & (fVar34 < fVar37 ^ 0xffffffff) | uVar19;
  uVar16 = uVar19 + 1;
  uVar2 = uVar19 + 2;
  uVar25 = (ulong)(uVar16 - (uVar16 / 3 + ((uint)((ulong)uVar16 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
                  );
  fVar34 = param_4;
  if (*(float *)(param_3 + (ulong)uVar19 * 4) < 0.0) {
    fVar34 = -param_4;
  }
  uVar28 = (ulong)(uVar2 - (uVar2 / 3 + ((uint)((ulong)uVar2 * 0xaaaaaaab >> 0x20) & 0xfffffffe)));
  pfVar14 = (float *)operator_new__(uVar27 << 3);
  if (param_2 < 5) {
    lVar17 = 0;
  }
  else {
    pfVar21 = (float *)(param_1 + uVar28 * 4);
    uVar26 = 4;
    if ((param_2 & 3) != 0) {
      uVar26 = uVar27 & 3;
    }
    pfVar20 = (float *)(param_1 + uVar25 * 4);
    lVar17 = uVar27 - uVar26;
    lVar18 = lVar17;
    pfVar24 = pfVar14;
    do {
      fVar37 = *pfVar20;
      fVar45 = pfVar20[3];
      fVar32 = pfVar20[6];
      fVar33 = pfVar20[9];
      pfVar20 = pfVar20 + 0xc;
      lVar18 = lVar18 + -4;
      fVar38 = *pfVar21;
      fVar39 = pfVar21[3];
      fVar41 = pfVar21[6];
      fVar43 = pfVar21[9];
      pfVar21 = pfVar21 + 0xc;
      *pfVar24 = fVar37 * fVar34;
      pfVar24[1] = fVar38 * param_4;
      pfVar24[2] = fVar45 * fVar34;
      pfVar24[3] = fVar39 * param_4;
      pfVar24[4] = fVar32 * fVar34;
      pfVar24[5] = fVar41 * param_4;
      pfVar24[6] = fVar33 * fVar34;
      pfVar24[7] = fVar43 * param_4;
      pfVar24 = pfVar24 + 8;
    } while (lVar18 != 0);
  }
  lVar18 = uVar27 - lVar17;
  pfVar21 = (float *)(param_1 + uVar25 * 4 + lVar17 * 0xc);
  pfVar20 = (float *)(param_1 + uVar28 * 4 + lVar17 * 0xc);
  pfVar24 = pfVar14 + lVar17 * 2 + 1;
  do {
    fVar37 = *pfVar20;
    lVar18 = lVar18 + -1;
    pfVar24[-1] = fVar34 * *pfVar21;
    *pfVar24 = fVar37 * param_4;
    pfVar21 = pfVar21 + 3;
    pfVar20 = pfVar20 + 3;
    pfVar24 = pfVar24 + 2;
  } while (lVar18 != 0);
  puVar15 = (uint *)operator_new__(uVar27 << 2);
  uVar26 = (ulong)(param_2 - 1);
  fVar34 = 0.0;
  uVar25 = 0;
  pfVar21 = pfVar14 + 1;
  uVar28 = uVar26;
  do {
    lVar18 = uVar28 * 2;
    uVar30 = uVar25 + 1;
    uVar28 = uVar25 & 0xffffffff;
    fVar37 = (float)NEON_fmadd(pfVar14[lVar18],*pfVar21,(pfVar14 + lVar18)[1] * -pfVar21[-1]);
    fVar34 = fVar34 + fVar37;
    uVar25 = uVar30;
    pfVar21 = pfVar21 + 2;
  } while (uVar27 != uVar30);
  uVar19 = param_2;
  if (param_2 < 2) {
    uVar19 = 1;
  }
  uVar27 = (ulong)uVar19;
  if (fVar34 * 0.5 <= 0.0) {
    if (uVar19 < 8) {
      uVar28 = 0;
    }
    else {
      uVar28 = uVar27 & 0xfffffff8;
      uVar35 = 0x300000002;
      uVar31 = 0x100000000;
      puVar22 = (undefined8 *)(puVar15 + 4);
      uVar25 = uVar28;
      do {
        iVar46 = CONCAT13(~(byte)((ulong)uVar31 >> 0x18),
                          CONCAT12(~(byte)((ulong)uVar31 >> 0x10),
                                   CONCAT11(~(byte)((ulong)uVar31 >> 8),~(byte)uVar31)));
        uVar30 = (ulong)uVar31 >> 0x20;
        uVar6 = (ulong)uVar31 >> 0x28;
        uVar7 = (ulong)uVar31 >> 0x30;
        uVar8 = (ulong)uVar31 >> 0x38;
        iVar47 = CONCAT13(~(byte)((ulong)uVar35 >> 0x18),
                          CONCAT12(~(byte)((ulong)uVar35 >> 0x10),
                                   CONCAT11(~(byte)((ulong)uVar35 >> 8),~(byte)uVar35)));
        uVar9 = (ulong)uVar35 >> 0x20;
        uVar10 = (ulong)uVar35 >> 0x28;
        uVar11 = (ulong)uVar35 >> 0x30;
        uVar12 = (ulong)uVar35 >> 0x38;
        uVar25 = uVar25 - 8;
        iVar29 = (int)uVar31;
        iVar40 = (int)((ulong)uVar31 >> 0x20);
        iVar42 = (int)uVar35;
        iVar44 = (int)((ulong)uVar35 >> 0x20);
        uVar31 = CONCAT44(iVar40 + 8,iVar29 + 8);
        uVar35 = CONCAT44(iVar44 + 8,iVar42 + 8);
        puVar22[-1] = CONCAT44(param_2 + (int)(CONCAT17(~(byte)uVar12,
                                                        CONCAT16(~(byte)uVar11,
                                                                 CONCAT15(~(byte)uVar10,
                                                                          CONCAT14(~(byte)uVar9,
                                                                                   iVar47)))) >>
                                              0x20),param_2 + iVar47);
        puVar22[-2] = CONCAT44(param_2 + (int)(CONCAT17(~(byte)uVar8,
                                                        CONCAT16(~(byte)uVar7,
                                                                 CONCAT15(~(byte)uVar6,
                                                                          CONCAT14(~(byte)uVar30,
                                                                                   iVar46)))) >>
                                              0x20),param_2 + iVar46);
        puVar22[1] = CONCAT44((param_2 - iVar44) + -5,(param_2 - iVar42) + -5);
        *puVar22 = CONCAT44((param_2 - iVar40) + -5,(param_2 - iVar29) + -5);
        puVar22 = puVar22 + 4;
      } while (uVar25 != 0);
      if (uVar28 == uVar27) goto LAB_00b74448;
    }
    uVar19 = ~(uint)uVar28 + param_2;
    lVar18 = uVar27 - uVar28;
    puVar23 = puVar15 + uVar28;
    do {
      *puVar23 = uVar19;
      uVar19 = uVar19 - 1;
      lVar18 = lVar18 + -1;
      puVar23 = puVar23 + 1;
    } while (lVar18 != 0);
  }
  else {
    if (uVar19 < 8) {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar27 & 0xfffffff8;
      uVar35 = 0x300000002;
      uVar31 = 0x100000000;
      puVar22 = (undefined8 *)(puVar15 + 4);
      uVar28 = uVar25;
      do {
        iVar29 = (int)((ulong)uVar31 >> 0x20);
        iVar40 = (int)((ulong)uVar35 >> 0x20);
        uVar28 = uVar28 - 8;
        puVar22[-1] = uVar35;
        puVar22[-2] = uVar31;
        puVar22[1] = CONCAT44(iVar40 + 4,(int)uVar35 + 4);
        *puVar22 = CONCAT44(iVar29 + 4,(int)uVar31 + 4);
        puVar22 = puVar22 + 4;
        uVar31 = CONCAT44(iVar29 + 8,(int)uVar31 + 8);
        uVar35 = CONCAT44(iVar40 + 8,(int)uVar35 + 8);
      } while (uVar28 != 0);
      if (uVar25 == uVar27) goto LAB_00b74448;
    }
    do {
      puVar15[uVar25] = (uint)uVar25;
      uVar25 = uVar25 + 1;
    } while (uVar27 != uVar25);
  }
LAB_00b74448:
  iVar29 = param_2 << 1;
  if (iVar29 == 0) {
    bVar13 = false;
  }
  else {
    do {
      uVar19 = (uint)uVar26;
      if (param_2 <= uVar19) {
        uVar19 = 0;
      }
      uVar16 = 0;
      if (uVar19 + 1 < param_2) {
        uVar16 = uVar19 + 1;
      }
      uVar26 = (ulong)uVar16;
      uVar2 = uVar16 + 1;
      uVar27 = (ulong)uVar2;
      uVar3 = 0;
      if (uVar2 < param_2) {
        uVar3 = uVar16 + 1;
      }
      uVar25 = snip((Vector2 *)pfVar14,uVar19,uVar16,uVar3,param_2,puVar15);
      if ((uVar25 & 1) == 0) {
        iVar29 = iVar29 + -1;
      }
      else {
        lVar18 = *(long *)param_5;
        uVar28 = *(long *)(param_5 + 8) - lVar18;
        uVar30 = (long)uVar28 >> 1;
        iVar29 = (int)uVar30;
        uVar25 = (ulong)(iVar29 + 3);
        if (uVar25 < uVar30 || uVar25 - uVar30 == 0) {
          if (uVar25 < uVar30) {
            *(ulong *)(param_5 + 8) = lVar18 + uVar25 * 2;
          }
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)param_5,
                     uVar25 - uVar30);
          lVar18 = *(long *)param_5;
        }
        uVar4 = puVar15[uVar16];
        uVar3 = puVar15[uVar3];
        *(short *)(lVar18 + (uVar28 >> 1 & 0xffffffff) * 2) = (short)puVar15[uVar19];
        *(short *)(lVar18 + (ulong)(iVar29 + 1) * 2) = (short)uVar4;
        *(short *)(lVar18 + (ulong)(iVar29 + 2) * 2) = (short)uVar3;
        if (uVar2 < param_2) {
          uVar19 = (param_2 - 2) - uVar16;
          if (((6 < uVar19) && (uVar16 <= param_2 - 2)) &&
             ((uVar25 = (ulong)((param_2 - uVar16) - 2),
              puVar15 + uVar27 + uVar25 + 1 <= puVar15 + uVar26 ||
              (puVar15 + uVar25 + uVar26 + 1 <= puVar15 + uVar27)))) {
            uVar25 = (ulong)uVar19 + 1;
            uVar30 = uVar25 & 0x1fffffff8;
            uVar19 = uVar16 + (int)uVar30;
            puVar22 = (undefined8 *)(puVar15 + uVar27 + 4);
            uVar28 = uVar30;
            do {
              puVar5 = puVar22 + -1;
              uVar31 = puVar22[-2];
              uVar36 = puVar22[1];
              uVar35 = *puVar22;
              puVar1 = (undefined8 *)(puVar15 + uVar16);
              uVar28 = uVar28 - 8;
              uVar16 = uVar16 + 8;
              puVar22 = puVar22 + 4;
              puVar1[1] = *puVar5;
              *puVar1 = uVar31;
              puVar1[3] = uVar36;
              puVar1[2] = uVar35;
            } while (uVar28 != 0);
            uVar27 = uVar30 + uVar27;
            uVar16 = uVar19;
            if (uVar25 == uVar30) goto LAB_00b74584;
          }
          iVar29 = param_2 - (int)uVar27;
          puVar23 = puVar15 + uVar27;
          do {
            iVar29 = iVar29 + -1;
            puVar15[uVar16] = *puVar23;
            uVar16 = uVar16 + 1;
            puVar23 = puVar23 + 1;
          } while (iVar29 != 0);
        }
LAB_00b74584:
        param_2 = param_2 - 1;
        iVar29 = param_2 * 2;
      }
      bVar13 = param_2 < 3;
    } while ((!bVar13) && (iVar29 != 0));
  }
  operator_delete__(pfVar14);
  operator_delete__(puVar15);
  return bVar13;
}


