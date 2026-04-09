// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateSimulationIslands
// Entry Point: 00bb3254
// Size: 720 bytes
// Signature: undefined calculateSimulationIslands(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2World::calculateSimulationIslands() */

void Bt2World::calculateSimulationIslands(void)

{
  uint uVar1;
  uint uVar2;
  long in_x0;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  
  CProfileManager::Start_Profile("calculateSimulationIslands");
                    /* try { // try from 00bb3284 to 00bb328b has its CatchHandler @ 00bb3528 */
  (**(code **)(**(long **)(in_x0 + 0x118) + 0x10))();
  uVar1 = *(uint *)(in_x0 + 0x1ac);
  plVar4 = *(long **)(in_x0 + 0x118);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    lVar6 = *(long *)(in_x0 + 0x1b8);
    do {
      lVar9 = *(long *)(lVar6 + uVar5 * 8);
      lVar7 = *(long *)(lVar9 + 0x308);
      if ((((lVar7 != 0) &&
           (lVar9 = *(long *)(lVar9 + 0x310), lVar9 != 0 && (*(uint *)(lVar7 + 0xe0) & 3) == 0)) &&
          ((*(byte *)(lVar9 + 0xe0) & 3) == 0)) &&
         ((*(int *)(lVar7 + 0xec) != 5 && *(int *)(lVar7 + 0xec) != 2 ||
          ((*(int *)(lVar9 + 0xec) != 2 && (*(int *)(lVar9 + 0xec) != 5)))))) {
        uVar8 = *(uint *)(lVar7 + 0xe4);
        lVar7 = plVar4[3];
        uVar12 = *(uint *)(lVar9 + 0xe4);
        puVar11 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
        uVar2 = *puVar11;
        if (uVar2 != uVar8) {
          do {
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar11 = *(uint *)(lVar7 + uVar10);
            uVar8 = *(uint *)(lVar7 + uVar10);
            puVar11 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
            uVar2 = *puVar11;
          } while (uVar8 != uVar2);
        }
        puVar11 = (uint *)(lVar7 + (long)(int)uVar12 * 8);
        uVar2 = *puVar11;
        if (uVar2 != uVar12) {
          do {
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar11 = *(uint *)(lVar7 + uVar10);
            uVar12 = *(uint *)(lVar7 + uVar10);
            puVar11 = (uint *)(lVar7 + (long)(int)uVar12 * 8);
            uVar2 = *puVar11;
          } while (uVar12 != uVar2);
        }
        if (uVar8 != uVar12) {
          puVar11 = (uint *)(lVar7 + (long)(int)uVar8 * 8);
          lVar7 = lVar7 + (long)(int)uVar12 * 8;
          *puVar11 = uVar12;
          *(uint *)(lVar7 + 4) = *(int *)(lVar7 + 4) + puVar11[1];
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    plVar4 = *(long **)(in_x0 + 0x118);
  }
  uVar1 = *(uint *)(in_x0 + 0x124);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    lVar6 = *(long *)(in_x0 + 0x130);
    do {
      lVar7 = *(long *)(lVar6 + uVar5 * 8);
      if ((((*(char *)(lVar7 + 0x1c) != '\0') &&
           (lVar9 = *(long *)(lVar7 + 0x28), (*(byte *)(lVar9 + 0xe0) & 3) == 0)) &&
          (lVar7 = *(long *)(lVar7 + 0x30), (*(byte *)(lVar7 + 0xe0) & 3) == 0)) &&
         ((*(int *)(lVar9 + 0xec) != 5 && *(int *)(lVar9 + 0xec) != 2 ||
          ((*(int *)(lVar7 + 0xec) != 2 && (*(int *)(lVar7 + 0xec) != 5)))))) {
        uVar8 = *(uint *)(lVar9 + 0xe4);
        lVar9 = plVar4[3];
        uVar12 = *(uint *)(lVar7 + 0xe4);
        puVar11 = (uint *)(lVar9 + (long)(int)uVar8 * 8);
        uVar2 = *puVar11;
        if (uVar2 != uVar8) {
          do {
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar11 = *(uint *)(lVar9 + uVar10);
            uVar8 = *(uint *)(lVar9 + uVar10);
            puVar11 = (uint *)(lVar9 + (long)(int)uVar8 * 8);
            uVar2 = *puVar11;
          } while (uVar8 != uVar2);
        }
        puVar11 = (uint *)(lVar9 + (long)(int)uVar12 * 8);
        uVar2 = *puVar11;
        if (uVar2 != uVar12) {
          do {
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar11 = *(uint *)(lVar9 + uVar10);
            uVar12 = *(uint *)(lVar9 + uVar10);
            puVar11 = (uint *)(lVar9 + (long)(int)uVar12 * 8);
            uVar2 = *puVar11;
          } while (uVar12 != uVar2);
        }
        if (uVar8 != uVar12) {
          puVar11 = (uint *)(lVar9 + (long)(int)uVar8 * 8);
          lVar9 = lVar9 + (long)(int)uVar12 * 8;
          *puVar11 = uVar12;
          *(uint *)(lVar9 + 4) = *(int *)(lVar9 + 4) + puVar11[1];
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  uVar1 = *(uint *)(in_x0 + 0x1cc);
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      plVar3 = *(long **)(*(long *)(in_x0 + 0x1d8) + lVar6);
                    /* try { // try from 00bb34e4 to 00bb34eb has its CatchHandler @ 00bb352c */
      (**(code **)(*plVar3 + 8))(plVar3,plVar4);
      plVar4 = *(long **)(in_x0 + 0x118);
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar1 * 8 - lVar6 != 0);
  }
                    /* try { // try from 00bb3504 to 00bb350f has its CatchHandler @ 00bb3528 */
  (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* try { // try from 00bb3510 to 00bb3513 has its CatchHandler @ 00bb3524 */
  CProfileManager::Stop_Profile();
  return;
}


