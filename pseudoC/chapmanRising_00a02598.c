// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chapmanRising
// Entry Point: 00a02598
// Size: 188 bytes
// Signature: undefined __cdecl chapmanRising(float * param_1, float param_2, float * param_3)


/* LightScatteringUtil::chapmanRising(float const*, float, float*) */

void LightScatteringUtil::chapmanRising(float *param_1,float param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_02111dd0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02111dd0);
    if (iVar1 != 0) {
      DAT_02111dc8 = 1.253314;
      __cxa_guard_release(&DAT_02111dd0);
    }
  }
  uVar2 = NEON_fsqrt(*(undefined8 *)param_1,4);
  fVar5 = (float)((ulong)uVar2 >> 0x20);
  fVar4 = ((float)uVar2 + (float)uVar2 * 0.5) * DAT_02111dc8;
  fVar5 = (fVar5 + fVar5 * 0.5) * DAT_02111dc8;
  uVar2 = NEON_fmov(0xbf800000,4);
  uVar3 = NEON_fmov(0x3f800000,4);
  *(ulong *)param_3 =
       CONCAT44(fVar5 / ((float)((ulong)uVar3 >> 0x20) +
                        (fVar5 + (float)((ulong)uVar2 >> 0x20)) * param_2),
                fVar4 / ((float)uVar3 + (fVar4 + (float)uVar2) * param_2));
  return;
}


