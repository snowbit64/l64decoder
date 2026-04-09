// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerpUnclamped
// Entry Point: 0086d21c
// Size: 132 bytes
// Signature: undefined __cdecl lerpUnclamped(float param_1, ConditionalAnimationValue * param_2, ConditionalAnimationValue * param_3, ConditionalAnimationValue * param_4)


/* ConditionalAnimationInformation::lerpUnclamped(float, ConditionalAnimationValue const&,
   ConditionalAnimationValue const&, ConditionalAnimationValue&) */

undefined8
ConditionalAnimationInformation::lerpUnclamped
          (float param_1,ConditionalAnimationValue *param_2,ConditionalAnimationValue *param_3,
          ConditionalAnimationValue *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = ConditionalAnimationValue::isFloat();
  if (((uVar1 & 1) == 0) || (uVar1 = ConditionalAnimationValue::isFloat(), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    fVar3 = (float)ConditionalAnimationValue::getFloat();
    fVar4 = (float)ConditionalAnimationValue::getFloat();
    uVar5 = ConditionalAnimationValue::getFloat();
    fVar3 = (float)NEON_fmadd(fVar3 - fVar4,param_1,uVar5);
    ConditionalAnimationValue::setFloat(param_4,fVar3);
    uVar2 = 1;
  }
  return uVar2;
}


