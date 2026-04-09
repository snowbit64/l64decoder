// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2995c
// Entry Point: 00e2995c
// Size: 1692 bytes
// Signature: undefined FUN_00e2995c(void)


undefined4 FUN_00e2995c(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  short sVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  
LAB_00e299c0:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_00e266d4(param_1);
      uVar15 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar15 < 0x106)) {
        return 0;
      }
      if (uVar15 == 0) {
        if (*(int *)(param_1 + 0x15) != 0) {
          uVar15 = *(uint *)((long)param_1 + 0x170c);
          lVar21 = param_1[0x2e0];
          bVar12 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
          *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
          *(undefined2 *)(param_1[0x2e2] + (ulong)uVar15 * 2) = 0;
          *(byte *)(lVar21 + (ulong)uVar15) = bVar12;
          *(undefined4 *)(param_1 + 0x15) = 0;
          *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0xd4) =
               *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0xd4) + 1;
        }
        uVar15 = *(uint *)((long)param_1 + 0xac);
        uVar16 = (ulong)uVar15;
        if (1 < uVar15) {
          uVar15 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar15;
        if (param_2 == 4) {
          uVar18 = param_1[0x13];
          if ((long)uVar18 < 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = param_1[0xc] + (uVar18 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar21,uVar16 - uVar18,1);
          lVar20 = *param_1;
          lVar21 = *(long *)(lVar20 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar21);
          uVar15 = *(uint *)(lVar20 + 0x20);
          if (*(uint *)(lVar21 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
            uVar15 = *(uint *)(lVar21 + 0x28);
          }
          uVar16 = (ulong)uVar15;
          if (uVar15 != 0) {
            memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar21 + 0x20),uVar16);
            lVar2 = *(long *)(lVar21 + 0x20);
            lVar3 = *(long *)(lVar21 + 0x28);
            *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar16;
            lVar3 = lVar3 - uVar16;
            *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar16;
            *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar15;
            *(ulong *)(lVar21 + 0x20) = lVar2 + uVar16;
            *(long *)(lVar21 + 0x28) = lVar3;
            if (lVar3 == 0) {
              *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar21 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar18 = param_1[0x13];
          if ((long)uVar18 < 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = param_1[0xc] + (uVar18 & 0xffffffff);
          }
          _tr_flush_block(param_1,lVar21,uVar16 - uVar18,0);
          lVar20 = *param_1;
          lVar21 = *(long *)(lVar20 + 0x38);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          _tr_flush_bits(lVar21);
          uVar15 = *(uint *)(lVar20 + 0x20);
          if (*(uint *)(lVar21 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
            uVar15 = *(uint *)(lVar21 + 0x28);
          }
          uVar16 = (ulong)uVar15;
          if (uVar15 != 0) {
            memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar21 + 0x20),uVar16);
            lVar2 = *(long *)(lVar21 + 0x20);
            lVar3 = *(long *)(lVar21 + 0x28);
            *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar16;
            lVar3 = lVar3 - uVar16;
            *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar16;
            *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar15;
            *(ulong *)(lVar21 + 0x20) = lVar2 + uVar16;
            *(long *)(lVar21 + 0x28) = lVar3;
            if (lVar3 == 0) {
              *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar21 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar15) goto LAB_00e299f0;
      uVar17 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x17) = uVar17;
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x16);
LAB_00e29a90:
      uVar15 = 2;
      if (uVar17 < 3) goto LAB_00e29bb8;
LAB_00e29a98:
      if (uVar17 < uVar15) goto LAB_00e29bb8;
      iVar10 = *(int *)((long)param_1 + 0xac);
      bVar12 = _length_code[(ulong)(uVar17 - 3) & 0xff];
      iVar9 = iVar10 + ~*(uint *)((long)param_1 + 0xa4);
      uVar15 = iVar9 - 1;
      if (0xff < (uVar15 & 0xffff)) {
        uVar15 = (uVar15 >> 7 & 0x1ff) + 0x100;
      }
      uVar4 = *(uint *)((long)param_1 + 0x170c);
      *(short *)(param_1[0x2e2] + (ulong)uVar4 * 2) = (short)iVar9;
      bVar11 = (&_dist_code)[(ulong)uVar15 & 0xffff];
      *(uint *)((long)param_1 + 0x170c) = uVar4 + 1;
      iVar5 = *(int *)((long)param_1 + 0xb4);
      *(char *)(param_1[0x2e0] + (ulong)uVar4) = (char)(uVar17 - 3);
      iVar6 = *(int *)((long)param_1 + 0xac);
      iVar9 = *(int *)((long)param_1 + 0xb4);
      iVar1 = *(int *)(param_1 + 0x17);
      sVar13 = *(short *)((long)param_1 + (ulong)bVar11 * 4 + 0x9c8);
      *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0x4d8) + 1;
      iVar7 = *(int *)(param_1 + 0x2e1);
      iVar8 = *(int *)((long)param_1 + 0x170c);
      *(short *)((long)param_1 + (ulong)bVar11 * 4 + 0x9c8) = sVar13 + 1;
      iVar19 = iVar1 + -3;
      uVar16 = (ulong)(iVar6 + 1);
      *(int *)((long)param_1 + 0xb4) = (iVar9 - iVar1) + 1;
      *(int *)(param_1 + 0x17) = iVar1 + -2;
      do {
        uVar15 = (uint)uVar16;
        *(uint *)((long)param_1 + 0xac) = uVar15;
        if (uVar15 <= (iVar10 + iVar5) - 3U) {
          uVar17 = (*(int *)(param_1 + 0x10) << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + (ulong)(uVar15 + 2))) &
                   *(uint *)((long)param_1 + 0x8c);
          lVar21 = param_1[0xf];
          lVar20 = (ulong)uVar17 * 2;
          *(uint *)(param_1 + 0x10) = uVar17;
          *(undefined2 *)(param_1[0xe] + (*(uint *)(param_1 + 0xb) & uVar16) * 2) =
               *(undefined2 *)(lVar21 + lVar20);
          *(short *)(lVar21 + lVar20) = (short)uVar16;
        }
        *(int *)(param_1 + 0x17) = iVar19;
        iVar19 = iVar19 + -1;
        uVar16 = (ulong)(uVar15 + 1);
      } while (iVar19 != -1);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(uint *)((long)param_1 + 0xac) = uVar15 + 1;
      if (iVar8 != iVar7 + -1) goto LAB_00e299c0;
      uVar18 = param_1[0x13];
      if ((long)uVar18 < 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = param_1[0xc] + (uVar18 & 0xffffffff);
      }
      _tr_flush_block(param_1,lVar21,uVar16 - uVar18,0);
      lVar20 = *param_1;
      lVar21 = *(long *)(lVar20 + 0x38);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      _tr_flush_bits(lVar21);
      uVar15 = *(uint *)(lVar20 + 0x20);
      if (*(uint *)(lVar21 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
        uVar15 = *(uint *)(lVar21 + 0x28);
      }
      uVar16 = (ulong)uVar15;
      if (uVar15 == 0) {
LAB_00e29d18:
        iVar9 = *(int *)(*param_1 + 0x20);
      }
      else {
        memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar21 + 0x20),uVar16);
        lVar2 = *(long *)(lVar21 + 0x20);
        lVar3 = *(long *)(lVar21 + 0x28);
        *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar16;
        lVar3 = lVar3 - uVar16;
        *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar16;
        *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar15;
        *(ulong *)(lVar21 + 0x20) = lVar2 + uVar16;
        *(long *)(lVar21 + 0x28) = lVar3;
        if (lVar3 != 0) goto LAB_00e29d18;
        *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar21 + 0x10);
        iVar9 = *(int *)(*param_1 + 0x20);
      }
    }
    else {
LAB_00e299f0:
      uVar15 = *(uint *)((long)param_1 + 0xac);
      uVar4 = (*(int *)(param_1 + 0x10) << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + (ulong)(uVar15 + 2))) & *(uint *)((long)param_1 + 0x8c)
      ;
      lVar21 = param_1[0xf];
      lVar20 = (ulong)uVar4 * 2;
      uVar17 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x10) = uVar4;
      uVar14 = *(ushort *)(lVar21 + lVar20);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x16);
      *(uint *)(param_1 + 0x17) = uVar17;
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar15) * 2) = uVar14;
      *(short *)(lVar21 + lVar20) = (short)uVar15;
      if (uVar14 == 0) goto LAB_00e29a90;
      if ((uVar17 < *(uint *)(param_1 + 0x18)) &&
         (uVar15 - uVar14 <= *(int *)(param_1 + 10) - 0x106U)) {
        uVar15 = FUN_00e29ff8(param_1);
        *(uint *)(param_1 + 0x14) = uVar15;
        if (uVar15 < 6) {
          if (*(int *)(param_1 + 0x19) == 1) {
LAB_00e29c84:
            uVar15 = 2;
            *(undefined4 *)(param_1 + 0x14) = 2;
          }
          else if (uVar15 == 3) {
            if (0x1000 < (uint)(*(int *)((long)param_1 + 0xac) - *(int *)(param_1 + 0x16)))
            goto LAB_00e29c84;
            uVar15 = 3;
          }
        }
      }
      else {
        uVar15 = 2;
      }
      uVar17 = *(uint *)(param_1 + 0x17);
      if (2 < uVar17) goto LAB_00e29a98;
LAB_00e29bb8:
      if (*(int *)(param_1 + 0x15) == 0) {
        *(undefined4 *)(param_1 + 0x15) = 1;
        *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
        goto LAB_00e299c0;
      }
      uVar15 = *(uint *)((long)param_1 + 0x170c);
      bVar12 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
      *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar15 * 2) = 0;
      *(byte *)(param_1[0x2e0] + (ulong)uVar15) = bVar12;
      iVar9 = *(int *)(param_1 + 0x2e1);
      iVar10 = *(int *)((long)param_1 + 0x170c);
      *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar12 * 4 + 0xd4) + 1;
      if (iVar10 == iVar9 + -1) {
        uVar16 = param_1[0x13];
        if ((long)uVar16 < 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = param_1[0xc] + (uVar16 & 0xffffffff);
        }
        _tr_flush_block(param_1,lVar21,*(uint *)((long)param_1 + 0xac) - uVar16,0);
        lVar20 = *param_1;
        lVar21 = *(long *)(lVar20 + 0x38);
        param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
        _tr_flush_bits(lVar21);
        uVar15 = *(uint *)(lVar20 + 0x20);
        if (*(uint *)(lVar21 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
          uVar15 = *(uint *)(lVar21 + 0x28);
        }
        uVar16 = (ulong)uVar15;
        if (uVar15 != 0) {
          memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar21 + 0x20),uVar16);
          lVar2 = *(long *)(lVar21 + 0x20);
          lVar3 = *(long *)(lVar21 + 0x28);
          *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar16;
          lVar3 = lVar3 - uVar16;
          *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar16;
          *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar15;
          *(ulong *)(lVar21 + 0x20) = lVar2 + uVar16;
          *(long *)(lVar21 + 0x28) = lVar3;
          if (lVar3 == 0) {
            *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar21 + 0x10);
          }
        }
      }
      iVar9 = *(int *)(*param_1 + 0x20);
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
    }
    if (iVar9 == 0) {
      return 0;
    }
  } while( true );
}


