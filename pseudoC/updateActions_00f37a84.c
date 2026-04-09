// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateActions
// Entry Point: 00f37a84
// Size: 304 bytes
// Signature: undefined __thiscall updateActions(btDiscreteDynamicsWorld * this, float param_1)


/* btDiscreteDynamicsWorld::updateActions(float) */

void __thiscall btDiscreteDynamicsWorld::updateActions(btDiscreteDynamicsWorld *this,float param_1)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  timeval local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = CProfileManager::Start_Profile("updateActions");
  if (0 < *(int *)(this + 0x184)) {
    lVar8 = 0;
    do {
      plVar6 = *(long **)(*(long *)(this + 400) + lVar8 * 8);
      uVar5 = (**(code **)(*plVar6 + 0x10))(param_1,plVar6,this);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0x184));
  }
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
  if (iVar7 == 0 && *piVar1 != 0) {
    uVar4 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar5 = (ulong)uVar4;
    iVar7 = *(int *)(puVar3 + 0x18);
    uVar9 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar9;
  }
  if (iVar7 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


