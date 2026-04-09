// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clampAngle
// Entry Point: 0088050c
// Size: 92 bytes
// Signature: undefined __cdecl clampAngle(float param_1)


/* AnimalSteering::clampAngle(float) */

void AnimalSteering::clampAngle(float param_1)

{
  if (param_1 < 0.0) {
    do {
      param_1 = param_1 + 6.283185;
    } while (param_1 < 0.0);
  }
  for (; 6.283185 < param_1; param_1 = param_1 + -6.283185) {
  }
  return;
}


