// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateMoveCommand
// Entry Point: 0070c44c
// Size: 1136 bytes
// Signature: undefined __thiscall updateMoveCommand(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::updateMoveCommand(float) */

void __thiscall
AnimalLocomotionSystem::updateMoveCommand(AnimalLocomotionSystem *this,float param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (3 < *(uint *)(this + 0x34)) goto LAB_0070c87c;
  switch(*(uint *)(this + 0x34)) {
  case 0:
    fVar8 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar8;
    if (fVar8 <= 0.0) {
      AnimalAnimationSystem::setState
                ((AnimalAnimationSystem *)(this + 0x78),0,*(uint *)(this + 0x408),false,0.0);
      puVar6 = *(undefined4 **)(this + 0x3b8);
      *(undefined4 *)(this + 0x428) = 2;
      *(undefined4 *)(this + 0x34) = 1;
      uVar9 = puVar6[2];
      *(undefined4 *)(this + 0x42c) = *puVar6;
      *(undefined4 *)(this + 0x430) = uVar9;
      fVar8 = (float)puVar6[5];
      fVar10 = (float)puVar6[3];
      fVar12 = (float)NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
      fVar11 = 1.0;
      if (1e-06 < fVar12) {
        fVar11 = 1.0 / SQRT(fVar12);
      }
      *(undefined8 *)(this + 0x444) = 0;
      this[0x4a5] = (AnimalLocomotionSystem)0x1;
      *(float *)(this + 0x434) = fVar10 * fVar11;
      *(float *)(this + 0x438) = fVar8 * fVar11;
      *(ulong *)(this + 0x43c) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x434) >> 0x20) * 0.0001,
                    (float)*(undefined8 *)(this + 0x434) * 0.0001);
      uVar9 = AnimalAnimationSystem::getActiveAnimationSpeed();
      *(undefined4 *)(this + 0x4a0) = uVar9;
      *(undefined8 *)(this + 0x454) = *(undefined8 *)(this + 0x42c);
      goto LAB_0070c87c;
    }
    sincosf(*(float *)(this + 100) * (1.0 - fVar8 / *(float *)(this + 0x30)),&fStack_54,&local_58);
    fVar8 = *(float *)(this + 0x60);
    fStack_4c = fStack_54;
    local_50 = local_58;
    break;
  case 1:
    pfVar7 = *(float **)(this + 0x3b8);
    fVar8 = *pfVar7 - pfVar7[6];
    fVar10 = pfVar7[2] - pfVar7[8];
    fVar8 = (float)NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
    if (0.04 <= fVar8) {
      movementUpdate(this,param_1);
      if ((*(float *)(this + 0x49c) < *(float *)(*(long *)(this + 0x3b8) + 0x4c) * 0.4) &&
         (*(int *)(this + 0x428) != 3)) {
        fVar10 = (float)AnimalAnimationSystem::setState
                                  ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
        *(undefined2 *)(this + 0x4a4) = 0;
        fVar8 = fVar10 * 0.5;
        if (*(float *)(this + 0x488) <= 4.0) {
          fVar8 = fVar10;
        }
        *(undefined4 *)(this + 0x428) = 3;
        fVar10 = -1.0 / (fVar8 * 0.001);
        *(float *)(this + 0x484) = fVar8 * 0.001;
        *(ulong *)(this + 0x47c) =
             CONCAT44((float)((ulong)*(undefined8 *)(this + 0x43c) >> 0x20) * fVar10,
                      (float)*(undefined8 *)(this + 0x43c) * fVar10);
      }
    }
    else if (this[0x20] == (AnimalLocomotionSystem)0x0) {
      *(undefined2 *)(this + 0x24) = 0x100;
    }
    else {
      local_48 = CONCAT44(pfVar7[1] + (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20),
                          *pfVar7 + (float)*(undefined8 *)(this + 0x14));
      local_40 = pfVar7[2] + *(float *)(this + 0x1c);
      rotateToTarget(this,(Vector3 *)&local_48,true);
      *(undefined4 *)(this + 0x34) = 2;
    }
    goto LAB_0070c87c;
  case 2:
    fVar8 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar8;
    if (fVar8 <= 0.0) {
      *(undefined2 *)(this + 0x24) = 0x100;
LAB_0070c5f8:
      uVar4 = 0xb;
      goto LAB_0070c600;
    }
    sincosf(*(float *)(this + 100) * (1.0 - fVar8 / *(float *)(this + 0x30)),&fStack_4c,&local_50);
    fVar8 = *(float *)(this + 0x60);
    break;
  case 3:
    iVar1 = *(int *)(this + 0x404);
    *(int *)(this + 0x404) = iVar1 + 1;
    if (3 < iVar1) {
      *(undefined2 *)(this + 0x24) = 0;
      goto LAB_0070c5f8;
    }
    puVar6 = *(undefined4 **)(this + 0x3b8);
    *(undefined4 *)(this + 0x428) = 2;
    uVar9 = puVar6[2];
    *(undefined4 *)(this + 0x42c) = *puVar6;
    *(undefined4 *)(this + 0x430) = uVar9;
    fVar8 = (float)puVar6[5];
    fVar10 = (float)puVar6[3];
    fVar12 = (float)NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
    fVar11 = 1.0;
    if (1e-06 < fVar12) {
      fVar11 = 1.0 / SQRT(fVar12);
    }
    *(undefined8 *)(this + 0x444) = 0;
    *(float *)(this + 0x434) = fVar10 * fVar11;
    *(float *)(this + 0x438) = fVar8 * fVar11;
    this[0x4a5] = (AnimalLocomotionSystem)0x1;
    *(ulong *)(this + 0x43c) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x434) >> 0x20) * 0.0001,
                  (float)*(undefined8 *)(this + 0x434) * 0.0001);
    uVar9 = AnimalAnimationSystem::getActiveAnimationSpeed();
    pfVar7 = *(float **)(this + 0x3b8);
    *(undefined8 *)(this + 0x454) = *(undefined8 *)(this + 0x42c);
    *(undefined4 *)(this + 0x4a0) = uVar9;
    fVar8 = *pfVar7 - *(float *)(this + 8);
    uVar9 = NEON_fmadd(pfVar7[1] - *(float *)(this + 0xc),pfVar7[1] - *(float *)(this + 0xc),
                       fVar8 * fVar8);
    fVar8 = (float)NEON_fmadd(pfVar7[2] - *(float *)(this + 0x10),
                              pfVar7[2] - *(float *)(this + 0x10),uVar9);
    if (fVar8 < 9.0) {
      rotateToTarget(this,(Vector3 *)(this + 8),false);
      *(undefined4 *)(this + 0x34) = 0;
      goto LAB_0070c87c;
    }
    uVar3 = rotateToFreeDirection(this,false,(bool *)&local_48);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(this + 0x34) = 0;
      goto LAB_0070c87c;
    }
    uVar4 = 0;
    *(undefined4 *)(this + 0x34) = 1;
LAB_0070c600:
    AnimalAnimationSystem::setState
              ((AnimalAnimationSystem *)(this + 0x78),uVar4,0xffffffff,false,0.0);
    goto LAB_0070c87c;
  }
  lVar5 = *(long *)(this + 0x3b8);
  uVar9 = NEON_fmadd(*(undefined4 *)(this + 0x58),local_50,fStack_4c * -fVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0xc) = uVar9;
  uVar9 = NEON_fmadd(*(undefined4 *)(this + 0x58),fStack_4c,local_50 * *(float *)(this + 0x60));
  *(undefined4 *)(lVar5 + 0x14) = uVar9;
LAB_0070c87c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


