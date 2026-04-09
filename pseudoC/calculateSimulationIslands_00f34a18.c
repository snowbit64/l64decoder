// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateSimulationIslands
// Entry Point: 00f34a18
// Size: 764 bytes
// Signature: undefined calculateSimulationIslands(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDiscreteDynamicsWorld::calculateSimulationIslands() */

void btDiscreteDynamicsWorld::calculateSimulationIslands(void)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long in_x0;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  timeval local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CProfileManager::Start_Profile("calculateSimulationIslands");
  (**(code **)(**(long **)(in_x0 + 0x118) + 0x10))();
  uVar5 = *(uint *)(in_x0 + 0x1ac);
  plVar6 = *(long **)(in_x0 + 0x118);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    lVar9 = *(long *)(in_x0 + 0x1b8);
    do {
      lVar12 = *(long *)(lVar9 + uVar8 * 8);
      lVar10 = *(long *)(lVar12 + 0x308);
      if (((lVar10 != 0) &&
          (lVar12 = *(long *)(lVar12 + 0x310), lVar12 != 0 && (*(uint *)(lVar10 + 0xe0) & 3) == 0))
         && ((*(byte *)(lVar12 + 0xe0) & 3) == 0)) {
        uVar11 = *(uint *)(lVar10 + 0xe4);
        lVar10 = plVar6[3];
        uVar15 = *(uint *)(lVar12 + 0xe4);
        puVar14 = (uint *)(lVar10 + (long)(int)uVar11 * 8);
        uVar2 = *puVar14;
        if (uVar2 != uVar11) {
          do {
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar14 = *(uint *)(lVar10 + uVar13);
            uVar11 = *(uint *)(lVar10 + uVar13);
            puVar14 = (uint *)(lVar10 + (long)(int)uVar11 * 8);
            uVar2 = *puVar14;
          } while (uVar11 != uVar2);
        }
        puVar14 = (uint *)(lVar10 + (long)(int)uVar15 * 8);
        uVar2 = *puVar14;
        if (uVar2 != uVar15) {
          do {
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar14 = *(uint *)(lVar10 + uVar13);
            uVar15 = *(uint *)(lVar10 + uVar13);
            puVar14 = (uint *)(lVar10 + (long)(int)uVar15 * 8);
            uVar2 = *puVar14;
          } while (uVar15 != uVar2);
        }
        if (uVar11 != uVar15) {
          puVar14 = (uint *)(lVar10 + (long)(int)uVar11 * 8);
          lVar10 = lVar10 + (long)(int)uVar15 * 8;
          *puVar14 = uVar15;
          *(uint *)(lVar10 + 4) = *(int *)(lVar10 + 4) + puVar14[1];
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
    plVar6 = *(long **)(in_x0 + 0x118);
  }
  uVar5 = *(uint *)(in_x0 + 0x124);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    lVar9 = *(long *)(in_x0 + 0x130);
    do {
      lVar10 = *(long *)(lVar9 + uVar8 * 8);
      if (((*(char *)(lVar10 + 0x1c) != '\0') &&
          ((*(byte *)(*(long *)(lVar10 + 0x28) + 0xe0) & 3) == 0)) &&
         ((*(byte *)(*(long *)(lVar10 + 0x30) + 0xe0) & 3) == 0)) {
        uVar11 = *(uint *)(*(long *)(lVar10 + 0x28) + 0xe4);
        lVar12 = plVar6[3];
        uVar15 = *(uint *)(*(long *)(lVar10 + 0x30) + 0xe4);
        puVar14 = (uint *)(lVar12 + (long)(int)uVar11 * 8);
        uVar2 = *puVar14;
        if (uVar2 != uVar11) {
          do {
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar14 = *(uint *)(lVar12 + uVar13);
            uVar11 = *(uint *)(lVar12 + uVar13);
            puVar14 = (uint *)(lVar12 + (long)(int)uVar11 * 8);
            uVar2 = *puVar14;
          } while (uVar11 != uVar2);
        }
        puVar14 = (uint *)(lVar12 + (long)(int)uVar15 * 8);
        uVar2 = *puVar14;
        if (uVar2 != uVar15) {
          do {
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar14 = *(uint *)(lVar12 + uVar13);
            uVar15 = *(uint *)(lVar12 + uVar13);
            puVar14 = (uint *)(lVar12 + (long)(int)uVar15 * 8);
            uVar2 = *puVar14;
          } while (uVar15 != uVar2);
        }
        if (uVar11 != uVar15) {
          puVar14 = (uint *)(lVar12 + (long)(int)uVar11 * 8);
          lVar12 = lVar12 + (long)(int)uVar15 * 8;
          *puVar14 = uVar15;
          *(uint *)(lVar12 + 4) = *(int *)(lVar12 + 4) + puVar14[1];
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  uVar8 = (**(code **)(*plVar6 + 0x18))();
  puVar4 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
  if (iVar7 == 0 && *piVar1 != 0) {
    uVar5 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar8 = (ulong)uVar5;
    iVar7 = *(int *)(puVar4 + 0x18);
    uVar16 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_48.tv_usec +
                                       (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar4 + 0xc));
    *(undefined4 *)(puVar4 + 0xc) = uVar16;
  }
  if (iVar7 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


