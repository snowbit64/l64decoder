// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e29ff8
// Entry Point: 00e29ff8
// Size: 648 bytes
// Signature: undefined FUN_00e29ff8(void)


uint FUN_00e29ff8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  char cVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  
  lVar19 = *(long *)(param_1 + 0x60);
  uVar20 = *(uint *)(param_1 + 0xac);
  uVar9 = *(int *)(param_1 + 0x50) - 0x106;
  pcVar3 = (char *)(lVar19 + (ulong)uVar20);
  uVar15 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  uVar7 = *(uint *)(param_1 + 0xb4);
  uVar6 = 0;
  if (uVar9 <= uVar20) {
    uVar6 = uVar20 - uVar9;
  }
  uVar20 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= *(uint *)(param_1 + 0xb8)) {
    uVar20 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  iVar11 = (int)pcVar3;
  iVar10 = iVar11 + 0x102;
  cVar12 = (pcVar3 + uVar15)[-1];
  uVar9 = uVar7;
  if (*(uint *)(param_1 + 0xd0) <= uVar7) {
    uVar9 = *(uint *)(param_1 + 0xd0);
  }
  cVar16 = pcVar3[uVar15];
  do {
    iVar14 = (int)uVar15;
    pcVar4 = (char *)(lVar19 + (param_2 & 0xffffffff));
    if ((((pcVar4[iVar14] == cVar16) && (pcVar4[(long)iVar14 + -1] == cVar12)) &&
        (*pcVar4 == *pcVar3)) && (pcVar4[1] == pcVar3[1])) {
      lVar5 = lVar19 + 5 + (param_2 & 0xffffffff);
      lVar17 = 0;
      do {
        pcVar4 = pcVar3 + lVar17;
        if (pcVar4[3] != *(char *)(lVar5 + lVar17 + -2)) {
          iVar18 = ((int)pcVar4 + 3) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        iVar18 = (int)lVar17;
        if (pcVar4[4] != *(char *)(lVar5 + lVar17 + -1)) {
          iVar18 = (iVar11 + iVar18 + 4) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        pcVar4 = pcVar3 + lVar17;
        if (pcVar4[5] != *(char *)(lVar5 + lVar17)) {
          iVar18 = ((int)pcVar4 + 5) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        if (pcVar4[6] != *(char *)(lVar5 + lVar17 + 1)) {
          iVar18 = (iVar11 + iVar18 + 6) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        pcVar4 = pcVar3 + lVar17;
        if (pcVar4[7] != *(char *)(lVar5 + lVar17 + 2)) {
          iVar18 = ((int)pcVar4 + 7) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        if (pcVar4[8] != *(char *)(lVar5 + lVar17 + 3)) {
          iVar18 = (iVar11 + iVar18 + 8) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        pcVar4 = pcVar3 + lVar17;
        if (pcVar4[9] != *(char *)(lVar5 + lVar17 + 4)) {
          iVar18 = ((int)pcVar4 + 9) - iVar10;
          goto joined_r0x00e2a1dc;
        }
        lVar1 = lVar17 + 8;
      } while ((pcVar4[10] == *(char *)(lVar5 + lVar17 + 5)) &&
              (uVar2 = lVar17 + 2, lVar17 = lVar1, uVar2 < 0xfa));
      iVar18 = (iVar11 + (int)lVar1 + 2) - iVar10;
joined_r0x00e2a1dc:
      uVar13 = iVar18 + 0x102;
      if (iVar14 < (int)uVar13) {
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar9 <= (int)uVar13) break;
        cVar16 = pcVar3[(int)uVar13];
        uVar15 = (ulong)uVar13;
        cVar12 = pcVar3[iVar18 + 0x101];
      }
    }
    uVar13 = (uint)uVar15;
    uVar20 = uVar20 - 1;
    uVar8 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar8;
  } while (uVar6 < uVar8 && uVar20 != 0);
  if (uVar13 <= uVar7) {
    uVar7 = uVar13;
  }
  return uVar7;
}


