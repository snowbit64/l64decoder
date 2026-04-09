// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVert
// Entry Point: 0098c828
// Size: 420 bytes
// Signature: undefined __thiscall updateVert(PlayerCenteredCollisionHeightmap * this, uint param_1, float param_2, uint param_3)


/* PlayerCenteredCollisionHeightmap::updateVert(unsigned int, float, unsigned int) */

void __thiscall
PlayerCenteredCollisionHeightmap::updateVert
          (PlayerCenteredCollisionHeightmap *this,uint param_1,float param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  Bt2ScenegraphPhysicsContext *this_00;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float fStack_64;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  fVar9 = *(float *)(this + 0x10);
  local_70 = 0;
  local_68 = NEON_fmadd((float)(ulong)param_1,fVar9,fVar9 * (float)*(int *)(this + 0x1c));
  local_60 = NEON_fmadd((float)(ulong)param_3,fVar9,fVar9 * (float)*(int *)(this + 0x20));
  local_78 = 0xbf80000000000000;
  pfVar8 = (float *)(*(long *)(this + 0x28) + (ulong)param_1 * 0xc +
                    (ulong)(*(int *)(this + 8) * param_3) * 0xc);
  fStack_64 = param_2 + 40.0;
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  fVar9 = (float)Bt2ScenegraphPhysicsContext::raycastClip
                           (this_00,(Vector3 *)&local_68,(Vector3 *)&local_78,80.0,
                            *(uint *)(this + 0x14));
  iVar6 = 1;
  *(undefined *)(pfVar8 + 2) = 1;
  *pfVar8 = (param_2 + 40.0) - fVar9;
  pfVar8[1] = *(float *)(this + 0x24);
  uVar7 = *(int *)(this + 0x1c) + param_1 | *(int *)(this + 0x20) + param_3;
  if ((uVar7 & 3) == 0) {
    iVar6 = 4;
  }
  else if ((uVar7 & 1) == 0) {
    iVar6 = 2;
  }
  uVar7 = param_1 - iVar6 & ((int)(param_1 - iVar6) >> 0x1f ^ 0xffffffffU);
  uVar3 = iVar6 + param_1;
  if ((int)*(uint *)this <= (int)(iVar6 + param_1)) {
    uVar3 = *(uint *)this;
  }
  uVar4 = iVar6 + param_3;
  if ((int)*(uint *)(this + 4) <= (int)(iVar6 + param_3)) {
    uVar4 = *(uint *)(this + 4);
  }
  if ((int)uVar7 < (int)uVar3) {
    uVar2 = param_3 - iVar6 & ((int)(param_3 - iVar6) >> 0x1f ^ 0xffffffffU);
    do {
      uVar1 = uVar2;
      if ((int)uVar2 < (int)uVar4) {
        do {
          computeCell(this,uVar7,uVar1);
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


