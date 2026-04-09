// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2f5fc
// Entry Point: 00e2f5fc
// Size: 984 bytes
// Signature: undefined FUN_00e2f5fc(void)


void FUN_00e2f5fc(long param_1,long param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x170c) == 0) {
    uVar7 = *(uint *)(param_1 + 0x1734);
  }
  else {
    uVar12 = 0;
    do {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x1700) + uVar12);
      uVar8 = (uint)*(ushort *)(*(long *)(param_1 + 0x1710) + uVar12 * 2);
      if (uVar8 == 0) {
        puVar1 = (ushort *)(param_2 + (ulong)bVar3 * 4);
        uVar7 = *(uint *)(param_1 + 0x1734);
        uVar10 = *puVar1;
        uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar10 << (ulong)(uVar7 & 0x1f);
        uVar9 = (uint)puVar1[1];
        *(short *)(param_1 + 0x1730) = (short)uVar8;
        if ((int)(0x10 - uVar9) < (int)uVar7) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar8;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
          uVar7 = (uVar9 + *(int *)(param_1 + 0x1734)) - 0x10;
          uVar10 = uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          goto LAB_00e2f690;
        }
        uVar7 = uVar7 + uVar9;
LAB_00e2f694:
        *(uint *)(param_1 + 0x1734) = uVar7;
      }
      else {
        uVar11 = (ulong)(byte)_length_code[bVar3];
        uVar7 = *(uint *)(param_1 + 0x1734);
        lVar13 = param_2 + uVar11 * 4;
        uVar10 = *(ushort *)(lVar13 + 0x404);
        uVar4 = *(ushort *)(lVar13 + 0x406);
        uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar10 << (ulong)(uVar7 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar7) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
          uVar7 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          uVar10 = uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar9 = (uint)uVar10;
          *(ushort *)(param_1 + 0x1730) = uVar10;
          *(uint *)(param_1 + 0x1734) = uVar7;
        }
        else {
          uVar7 = uVar7 + uVar4;
          *(uint *)(param_1 + 0x1734) = uVar7;
        }
        if (0xffffffffffffffeb < uVar11 - 0x1c) {
          iVar2 = *(int *)(&DAT_0055f6e4 + uVar11 * 4);
          uVar6 = (uint)bVar3 - *(int *)(&DAT_0055f830 + uVar11 * 4);
          if (0x10 - iVar2 < (int)uVar7) {
            lVar13 = *(long *)(param_1 + 0x28);
            uVar9 = uVar9 | uVar6 << (ulong)(uVar7 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
            lVar13 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
            uVar7 = (iVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            uVar9 = (uVar6 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          }
          else {
            uVar5 = uVar7 & 0x1f;
            uVar7 = iVar2 + uVar7;
            uVar9 = uVar9 | uVar6 << (ulong)uVar5;
          }
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(uint *)(param_1 + 0x1734) = uVar7;
        }
        uVar8 = uVar8 - 1;
        uVar6 = uVar8;
        if (0xff < uVar8) {
          uVar6 = (uVar8 >> 7) + 0x100;
        }
        bVar3 = (&_dist_code)[uVar6];
        uVar11 = (ulong)bVar3;
        puVar1 = (ushort *)(param_3 + uVar11 * 4);
        uVar10 = *puVar1;
        uVar4 = puVar1[1];
        uVar9 = uVar9 | (uint)uVar10 << (ulong)(uVar7 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar7) {
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
          lVar13 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar13 + 1;
          *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
          uVar7 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          uVar10 = uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar9 = (uint)uVar10;
          *(ushort *)(param_1 + 0x1730) = uVar10;
          *(uint *)(param_1 + 0x1734) = uVar7;
        }
        else {
          uVar7 = uVar7 + uVar4;
          *(uint *)(param_1 + 0x1734) = uVar7;
        }
        if (3 < bVar3) {
          iVar2 = *(int *)(&DAT_0055f758 + uVar11 * 4);
          uVar8 = uVar8 - *(int *)(&DAT_0055f8a4 + uVar11 * 4);
          if (0x10 - iVar2 < (int)uVar7) {
            lVar13 = *(long *)(param_1 + 0x28);
            uVar9 = uVar9 | uVar8 << (ulong)(uVar7 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar9;
            lVar13 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar13 + 1;
            *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
            uVar7 = (iVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            uVar10 = (ushort)((uVar8 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f)
                             );
          }
          else {
            uVar6 = uVar7 & 0x1f;
            uVar7 = iVar2 + uVar7;
            uVar10 = (ushort)uVar9 | (ushort)(uVar8 << (ulong)uVar6);
          }
LAB_00e2f690:
          *(ushort *)(param_1 + 0x1730) = uVar10;
          goto LAB_00e2f694;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x170c));
  }
  uVar10 = *(ushort *)(param_2 + 0x400);
  uVar4 = *(ushort *)(param_2 + 0x402);
  uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar10 << (ulong)(uVar7 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar8;
  if ((int)(0x10 - (uint)uVar4) < (int)uVar7) {
    lVar13 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar13 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar13) = (char)uVar8;
    lVar13 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar13 + 1;
    *(undefined *)(*(long *)(param_1 + 0x10) + lVar13) = *(undefined *)(param_1 + 0x1731);
    *(ushort *)(param_1 + 0x1730) = uVar10 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(uint *)(param_1 + 0x1734) = (uint)uVar4 + *(int *)(param_1 + 0x1734) + -0x10;
    return;
  }
  *(uint *)(param_1 + 0x1734) = uVar7 + uVar4;
  return;
}


