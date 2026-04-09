// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e29424
// Entry Point: 00e29424
// Size: 1336 bytes
// Signature: undefined FUN_00e29424(void)


undefined4 FUN_00e29424(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  
LAB_00e29464:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_00e266d4(param_1);
      uVar11 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar11 < 0x106)) {
        return 0;
      }
      if (uVar11 == 0) {
        uVar11 = *(uint *)((long)param_1 + 0xac);
        uVar12 = (ulong)uVar11;
        if (1 < uVar11) {
          uVar11 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar11;
        if (param_2 == 4) {
          uVar15 = param_1[0x13];
          if ((long)uVar15 < 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = param_1[0xc] + (uVar15 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar18,uVar12 - uVar15,1);
          lVar16 = *param_1;
          lVar18 = *(long *)(lVar16 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar18);
          uVar11 = *(uint *)(lVar16 + 0x20);
          if (*(uint *)(lVar18 + 0x28) <= *(uint *)(lVar16 + 0x20)) {
            uVar11 = *(uint *)(lVar18 + 0x28);
          }
          uVar12 = (ulong)uVar11;
          if (uVar11 != 0) {
            memcpy(*(void **)(lVar16 + 0x18),*(void **)(lVar18 + 0x20),uVar12);
            lVar17 = *(long *)(lVar18 + 0x20);
            lVar2 = *(long *)(lVar18 + 0x28);
            *(ulong *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + uVar12;
            lVar2 = lVar2 - uVar12;
            *(ulong *)(lVar16 + 0x28) = *(long *)(lVar16 + 0x28) + uVar12;
            *(uint *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) - uVar11;
            *(ulong *)(lVar18 + 0x20) = lVar17 + uVar12;
            *(long *)(lVar18 + 0x28) = lVar2;
            if (lVar2 == 0) {
              *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar18 + 0x10);
            }
          }
          uVar14 = 2;
          if (*(int *)(*param_1 + 0x20) != 0) {
            uVar14 = 3;
          }
          return uVar14;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar15 = param_1[0x13];
          if ((long)uVar15 < 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = param_1[0xc] + (uVar15 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar18,uVar12 - uVar15,0);
          lVar16 = *param_1;
          lVar18 = *(long *)(lVar16 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar18);
          uVar11 = *(uint *)(lVar16 + 0x20);
          if (*(uint *)(lVar18 + 0x28) <= *(uint *)(lVar16 + 0x20)) {
            uVar11 = *(uint *)(lVar18 + 0x28);
          }
          uVar12 = (ulong)uVar11;
          if (uVar11 != 0) {
            memcpy(*(void **)(lVar16 + 0x18),*(void **)(lVar18 + 0x20),uVar12);
            lVar17 = *(long *)(lVar18 + 0x20);
            lVar2 = *(long *)(lVar18 + 0x28);
            *(ulong *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + uVar12;
            lVar2 = lVar2 - uVar12;
            *(ulong *)(lVar16 + 0x28) = *(long *)(lVar16 + 0x28) + uVar12;
            *(uint *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) - uVar11;
            *(ulong *)(lVar18 + 0x20) = lVar17 + uVar12;
            *(long *)(lVar18 + 0x28) = lVar2;
            if (lVar2 == 0) {
              *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar18 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar11) goto LAB_00e29494;
LAB_00e294f0:
      uVar11 = *(uint *)(param_1 + 0x14);
      if (uVar11 < 3) goto LAB_00e29670;
LAB_00e294fc:
      lVar18 = param_1[0x2e0];
      iVar10 = *(int *)((long)param_1 + 0xac) - *(int *)(param_1 + 0x16);
      uVar13 = iVar10 - 1;
      if (0xff < (uVar13 & 0xffff)) {
        uVar13 = (uVar13 >> 7 & 0x1ff) + 0x100;
      }
      uVar3 = *(uint *)((long)param_1 + 0x170c);
      bVar6 = _length_code[(ulong)(uVar11 - 3) & 0xff];
      bVar7 = (&_dist_code)[(ulong)uVar13 & 0xffff];
      *(short *)(param_1[0x2e2] + (ulong)uVar3 * 2) = (short)iVar10;
      *(uint *)((long)param_1 + 0x170c) = uVar3 + 1;
      *(char *)(lVar18 + (ulong)uVar3) = (char)(uVar11 - 3);
      uVar11 = *(uint *)(param_1 + 0x14);
      iVar10 = *(int *)((long)param_1 + 0xb4);
      sVar8 = *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x9c8);
      iVar4 = *(int *)(param_1 + 0x2e1);
      uVar13 = *(uint *)(param_1 + 0x18);
      *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0x4d8) + 1;
      uVar3 = iVar10 - uVar11;
      iVar10 = *(int *)((long)param_1 + 0x170c);
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x9c8) = sVar8 + 1;
      *(uint *)((long)param_1 + 0xb4) = uVar3;
      if ((uVar13 < uVar11) || (uVar3 < 3)) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        uVar13 = *(int *)((long)param_1 + 0xac) + uVar11;
        *(uint *)((long)param_1 + 0xac) = uVar13;
        uVar11 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar13);
        *(uint *)(param_1 + 0x10) = uVar11;
        *(uint *)(param_1 + 0x10) =
             (uVar11 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
             (uint)*(byte *)(param_1[0xc] + (ulong)(uVar13 + 1))) & *(uint *)((long)param_1 + 0x8c);
      }
      else {
        lVar18 = param_1[0xe];
        lVar16 = param_1[0xf];
        iVar19 = uVar11 - 2;
        uVar3 = *(uint *)((long)param_1 + 0x8c);
        uVar1 = *(uint *)(param_1 + 0x12);
        lVar17 = param_1[0xc];
        uVar13 = *(int *)((long)param_1 + 0xac) + 1;
        uVar5 = *(uint *)(param_1 + 0xb);
        *(uint *)(param_1 + 0x14) = uVar11 - 1;
        uVar12 = (ulong)*(uint *)(param_1 + 0x10);
        do {
          *(uint *)((long)param_1 + 0xac) = uVar13;
          bVar6 = *(byte *)(lVar17 + (ulong)(uVar13 + 2));
          *(int *)(param_1 + 0x14) = iVar19;
          iVar19 = iVar19 + -1;
          uVar11 = ((int)uVar12 << (ulong)(uVar1 & 0x1f) ^ (uint)bVar6) & uVar3;
          uVar12 = (ulong)uVar11;
          *(uint *)(param_1 + 0x10) = uVar11;
          *(undefined2 *)(lVar18 + (ulong)(uVar5 & uVar13) * 2) =
               *(undefined2 *)(lVar16 + uVar12 * 2);
          *(short *)(lVar16 + uVar12 * 2) = (short)uVar13;
          uVar13 = uVar13 + 1;
        } while (iVar19 != -1);
        *(uint *)((long)param_1 + 0xac) = uVar13;
      }
      if (iVar10 != iVar4 + -1) goto LAB_00e29464;
    }
    else {
LAB_00e29494:
      uVar11 = *(uint *)((long)param_1 + 0xac);
      uVar13 = (*(int *)(param_1 + 0x10) << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + (ulong)(uVar11 + 2))) &
               *(uint *)((long)param_1 + 0x8c);
      lVar18 = param_1[0xf];
      lVar16 = (ulong)uVar13 * 2;
      *(uint *)(param_1 + 0x10) = uVar13;
      uVar9 = *(ushort *)(lVar18 + lVar16);
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar11) * 2) = uVar9;
      *(short *)(lVar18 + lVar16) = (short)uVar11;
      if ((uVar9 == 0) || (*(int *)(param_1 + 10) - 0x106U < uVar11 - uVar9)) goto LAB_00e294f0;
      uVar11 = FUN_00e29ff8(param_1);
      *(uint *)(param_1 + 0x14) = uVar11;
      if (2 < uVar11) goto LAB_00e294fc;
LAB_00e29670:
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      bVar6 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      lVar18 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar11 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(byte *)(lVar18 + (ulong)uVar11) = bVar6;
      sVar8 = *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4);
      iVar10 = *(int *)(param_1 + 0x2e1);
      iVar4 = *(int *)((long)param_1 + 0x170c);
      uVar13 = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
      *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4) = sVar8 + 1;
      *(uint *)((long)param_1 + 0xac) = uVar13;
      if (iVar4 != iVar10 + -1) goto LAB_00e29464;
    }
    uVar12 = param_1[0x13];
    if ((long)uVar12 < 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = param_1[0xc] + (uVar12 & 0xffffffff);
    }
    _tr_flush_block(param_1,lVar18,uVar13 - uVar12,0);
    lVar16 = *param_1;
    lVar18 = *(long *)(lVar16 + 0x38);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    _tr_flush_bits(lVar18);
    uVar11 = *(uint *)(lVar16 + 0x20);
    if (*(uint *)(lVar18 + 0x28) <= *(uint *)(lVar16 + 0x20)) {
      uVar11 = *(uint *)(lVar18 + 0x28);
    }
    uVar12 = (ulong)uVar11;
    if (uVar11 != 0) {
      memcpy(*(void **)(lVar16 + 0x18),*(void **)(lVar18 + 0x20),uVar12);
      lVar17 = *(long *)(lVar18 + 0x20);
      lVar2 = *(long *)(lVar18 + 0x28);
      *(ulong *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + uVar12;
      lVar2 = lVar2 - uVar12;
      *(ulong *)(lVar16 + 0x28) = *(long *)(lVar16 + 0x28) + uVar12;
      *(uint *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) - uVar11;
      *(ulong *)(lVar18 + 0x20) = lVar17 + uVar12;
      *(long *)(lVar18 + 0x28) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar18 + 0x10);
      }
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


