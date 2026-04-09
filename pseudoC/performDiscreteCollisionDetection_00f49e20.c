// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performDiscreteCollisionDetection
// Entry Point: 00f49e20
// Size: 456 bytes
// Signature: undefined performDiscreteCollisionDetection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionWorld::performDiscreteCollisionDetection() */

void btCollisionWorld::performDiscreteCollisionDetection(void)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long *in_x0;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  timeval local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  CProfileManager::Start_Profile("performDiscreteCollisionDetection");
  (**(code **)(*in_x0 + 0x10))();
  (**(code **)(*in_x0 + 0x18))();
  plVar7 = (long *)in_x0[5];
  uVar4 = CProfileManager::Start_Profile("dispatchAllCollisionPairs");
  if (plVar7 != (long *)0x0) {
    uVar5 = (**(code **)(*(long *)in_x0[0xc] + 0x48))();
    uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7,uVar5,in_x0 + 6,in_x0[5]);
  }
  puVar2 = CProfileManager::CurrentNode;
  iVar6 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar6;
  if ((iVar6 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar4 = (ulong)uVar3;
    iVar6 = *(int *)(puVar2 + 0x18);
    uVar8 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar8;
  }
  if (iVar6 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  puVar2 = CProfileManager::CurrentNode;
  iVar6 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar6;
  if ((iVar6 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar4 = (ulong)uVar3;
    iVar6 = *(int *)(puVar2 + 0x18);
    uVar8 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar8;
  }
  if (iVar6 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


