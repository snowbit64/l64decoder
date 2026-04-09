// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImageBox
// Entry Point: 00a94844
// Size: 964 bytes
// Signature: undefined __cdecl scaleImageBox(uchar * param_1, uint param_2, uint param_3, uint param_4, uchar * param_5, uint param_6, uint param_7, uint param_8)


/* ImageScale::scaleImageBox(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned char*, unsigned int, unsigned int, unsigned int) */

void ImageScale::scaleImageBox
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,uint param_6,
               uint param_7,uint param_8)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint3 uVar12;
  uint3 uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  ushort uVar28;
  ushort uVar29;
  undefined8 uVar27;
  undefined8 uVar30;
  ushort uVar32;
  ushort uVar33;
  undefined8 uVar31;
  undefined8 uVar34;
  ushort uVar36;
  ushort uVar37;
  undefined8 uVar35;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  lVar11 = tpidr_el0;
  lVar20 = *(long *)(lVar11 + 0x28);
  uVar3 = 0;
  if (param_6 != 0) {
    uVar3 = param_6 - param_7 * param_4;
  }
  if (param_8 != 0) {
    uVar21 = (ulong)param_4;
    uVar19 = 0;
    uVar9 = 0;
    if ((ulong)param_7 != 0) {
      uVar9 = ((ulong)param_2 << 0x30) / (ulong)param_7;
    }
    uVar10 = 0;
    if ((ulong)param_8 != 0) {
      uVar10 = ((ulong)param_3 << 0x30) / (ulong)param_8;
    }
    lVar14 = (uVar10 >> 1) - 1;
    uVar18 = uVar21 & 0xfffffff0;
    do {
      uVar28 = (ushort)((ulong)lVar14 >> 0x30);
      uVar4 = param_3 - 1;
      if (uVar28 + 1 <= param_3 - 1) {
        uVar4 = uVar28 + 1;
      }
      if (param_7 != 0) {
        uVar24 = 0;
        iVar5 = uVar28 * param_2;
        iVar6 = uVar4 * param_2;
        lVar25 = (uVar9 >> 1) - 1;
        do {
          uVar28 = (ushort)((ulong)lVar25 >> 0x30);
          uVar22 = (uint)uVar28;
          uVar4 = param_2 - 1;
          if (uVar22 + 1 <= param_2 - 1) {
            uVar4 = uVar28 + 1;
          }
          if (param_4 == 3) {
            uVar22 = ((*(uint *)(param_1 + (uVar4 + iVar5) * 3) ^
                      *(uint *)(param_1 + (iVar5 + uVar22) * 3)) >> 1 & 0x7f7f7f) +
                     (*(uint *)(param_1 + (iVar5 + uVar22) * 3) &
                      *(uint *)(param_1 + (uVar4 + iVar5) * 3) & 0xffffff);
            uVar4 = ((*(uint *)(param_1 + (uVar4 + iVar6) * 3) ^
                     *(uint *)(param_1 + (iVar6 + (uint)uVar28) * 3)) >> 1 & 0x7f7f7f) +
                    (*(uint *)(param_1 + (iVar6 + (uint)uVar28) * 3) &
                     *(uint *)(param_1 + (uVar4 + iVar6) * 3) & 0xffffff);
            iVar26 = ((uVar4 ^ uVar22) >> 1 & 0xff7f7f) + (uVar4 & uVar22);
            *(char *)((long)param_5 + 2) = (char)((uint)iVar26 >> 0x10);
            *(short *)param_5 = (short)iVar26;
            param_5 = (uchar *)((long)param_5 + 3);
          }
          else if (param_4 != 0) {
            uVar7 = (iVar5 + uVar22) * param_4;
            uVar8 = (uVar4 + iVar5) * param_4;
            uVar22 = (iVar6 + uVar22) * param_4;
            uVar4 = (uVar4 + iVar6) * param_4;
            if (param_4 < 0x10) {
LAB_00a94a2c:
              puVar15 = (undefined8 *)param_5;
              uVar23 = 0;
            }
            else {
              uVar16 = (uint)(uVar21 - 1);
              if ((((CARRY4(uVar7,uVar16) != false) || (uVar21 - 1 >> 0x20 != 0)) ||
                  (CARRY4(uVar8,uVar16) != false)) ||
                 ((CARRY4(uVar22,uVar16) != false || (CARRY4(uVar4,uVar16) != false))))
              goto LAB_00a94a2c;
              puVar2 = (uchar *)((long)param_5 + uVar21);
              if (((param_5 < param_1 + uVar4 + uVar21 && param_1 + uVar4 < puVar2) ||
                  ((param_5 < param_1 + uVar22 + uVar21 && param_1 + uVar22 < puVar2 ||
                   (param_5 < param_1 + uVar8 + uVar21 && param_1 + uVar8 < puVar2)))) ||
                 (param_5 < param_1 + uVar7 + uVar21 && param_1 + uVar7 < puVar2))
              goto LAB_00a94a2c;
              iVar26 = 0;
              puVar15 = (undefined8 *)((long)param_5 + uVar18);
              uVar23 = uVar18;
              do {
                uVar23 = uVar23 - 0x10;
                uVar30 = *(undefined8 *)((long)(param_1 + (uVar22 + iVar26)) + 8);
                uVar27 = *(undefined8 *)(param_1 + (uVar22 + iVar26));
                uVar16 = uVar7 + iVar26;
                uVar34 = *(undefined8 *)((long)(param_1 + (uVar4 + iVar26)) + 8);
                uVar31 = *(undefined8 *)(param_1 + (uVar4 + iVar26));
                uVar1 = uVar8 + iVar26;
                iVar26 = iVar26 + 0x10;
                uVar38 = *(undefined8 *)((long)(param_1 + uVar16) + 8);
                uVar35 = *(undefined8 *)(param_1 + uVar16);
                uVar40 = *(undefined8 *)((long)(param_1 + uVar1) + 8);
                uVar39 = *(undefined8 *)(param_1 + uVar1);
                uVar12 = CONCAT12((char)((ulong)uVar31 >> 8),(short)uVar31) & 0xff00ff;
                uVar13 = CONCAT12((char)((ulong)uVar39 >> 8),(short)uVar39) & 0xff00ff;
                uVar32 = (ushort)(byte)(uVar13 >> 0x10) + (ushort)(byte)((ulong)uVar35 >> 8);
                uVar33 = (ushort)(byte)((ulong)uVar39 >> 0x10) +
                         (ushort)(byte)((ulong)uVar35 >> 0x10);
                uVar36 = (ushort)(byte)((ulong)uVar40 >> 8) + (ushort)(byte)((ulong)uVar38 >> 8);
                uVar37 = (ushort)(byte)((ulong)uVar40 >> 0x10) +
                         (ushort)(byte)((ulong)uVar38 >> 0x10);
                uVar28 = ((ushort)((ushort)(byte)((ulong)uVar34 >> 8) +
                                  (ushort)(byte)((ulong)uVar30 >> 8)) >> 1) + (uVar36 >> 1);
                uVar29 = ((ushort)((ushort)(byte)((ulong)uVar34 >> 0x10) +
                                  (ushort)(byte)((ulong)uVar30 >> 0x10)) >> 1) + (uVar37 >> 1);
                *(ulong *)((long)param_5 + 8) =
                     CONCAT17((char)((ushort)(((ushort)((ushort)(byte)((ulong)uVar34 >> 0x38) +
                                                       (ushort)(byte)((ulong)uVar30 >> 0x38)) >> 1)
                                             + ((ushort)((ushort)(byte)((ulong)uVar40 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar38 >> 0x38)) >> 1)
                                             ) >> 1),
                              CONCAT16((char)((ushort)(((ushort)((ushort)(byte)((ulong)uVar34 >>
                                                                               0x30) +
                                                                (ushort)(byte)((ulong)uVar30 >> 0x30
                                                                              )) >> 1) +
                                                      ((ushort)((ushort)(byte)((ulong)uVar40 >> 0x30
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar38 >> 0x30)
                                                               ) >> 1)) >> 1),
                                       CONCAT15((char)((ushort)(((ushort)((ushort)(byte)((ulong)
                                                  uVar34 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x28)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar40 >> 0x28) +
                                                           (ushort)(byte)((ulong)uVar38 >> 0x28)) >>
                                                  1)) >> 1),
                                                CONCAT14((char)((ushort)(((ushort)((ushort)(byte)((
                                                  ulong)uVar34 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x20)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar40 >> 0x20) +
                                                           (ushort)(byte)((ulong)uVar38 >> 0x20)) >>
                                                  1)) >> 1),
                                                  CONCAT13((char)((ushort)(((ushort)((ushort)(byte)(
                                                  (ulong)uVar34 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x18)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar40 >> 0x18) +
                                                           (ushort)(byte)((ulong)uVar38 >> 0x18)) >>
                                                  1)) >> 1),
                                                  CONCAT12((char)(uVar29 >> 1),
                                                           CONCAT11((char)(uVar28 >> 1),
                                                                    (char)(((ulong)CONCAT24(uVar29,
                                                  CONCAT22(uVar28,((ushort)((ushort)(byte)uVar34 +
                                                                           (ushort)(byte)uVar30) >>
                                                                  1) + (short)(((ulong)CONCAT24(
                                                  uVar37,CONCAT22(uVar36,(ushort)(byte)uVar40 +
                                                                         (ushort)(byte)uVar38)) &
                                                  0xfffe) >> 1))) & 0xfffe) >> 1))))))));
                *(ulong *)param_5 =
                     CONCAT17((char)((ushort)(((ushort)((ushort)(byte)((ulong)uVar31 >> 0x38) +
                                                       (ushort)(byte)((ulong)uVar27 >> 0x38)) >> 1)
                                             + ((ushort)((ushort)(byte)((ulong)uVar39 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar35 >> 0x38)) >> 1)
                                             ) >> 1),
                              CONCAT16((char)((ushort)(((ushort)((ushort)(byte)((ulong)uVar31 >>
                                                                               0x30) +
                                                                (ushort)(byte)((ulong)uVar27 >> 0x30
                                                                              )) >> 1) +
                                                      ((ushort)((ushort)(byte)((ulong)uVar39 >> 0x30
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar35 >> 0x30)
                                                               ) >> 1)) >> 1),
                                       CONCAT15((char)((ushort)(((ushort)((ushort)(byte)((ulong)
                                                  uVar31 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x28)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar39 >> 0x28) +
                                                           (ushort)(byte)((ulong)uVar35 >> 0x28)) >>
                                                  1)) >> 1),
                                                CONCAT14((char)((ushort)(((ushort)((ushort)(byte)((
                                                  ulong)uVar31 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x20)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar39 >> 0x20) +
                                                           (ushort)(byte)((ulong)uVar35 >> 0x20)) >>
                                                  1)) >> 1),
                                                  CONCAT13((char)((ushort)(((ushort)((ushort)(byte)(
                                                  (ulong)uVar31 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x18)) >> 1) +
                                                  ((ushort)((ushort)(byte)((ulong)uVar39 >> 0x18) +
                                                           (ushort)(byte)((ulong)uVar35 >> 0x18)) >>
                                                  1)) >> 1),
                                                  CONCAT12((char)((ushort)(((ushort)((ushort)(byte)(
                                                  (ulong)uVar31 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x10)) >> 1) +
                                                  (uVar33 >> 1)) >> 1),
                                                  CONCAT11((char)((ushort)(((ushort)((ushort)(byte)(
                                                  uVar12 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar27 >> 8)) >> 1) +
                                                  (uVar32 >> 1)) >> 1),
                                                  (char)((ushort)(((ushort)((short)uVar12 +
                                                                           (ushort)(byte)uVar27) >>
                                                                  1) + (short)(((ulong)CONCAT24(
                                                  uVar33,CONCAT22(uVar32,(short)uVar13 +
                                                                         (ushort)(byte)uVar35)) &
                                                  0xfffe) >> 1)) >> 1))))))));
                param_5 = (uchar *)((long)param_5 + 0x10);
              } while (uVar23 != 0);
              param_5 = (uchar *)puVar15;
              uVar23 = uVar18;
              if (uVar18 == uVar21) goto LAB_00a949d0;
            }
            lVar17 = uVar21 - uVar23;
            do {
              iVar26 = (int)uVar23;
              uVar23 = uVar23 + 1;
              lVar17 = lVar17 + -1;
              param_5 = (uchar *)((long)puVar15 + 1);
              *(char *)puVar15 =
                   (char)(((uint)param_1[uVar4 + iVar26] + (uint)param_1[uVar22 + iVar26] >> 1) +
                          ((uint)param_1[uVar8 + iVar26] + (uint)param_1[uVar7 + iVar26] >> 1) >> 1)
              ;
              puVar15 = (undefined8 *)param_5;
            } while (lVar17 != 0);
          }
LAB_00a949d0:
          uVar24 = uVar24 + 1;
          lVar25 = lVar25 + uVar9;
        } while (uVar24 != param_7);
      }
      lVar14 = lVar14 + uVar10;
      param_5 = (uchar *)((long)param_5 + (ulong)uVar3);
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_8);
  }
  if (*(long *)(lVar11 + 0x28) == lVar20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


