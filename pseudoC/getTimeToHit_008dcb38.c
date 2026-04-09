// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeToHit
// Entry Point: 008dcb38
// Size: 76 bytes
// Signature: undefined __cdecl getTimeToHit(float param_1, float param_2, float param_3, float param_4)


/* Precipitation::getTimeToHit(float, float, float, float) */

float Precipitation::getTimeToHit(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_1 <= param_3) && (param_3 <= param_2)) {
    if (0.0 <= param_4) {
      if (param_4 <= 0.0) {
        return 9999.0;
      }
      fVar1 = param_2 - param_3;
    }
    else {
      fVar1 = param_1 - param_3;
    }
    fVar1 = fVar1 / param_4;
  }
  return fVar1;
}


