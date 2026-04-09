// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalSingleStepSimulation
// Entry Point: 00f3529c
// Size: 644 bytes
// Signature: undefined __thiscall internalSingleStepSimulation(btDiscreteDynamicsWorld * this, float param_1)


/* btDiscreteDynamicsWorld::internalSingleStepSimulation(float) */

void __thiscall
btDiscreteDynamicsWorld::internalSingleStepSimulation(btDiscreteDynamicsWorld *this,float param_1)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  timeval local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  CProfileManager::Start_Profile("internalSingleStepSimulation");
  if (*(code **)(this + 0x80) != (code *)0x0) {
    (**(code **)(this + 0x80))(param_1,this);
  }
  (**(code **)(*(long *)this + 0x118))(param_1,this);
  *(float *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = 0;
  uVar5 = (**(code **)(*(long *)this + 0x28))(this);
  *(undefined8 *)(this + 0x48) = uVar5;
  createPredictiveContacts(this,param_1);
  (**(code **)(*(long *)this + 0x58))(this);
  (**(code **)(*(long *)this + 0x128))(this);
  *(float *)(this + 0x9c) = param_1;
  (**(code **)(*(long *)this + 0x130))(this,this + 0x90);
  (**(code **)(*(long *)this + 0x120))(param_1,this);
  CProfileManager::Start_Profile("updateActions");
  if (0 < *(int *)(this + 0x184)) {
    lVar9 = 0;
    do {
      plVar6 = *(long **)(*(long *)(this + 400) + lVar9 * 8);
      (**(code **)(*plVar6 + 0x10))(param_1,plVar6,this);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(this + 0x184));
  }
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar8 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar8;
  if (iVar8 == 0 && *piVar1 != 0) {
    gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    iVar8 = *(int *)(puVar3 + 0x18);
    uVar10 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_58.tv_usec +
                                       (local_58.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar10;
  }
  if (iVar8 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  uVar7 = (**(code **)(*(long *)this + 0x138))(param_1,this);
  if (*(code **)(this + 0x78) != (code *)0x0) {
    uVar7 = (**(code **)(this + 0x78))(param_1,this);
  }
  puVar3 = CProfileManager::CurrentNode;
  iVar8 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar8;
  if ((iVar8 == 0) && (*(int *)(puVar3 + 8) != 0)) {
    uVar4 = gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    uVar7 = (ulong)uVar4;
    iVar8 = *(int *)(puVar3 + 0x18);
    uVar10 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_58.tv_usec +
                                       (local_58.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar10;
  }
  if (iVar8 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


