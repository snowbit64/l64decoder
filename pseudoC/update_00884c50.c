// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00884c50
// Size: 76 bytes
// Signature: undefined __cdecl update(float param_1)


/* SteeringTargetPosition::update(float) */

void SteeringTargetPosition::update(float param_1)

{
  long in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)*(undefined8 *)(in_x0 + 8) - (float)*(undefined8 *)(in_x0 + 0x18);
  fVar2 = (float)((ulong)*(undefined8 *)(in_x0 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)(in_x0 + 0x18) >> 0x20);
  *(ulong *)(in_x0 + 0x10) = CONCAT44(fVar2,fVar1);
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0001 <= fVar3) {
    *(ulong *)(in_x0 + 0x10) = CONCAT44(fVar2 * (1.0 / fVar3),fVar1 * (1.0 / fVar3));
  }
  *(float *)(in_x0 + 0x28) = fVar3;
  return;
}


