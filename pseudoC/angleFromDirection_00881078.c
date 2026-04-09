// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: angleFromDirection
// Entry Point: 00881078
// Size: 60 bytes
// Signature: undefined __thiscall angleFromDirection(AnimalSteering * this, Vector2 param_1)


/* AnimalSteering::angleFromDirection(Vector2) */

float __thiscall AnimalSteering::angleFromDirection(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = atan2f(param_1,param_2);
  fVar2 = -fVar1;
  if (0.0 <= param_1) {
    fVar2 = 6.283185 - fVar1;
  }
  return fVar2;
}


