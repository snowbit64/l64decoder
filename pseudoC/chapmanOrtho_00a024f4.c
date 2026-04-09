// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chapmanOrtho
// Entry Point: 00a024f4
// Size: 164 bytes
// Signature: undefined __cdecl chapmanOrtho(float * param_1, float * param_2)


/* LightScatteringUtil::chapmanOrtho(float const*, float*) */

void LightScatteringUtil::chapmanOrtho(float *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_02111dd0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02111dd0);
    if (iVar1 != 0) {
      DAT_02111dc8 = 1.253314;
      __cxa_guard_release(&DAT_02111dd0);
    }
  }
  fVar3 = param_1[1];
  fVar2 = (float)NEON_fmadd(SQRT(*param_1),0x3f000000,SQRT(*param_1));
  *param_2 = DAT_02111dc8 * fVar2;
  fVar2 = (float)NEON_fmadd(SQRT(fVar3),0x3f000000,SQRT(fVar3));
  param_2[1] = fVar2 * DAT_02111dc8;
  return;
}


