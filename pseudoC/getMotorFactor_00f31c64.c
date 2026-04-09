// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMotorFactor
// Entry Point: 00f31c64
// Size: 152 bytes
// Signature: undefined __cdecl getMotorFactor(float param_1, float param_2, float param_3, float param_4, float param_5)


/* btTypedConstraint::getMotorFactor(float, float, float, float, float) */

float btTypedConstraint::getMotorFactor
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if ((param_2 <= param_3) && (fVar1 = 0.0, param_2 != param_3)) {
    fVar2 = param_4 / param_5;
    if (fVar2 < 0.0) {
      if ((param_2 <= param_1) && (param_1 < param_2 - fVar2)) {
        return (param_2 - param_1) / fVar2;
      }
      fVar1 = 0.0;
      if (param_2 <= param_1) {
        fVar1 = 1.0;
      }
      return fVar1;
    }
    if (0.0 < fVar2) {
      if ((param_1 <= param_3) && (param_3 - fVar2 < param_1)) {
        return (param_3 - param_1) / fVar2;
      }
      fVar1 = 0.0;
      if (param_1 <= param_3) {
        fVar1 = 1.0;
      }
      return fVar1;
    }
  }
  return fVar1;
}


