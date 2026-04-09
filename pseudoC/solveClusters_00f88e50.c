// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveClusters
// Entry Point: 00f88e50
// Size: 668 bytes
// Signature: undefined __cdecl solveClusters(btAlignedObjectArray * param_1)


/* btSoftBody::solveClusters(btAlignedObjectArray<btSoftBody*> const&) */

void btSoftBody::solveClusters(btAlignedObjectArray *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  uVar4 = *(uint *)(param_1 + 4);
  uVar10 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (uVar4 == 1) {
    uVar6 = 0;
    iVar9 = 0;
  }
  else {
    uVar6 = uVar10 & 0xfffffffe;
    iVar9 = 0;
    iVar12 = 0;
    plVar3 = (long *)(lVar5 + 8);
    uVar11 = uVar6;
    do {
      plVar1 = plVar3 + -1;
      lVar7 = *plVar3;
      plVar3 = plVar3 + 2;
      if (iVar9 <= *(int *)(*plVar1 + 0x1d8)) {
        iVar9 = *(int *)(*plVar1 + 0x1d8);
      }
      if (iVar12 <= *(int *)(lVar7 + 0x1d8)) {
        iVar12 = *(int *)(lVar7 + 0x1d8);
      }
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
    if (iVar9 <= iVar12) {
      iVar9 = iVar12;
    }
    if (uVar6 == uVar10) goto LAB_00f88efc;
  }
  lVar7 = uVar10 - uVar6;
  plVar3 = (long *)(lVar5 + uVar6 * 8);
  do {
    if (iVar9 <= *(int *)(*plVar3 + 0x1d8)) {
      iVar9 = *(int *)(*plVar3 + 0x1d8);
    }
    lVar7 = lVar7 + -1;
    plVar3 = plVar3 + 1;
  } while (lVar7 != 0);
LAB_00f88efc:
  uVar11 = 0;
  while( true ) {
    lVar5 = *(long *)(lVar5 + uVar11 * 8);
    if (0 < *(int *)(lVar5 + 0x454)) {
      lVar7 = 0;
      do {
        plVar3 = *(long **)(*(long *)(lVar5 + 0x460) + lVar7 * 8);
        (**(code **)(*plVar3 + 0x10))(*(undefined4 *)(lVar5 + 0x240),plVar3,iVar9);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar5 + 0x454));
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar10) break;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (0 < iVar9) {
    iVar12 = 0;
    do {
      uVar11 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + uVar11 * 8);
        uVar4 = *(uint *)(lVar5 + 0x454);
        if (0 < (int)uVar4) {
          lVar7 = 0;
          do {
            (**(code **)(**(long **)(*(long *)(lVar5 + 0x460) + lVar7) + 0x18))
                      (*(undefined4 *)(lVar5 + 0x240),0x3f800000);
            lVar7 = lVar7 + 8;
          } while ((ulong)uVar4 * 8 - lVar7 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar9);
  }
  uVar11 = 0;
  do {
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + uVar11 * 8);
    if (0 < *(int *)(lVar5 + 0x454)) {
      uVar6 = 0;
      do {
        uVar13 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
        (**(code **)(**(long **)(*(long *)(lVar5 + 0x460) + uVar13) + 0x20))
                  (*(undefined4 *)(lVar5 + 0x240));
        if (*(char *)(*(long *)(*(long *)(lVar5 + 0x460) + uVar13) + 0xb4) == '\0') {
          uVar4 = *(uint *)(lVar5 + 0x454);
        }
        else {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar4 = *(uint *)(lVar5 + 0x454);
          iVar12 = (int)uVar6;
          uVar6 = (ulong)(iVar12 - 1);
          if (0 < (int)uVar4) {
            lVar7 = *(long *)(lVar5 + 0x460);
            uVar13 = 0;
            do {
              if (*(long *)(lVar7 + uVar13 * 8) == *(long *)(lVar7 + (long)iVar12 * 8)) {
                if ((int)uVar13 < (int)uVar4) {
                  uVar4 = uVar4 - 1;
                  uVar8 = *(undefined8 *)(lVar7 + uVar13 * 8);
                  *(uint *)(lVar5 + 0x454) = uVar4;
                  *(undefined8 *)(lVar7 + uVar13 * 8) = *(undefined8 *)(lVar7 + (ulong)uVar4 * 8);
                  *(undefined8 *)(*(long *)(lVar5 + 0x460) + (ulong)uVar4 * 8) = uVar8;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar4 != uVar13);
          }
        }
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar2;
      } while ((int)uVar2 < (int)uVar4);
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar10) {
      return;
    }
  } while( true );
}


