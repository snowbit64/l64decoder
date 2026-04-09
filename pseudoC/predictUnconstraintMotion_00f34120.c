// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictUnconstraintMotion
// Entry Point: 00f34120
// Size: 340 bytes
// Signature: undefined __thiscall predictUnconstraintMotion(btDiscreteDynamicsWorld * this, float param_1)


/* btDiscreteDynamicsWorld::predictUnconstraintMotion(float) */

void __thiscall
btDiscreteDynamicsWorld::predictUnconstraintMotion(btDiscreteDynamicsWorld *this,float param_1)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  btRigidBody *this_00;
  long lVar7;
  undefined4 uVar8;
  timeval local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = CProfileManager::Start_Profile("predictUnconstraintMotion");
  iVar6 = *(int *)(this + 0x144);
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar7 * 8);
      if (((byte)this_00[0xe0] & 3) == 0) {
        btRigidBody::applyDamping(this_00,param_1);
        uVar5 = btTransformUtil::integrateTransform
                          ((btTransform *)(this_00 + 8),(btVector3 *)(this_00 + 0x17c),
                           (btVector3 *)(this_00 + 0x18c),param_1,(btTransform *)(this_00 + 0x48));
        iVar6 = *(int *)(this + 0x144);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar6 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar6;
  if (iVar6 == 0 && *piVar1 != 0) {
    uVar4 = gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    uVar5 = (ulong)uVar4;
    iVar6 = *(int *)(puVar3 + 0x18);
    uVar8 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_58.tv_usec +
                                      (local_58.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar8;
  }
  if (iVar6 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


