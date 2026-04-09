// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeMotionStates
// Entry Point: 00f33948
// Size: 564 bytes
// Signature: undefined synchronizeMotionStates(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDiscreteDynamicsWorld::synchronizeMotionStates() */

void btDiscreteDynamicsWorld::synchronizeMotionStates(void)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long in_x0;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  timeval local_78 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = CProfileManager::Start_Profile("synchronizeMotionStates");
  if (*(char *)(in_x0 + 0x17a) == '\0') {
    iVar6 = *(int *)(in_x0 + 0x144);
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(in_x0 + 0x150) + lVar7 * 8);
        if (((*(int *)(lVar8 + 0xec) != 2 && *(int *)(lVar8 + 0xec) != 5) &&
            (*(long *)(lVar8 + 0x228) != 0)) && ((*(byte *)(lVar8 + 0xe0) & 3) == 0)) {
          if ((*(char *)(in_x0 + 0x1a4) == '\0') || (*(float *)(in_x0 + 0x174) == 0.0)) {
            fVar9 = *(float *)(lVar8 + 0x114) * *(float *)(in_x0 + 0x170);
          }
          else {
            fVar9 = *(float *)(in_x0 + 0x170) - *(float *)(in_x0 + 0x174);
          }
          btTransformUtil::integrateTransform
                    ((btTransform *)(lVar8 + 0x48),(btVector3 *)(lVar8 + 0x88),
                     (btVector3 *)(lVar8 + 0x98),fVar9,(btTransform *)local_78);
          uVar5 = (**(code **)(**(long **)(lVar8 + 0x228) + 0x18))
                            (*(long **)(lVar8 + 0x228),local_78);
          iVar6 = *(int *)(in_x0 + 0x144);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  }
  else {
    iVar6 = *(int *)(in_x0 + 0xc);
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(in_x0 + 0x18) + lVar7 * 8);
        if ((((*(byte *)(lVar8 + 0x100) >> 1 & 1) != 0) && (lVar8 != 0)) &&
           ((*(long *)(lVar8 + 0x228) != 0 && ((*(byte *)(lVar8 + 0xe0) & 3) == 0)))) {
          if ((*(char *)(in_x0 + 0x1a4) == '\0') || (*(float *)(in_x0 + 0x174) == 0.0)) {
            fVar9 = *(float *)(lVar8 + 0x114) * *(float *)(in_x0 + 0x170);
          }
          else {
            fVar9 = *(float *)(in_x0 + 0x170) - *(float *)(in_x0 + 0x174);
          }
          btTransformUtil::integrateTransform
                    ((btTransform *)(lVar8 + 0x48),(btVector3 *)(lVar8 + 0x88),
                     (btVector3 *)(lVar8 + 0x98),fVar9,(btTransform *)local_78);
          uVar5 = (**(code **)(**(long **)(lVar8 + 0x228) + 0x18))
                            (*(long **)(lVar8 + 0x228),local_78);
          iVar6 = *(int *)(in_x0 + 0xc);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  }
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar6 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar6;
  if (iVar6 == 0 && *piVar1 != 0) {
    uVar4 = gettimeofday(local_78,(__timezone_ptr_t)0x0);
    uVar5 = (ulong)uVar4;
    iVar6 = *(int *)(puVar3 + 0x18);
    uVar10 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_78[0].tv_usec +
                                       (local_78[0].tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar10;
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


