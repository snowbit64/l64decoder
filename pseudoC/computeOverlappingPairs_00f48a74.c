// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeOverlappingPairs
// Entry Point: 00f48a74
// Size: 252 bytes
// Signature: undefined computeOverlappingPairs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionWorld::computeOverlappingPairs() */

void btCollisionWorld::computeOverlappingPairs(void)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long in_x0;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  timeval local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  CProfileManager::Start_Profile("calculateOverlappingPairs");
  uVar5 = (**(code **)(**(long **)(in_x0 + 0x60) + 0x40))
                    (*(long **)(in_x0 + 0x60),*(undefined8 *)(in_x0 + 0x28));
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar6 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar6;
  if (iVar6 == 0 && *piVar1 != 0) {
    uVar4 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar5 = (ulong)uVar4;
    iVar6 = *(int *)(puVar3 + 0x18);
    uVar7 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar7;
  }
  if (iVar6 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


