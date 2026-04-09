// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcRasterizeTriangle
// Entry Point: 00de2300
// Size: 204 bytes
// Signature: undefined __cdecl rcRasterizeTriangle(rcContext * param_1, float * param_2, float * param_3, float * param_4, uchar param_5, rcHeightfield * param_6, int param_7)


/* rcRasterizeTriangle(rcContext*, float const*, float const*, float const*, unsigned char,
   rcHeightfield&, int) */

void rcRasterizeTriangle(rcContext *param_1,float *param_2,float *param_3,float *param_4,
                        uchar param_5,rcHeightfield *param_6,int param_7)

{
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_00de23cc(*(float *)(param_6 + 0x20),1.0 / *(float *)(param_6 + 0x20),
               1.0 / *(float *)(param_6 + 0x24),param_2,param_3,param_4,param_5,param_6,param_6 + 8,
               param_6 + 0x14,param_7);
  if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de23b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
    return;
  }
  return;
}


