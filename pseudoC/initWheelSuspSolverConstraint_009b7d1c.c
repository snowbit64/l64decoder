// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWheelSuspSolverConstraint
// Entry Point: 009b7d1c
// Size: 480 bytes
// Signature: undefined __thiscall initWheelSuspSolverConstraint(Bt2RaycastVehicle * this, SuspSolverConstraintInfo * param_1, btVector3 * param_2, btVector3 * param_3, float param_4, Bt2WheelInfo * param_5, btRigidBody * param_6, btRigidBody * param_7, btSolverBody * param_8, btSolverBody * param_9, btContactSolverInfo * param_10)


/* Bt2RaycastVehicle::initWheelSuspSolverConstraint(Bt2RaycastVehicle::SuspSolverConstraintInfo&,
   btVector3 const&, btVector3 const&, float, Bt2WheelInfo const&, btRigidBody*, btRigidBody*,
   btSolverBody*, btSolverBody*, btContactSolverInfo const&) */

void __thiscall
Bt2RaycastVehicle::initWheelSuspSolverConstraint
          (Bt2RaycastVehicle *this,SuspSolverConstraintInfo *param_1,btVector3 *param_2,
          btVector3 *param_3,float param_4,Bt2WheelInfo *param_5,btRigidBody *param_6,
          btRigidBody *param_7,btSolverBody *param_8,btSolverBody *param_9,
          btContactSolverInfo *param_10)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(param_10 + 0xc);
  initWheelSuspSolverConstraintBase
            (this,param_1,param_2,(btVector3 *)(param_5 + 0x10),(btVector3 *)param_5,param_3,param_6
             ,param_7,param_8,param_9,&fStack_4c,&local_50,&fStack_54,&local_58,&fStack_5c,&local_60
            );
  fStack_5c = fStack_5c - local_60;
  if (fStack_5c <= 0.0) {
    fVar5 = *(float *)(param_5 + 0xfc);
    fVar2 = *(float *)(param_5 + 0xf4);
    if (fVar5 <= fStack_5c) goto LAB_009b7dec;
    fVar9 = *(float *)(param_5 + 0xf8);
  }
  else {
    fVar5 = *(float *)(param_5 + 0xf0);
    fVar2 = *(float *)(param_5 + 0xe8);
    if (fStack_5c <= fVar5) goto LAB_009b7dec;
    fVar9 = *(float *)(param_5 + 0xec);
  }
  fVar2 = (float)NEON_fmadd(fVar2,fVar5,(fStack_5c - fVar5) * fVar9);
  fVar2 = fVar2 / fStack_5c;
LAB_009b7dec:
  fVar9 = *(float *)(param_5 + 0xd4);
  fVar6 = *(float *)(param_5 + 0xd8);
  fVar3 = *(float *)(param_5 + 0xe4);
  fVar5 = (param_4 - fVar9) + fVar6;
  if ((0.001 < fVar6) && (fVar5 < fVar6 * 0.07)) {
    fVar4 = fVar5;
    if (fVar5 < 0.0) {
      fVar4 = 0.0;
    }
    fVar6 = 2.0 - fVar4 / (fVar6 * 0.07);
    fVar3 = fVar3 * fVar6;
    fVar2 = fVar2 * SQRT(fVar6);
  }
  fVar2 = (float)NEON_fmadd(fVar8,fVar3,fVar2);
  fVar4 = 1.0 / (fVar8 * fVar2);
  fVar7 = 1.0 / (fStack_4c + local_50 + fVar4);
  *(float *)(param_1 + 0x50) = fVar7;
  fVar2 = 0.0;
  fVar6 = 0.0;
  *(float *)(param_1 + 0x58) = fVar4 * fVar7;
  *(float *)(param_1 + 0x54) =
       (param_4 - fVar9) * fVar8 * fVar3 * fVar4 * fVar7 - (fStack_54 - local_58) * fVar7;
  if (fVar5 < 0.04) {
    fVar2 = 1.0 / (fStack_4c + local_50);
    fVar6 = fVar2 * ((fVar5 * *(float *)(param_10 + 0x24)) / fVar8);
  }
  *(float *)(param_1 + 100) = fVar2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 0x6c) = fVar6;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


