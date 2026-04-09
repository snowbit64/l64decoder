// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc15c4
// Entry Point: 00dc15c4
// Size: 492 bytes
// Signature: undefined FUN_00dc15c4(void)


void FUN_00dc15c4(long param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
  bool bVar1;
  undefined (*pauVar2) [16];
  unkbyte9 *pVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  long lVar7;
  ulong uVar8;
  undefined (*pauVar9) [16];
  undefined8 *puVar10;
  long lVar11;
  undefined (*pauVar12) [16];
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  undefined (*pauVar19) [16];
  long lVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined auVar24 [16];
  
  lVar7 = *(long *)(param_1 + 8);
  uVar16 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  uVar8 = lVar7 - uVar16;
  pauVar12 = param_3;
  pauVar9 = param_2;
  if ((ulong)*(byte *)(param_1 + 0x13) != 0) {
    uVar15 = uVar16;
    if (uVar16 < 2) {
      uVar15 = 1;
    }
    if ((uVar15 < 0x10) ||
       (bVar1 = (undefined (*) [16])(*param_3 + uVar15) <= param_2,
       (!bVar1 && param_3 <= (undefined (*) [16])(*param_2 + uVar15)) &&
       (bVar1 || (undefined (*) [16])(*param_2 + uVar15) != param_3))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar15 & 0x30;
      pauVar9 = (undefined (*) [16])(*param_2 + uVar14);
      pauVar12 = (undefined (*) [16])(*param_3 + uVar14);
      uVar18 = uVar14;
      do {
        auVar22 = *param_2;
        uVar18 = uVar18 - 0x10;
        auVar24 = *param_3;
        param_2[1][0] = auVar22[8] + (auVar24[8] >> 1);
        param_2[1][1] = auVar22[9] + (auVar24[9] >> 1);
        param_2[1][2] = auVar22[10] + (auVar24[10] >> 1);
        param_2[1][3] = auVar22[11] + (auVar24[11] >> 1);
        param_2[1][4] = auVar22[12] + (auVar24[12] >> 1);
        param_2[1][5] = auVar22[13] + (auVar24[13] >> 1);
        param_2[1][6] = auVar22[14] + (auVar24[14] >> 1);
        param_2[1][7] = auVar22[15] + (auVar24[15] >> 1);
        (*param_2)[0] = auVar22[0] + (auVar24[0] >> 1);
        (*param_2)[1] = auVar22[1] + (auVar24[1] >> 1);
        (*param_2)[2] = auVar22[2] + (auVar24[2] >> 1);
        (*param_2)[3] = auVar22[3] + (auVar24[3] >> 1);
        (*param_2)[4] = auVar22[4] + (auVar24[4] >> 1);
        (*param_2)[5] = auVar22[5] + (auVar24[5] >> 1);
        (*param_2)[6] = auVar22[6] + (auVar24[6] >> 1);
        (*param_2)[7] = auVar22[7] + (auVar24[7] >> 1);
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar18 != 0);
      param_2 = pauVar9;
      param_3 = pauVar12;
      if (uVar15 == uVar14) goto joined_r0x00dc166c;
    }
    lVar11 = uVar15 - uVar14;
    do {
      lVar11 = lVar11 + -1;
      pauVar12 = (undefined (*) [16])(*param_3 + 1);
      pauVar9 = (undefined (*) [16])(*param_2 + 1);
      (*param_2)[0] = (*param_2)[0] + ((byte)(*param_3)[0] >> 1);
      param_2 = pauVar9;
      param_3 = pauVar12;
    } while (lVar11 != 0);
  }
joined_r0x00dc166c:
  if (uVar8 == 0) {
    return;
  }
  lVar11 = -uVar16;
  if (7 < uVar8) {
    if (((undefined (*) [16])((long)pauVar12 + uVar8) <= pauVar9 ||
         (undefined (*) [16])((long)pauVar9 + uVar8) <= pauVar12) &&
       ((undefined (*) [16])((long)pauVar9 + lVar7 + uVar16 * -2) <= pauVar9 ||
        (undefined (*) [16])((long)pauVar9 + uVar8) <= (undefined (*) [16])((long)pauVar9 + lVar11))
       ) {
      if (uVar8 < 0x20) {
        uVar15 = 0;
      }
      else {
        uVar14 = uVar8 & 0xffffffffffffffe0;
        pauVar17 = pauVar12 + 1;
        uVar15 = uVar14;
        pauVar19 = pauVar9;
        do {
          pVar3 = (unkbyte9 *)((long)pauVar19 + lVar11);
          uVar15 = uVar15 - 0x20;
          pauVar2 = pauVar17 + -1;
          auVar6 = *pauVar17;
          pauVar17 = pauVar17 + 2;
          uVar21 = *(undefined8 *)((long)pVar3 + 8);
          uVar23 = *(undefined8 *)((long)pVar3 + 0x18);
          auVar22[9] = (char)((ulong)uVar21 >> 8);
          auVar22._0_9_ = *pVar3;
          auVar22[10] = (char)((ulong)uVar21 >> 0x10);
          auVar22[11] = (char)((ulong)uVar21 >> 0x18);
          auVar22[12] = (char)((ulong)uVar21 >> 0x20);
          auVar22[13] = (char)((ulong)uVar21 >> 0x28);
          auVar22[14] = (char)((ulong)uVar21 >> 0x30);
          auVar22[15] = (char)((ulong)uVar21 >> 0x38);
          auVar22 = NEON_uhadd(auVar22,*pauVar2,1);
          auVar24[9] = (char)((ulong)uVar23 >> 8);
          auVar24._0_9_ = pVar3[1];
          auVar24[10] = (char)((ulong)uVar23 >> 0x10);
          auVar24[11] = (char)((ulong)uVar23 >> 0x18);
          auVar24[12] = (char)((ulong)uVar23 >> 0x20);
          auVar24[13] = (char)((ulong)uVar23 >> 0x28);
          auVar24[14] = (char)((ulong)uVar23 >> 0x30);
          auVar24[15] = (char)((ulong)uVar23 >> 0x38);
          auVar24 = NEON_uhadd(auVar24,auVar6,1);
          uVar23 = *(undefined8 *)(*pauVar19 + 8);
          uVar21 = *(undefined8 *)*pauVar19;
          uVar5 = *(undefined8 *)(pauVar19[1] + 8);
          uVar4 = *(undefined8 *)pauVar19[1];
          pauVar19[1][0] = (char)uVar23 + auVar22[8];
          pauVar19[1][1] = (char)((ulong)uVar23 >> 8) + auVar22[9];
          pauVar19[1][2] = (char)((ulong)uVar23 >> 0x10) + auVar22[10];
          pauVar19[1][3] = (char)((ulong)uVar23 >> 0x18) + auVar22[11];
          pauVar19[1][4] = (char)((ulong)uVar23 >> 0x20) + auVar22[12];
          pauVar19[1][5] = (char)((ulong)uVar23 >> 0x28) + auVar22[13];
          pauVar19[1][6] = (char)((ulong)uVar23 >> 0x30) + auVar22[14];
          pauVar19[1][7] = (char)((ulong)uVar23 >> 0x38) + auVar22[15];
          (*pauVar19)[0] = (char)uVar21 + auVar22[0];
          (*pauVar19)[1] = (char)((ulong)uVar21 >> 8) + auVar22[1];
          (*pauVar19)[2] = (char)((ulong)uVar21 >> 0x10) + auVar22[2];
          (*pauVar19)[3] = (char)((ulong)uVar21 >> 0x18) + auVar22[3];
          (*pauVar19)[4] = (char)((ulong)uVar21 >> 0x20) + auVar22[4];
          (*pauVar19)[5] = (char)((ulong)uVar21 >> 0x28) + auVar22[5];
          (*pauVar19)[6] = (char)((ulong)uVar21 >> 0x30) + auVar22[6];
          (*pauVar19)[7] = (char)((ulong)uVar21 >> 0x38) + auVar22[7];
          pauVar19[2][0] = (char)uVar5 + auVar24[8];
          pauVar19[2][1] = (char)((ulong)uVar5 >> 8) + auVar24[9];
          pauVar19[2][2] = (char)((ulong)uVar5 >> 0x10) + auVar24[10];
          pauVar19[2][3] = (char)((ulong)uVar5 >> 0x18) + auVar24[11];
          pauVar19[2][4] = (char)((ulong)uVar5 >> 0x20) + auVar24[12];
          pauVar19[2][5] = (char)((ulong)uVar5 >> 0x28) + auVar24[13];
          pauVar19[2][6] = (char)((ulong)uVar5 >> 0x30) + auVar24[14];
          pauVar19[2][7] = (char)((ulong)uVar5 >> 0x38) + auVar24[15];
          pauVar19[1][0] = (char)uVar4 + auVar24[0];
          pauVar19[1][1] = (char)((ulong)uVar4 >> 8) + auVar24[1];
          pauVar19[1][2] = (char)((ulong)uVar4 >> 0x10) + auVar24[2];
          pauVar19[1][3] = (char)((ulong)uVar4 >> 0x18) + auVar24[3];
          pauVar19[1][4] = (char)((ulong)uVar4 >> 0x20) + auVar24[4];
          pauVar19[1][5] = (char)((ulong)uVar4 >> 0x28) + auVar24[5];
          pauVar19[1][6] = (char)((ulong)uVar4 >> 0x30) + auVar24[6];
          pauVar19[1][7] = (char)((ulong)uVar4 >> 0x38) + auVar24[7];
          pauVar19 = pauVar19 + 2;
        } while (uVar15 != 0);
        if (uVar8 == uVar14) {
          return;
        }
        uVar15 = uVar14;
        if ((uVar8 & 0x18) == 0) {
          pauVar19 = (undefined (*) [16])(*pauVar12 + uVar14);
          pauVar17 = (undefined (*) [16])(*pauVar9 + uVar14);
          goto LAB_00dc1688;
        }
      }
      uVar14 = uVar8 & 0xfffffffffffffff8;
      pauVar17 = (undefined (*) [16])(*pauVar9 + uVar14);
      pauVar19 = (undefined (*) [16])(*pauVar12 + uVar14);
      lVar20 = uVar15 - uVar14;
      puVar10 = (undefined8 *)(*pauVar9 + uVar15);
      puVar13 = (undefined8 *)(*pauVar12 + uVar15);
      do {
        lVar20 = lVar20 + 8;
        uVar21 = NEON_uhadd(*(undefined8 *)((long)puVar10 + lVar11),*puVar13,1);
        uVar23 = *puVar10;
        *puVar10 = CONCAT17((char)((ulong)uVar23 >> 0x38) + (char)((ulong)uVar21 >> 0x38),
                            CONCAT16((char)((ulong)uVar23 >> 0x30) + (char)((ulong)uVar21 >> 0x30),
                                     CONCAT15((char)((ulong)uVar23 >> 0x28) +
                                              (char)((ulong)uVar21 >> 0x28),
                                              CONCAT14((char)((ulong)uVar23 >> 0x20) +
                                                       (char)((ulong)uVar21 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar23 >> 0x18) +
                                                                (char)((ulong)uVar21 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar23 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar21 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar23 >> 8) + (char)((ulong)uVar21 >> 8),
                                                  (char)uVar23 + (char)uVar21)))))));
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar20 != 0);
      if (uVar8 == uVar14) {
        return;
      }
      goto LAB_00dc1688;
    }
  }
  uVar14 = 0;
  pauVar17 = pauVar9;
  pauVar19 = pauVar12;
LAB_00dc1688:
  lVar7 = uVar14 - lVar7;
  do {
    lVar7 = lVar7 + 1;
    (*pauVar17)[0] =
         (*pauVar17)[0] +
         (char)((uint)*(byte *)((long)pauVar17 + lVar11) + (uint)(byte)(*pauVar19)[0] >> 1);
    pauVar17 = (undefined (*) [16])(*pauVar17 + 1);
    pauVar19 = (undefined (*) [16])(*pauVar19 + 1);
  } while (-lVar7 != uVar16);
  return;
}


