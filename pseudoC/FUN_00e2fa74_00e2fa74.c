// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2fa74
// Entry Point: 00e2fa74
// Size: 1308 bytes
// Signature: undefined FUN_00e2fa74(void)


void FUN_00e2fa74(long param_1,long param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar13 = 0;
    iVar7 = 0;
    iVar17 = 0x8a;
    if (uVar2 != 0) {
      iVar17 = 7;
    }
    iVar16 = 3;
    if (uVar2 != 0) {
      iVar16 = 4;
    }
    uVar19 = 0xffffffff;
    do {
      uVar15 = (ulong)uVar2;
      uVar13 = uVar13 + 1;
      uVar3 = *(ushort *)(param_2 + uVar13 * 4 + 2);
      iVar9 = iVar7 + 1;
      uVar6 = (uint)uVar2;
      uVar14 = (uint)uVar3;
      if ((iVar17 <= iVar9) || (uVar6 != uVar14)) {
        if (iVar9 < iVar16) {
          lVar10 = param_1 + uVar15 * 4;
          uVar11 = *(uint *)(param_1 + 0x1734);
          do {
            while( true ) {
              uVar2 = *(ushort *)(lVar10 + 0xabc);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar11 & 0x1f);
              uVar18 = (uint)*(ushort *)(lVar10 + 0xabe);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              if ((int)uVar11 <= (int)(0x10 - uVar18)) break;
              lVar12 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar12 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar12) = (char)uVar5;
              lVar12 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar12 + 1;
              *(undefined *)(*(long *)(param_1 + 0x10) + lVar12) = *(undefined *)(param_1 + 0x1731);
              uVar11 = (uVar18 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) =
                   uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              iVar9 = iVar9 + -1;
              *(uint *)(param_1 + 0x1734) = uVar11;
              if (iVar9 == 0) goto LAB_00e2fba8;
            }
            uVar11 = uVar11 + uVar18;
            iVar9 = iVar9 + -1;
            *(uint *)(param_1 + 0x1734) = uVar11;
          } while (iVar9 != 0);
LAB_00e2fba8:
          bVar1 = uVar3 == 0;
joined_r0x00e2ff70:
          if (bVar1) {
LAB_00e2ff74:
            iVar17 = 0x8a;
            iVar16 = 3;
            uVar19 = uVar15;
            iVar9 = 0;
            goto LAB_00e2fad4;
          }
        }
        else {
          if (uVar6 == 0) {
            if (iVar7 < 10) {
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar2 = *(ushort *)(param_1 + 0xb00);
              uVar4 = *(ushort *)(param_1 + 0xb02);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar11 & 0x1f);
              uVar8 = (ushort)uVar5;
              if ((int)(0x10 - (uint)uVar4) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(ushort *)(param_1 + 0x1730) = uVar8;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar5;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined *)(param_1 + 0x1731);
                uVar11 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
                uVar8 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar5 = (uint)uVar8;
                uVar18 = iVar7 + 0xfffe << (ulong)(uVar11 & 0x1f);
                uVar2 = (ushort)uVar18;
                *(uint *)(param_1 + 0x1734) = uVar11;
              }
              else {
                uVar11 = uVar11 + uVar4;
                uVar18 = iVar7 + 0xfffe << (ulong)(uVar11 & 0x1f);
                uVar2 = (ushort)uVar18;
                *(uint *)(param_1 + 0x1734) = uVar11;
              }
              if (0xd < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(short *)(param_1 + 0x1730) = (short)(uVar5 | uVar18);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)(uVar5 | uVar18);
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar7 + 0xfffeU & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xd;
                goto joined_r0x00e2fef8;
              }
              uVar8 = uVar8 | uVar2;
              iVar17 = uVar11 + 3;
            }
            else {
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar2 = *(ushort *)(param_1 + 0xb04);
              uVar4 = *(ushort *)(param_1 + 0xb06);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar11 & 0x1f);
              uVar8 = (ushort)uVar5;
              if ((int)(0x10 - (uint)uVar4) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(ushort *)(param_1 + 0x1730) = uVar8;
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar5;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined *)(param_1 + 0x1731);
                uVar11 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
                uVar8 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar5 = (uint)uVar8;
                uVar18 = iVar7 + 0xfff6 << (ulong)(uVar11 & 0x1f);
                uVar2 = (ushort)uVar18;
                *(uint *)(param_1 + 0x1734) = uVar11;
              }
              else {
                uVar11 = uVar11 + uVar4;
                uVar18 = iVar7 + 0xfff6 << (ulong)(uVar11 & 0x1f);
                uVar2 = (ushort)uVar18;
                *(uint *)(param_1 + 0x1734) = uVar11;
              }
              if (9 < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(short *)(param_1 + 0x1730) = (short)(uVar5 | uVar18);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)(uVar5 | uVar18);
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar7 + 0xfff6U & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -9;
                bVar1 = uVar14 == 0;
                goto joined_r0x00e2ff70;
              }
              uVar8 = uVar8 | uVar2;
              iVar17 = uVar11 + 7;
            }
          }
          else {
            if (uVar6 == (uint)uVar19) {
              uVar11 = *(uint *)(param_1 + 0x1734);
              iVar7 = iVar9;
            }
            else {
              lVar10 = param_1 + uVar15 * 4;
              uVar11 = *(uint *)(param_1 + 0x1734);
              uVar2 = *(ushort *)(lVar10 + 0xabc);
              uVar4 = *(ushort *)(lVar10 + 0xabe);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar11 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              if ((int)(0x10 - (uint)uVar4) < (int)uVar11) {
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar5;
                lVar10 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar10 + 1;
                *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) =
                     *(undefined *)(param_1 + 0x1731);
                uVar11 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(ushort *)(param_1 + 0x1730) =
                     uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              }
              else {
                uVar11 = uVar11 + uVar4;
              }
              *(uint *)(param_1 + 0x1734) = uVar11;
            }
            uVar2 = *(ushort *)(param_1 + 0xafc);
            uVar4 = *(ushort *)(param_1 + 0xafe);
            uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar11 & 0x1f);
            uVar8 = (ushort)uVar5;
            if ((int)(0x10 - (uint)uVar4) < (int)uVar11) {
              lVar10 = *(long *)(param_1 + 0x28);
              *(ushort *)(param_1 + 0x1730) = uVar8;
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar5;
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) = *(undefined *)(param_1 + 0x1731);
              uVar8 = uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar5 = (uint)uVar8;
              uVar11 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(uint *)(param_1 + 0x1734) = uVar11;
            }
            else {
              uVar11 = uVar11 + uVar4;
              *(uint *)(param_1 + 0x1734) = uVar11;
            }
            if (0xe < (int)uVar11) {
              lVar10 = *(long *)(param_1 + 0x28);
              uVar5 = uVar5 | iVar7 + 0xfffdU << (ulong)(uVar11 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar5;
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(undefined *)(*(long *)(param_1 + 0x10) + lVar10) = *(undefined *)(param_1 + 0x1731);
              *(short *)(param_1 + 0x1730) =
                   (short)((iVar7 + 0xfffdU & 0xffff) >>
                          (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xe;
joined_r0x00e2fef8:
              if (uVar14 == 0) goto LAB_00e2ff74;
              goto LAB_00e2fbb0;
            }
            uVar8 = uVar8 | (ushort)(iVar7 + 0xfffd << (ulong)(uVar11 & 0x1f));
            iVar17 = uVar11 + 2;
          }
          *(ushort *)(param_1 + 0x1730) = uVar8;
          *(int *)(param_1 + 0x1734) = iVar17;
          if (uVar3 == 0) goto LAB_00e2ff74;
        }
LAB_00e2fbb0:
        iVar16 = 3;
        if (uVar6 != uVar14) {
          iVar16 = 4;
        }
        iVar17 = 6;
        uVar19 = uVar15;
        iVar9 = 0;
        if (uVar6 != uVar14) {
          iVar17 = 7;
        }
      }
LAB_00e2fad4:
      iVar7 = iVar9;
      uVar2 = uVar3;
    } while (uVar13 != param_3 + 1);
  }
  return;
}


