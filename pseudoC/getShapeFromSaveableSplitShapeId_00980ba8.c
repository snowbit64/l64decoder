// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShapeFromSaveableSplitShapeId
// Entry Point: 00980ba8
// Size: 440 bytes
// Signature: undefined __thiscall getShapeFromSaveableSplitShapeId(MeshSplitManager * this, uint param_1, uint param_2, uint param_3)


/* MeshSplitManager::getShapeFromSaveableSplitShapeId(unsigned int, unsigned int, unsigned int) */

long __thiscall
MeshSplitManager::getShapeFromSaveableSplitShapeId
          (MeshSplitManager *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long **pplVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  if (param_1 == 0) {
    return 0;
  }
  Mutex::enterCriticalSection();
  uVar3 = *(ulong *)(this + 0x100);
  if (uVar3 != 0) {
    uVar1 = param_1 - 1;
    uVar4 = (ulong)uVar1;
    uVar15 = NEON_cnt(uVar3,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar3 - 1U & uVar1);
    }
    else {
      uVar8 = uVar4;
      if (uVar3 <= uVar4) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar4 / uVar3;
        }
        uVar8 = uVar4 - uVar8 * uVar3;
      }
    }
    pplVar9 = *(long ***)(*(long *)(this + 0xf8) + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar10 = *pplVar9, plVar10 != (long *)0x0)) {
      do {
        uVar12 = plVar10[1];
        if (uVar12 == uVar4) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            if (param_3 == 0) {
              plVar5 = *(long **)(this + 0x60);
              if (plVar5 != *(long **)(this + 0x68)) goto LAB_00980d38;
            }
            else {
              plVar5 = *(long **)(this + 0x60);
              if (plVar5 != *(long **)(this + 0x68)) {
                iVar7 = 0;
                goto LAB_00980ce4;
              }
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar12 = uVar12 & uVar3 - 1;
          }
          else if (uVar3 <= uVar12) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar12 / uVar3;
            }
            uVar12 = uVar12 - uVar2 * uVar3;
          }
          if (uVar12 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  lVar13 = 0;
  goto LAB_00980c90;
  while( true ) {
    plVar5 = plVar5 + 1;
    lVar13 = 0;
    if (plVar5 == *(long **)(this + 0x68)) break;
LAB_00980d38:
    lVar13 = *plVar5;
    if (((*(int *)(lVar13 + 0x208) == *(int *)((long)plVar10 + 0x14)) &&
        (*(uint *)(lVar13 + 0x20c) == param_2)) && ((*(byte *)(lVar13 + 0x210) >> 6 & 1) == 0))
    break;
  }
  goto LAB_00980c90;
LAB_00980ce4:
  do {
    lVar11 = *plVar5;
    if ((*(int *)(lVar11 + 0x208) == *(int *)((long)plVar10 + 0x14)) &&
       (*(uint *)(lVar11 + 0x20c) == param_2)) {
      if (iVar7 == param_3 - 1) {
        lVar13 = 0;
        if ((*(byte *)(lVar11 + 0x210) & 0x40) != 0) {
          lVar13 = lVar11;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    }
    plVar5 = plVar5 + 1;
    lVar13 = 0;
  } while (plVar5 != *(long **)(this + 0x68));
LAB_00980c90:
                    /* try { // try from 00980c90 to 00980c97 has its CatchHandler @ 00980d60 */
  Mutex::leaveCriticalSection();
  return lVar13;
}


