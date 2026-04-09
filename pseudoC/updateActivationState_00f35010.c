// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateActivationState
// Entry Point: 00f35010
// Size: 652 bytes
// Signature: undefined __thiscall updateActivationState(btDiscreteDynamicsWorld * this, float param_1)


/* btDiscreteDynamicsWorld::updateActivationState(float) */

void __thiscall
btDiscreteDynamicsWorld::updateActivationState(btDiscreteDynamicsWorld *this,float param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  timeval local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar9 = CProfileManager::Start_Profile("updateActivationState");
  fVar4 = gDeactivationTime;
  iVar11 = *(int *)(this + 0x144);
  if (0 < iVar11) {
    lVar10 = 0;
    bVar7 = gDisableDeactivation == '\0';
    bVar6 = gDeactivationTime != 0.0;
    do {
      lVar12 = *(long *)(*(long *)(this + 0x150) + lVar10 * 8);
      if (lVar12 == 0) goto LAB_00f350a4;
      uVar8 = *(uint *)(lVar12 + 0xec);
      if (uVar8 == 2 || uVar8 == 4) {
        if (uVar8 == 4) goto LAB_00f350a4;
      }
      else {
        uVar13 = NEON_fmadd(*(undefined4 *)(lVar12 + 0x180),*(undefined4 *)(lVar12 + 0x180),
                            *(float *)(lVar12 + 0x17c) * *(float *)(lVar12 + 0x17c));
        fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar12 + 0x184),*(undefined4 *)(lVar12 + 0x184),
                                   uVar13);
        if (fVar14 < *(float *)(lVar12 + 0x21c) * *(float *)(lVar12 + 0x21c)) {
          uVar13 = NEON_fmadd(*(undefined4 *)(lVar12 + 400),*(undefined4 *)(lVar12 + 400),
                              *(float *)(lVar12 + 0x18c) * *(float *)(lVar12 + 0x18c));
          fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar12 + 0x194),*(undefined4 *)(lVar12 + 0x194)
                                     ,uVar13);
          if (fVar14 < *(float *)(lVar12 + 0x220) * *(float *)(lVar12 + 0x220)) {
            *(float *)(lVar12 + 0xf0) = *(float *)(lVar12 + 0xf0) + param_1;
            goto LAB_00f35150;
          }
        }
        *(undefined4 *)(lVar12 + 0xf0) = 0;
        if ((uVar8 & 0xfffffffe) != 4) {
          uVar8 = 0;
          *(undefined4 *)(lVar12 + 0xec) = 0;
        }
      }
LAB_00f35150:
      uVar2 = uVar8 & 0xfffffffe;
      if (bVar7 && bVar6) {
        if (uVar2 == 2) {
          if ((*(byte *)(lVar12 + 0xe0) & 3) == 0) {
LAB_00f351a4:
            if (uVar8 == 2) {
              *(undefined8 *)(lVar12 + 0x194) = 0;
              *(undefined8 *)(lVar12 + 0x18c) = 0;
              *(undefined8 *)(lVar12 + 0x184) = 0;
              *(int *)(lVar12 + 0x148) = *(int *)(lVar12 + 0x148) + 2;
              *(undefined8 *)(lVar12 + 0x17c) = 0;
              iVar11 = *(int *)(this + 0x144);
            }
          }
          else {
LAB_00f350a0:
            *(undefined4 *)(lVar12 + 0xec) = 2;
          }
        }
        else {
          if (*(float *)(lVar12 + 0xf0) <= fVar4) goto LAB_00f35158;
          if ((*(byte *)(lVar12 + 0xe0) & 3) == 0) {
            if (uVar8 != 1) goto LAB_00f351a4;
            *(undefined4 *)(lVar12 + 0xec) = 3;
          }
          else if (uVar2 != 4) goto LAB_00f350a0;
        }
      }
      else {
LAB_00f35158:
        if (uVar2 != 4) {
          *(undefined4 *)(lVar12 + 0xec) = 1;
        }
      }
LAB_00f350a4:
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar11);
  }
  puVar5 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar11 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar11;
  if (iVar11 == 0 && *piVar1 != 0) {
    uVar8 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    uVar9 = (ulong)uVar8;
    iVar11 = *(int *)(puVar5 + 0x18);
    uVar13 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_48.tv_usec +
                                       (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar5 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar5 + 0xc));
    *(undefined4 *)(puVar5 + 0xc) = uVar13;
  }
  if (iVar11 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


