// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e28cd8
// Entry Point: 00e28cd8
// Size: 1296 bytes
// Signature: undefined FUN_00e28cd8(void)


undefined4 FUN_00e28cd8(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  
LAB_00e28d1c:
  do {
    uVar12 = *(uint *)((long)param_1 + 0xb4);
    if (uVar12 < 0x103) {
      FUN_00e266d4(param_1);
      uVar12 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar12 < 0x103)) {
        return 0;
      }
      if (uVar12 == 0) {
        *(undefined4 *)((long)param_1 + 0x172c) = 0;
        if (param_2 == 4) {
          uVar14 = param_1[0x13];
          if ((long)uVar14 < 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = param_1[0xc] + (uVar14 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar16,*(uint *)((long)param_1 + 0xac) - uVar14,1);
          lVar17 = *param_1;
          lVar16 = *(long *)(lVar17 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar16);
          uVar12 = *(uint *)(lVar17 + 0x20);
          if (*(uint *)(lVar16 + 0x28) <= *(uint *)(lVar17 + 0x20)) {
            uVar12 = *(uint *)(lVar16 + 0x28);
          }
          uVar14 = (ulong)uVar12;
          if (uVar12 != 0) {
            memcpy(*(void **)(lVar17 + 0x18),*(void **)(lVar16 + 0x20),uVar14);
            lVar5 = *(long *)(lVar16 + 0x20);
            lVar6 = *(long *)(lVar16 + 0x28);
            *(ulong *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + uVar14;
            lVar6 = lVar6 - uVar14;
            *(ulong *)(lVar17 + 0x28) = *(long *)(lVar17 + 0x28) + uVar14;
            *(uint *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) - uVar12;
            *(ulong *)(lVar16 + 0x20) = lVar5 + uVar14;
            *(long *)(lVar16 + 0x28) = lVar6;
            if (lVar6 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          uVar13 = 2;
          if (*(int *)(*param_1 + 0x20) != 0) {
            uVar13 = 3;
          }
          return uVar13;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar14 = param_1[0x13];
          if ((long)uVar14 < 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = param_1[0xc] + (uVar14 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar16,*(uint *)((long)param_1 + 0xac) - uVar14,0);
          lVar17 = *param_1;
          lVar16 = *(long *)(lVar17 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar16);
          uVar12 = *(uint *)(lVar17 + 0x20);
          if (*(uint *)(lVar16 + 0x28) <= *(uint *)(lVar17 + 0x20)) {
            uVar12 = *(uint *)(lVar16 + 0x28);
          }
          uVar14 = (ulong)uVar12;
          if (uVar12 != 0) {
            memcpy(*(void **)(lVar17 + 0x18),*(void **)(lVar16 + 0x20),uVar14);
            lVar5 = *(long *)(lVar16 + 0x20);
            lVar6 = *(long *)(lVar16 + 0x28);
            *(ulong *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + uVar14;
            lVar6 = lVar6 - uVar14;
            *(ulong *)(lVar17 + 0x28) = *(long *)(lVar17 + 0x28) + uVar14;
            *(uint *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) - uVar12;
            *(ulong *)(lVar16 + 0x20) = lVar5 + uVar14;
            *(long *)(lVar16 + 0x28) = lVar6;
            if (lVar6 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (2 < uVar12) goto LAB_00e28d5c;
      uVar14 = (ulong)*(uint *)((long)param_1 + 0xac);
LAB_00e28f08:
      uVar12 = *(uint *)((long)param_1 + 0x170c);
      bVar9 = *(byte *)(param_1[0xc] + uVar14);
      lVar16 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar12 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar12 + 1;
      *(byte *)(lVar16 + (ulong)uVar12) = bVar9;
      sVar10 = *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4);
      iVar8 = *(int *)(param_1 + 0x2e1);
      iVar15 = *(int *)((long)param_1 + 0x170c);
      uVar12 = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
      *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) = sVar10 + 1;
      *(uint *)((long)param_1 + 0xac) = uVar12;
      if (iVar15 != iVar8 + -1) goto LAB_00e28d1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
LAB_00e28d5c:
      uVar14 = (ulong)*(uint *)((long)param_1 + 0xac);
      if (*(uint *)((long)param_1 + 0xac) == 0) goto LAB_00e28f08;
      pcVar3 = (char *)(param_1[0xc] + uVar14);
      cVar11 = pcVar3[-1];
      if (((cVar11 != *pcVar3) || (cVar11 != pcVar3[1])) || (cVar11 != pcVar3[2]))
      goto LAB_00e28f08;
      iVar8 = (int)pcVar3;
      lVar16 = 0;
      do {
        pcVar4 = pcVar3 + lVar16;
        if (cVar11 != pcVar4[3]) {
          iVar15 = (int)pcVar4 + 3;
          goto LAB_00e28e6c;
        }
        iVar15 = (int)lVar16;
        if (cVar11 != pcVar4[4]) {
          iVar15 = iVar8 + iVar15 + 4;
          goto LAB_00e28e6c;
        }
        pcVar4 = pcVar3 + lVar16;
        if (cVar11 != pcVar4[5]) {
          iVar15 = (int)pcVar4 + 5;
          goto LAB_00e28e6c;
        }
        if (cVar11 != pcVar4[6]) {
          iVar15 = iVar8 + iVar15 + 6;
          goto LAB_00e28e6c;
        }
        pcVar4 = pcVar3 + lVar16;
        if (cVar11 != pcVar4[7]) {
          iVar15 = (int)pcVar4 + 7;
          goto LAB_00e28e6c;
        }
        if (cVar11 != pcVar4[8]) {
          iVar15 = iVar8 + iVar15 + 8;
          goto LAB_00e28e6c;
        }
        pcVar4 = pcVar3 + lVar16;
        if (cVar11 != pcVar4[9]) {
          iVar15 = (int)pcVar4 + 9;
          goto LAB_00e28e6c;
        }
        lVar17 = lVar16 + 8;
      } while ((cVar11 == pcVar4[10]) && (uVar2 = lVar16 + 2, lVar16 = lVar17, uVar2 < 0xfa));
      iVar15 = iVar8 + (int)lVar17 + 2;
LAB_00e28e6c:
      uVar1 = (iVar15 - (iVar8 + 0x102)) + 0x102;
      if (uVar1 <= uVar12) {
        uVar12 = uVar1;
      }
      *(uint *)(param_1 + 0x14) = uVar12;
      if (uVar12 < 3) goto LAB_00e28f08;
      uVar1 = *(uint *)((long)param_1 + 0x170c);
      lVar16 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar1 * 2) = 1;
      bVar9 = _length_code[(ulong)(uVar12 - 3) & 0xff];
      *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
      *(char *)(lVar16 + (ulong)uVar1) = (char)(uVar12 - 3);
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 0;
      sVar10 = *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0x4d8);
      *(short *)(param_1 + 0x139) = *(short *)(param_1 + 0x139) + 1;
      iVar15 = *(int *)(param_1 + 0x2e1);
      uVar12 = *(int *)((long)param_1 + 0xac) + iVar8;
      iVar7 = *(int *)((long)param_1 + 0x170c);
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) - iVar8;
      *(uint *)((long)param_1 + 0xac) = uVar12;
      *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0x4d8) = sVar10 + 1;
      if (iVar7 != iVar15 + -1) goto LAB_00e28d1c;
    }
    uVar14 = param_1[0x13];
    if ((long)uVar14 < 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = param_1[0xc] + (uVar14 & 0xffffffff);
    }
    _tr_flush_block(param_1,lVar16,uVar12 - uVar14,0);
    lVar17 = *param_1;
    lVar16 = *(long *)(lVar17 + 0x38);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    _tr_flush_bits(lVar16);
    uVar12 = *(uint *)(lVar17 + 0x20);
    if (*(uint *)(lVar16 + 0x28) <= *(uint *)(lVar17 + 0x20)) {
      uVar12 = *(uint *)(lVar16 + 0x28);
    }
    uVar14 = (ulong)uVar12;
    if (uVar12 != 0) {
      memcpy(*(void **)(lVar17 + 0x18),*(void **)(lVar16 + 0x20),uVar14);
      lVar5 = *(long *)(lVar16 + 0x20);
      lVar6 = *(long *)(lVar16 + 0x28);
      *(ulong *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + uVar14;
      lVar6 = lVar6 - uVar14;
      *(ulong *)(lVar17 + 0x28) = *(long *)(lVar17 + 0x28) + uVar14;
      *(uint *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) - uVar12;
      *(ulong *)(lVar16 + 0x20) = lVar5 + uVar14;
      *(long *)(lVar16 + 0x28) = lVar6;
      if (lVar6 == 0) {
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
      }
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


