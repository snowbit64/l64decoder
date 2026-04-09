// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScale
// Entry Point: 0074d24c
// Size: 208 bytes
// Signature: undefined __cdecl getScale(uchar param_1, float param_2)


/* DebugMarkerManager::getScale(unsigned char, float) */

float DebugMarkerManager::getScale(uchar param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 - 2 < 2) {
    if (param_2 < 10.0) {
      if (param_2 <= 0.1) {
        param_2 = 0.1;
      }
      return param_2 / 10.0;
    }
    if (40.0 < param_2) {
      fVar1 = param_2 / 40.0;
    }
  }
  else if (param_1 == 1) {
    if (10.0 <= param_2) {
      if (param_2 <= 40.0) {
        fVar1 = (float)NEON_fmadd((param_2 + -10.0) / 30.0,0xbca3d70a,0x3cf5c28f);
        return fVar1;
      }
      fVar1 = 0.01;
    }
    else {
      fVar1 = 0.03;
    }
    return fVar1;
  }
  return fVar1;
}


