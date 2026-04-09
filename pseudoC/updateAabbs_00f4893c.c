// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAabbs
// Entry Point: 00f4893c
// Size: 312 bytes
// Signature: undefined updateAabbs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionWorld::updateAabbs() */

void btCollisionWorld::updateAabbs(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  btCollisionWorld *in_x0;
  ulong uVar6;
  btCollisionObject *pbVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  timeval local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = CProfileManager::Start_Profile("updateAabbs");
  iVar8 = *(int *)(in_x0 + 0xc);
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      pbVar7 = *(btCollisionObject **)(*(long *)(in_x0 + 0x18) + lVar9 * 8);
      if ((in_x0[0x70] != (btCollisionWorld)0x0) ||
         (iVar2 = *(int *)(pbVar7 + 0xec), iVar2 != 2 && iVar2 != 5)) {
        uVar6 = updateSingleAabb(in_x0,pbVar7);
        iVar8 = *(int *)(in_x0 + 0xc);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  puVar4 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar8 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar8;
  if (iVar8 == 0 && *piVar1 != 0) {
    uVar5 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar6 = (ulong)uVar5;
    iVar8 = *(int *)(puVar4 + 0x18);
    uVar10 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_48.tv_usec +
                                       (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar4 + 0xc));
    *(undefined4 *)(puVar4 + 0xc) = uVar10;
  }
  if (iVar8 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


