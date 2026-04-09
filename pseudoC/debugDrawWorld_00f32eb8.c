// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawWorld
// Entry Point: 00f32eb8
// Size: 588 bytes
// Signature: undefined debugDrawWorld(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDiscreteDynamicsWorld::debugDrawWorld() */

void btDiscreteDynamicsWorld::debugDrawWorld(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *in_x0;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  timeval local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  CProfileManager::Start_Profile("debugDrawWorld");
  btCollisionWorld::debugDrawWorld();
  lVar5 = (**(code **)(*in_x0 + 0x28))();
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    uVar7 = (**(code **)(*plVar6 + 0x70))();
    if (((uVar7 & 0x1800) != 0) && (iVar3 = (**(code **)(*in_x0 + 0xd0))(), 0 < iVar3)) {
      uVar4 = iVar3 + 1;
      do {
        (**(code **)(*in_x0 + 0xd8))();
        (**(code **)(*in_x0 + 0x150))();
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  lVar5 = (**(code **)(*in_x0 + 0x28))();
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    uVar4 = (**(code **)(*plVar6 + 0x70))();
    if (((uVar4 & 0x4003) != 0) && (lVar5 = (**(code **)(*in_x0 + 0x28))(), lVar5 != 0)) {
      plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
      iVar3 = (**(code **)(*plVar6 + 0x70))();
      if ((iVar3 != 0) && (0 < *(int *)((long)in_x0 + 0x184))) {
        lVar5 = 0;
        do {
          plVar6 = *(long **)(in_x0[0x32] + lVar5 * 8);
          (**(code **)(*plVar6 + 0x18))(plVar6,in_x0[0xd]);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)in_x0 + 0x184));
      }
    }
  }
  uVar7 = (**(code **)(*in_x0 + 0x28))();
  if (uVar7 != 0) {
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    uVar7 = (**(code **)(*plVar6 + 200))();
  }
  puVar2 = CProfileManager::CurrentNode;
  iVar3 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar3;
  if ((iVar3 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar4 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar7 = (ulong)uVar4;
    iVar3 = *(int *)(puVar2 + 0x18);
    uVar8 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar8;
  }
  if (iVar3 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


