// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75414
// Entry Point: 00d75414
// Size: 1020 bytes
// Signature: undefined FUN_00d75414(void)


undefined8 FUN_00d75414(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar17 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar4 = *(int *)(lVar17 + 0x4c);
    if (iVar4 == 0) {
      FUN_00d75810(param_1);
      iVar4 = *(int *)(lVar17 + 0x4c);
    }
    *(int *)(lVar17 + 0x4c) = iVar4 + -1;
  }
  if ((*(int *)(lVar17 + 0x28) != -1) && (0 < *(int *)(param_1 + 0x3a))) {
    lVar9 = param_1[0x42];
    lVar18 = 0;
    do {
      puVar12 = *(undefined2 **)(param_2 + lVar18 * 8);
      lVar19 = (long)*(int *)((long)param_1 + lVar18 * 4 + 0x1d4);
      lVar11 = lVar17 + lVar19 * 4;
      lVar10 = param_1[lVar19 + 0x35];
      piVar13 = (int *)(lVar11 + 0x3c);
      lVar20 = (long)*(int *)(lVar10 + 0x14);
      plVar14 = (long *)(lVar17 + lVar20 * 8 + 0x50);
      lVar15 = *plVar14 + (long)*piVar13;
      iVar4 = FUN_00d75930(param_1,lVar15);
      if (iVar4 == 0) {
        *piVar13 = 0;
        iVar4 = *(int *)(param_1 + 0x43);
        *puVar12 = (short)*(undefined4 *)(lVar11 + 0x2c);
      }
      else {
        iVar4 = FUN_00d75930(param_1,lVar15 + 1);
        lVar11 = lVar15 + iVar4 + 2;
        uVar5 = FUN_00d75930(param_1,lVar11);
        if (uVar5 != 0) {
          lVar11 = *plVar14 + 0x14;
          iVar6 = FUN_00d75930(param_1,lVar11);
          while (iVar6 != 0) {
            uVar5 = uVar5 << 1;
            if (uVar5 == 0x8000) {
LAB_00d757c8:
              lVar18 = *param_1;
              *(undefined4 *)(lVar18 + 0x28) = 0x75;
              (**(code **)(lVar18 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar17 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar11 = lVar11 + 1;
            iVar6 = FUN_00d75930(param_1,lVar11);
          }
        }
        if ((int)uVar5 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar20 + 299) & 0x3f)) >> 1)) {
          *piVar13 = 0;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar20 + 0x13b) & 0x3f)) >> 1
                      ) < (int)uVar5) {
          *piVar13 = iVar4 * 4 + 0xc;
        }
        else {
          *piVar13 = iVar4 * 4 + 4;
        }
        if (1 < uVar5) {
          uVar16 = uVar5;
          do {
            iVar6 = FUN_00d75930(param_1,lVar11 + 0xe);
            uVar2 = 0;
            if (iVar6 != 0) {
              uVar2 = (int)uVar16 >> 1;
            }
            uVar5 = uVar2 | uVar5;
            bVar1 = 3 < uVar16;
            uVar16 = (int)uVar16 >> 1;
          } while (bVar1);
        }
        lVar11 = lVar17 + lVar19 * 4;
        uVar16 = ~uVar5;
        if (iVar4 == 0) {
          uVar16 = uVar5 + 1;
        }
        iVar6 = uVar16 + *(int *)(lVar11 + 0x2c);
        *(int *)(lVar11 + 0x2c) = iVar6;
        iVar4 = *(int *)(param_1 + 0x43);
        *puVar12 = (short)iVar6;
      }
      if (iVar4 != 0) {
        iVar4 = 0;
        lVar11 = (long)*(int *)(lVar10 + 0x18);
        plVar14 = (long *)(lVar17 + lVar11 * 8 + 0xd0);
        do {
          lVar15 = *plVar14 + (long)(iVar4 * 3);
          iVar6 = FUN_00d75930(param_1,lVar15);
          if (iVar6 != 0) break;
          lVar15 = lVar15 + 2;
          piVar13 = (int *)(lVar9 + (long)(iVar4 + 1) * 4);
          iVar6 = iVar4;
          while( true ) {
            iVar4 = iVar6 + 1;
            iVar7 = FUN_00d75930(param_1,lVar15 + -1);
            if (iVar7 != 0) break;
            lVar15 = lVar15 + 3;
            piVar13 = piVar13 + 1;
            iVar6 = iVar4;
            if (*(int *)(param_1 + 0x43) <= iVar4) goto LAB_00d757c8;
          }
          iVar7 = FUN_00d75930(param_1,lVar17 + 0x150);
          uVar5 = FUN_00d75930(param_1,lVar15);
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            iVar8 = FUN_00d75930(param_1,lVar15);
            if (iVar8 != 0) {
              uVar5 = uVar5 << 1;
              lVar15 = 0xbd;
              if ((int)(uint)*(byte *)((long)param_1 + lVar11 + 0x14b) <= iVar6) {
                lVar15 = 0xd9;
              }
              lVar15 = *plVar14 + lVar15;
              iVar6 = FUN_00d75930(param_1,lVar15);
              while (iVar6 != 0) {
                uVar5 = uVar5 << 1;
                if (uVar5 == 0x8000) goto LAB_00d757c8;
                lVar15 = lVar15 + 1;
                iVar6 = FUN_00d75930(param_1,lVar15);
              }
            }
            if (1 < uVar5) {
              uVar16 = uVar5;
              do {
                iVar6 = FUN_00d75930(param_1,lVar15 + 0xe);
                uVar2 = 0;
                if (iVar6 != 0) {
                  uVar2 = (int)uVar16 >> 1;
                }
                uVar5 = uVar2 | uVar5;
                bVar1 = 3 < uVar16;
                uVar16 = (int)uVar16 >> 1;
              } while (bVar1);
            }
          }
          iVar6 = *(int *)(param_1 + 0x43);
          uVar3 = ~(ushort)uVar5;
          if (iVar7 == 0) {
            uVar3 = (ushort)uVar5 + 1;
          }
          puVar12[*piVar13] = uVar3;
        } while (iVar4 < iVar6);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x3a));
  }
  return 1;
}


