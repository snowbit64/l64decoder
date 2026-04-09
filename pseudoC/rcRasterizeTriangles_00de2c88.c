// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcRasterizeTriangles
// Entry Point: 00de2c88
// Size: 300 bytes
// Signature: undefined __cdecl rcRasterizeTriangles(rcContext * param_1, float * param_2, int param_3, int * param_4, uchar * param_5, int param_6, rcHeightfield * param_7, int param_8)


/* rcRasterizeTriangles(rcContext*, float const*, int, int const*, unsigned char const*, int,
   rcHeightfield&, int) */

void rcRasterizeTriangles
               (rcContext *param_1,float *param_2,int param_3,int *param_4,uchar *param_5,
               int param_6,rcHeightfield *param_7,int param_8)

{
  int *piVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (ulong)(uint)param_6;
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2,param_3);
  }
  if (0 < param_6) {
    fVar3 = *(float *)(param_7 + 0x20);
    fVar4 = *(float *)(param_7 + 0x24);
    piVar1 = param_4 + 2;
    fVar5 = 1.0 / fVar3;
    while( true ) {
      uVar2 = uVar2 - 1;
      FUN_00de23cc(fVar3,fVar5,1.0 / fVar4,param_2 + (long)piVar1[-2] * 3,
                   param_2 + (long)*piVar1 * 3,param_2 + (long)*piVar1 * 3,*param_5,param_7,
                   param_7 + 8,param_7 + 0x14,param_8);
      if (uVar2 == 0) break;
      fVar3 = *(float *)(param_7 + 0x20);
      piVar1 = piVar1 + 3;
      param_5 = param_5 + 1;
    }
  }
  if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de2d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
    return;
  }
  return;
}


