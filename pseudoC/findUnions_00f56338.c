// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findUnions
// Entry Point: 00f56338
// Size: 340 bytes
// Signature: undefined __thiscall findUnions(btSimulationIslandManager * this, btDispatcher * param_1, btCollisionWorld * param_2)


/* btSimulationIslandManager::findUnions(btDispatcher*, btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::findUnions
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2)

{
  long **pplVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  
  plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x60) + 0x48))();
  uVar3 = (**(code **)(*plVar4 + 0x48))();
  if (uVar3 != 0) {
    lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (0 < (int)uVar3) {
      uVar6 = 0;
      lVar7 = *(long *)(this + 0x18);
      do {
        pplVar1 = (long **)(lVar5 + uVar6 * 0x20);
        lVar9 = **pplVar1;
        if (((lVar9 != 0) &&
            (lVar11 = *pplVar1[1], (*(byte *)(lVar9 + 0xe0) & 7) == 0 && lVar11 != 0)) &&
           ((*(byte *)(lVar11 + 0xe0) & 7) == 0)) {
          uVar8 = *(uint *)(lVar9 + 0xe4);
          uVar13 = *(uint *)(lVar11 + 0xe4);
          puVar12 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
          uVar2 = *puVar12;
          if (uVar2 != uVar8) {
            do {
              uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
              *puVar12 = *(uint *)(lVar7 + uVar10);
              uVar8 = *(uint *)(lVar7 + uVar10);
              puVar12 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
              uVar2 = *puVar12;
            } while (uVar8 != uVar2);
          }
          puVar12 = (uint *)(lVar7 + (long)(int)uVar13 * 8);
          uVar2 = *puVar12;
          if (uVar2 != uVar13) {
            do {
              uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
              *puVar12 = *(uint *)(lVar7 + uVar10);
              uVar13 = *(uint *)(lVar7 + uVar10);
              puVar12 = (uint *)(lVar7 + (long)(int)uVar13 * 8);
              uVar2 = *puVar12;
            } while (uVar13 != uVar2);
          }
          if (uVar8 != uVar13) {
            puVar12 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
            lVar9 = lVar7 + (long)(int)uVar13 * 8;
            *puVar12 = uVar13;
            *(uint *)(lVar9 + 4) = *(int *)(lVar9 + 4) + puVar12[1];
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
  }
  return;
}


