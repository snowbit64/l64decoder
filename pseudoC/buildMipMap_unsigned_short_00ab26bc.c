// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMipMap<unsigned_short>
// Entry Point: 00ab26bc
// Size: 1700 bytes
// Signature: void __cdecl buildMipMap<unsigned_short>(ushort * param_1, ushort * param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* void MipMapUtil::buildMipMap<unsigned short>(unsigned short*, unsigned short const*, unsigned
   int, unsigned int, unsigned int, unsigned int) */

void MipMapUtil::buildMipMap<unsigned_short>
               (ushort *param_1,ushort *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  uint local_d4;
  
  iVar15 = param_6 * param_3;
  uVar14 = 0;
  if (1 < param_3) {
    uVar14 = param_6;
  }
  iVar12 = 0;
  if (1 < param_4) {
    iVar12 = iVar15;
  }
  uVar7 = param_4 & 0xfffffffe;
  if (param_5 < 2) {
    uVar8 = param_3 & 0xfffffffe;
    if (param_4 < 2) {
      uVar7 = 1;
    }
    if (param_3 < 2) {
      uVar8 = 1;
    }
    if (uVar7 != 0) {
      lVar17 = (long)(int)uVar14;
      lVar19 = (long)iVar12;
      uVar16 = (ulong)(param_6 - 1);
      lVar4 = lVar19 + lVar17;
      uVar5 = uVar16 + 1;
      uVar14 = 0;
      uVar11 = uVar5 & 0x1fffffff8;
      do {
        if (uVar8 != 0) {
          uVar26 = 0;
          puVar22 = (undefined8 *)param_2;
          do {
            if (param_6 != 0) {
              if (param_6 - 1 < 7) {
LAB_00ab2d00:
                iVar12 = 0;
                puVar21 = (undefined8 *)param_1;
                puVar24 = puVar22;
              }
              else {
                puVar24 = (undefined8 *)((long)param_1 + uVar5 * 2);
                if ((((param_1 < (undefined8 *)((long)puVar22 + (lVar4 + uVar16 + 1) * 2) &&
                       (undefined8 *)((long)puVar22 + lVar4 * 2) < puVar24) ||
                     (param_1 < (undefined8 *)((long)puVar22 + (lVar19 + uVar16 + 1) * 2) &&
                      (undefined8 *)((long)puVar22 + lVar19 * 2) < puVar24)) ||
                    (param_1 < (undefined8 *)((long)puVar22 + (lVar17 + uVar16 + 1) * 2) &&
                     (undefined8 *)((long)puVar22 + lVar17 * 2) < puVar24)) ||
                   (param_1 < (undefined8 *)((long)puVar22 + uVar5 * 2) && puVar22 < puVar24))
                goto LAB_00ab2d00;
                puVar24 = (undefined8 *)((long)puVar22 + uVar11 * 2);
                puVar21 = (undefined8 *)((long)param_1 + uVar11 * 2);
                uVar23 = uVar11;
                do {
                  puVar10 = (undefined8 *)((long)puVar22 + lVar17 * 2);
                  uVar28 = puVar10[1];
                  uVar27 = *puVar10;
                  uVar23 = uVar23 - 8;
                  uVar30 = puVar22[1];
                  uVar29 = *puVar22;
                  puVar10 = (undefined8 *)((long)puVar22 + lVar19 * 2);
                  uVar34 = puVar10[1];
                  uVar33 = *puVar10;
                  puVar10 = (undefined8 *)((long)puVar22 + lVar4 * 2);
                  uVar32 = puVar10[1];
                  uVar31 = *puVar10;
                  puVar22 = puVar22 + 2;
                  *(ulong *)((long)param_1 + 8) =
                       CONCAT26((short)((uint)(ushort)((ulong)uVar28 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar30 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar34 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar32 >> 0x30) >> 2),
                                CONCAT24((short)((uint)(ushort)((ulong)uVar28 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar30 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar34 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar32 >> 0x20) >> 2),
                                         CONCAT22((short)((uint)(ushort)((ulong)uVar28 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar30 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar34 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar32 >> 0x10) >> 2
                                                         ),(short)((uint)(ushort)uVar28 +
                                                                   (uint)(ushort)uVar30 +
                                                                   (uint)(ushort)uVar34 +
                                                                   (uint)(ushort)uVar32 >> 2))));
                  *(ulong *)param_1 =
                       CONCAT26((short)((uint)(ushort)((ulong)uVar27 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar29 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar33 >> 0x30) +
                                        (uint)(ushort)((ulong)uVar31 >> 0x30) >> 2),
                                CONCAT24((short)((uint)(ushort)((ulong)uVar27 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar29 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar33 >> 0x20) +
                                                 (uint)(ushort)((ulong)uVar31 >> 0x20) >> 2),
                                         CONCAT22((short)((uint)(ushort)((ulong)uVar27 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar29 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar33 >> 0x10) +
                                                          (uint)(ushort)((ulong)uVar31 >> 0x10) >> 2
                                                         ),(short)(((uint)uVar27 & 0xffff) +
                                                                   (uint)(ushort)uVar29 +
                                                                   ((uint)uVar33 & 0xffff) +
                                                                   ((uint)uVar31 & 0xffff) >> 2))));
                  param_1 = (ushort *)((long)param_1 + 0x10);
                } while (uVar23 != 0);
                iVar12 = (int)uVar11;
                param_1 = (ushort *)puVar21;
                puVar22 = puVar24;
                if (uVar5 == uVar11) goto LAB_00ab2bec;
              }
              iVar12 = param_6 - iVar12;
              puVar22 = puVar24;
              do {
                puVar1 = (ushort *)((long)puVar22 + lVar17 * 2);
                iVar12 = iVar12 + -1;
                uVar9 = *(ushort *)puVar22;
                puVar2 = (ushort *)((long)puVar22 + lVar19 * 2);
                puVar3 = (ushort *)((long)puVar22 + lVar4 * 2);
                puVar22 = (undefined8 *)((long)puVar22 + 2);
                param_1 = (ushort *)((long)puVar21 + 2);
                *(ushort *)puVar21 =
                     (ushort)((uint)*puVar1 + (uint)uVar9 + (uint)*puVar2 + (uint)*puVar3 >> 2);
                puVar21 = (undefined8 *)param_1;
              } while (iVar12 != 0);
            }
LAB_00ab2bec:
            puVar22 = (undefined8 *)((long)puVar22 + lVar17 * 2);
            uVar26 = uVar26 + 2;
          } while (uVar26 < uVar8);
        }
        param_2 = (ushort *)((long)param_2 + (ulong)(uint)(iVar15 * 2) * 2);
        uVar14 = uVar14 + 2;
      } while (uVar14 < uVar7);
    }
  }
  else {
    if (param_4 < 2) {
      uVar7 = 1;
    }
    uVar8 = param_3 & 0xfffffffe;
    if (param_3 < 2) {
      uVar8 = 1;
    }
    if ((param_5 & 0xfffffffe) != 0) {
      lVar20 = (long)iVar12;
      uVar11 = (ulong)(param_6 - 1);
      lVar18 = (long)(int)uVar14;
      lVar25 = (long)(int)(iVar15 * param_4);
      lVar17 = lVar20 + lVar18;
      lVar19 = lVar25 + lVar20;
      lVar6 = lVar25 + lVar18;
      lVar4 = lVar18 + (int)lVar19;
      uVar5 = uVar11 + 1;
      local_d4 = 0;
      uVar16 = uVar5 & 0x1fffffff8;
      do {
        if (uVar7 != 0) {
          uVar14 = 0;
          do {
            if (uVar8 != 0) {
              uVar26 = 0;
              do {
                if (param_6 != 0) {
                  if (param_6 - 1 < 7) {
                    iVar15 = 0;
                  }
                  else {
                    puVar1 = param_1 + uVar5;
                    iVar15 = 0;
                    if (((((param_2 + lVar4 + uVar11 + 1 <= param_1 || puVar1 <= param_2 + lVar4) &&
                          (param_2 + lVar19 + uVar11 + 1 <= param_1 || puVar1 <= param_2 + lVar19))
                         && ((param_2 + lVar6 + uVar11 + 1 <= param_1 || puVar1 <= param_2 + lVar6
                             && ((param_2 + lVar25 + uVar11 + 1 <= param_1 ||
                                  puVar1 <= param_2 + lVar25 &&
                                 (param_2 + lVar17 + uVar11 + 1 <= param_1 ||
                                  puVar1 <= param_2 + lVar17)))))) &&
                        (param_2 + lVar20 + uVar11 + 1 <= param_1 || puVar1 <= param_2 + lVar20)) &&
                       ((param_2 + lVar18 + uVar11 + 1 <= param_1 || puVar1 <= param_2 + lVar18 &&
                        (param_2 + uVar5 <= param_1 || puVar1 <= param_2)))) {
                      lVar13 = 0;
                      puVar1 = param_1 + uVar16;
                      puVar2 = param_2 + uVar16;
                      uVar23 = uVar16;
                      do {
                        uVar28 = ((undefined8 *)((long)param_2 + lVar13))[1];
                        uVar27 = *(undefined8 *)((long)param_2 + lVar13);
                        uVar23 = uVar23 - 8;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar18 * 2);
                        uVar33 = puVar22[1];
                        uVar29 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar20 * 2);
                        uVar40 = puVar22[1];
                        uVar37 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar17 * 2);
                        uVar34 = puVar22[1];
                        uVar30 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar25 * 2);
                        uVar41 = puVar22[1];
                        uVar38 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar6 * 2);
                        uVar35 = puVar22[1];
                        uVar31 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar19 * 2);
                        uVar42 = puVar22[1];
                        uVar39 = *puVar22;
                        puVar22 = (undefined8 *)((long)param_2 + lVar13 + lVar4 * 2);
                        uVar36 = puVar22[1];
                        uVar32 = *puVar22;
                        ((undefined8 *)((long)param_1 + lVar13))[1] =
                             CONCAT26((short)((uint)(ushort)((ulong)uVar33 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar28 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar40 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar34 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar41 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar35 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar42 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar36 >> 0x30) >> 3),
                                      CONCAT24((short)((uint)(ushort)((ulong)uVar33 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar28 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar40 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar34 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar41 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar35 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar42 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar36 >> 0x20) >> 3),
                                               CONCAT22((short)((uint)(ushort)((ulong)uVar33 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar28 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar40 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar34 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar41 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar35 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar42 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar36 >> 0x10
                                                                              ) >> 3),
                                                        (short)((uint)(ushort)uVar33 +
                                                                (uint)(ushort)uVar28 +
                                                                (uint)(ushort)uVar40 +
                                                                (uint)(ushort)uVar34 +
                                                                (uint)(ushort)uVar41 +
                                                                (uint)(ushort)uVar35 +
                                                                (uint)(ushort)uVar42 +
                                                                (uint)(ushort)uVar36 >> 3))));
                        *(undefined8 *)((long)param_1 + lVar13) =
                             CONCAT26((short)((uint)(ushort)((ulong)uVar29 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar27 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar37 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar30 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar38 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar31 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar39 >> 0x30) +
                                              (uint)(ushort)((ulong)uVar32 >> 0x30) >> 3),
                                      CONCAT24((short)((uint)(ushort)((ulong)uVar29 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar27 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar37 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar30 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar38 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar31 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar39 >> 0x20) +
                                                       (uint)(ushort)((ulong)uVar32 >> 0x20) >> 3),
                                               CONCAT22((short)((uint)(ushort)((ulong)uVar29 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar27 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar37 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar30 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar38 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar31 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar39 >> 0x10
                                                                              ) +
                                                                (uint)(ushort)((ulong)uVar32 >> 0x10
                                                                              ) >> 3),
                                                        (short)(((uint)uVar29 & 0xffff) +
                                                                (uint)(ushort)uVar27 +
                                                                ((uint)uVar37 & 0xffff) +
                                                                ((uint)uVar30 & 0xffff) +
                                                                ((uint)uVar38 & 0xffff) +
                                                                ((uint)uVar31 & 0xffff) +
                                                                ((uint)uVar39 & 0xffff) +
                                                                ((uint)uVar32 & 0xffff) >> 3))));
                        lVar13 = lVar13 + 0x10;
                      } while (uVar23 != 0);
                      iVar15 = (int)uVar16;
                      param_1 = puVar1;
                      param_2 = puVar2;
                      if (uVar5 == uVar16) goto LAB_00ab2820;
                    }
                  }
                  lVar13 = 0;
                  iVar15 = param_6 - iVar15;
                  do {
                    iVar15 = iVar15 + -1;
                    *(short *)((long)param_1 + lVar13) =
                         (short)((uint)*(ushort *)((long)param_2 + lVar13 + lVar18 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar20 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar17 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar25 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar6 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar19 * 2) +
                                 (uint)*(ushort *)((long)param_2 + lVar13 + lVar4 * 2) >> 3);
                    lVar13 = lVar13 + 2;
                  } while (iVar15 != 0);
                  param_1 = (ushort *)((long)param_1 + lVar13);
                  param_2 = (ushort *)((long)param_2 + lVar13);
                }
LAB_00ab2820:
                param_2 = param_2 + lVar18;
                uVar26 = uVar26 + 2;
              } while (uVar26 < uVar8);
            }
            param_2 = param_2 + lVar20;
            uVar14 = uVar14 + 2;
          } while (uVar14 < uVar7);
        }
        param_2 = param_2 + lVar25;
        local_d4 = local_d4 + 2;
      } while (local_d4 < (param_5 & 0xfffffffe));
    }
  }
  return;
}


