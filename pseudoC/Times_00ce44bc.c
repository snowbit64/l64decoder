// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Times
// Entry Point: 00ce44bc
// Size: 724 bytes
// Signature: undefined __cdecl Times(PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::Times(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::PolynomialMod2::Times(PolynomialMod2 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long in_x1;
  int iVar3;
  uint uVar4;
  PolynomialMod2 *in_x8;
  uint *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  iVar3 = (int)*(ulong *)(param_1 + 0x10) * -0x20;
  uVar19 = *(ulong *)(param_1 + 0x10);
  do {
    if (uVar19 == 0) goto LAB_00ce4540;
    uVar14 = uVar19 - 1;
    lVar7 = uVar19 * 4;
    iVar3 = iVar3 + 0x20;
    uVar19 = uVar14;
  } while (*(int *)(*(long *)(param_1 + 0x18) + -4 + lVar7) == 0);
  if ((int)uVar14 == -1) {
LAB_00ce4540:
    iVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + (uVar14 & 0xffffffff) * 4);
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar12 = 0;
      uVar8 = 0x20;
      do {
        uVar18 = uVar12 + uVar8 >> 1;
        uVar9 = uVar18;
        if (uVar4 >> (ulong)(uVar18 & 0x1f) != 0) {
          uVar9 = uVar8;
          uVar12 = uVar18;
        }
        uVar8 = uVar9;
      } while (1 < uVar9 - uVar12);
    }
    iVar3 = uVar9 - iVar3;
  }
  iVar6 = (int)*(ulong *)(in_x1 + 0x10) * -0x20;
  uVar19 = *(ulong *)(in_x1 + 0x10);
  do {
    if (uVar19 == 0) goto LAB_00ce45b4;
    uVar14 = uVar19 - 1;
    lVar7 = uVar19 * 4;
    iVar6 = iVar6 + 0x20;
    uVar19 = uVar14;
  } while (*(int *)(*(long *)(in_x1 + 0x18) + -4 + lVar7) == 0);
  if ((int)uVar14 == -1) {
LAB_00ce45b4:
    iVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(*(long *)(in_x1 + 0x18) + (uVar14 & 0xffffffff) * 4);
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar12 = 0;
      uVar8 = 0x20;
      do {
        uVar18 = uVar12 + uVar8 >> 1;
        uVar9 = uVar18;
        if (uVar4 >> (ulong)(uVar18 & 0x1f) != 0) {
          uVar9 = uVar8;
          uVar12 = uVar18;
        }
        uVar8 = uVar9;
      } while (1 < uVar9 - uVar12);
    }
    iVar6 = uVar9 - iVar6;
  }
  uVar19 = (ulong)(uint)(iVar6 + iVar3) + 0x1f >> 5;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar19;
  AllocatorBase<unsigned_int>::CheckSize(uVar19);
  if (iVar6 + iVar3 == 0) {
    *(undefined8 *)(in_x8 + 0x18) = 0;
  }
  else {
    puVar2 = (undefined4 *)UnalignedAllocate(uVar19 * 4);
    *puVar2 = 0;
    *(undefined4 **)(in_x8 + 0x18) = puVar2;
    if (uVar19 != 1) {
      memset(puVar2 + 1,0,uVar19 * 4 - 4);
    }
  }
  uVar4 = (int)*(ulong *)(in_x1 + 0x10) * -0x20 + 1;
  uVar19 = *(ulong *)(in_x1 + 0x10);
  do {
    if (uVar19 == 0) {
      return;
    }
    uVar14 = uVar19 - 1;
    lVar7 = uVar19 * 4;
    uVar4 = uVar4 + 0x20;
    uVar19 = uVar14;
  } while (*(int *)(*(long *)(in_x1 + 0x18) + -4 + lVar7) == 0);
  if ((int)uVar14 != -1) {
    uVar9 = *(uint *)(*(long *)(in_x1 + 0x18) + (uVar14 & 0xffffffff) * 4);
    if (uVar9 == 0) {
      uVar9 = -uVar4;
      goto joined_r0x00ce4698;
    }
    uVar12 = 0;
    uVar8 = 0x20;
    do {
      uVar1 = uVar12 + uVar8 >> 1;
      uVar18 = uVar1;
      if (uVar9 >> (ulong)(uVar1 & 0x1f) != 0) {
        uVar18 = uVar8;
        uVar12 = uVar1;
      }
      uVar8 = uVar18;
    } while (1 < uVar18 - uVar12);
    uVar18 = uVar18 - uVar4;
    if (-1 < (int)uVar18) {
      do {
                    /* try { // try from 00ce46c0 to 00ce46cb has its CatchHandler @ 00ce4790 */
        operator<<=(in_x8,1);
        if ((((ulong)(uVar18 >> 5) < *(ulong *)(in_x1 + 0x10)) &&
            ((*(uint *)(*(long *)(in_x1 + 0x18) + (ulong)(uVar18 >> 5) * 4) >>
              (ulong)(uVar18 & 0x1f) & 1) != 0)) &&
           (uVar19 = *(ulong *)(param_1 + 0x10), uVar19 != 0)) {
          uVar10 = *(ulong *)(in_x8 + 0x18);
          uVar14 = *(ulong *)(param_1 + 0x18);
          if ((uVar19 < 8) || ((uVar10 < uVar14 + uVar19 * 4 && (uVar14 < uVar10 + uVar19 * 4)))) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar19 & 0xfffffffffffffff8;
            puVar15 = (undefined8 *)(uVar14 + 0x10);
            puVar16 = (undefined8 *)(uVar10 + 0x10);
            uVar17 = uVar13;
            do {
              uVar21 = puVar15[-1];
              uVar20 = puVar15[-2];
              uVar23 = puVar15[1];
              uVar22 = *puVar15;
              puVar15 = puVar15 + 4;
              uVar17 = uVar17 - 8;
              uVar25 = puVar16[-1];
              uVar24 = puVar16[-2];
              uVar27 = puVar16[1];
              uVar26 = *puVar16;
              puVar16[-1] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                              (byte)((ulong)uVar21 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                       (byte)((ulong)uVar21 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                                (byte)((ulong)uVar21 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar25 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar21 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar25 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                           (byte)((ulong)uVar21 >> 8),
                                                           (byte)uVar25 ^ (byte)uVar21)))))));
              puVar16[-2] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                              (byte)((ulong)uVar20 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                       (byte)((ulong)uVar20 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                                (byte)((ulong)uVar20 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar24 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar20 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar24 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar24 >> 8) ^
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar24 ^ (byte)uVar20)))))));
              puVar16[1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                             (byte)((ulong)uVar23 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                      (byte)((ulong)uVar23 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                               (byte)((ulong)uVar23 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar27 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar23 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                           (byte)((ulong)uVar23 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                                    (byte)((ulong)uVar23 >> 8),
                                                                    (byte)uVar27 ^ (byte)uVar23)))))
                                            ));
              *puVar16 = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                           (byte)((ulong)uVar22 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                    (byte)((ulong)uVar22 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                             (byte)((ulong)uVar22 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                      ^ (byte)((ulong)uVar22 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar26
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar22
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
              puVar16 = puVar16 + 4;
            } while (uVar17 != 0);
            if (uVar19 == uVar13) goto LAB_00ce46b0;
          }
          lVar7 = uVar19 - uVar13;
          puVar5 = (uint *)(uVar14 + uVar13 * 4);
          puVar11 = (uint *)(uVar10 + uVar13 * 4);
          do {
            lVar7 = lVar7 + -1;
            *puVar11 = *puVar11 ^ *puVar5;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar7 != 0);
        }
LAB_00ce46b0:
        uVar9 = uVar18 - 1;
        uVar4 = uVar18;
joined_r0x00ce4698:
        uVar18 = uVar9;
      } while ((int)uVar4 < 1);
    }
  }
  return;
}


