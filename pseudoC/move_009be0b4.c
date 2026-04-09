// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move
// Entry Point: 009be0b4
// Size: 392 bytes
// Signature: undefined __thiscall move(Bt2KinematicCharacterController * this, btCollisionWorld * param_1, btVector3 * param_2, uint param_3)


/* Bt2KinematicCharacterController::move(btCollisionWorld*, btVector3 const&, unsigned int) */

void __thiscall
Bt2KinematicCharacterController::move
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1,btVector3 *param_2,
          uint param_3)

{
  Bt2KinematicCharacterController BVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(this + 200);
  uVar7 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x30) = uVar7;
  *(undefined4 *)((btVector3 *)(this + 0x30) + (long)iVar2 * 4) = 0;
  fVar14 = *(float *)(this + 0x30);
  fVar6 = *(float *)(this + 0x34);
  fVar19 = *(float *)(param_2 + (long)iVar2 * 4);
  *(float *)(this + 0x2c) = fVar19;
  uVar17 = NEON_fmadd(fVar14,fVar14,fVar6 * fVar6);
  fVar11 = *(float *)(this + 0x38);
  fVar18 = (float)NEON_fmadd(fVar11,fVar11,uVar17);
  if (1.421085e-14 <= fVar18) {
    *(float *)(this + 0x50) = SQRT(fVar18);
    fVar18 = 1.0 / SQRT(fVar18);
    *(float *)(this + 0x40) = fVar14 * fVar18;
    *(float *)(this + 0x44) = fVar6 * fVar18;
    *(float *)(this + 0x48) = fVar11 * fVar18;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  else {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    if (ABS(fVar19) < 1.192093e-07) goto LAB_009be214;
  }
  *(uint *)(this + 0x54) = param_3 >> 0x10 | param_3 << 0x10;
  preStep(this,param_1);
  BVar1 = this[0xb4];
  this[0xb4] = (Bt2KinematicCharacterController)0x0;
  lVar5 = *(long *)(this + 8);
  this[0xb5] = BVar1;
  uVar9 = *(undefined8 *)(lVar5 + 0x10);
  uVar7 = *(undefined8 *)(lVar5 + 8);
  uVar13 = *(undefined8 *)(lVar5 + 0x20);
  uVar12 = *(undefined8 *)(lVar5 + 0x18);
  uVar16 = *(undefined8 *)(lVar5 + 0x30);
  uVar15 = *(undefined8 *)(lVar5 + 0x28);
  stepUp(this,param_1);
  stepForwardAndStrafe(this,param_1,(btVector3 *)(this + 0x30));
  stepDown(this,param_1);
  lVar5 = *(long *)(this + 8);
  uVar10 = *(undefined8 *)(this + 0x60);
  uVar8 = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(lVar5 + 0x10) = uVar9;
  *(undefined8 *)(lVar5 + 8) = uVar7;
  *(undefined8 *)(lVar5 + 0x20) = uVar13;
  *(undefined8 *)(lVar5 + 0x18) = uVar12;
  *(undefined8 *)(lVar5 + 0x40) = uVar10;
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = uVar16;
  *(undefined8 *)(lVar5 + 0x28) = uVar15;
  *(int *)(lVar5 + 0x148) = *(int *)(lVar5 + 0x148) + 1;
LAB_009be214:
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


