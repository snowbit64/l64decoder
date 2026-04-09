// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveAngularLimits
// Entry Point: 00f3ec14
// Size: 496 bytes
// Signature: undefined __thiscall solveAngularLimits(btRotationalLimitMotor * this, float param_1, btVector3 * param_2, float param_3, btRigidBody * param_4, btRigidBody * param_5)


/* btRotationalLimitMotor::solveAngularLimits(float, btVector3&, float, btRigidBody*, btRigidBody*)
    */

float __thiscall
btRotationalLimitMotor::solveAngularLimits
          (btRotationalLimitMotor *this,float param_1,btVector3 *param_2,float param_3,
          btRigidBody *param_4,btRigidBody *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((*(int *)(this + 0x38) != 0) || (this[0x2c] != (btRotationalLimitMotor)0x0)) {
    if (*(int *)(this + 0x38) == 0) {
      fVar3 = *(float *)(this + 8);
      pfVar1 = (float *)(this + 0xc);
    }
    else {
      pfVar1 = (float *)(this + 0x10);
      fVar3 = (*(float *)(this + 0x30) * -*(float *)(this + 0x20)) / param_1;
    }
    fVar5 = (float)NEON_fnmadd(*(undefined4 *)param_2,
                               *(float *)(param_4 + 0x18c) - *(float *)(param_5 + 0x18c),
                               -((float)*(undefined8 *)(param_2 + 4) *
                                ((float)*(undefined8 *)(param_4 + 400) -
                                (float)*(undefined8 *)(param_5 + 400))));
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 0x14),
                              fVar5 - (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) *
                                      ((float)((ulong)*(undefined8 *)(param_4 + 400) >> 0x20) -
                                      (float)((ulong)*(undefined8 *)(param_5 + 400) >> 0x20)),fVar3)
    ;
    fVar3 = fVar3 * *(float *)(this + 0x18);
    if ((fVar3 >= 1.192093e-07 || fVar3 == -1.192093e-07) ||
        fVar3 < 1.192093e-07 && fVar3 < -1.192093e-07) {
      fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 0x28),fVar3 * param_3,fVar3 * param_3);
      fVar5 = (float)NEON_fminnm(fVar3,*pfVar1 * param_1);
      fVar2 = *(float *)(this + 0x3c);
      if (0.0 < fVar3) {
        fVar3 = fVar5;
      }
      fVar3 = fVar2 + fVar3;
      fVar5 = 0.0;
      if (-1e+18 <= fVar3 && fVar3 == 1e+18 || -1e+18 <= fVar3 && fVar3 < 1e+18) {
        fVar5 = fVar3;
      }
      *(float *)(this + 0x3c) = fVar5;
      fVar5 = fVar5 - fVar2;
      fVar3 = fVar5 * *(float *)param_2;
      fVar2 = fVar5 * *(float *)(param_2 + 4);
      fVar6 = fVar5 * *(float *)(param_2 + 8);
      uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 0x170),fVar2,*(float *)(param_4 + 0x16c) * fVar3)
      ;
      uVar7 = *(undefined8 *)(param_4 + 0x18c);
      uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 0x174),fVar6,uVar4);
      uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 0x280),uVar4,*(undefined4 *)(param_4 + 0x194));
      *(ulong *)(param_4 + 0x18c) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) +
                    (*(float *)(param_4 + 0x15c) * fVar3 + *(float *)(param_4 + 0x160) * fVar2 +
                    *(float *)(param_4 + 0x164) * fVar6) *
                    (float)((ulong)*(undefined8 *)(param_4 + 0x278) >> 0x20),
                    (float)uVar7 +
                    (*(float *)(param_4 + 0x14c) * fVar3 + *(float *)(param_4 + 0x150) * fVar2 +
                    *(float *)(param_4 + 0x154) * fVar6) * (float)*(undefined8 *)(param_4 + 0x278));
      *(undefined4 *)(param_4 + 0x194) = uVar4;
      uVar4 = NEON_fmadd(*(undefined4 *)(param_5 + 0x174),fVar6,*(float *)(param_5 + 0x170) * fVar2)
      ;
      uVar4 = NEON_fmadd(*(undefined4 *)(param_5 + 0x16c),fVar3,uVar4);
      uVar7 = *(undefined8 *)(param_5 + 0x18c);
      uVar4 = NEON_fmsub(*(undefined4 *)(param_5 + 0x280),uVar4,*(undefined4 *)(param_5 + 0x194));
      *(ulong *)(param_5 + 0x18c) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) +
                    (-(*(float *)(param_5 + 0x160) * fVar2 + *(float *)(param_5 + 0x164) * fVar6) -
                    *(float *)(param_5 + 0x15c) * fVar3) *
                    (float)((ulong)*(undefined8 *)(param_5 + 0x278) >> 0x20),
                    (float)uVar7 +
                    (-(*(float *)(param_5 + 0x150) * fVar2 + *(float *)(param_5 + 0x154) * fVar6) -
                    *(float *)(param_5 + 0x14c) * fVar3) * (float)*(undefined8 *)(param_5 + 0x278));
      *(undefined4 *)(param_5 + 0x194) = uVar4;
      return fVar5;
    }
  }
  return 0.0;
}


