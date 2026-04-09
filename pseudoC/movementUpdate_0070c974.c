// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementUpdate
// Entry Point: 0070c974
// Size: 1104 bytes
// Signature: undefined __thiscall movementUpdate(AnimalLocomotionSystem * this, float param_1)


/* WARNING: Removing unreachable block (ram,0x0070cab8) */
/* WARNING: Removing unreachable block (ram,0x0070cac0) */
/* AnimalLocomotionSystem::movementUpdate(float) */

void __thiscall AnimalLocomotionSystem::movementUpdate(AnimalLocomotionSystem *this,float param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((this[0x4a5] != (AnimalLocomotionSystem)0x0) &&
     (*(float *)(*(long *)(this + 0x68) + 0x18) < *(float *)(this + 0x488))) {
    this[0x4a5] = (AnimalLocomotionSystem)0x0;
  }
  iVar3 = *(int *)(this + 0x428);
  fVar11 = param_1 * 0.001;
  if (iVar3 == 1) {
    movementUpdateWander(this,fVar11);
LAB_0070ca34:
    iVar3 = *(int *)(this + 0x428);
  }
  else {
    if (iVar3 == 2) {
      movementUpdateFollow(param_1);
      goto LAB_0070ca34;
    }
    if (iVar3 == 3) {
      fVar6 = *(float *)(this + 0x484);
      *(float *)(this + 0x484) = fVar6 - fVar11;
      if (fVar6 - fVar11 <= 0.0) {
        *(undefined4 *)(this + 0x428) = 0;
        *(undefined8 *)(this + 0x444) = 0;
        *(undefined8 *)(this + 0x43c) = 0;
        if (this[0x4a4] == (AnimalLocomotionSystem)0x0) {
          if (*(int *)(this + 0x34) == 1) {
            puVar5 = *(undefined8 **)(this + 0x3b8);
            puVar5[3] = *puVar5;
            *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar5 + 1);
          }
        }
        else {
          this[0x4a4] = (AnimalLocomotionSystem)0x0;
          if (*(int *)(this + 0x50) == 1) {
            *(undefined4 *)(this + 0x50) = 2;
          }
          if (*(int *)(this + 0x34) == 1) {
            *(undefined4 *)(this + 0x34) = 3;
          }
        }
      }
      else {
        movementApplyForce(*(undefined4 *)(this + 0x47c),*(undefined4 *)(this + 0x480),this,0);
      }
      goto LAB_0070ca34;
    }
  }
  if (iVar3 == 0) goto LAB_0070cd6c;
  fStack_5c = fVar11 * *(float *)(this + 0x448) + *(float *)(this + 0x440);
  *(float *)(this + 0x448) = fVar11 * *(float *)(this + 0x448);
  local_60 = fVar11 * *(float *)(this + 0x444) + *(float *)(this + 0x43c);
  *(float *)(this + 0x444) = fVar11 * *(float *)(this + 0x444);
  fVar12 = *(float *)(*(long *)(this + 0x68) + 0x14) * *(float *)(this + 0x4a0);
  fVar6 = (float)NEON_fmadd(local_60,local_60,fStack_5c * fStack_5c);
  fVar6 = SQRT(fVar6);
  if ((*(float *)(this + 0x488) < fVar12) && (fVar12 < fVar6)) {
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),1,0xffffffff,false,0.0);
  }
  puVar5 = (undefined8 *)(this + 0x43c);
  if (0.001 < fVar6) {
    uVar1 = *(undefined4 *)(this + 0x434);
    fVar12 = *(float *)(this + 0x438);
    movementClampAngularSpeed(this,(Vector2 *)&local_60,fVar11);
    *puVar5 = CONCAT44(fStack_5c,local_60);
    fVar8 = (float)NEON_fmadd(local_60,local_60,fStack_5c * fStack_5c);
    fVar7 = 1.0;
    if (1e-06 < fVar8) {
      fVar7 = 1.0 / SQRT(fVar8);
    }
    *(float *)(this + 0x434) = fVar7 * local_60;
    *(float *)(this + 0x438) = fVar7 * fStack_5c;
    fVar7 = (float)NEON_fmadd(uVar1,fVar7 * local_60,fVar7 * fStack_5c * fVar12);
    if (fVar7 < 0.0) {
      *(undefined4 *)(this + 0x428) = 0;
      *(undefined4 *)(this + 0x434) = uVar1;
      *(float *)(this + 0x438) = fVar12;
      *puVar5 = 0;
      *(undefined8 *)(this + 0x444) = 0;
      goto LAB_0070cd6c;
    }
  }
  if (((this[0x4a5] == (AnimalLocomotionSystem)0x0) && (*(int *)(this + 0x428) != 3)) &&
     (fVar12 = (float)NEON_fminnm(*(undefined4 *)(this + 0x4a0),0x3f800000),
     fVar6 < *(float *)(*(long *)(this + 0x68) + 0x18) * 0.9 * fVar12)) {
    fVar7 = (float)AnimalAnimationSystem::setState
                             ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x428) = 3;
    fVar12 = fVar7 * 0.5;
    if (*(float *)(this + 0x488) <= 4.0) {
      fVar12 = fVar7;
    }
    *(undefined2 *)(this + 0x4a4) = 1;
    fVar7 = -1.0 / (fVar12 * 0.001);
    *(float *)(this + 0x484) = fVar12 * 0.001;
    *(ulong *)(this + 0x47c) =
         CONCAT44((float)((ulong)*puVar5 >> 0x20) * fVar7,(float)*puVar5 * fVar7);
  }
  fVar12 = *(float *)(*(long *)(this + 0x68) + 0x10);
  if (*(float *)(this + 0x48c) == fVar12) {
    fVar7 = *(float *)(this + 0x440);
LAB_0070cc78:
    fVar8 = *(float *)(this + 0x43c);
    fVar9 = (float)NEON_fmadd(fVar8,fVar8,fVar7 * fVar7);
    if (fVar12 * fVar12 < fVar9) {
      fVar10 = 1.0;
      if (1e-06 < fVar9) {
        fVar10 = 1.0 / SQRT(fVar9);
      }
      fVar8 = fVar12 * fVar8 * fVar10;
      fVar7 = fVar12 * fVar7 * fVar10;
      *(float *)(this + 0x43c) = fVar8;
      *(float *)(this + 0x440) = fVar7;
    }
  }
  else {
    if (*(float *)(this + 0x488) < fVar6) {
      fVar7 = *(float *)(this + 0x440);
      fVar12 = *(float *)(*(long *)(this + 0x68) + 0xc) * *(float *)(this + 0x4a0) * 1.2;
      goto LAB_0070cc78;
    }
    fVar8 = *(float *)(this + 0x43c);
    fVar7 = *(float *)(this + 0x440);
  }
  *(float *)(this + 0x488) = fVar6;
  *(undefined8 *)(this + 0x444) = 0;
  pfVar4 = *(float **)(this + 0x3b8);
  fVar6 = fVar11 * fVar8 + *(float *)(this + 0x42c);
  fVar12 = *(float *)(this + 0x3f4);
  fVar11 = fVar11 * fVar7 + *(float *)(this + 0x430);
  *(float *)(this + 0x42c) = fVar6;
  *(float *)(this + 0x430) = fVar11;
  *pfVar4 = fVar6;
  pfVar4[1] = fVar12;
  pfVar4[2] = fVar11;
  fVar11 = *(float *)(this + 0x434);
  fVar6 = *(float *)(this + 0x438);
  pfVar4[4] = 0.0;
  pfVar4[3] = fVar11;
  pfVar4[5] = fVar6;
LAB_0070cd6c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


