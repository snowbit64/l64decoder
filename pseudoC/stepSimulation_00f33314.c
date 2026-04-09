// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stepSimulation
// Entry Point: 00f33314
// Size: 588 bytes
// Signature: undefined __thiscall stepSimulation(btDiscreteDynamicsWorld * this, float param_1, int param_2, float param_3)


/* btDiscreteDynamicsWorld::stepSimulation(float, int, float) */

uint __thiscall
btDiscreteDynamicsWorld::stepSimulation
          (btDiscreteDynamicsWorld *this,float param_1,int param_2,float param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  timeval local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  CProfileManager::Reset();
  CProfileManager::Start_Profile("stepSimulation");
  if (param_2 == 0) {
    *(undefined4 *)(this + 0x174) = 0;
    fVar9 = param_1;
    if (this[0x1a4] != (btDiscreteDynamicsWorld)0x0) {
      fVar9 = 0.0;
    }
    uVar8 = (uint)(1.192093e-07 <= ABS(param_1));
    *(float *)(this + 0x170) = fVar9;
    param_3 = param_1;
    param_2 = uVar8;
  }
  else {
    *(float *)(this + 0x174) = param_3;
    fVar9 = *(float *)(this + 0x170) + param_1;
    *(float *)(this + 0x170) = fVar9;
    if (param_3 <= fVar9) {
      uVar8 = (uint)(fVar9 / param_3);
      uVar10 = NEON_fmsub((int)(fVar9 / param_3),param_3,fVar9);
      *(undefined4 *)(this + 0x170) = uVar10;
    }
    else {
      uVar8 = 0;
    }
  }
  lVar4 = (**(code **)(*(long *)this + 0x28))(this);
  if (lVar4 != 0) {
    plVar5 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar3 = (**(code **)(*plVar5 + 0x70))();
    gDisableDeactivation = (byte)(uVar3 >> 4) & 1;
  }
  if (uVar8 == 0) {
    (**(code **)(*(long *)this + 0xa0))(this);
  }
  else {
    if ((int)uVar8 <= param_2) {
      param_2 = uVar8;
    }
    (**(code **)(*(long *)this + 0x148))(param_3 * (float)param_2,this);
    (**(code **)(*(long *)this + 0x158))(this);
    if (0 < param_2) {
      do {
        (**(code **)(*(long *)this + 0x140))(param_3,this);
        (**(code **)(*(long *)this + 0xa0))(this);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  uVar6 = (**(code **)(*(long *)this + 0xf0))(this);
  puVar2 = CProfileManager::CurrentNode;
  CProfileManager::FrameCounter = CProfileManager::FrameCounter + 1;
  iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
  if ((iVar7 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    uVar6 = (ulong)uVar3;
    iVar7 = *(int *)(puVar2 + 0x18);
    uVar10 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_58.tv_usec +
                                       (local_58.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar10;
  }
  if (iVar7 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return uVar8;
}


