// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWanderCommand
// Entry Point: 0070d01c
// Size: 1000 bytes
// Signature: undefined __thiscall updateWanderCommand(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::updateWanderCommand(float) */

void __thiscall
AnimalLocomotionSystem::updateWanderCommand(AnimalLocomotionSystem *this,float param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float local_54;
  float fStack_50;
  bool local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar6 = *(float *)(this + 0x28) - param_1;
  *(float *)(this + 0x28) = fVar6;
  if (4 < *(uint *)(this + 0x50)) goto LAB_0070d3cc;
  switch(*(uint *)(this + 0x50)) {
  case 0:
    if (0.0 < fVar6) {
      sincosf(*(float *)(this + 100) * (1.0 - fVar6 / *(float *)(this + 0x30)),&fStack_50,&local_54)
      ;
      fVar6 = *(float *)(this + 0x60);
      uVar7 = *(undefined4 *)(this + 0x58);
      lVar4 = *(long *)(this + 0x3b8);
      *(undefined4 *)(lVar4 + 0x10) = 0;
      uVar7 = NEON_fmadd(uVar7,local_54,fStack_50 * -fVar6);
      *(undefined4 *)(lVar4 + 0xc) = uVar7;
      uVar7 = NEON_fmadd(*(undefined4 *)(this + 0x58),fStack_50,local_54 * *(float *)(this + 0x60));
      *(undefined4 *)(lVar4 + 0x14) = uVar7;
      break;
    }
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),0,0xffffffff,false,0.0);
    pfVar5 = *(float **)(this + 0x3b8);
    *(undefined4 *)(this + 0x50) = 1;
    this[0x3fa] = (AnimalLocomotionSystem)0x1;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x428) = 1;
    fVar8 = *pfVar5;
    fVar6 = pfVar5[2];
    *(float *)(this + 0x42c) = fVar8;
    *(float *)(this + 0x430) = fVar6;
    fVar9 = pfVar5[5];
    fVar10 = pfVar5[3];
    fVar13 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
    fVar12 = 1.0;
    if (1e-06 < fVar13) {
      fVar12 = 1.0 / SQRT(fVar13);
    }
    *(float *)(this + 0x434) = fVar10 * fVar12;
    fVar8 = fVar8 + fVar10 * fVar12;
    *(float *)(this + 0x438) = fVar9 * fVar12;
    fVar6 = fVar6 + fVar9 * fVar12;
    uVar11 = *(undefined8 *)(this + 0x434);
    uVar7 = *(undefined4 *)(*(long *)(this + 0x68) + 0xc);
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined2 *)(this + 0x4a5) = 1;
    goto LAB_0070d3a0;
  case 1:
    if (fVar6 <= 0.0) {
      fVar8 = (float)AnimalAnimationSystem::setState
                               ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
      *(float *)(this + 0x28) = fVar8;
      *(undefined2 *)(this + 0x4a4) = 0;
      fVar6 = fVar8 * 0.5;
      if (*(float *)(this + 0x488) <= 4.0) {
        fVar6 = fVar8;
      }
      *(undefined4 *)(this + 0x50) = 3;
      *(undefined4 *)(this + 0x428) = 3;
      fVar8 = -1.0 / (fVar6 * 0.001);
      *(float *)(this + 0x484) = fVar6 * 0.001;
      *(ulong *)(this + 0x47c) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x43c) >> 0x20) * fVar8,
                    (float)*(undefined8 *)(this + 0x43c) * fVar8);
    }
    movementUpdate(this,param_1);
    break;
  case 2:
    iVar1 = *(int *)(this + 0x404);
    *(int *)(this + 0x404) = iVar1 + 1;
    if (3 < iVar1) {
      *(undefined2 *)(this + 0x24) = 0x100;
      AnimalAnimationSystem::setState
                ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
      break;
    }
    local_4c[0] = false;
    uVar3 = rotateToFreeDirection(this,false,local_4c);
    if ((uVar3 & 1) != 0) {
      if ((local_4c[0] == false) || (this[0x3fa] == (AnimalLocomotionSystem)0x0)) {
        *(undefined4 *)(this + 0x50) = 0;
      }
      else {
        uVar7 = MathUtil::getRandomMinMax(1000.0,2000.0);
        *(undefined4 *)(this + 0x28) = uVar7;
        this[0x3fa] = (AnimalLocomotionSystem)0x0;
        *(undefined4 *)(this + 0x50) = 4;
      }
      break;
    }
    this[0x3fa] = (AnimalLocomotionSystem)0x1;
    *(undefined4 *)(this + 0x50) = 1;
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),0,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x428) = 1;
    pfVar5 = *(float **)(this + 0x3b8);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
    fVar8 = *pfVar5;
    fVar6 = pfVar5[2];
    *(float *)(this + 0x42c) = fVar8;
    *(float *)(this + 0x430) = fVar6;
    fVar9 = pfVar5[5];
    fVar10 = pfVar5[3];
    fVar13 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
    fVar12 = 1.0;
    if (1e-06 < fVar13) {
      fVar12 = 1.0 / SQRT(fVar13);
    }
    *(float *)(this + 0x434) = fVar10 * fVar12;
    fVar8 = fVar8 + fVar10 * fVar12;
    *(float *)(this + 0x438) = fVar9 * fVar12;
    fVar6 = fVar6 + fVar9 * fVar12;
    uVar11 = *(undefined8 *)(this + 0x434);
    uVar7 = *(undefined4 *)(*(long *)(this + 0x68) + 0xc);
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined2 *)(this + 0x4a5) = 1;
LAB_0070d3a0:
    *(undefined4 *)(this + 0x48c) = uVar7;
    *(float *)(this + 0x44c) = fVar8;
    *(float *)(this + 0x450) = fVar6;
    *(ulong *)(this + 0x43c) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) * 0.0001,(float)uVar11 * 0.0001);
    *(undefined4 *)(this + 0x3fc) = 0;
    uVar7 = AnimalAnimationSystem::getActiveAnimationSpeed();
    *(undefined4 *)(this + 0x4a0) = uVar7;
    *(undefined8 *)(this + 0x454) = *(undefined8 *)(this + 0x42c);
    break;
  case 3:
    movementUpdate(this,param_1);
    if (*(float *)(this + 0x28) <= 0.0) {
      *(undefined2 *)(this + 0x24) = 0x100;
    }
    break;
  case 4:
    if (fVar6 <= 0.0) {
      *(undefined4 *)(this + 0x50) = 2;
    }
  }
LAB_0070d3cc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


