// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcRasterizeTriangles
// Entry Point: 00de2ee8
// Size: 296 bytes
// Signature: undefined __cdecl rcRasterizeTriangles(rcContext * param_1, float * param_2, uchar * param_3, int param_4, rcHeightfield * param_5, int param_6)


/* rcRasterizeTriangles(rcContext*, float const*, unsigned char const*, int, rcHeightfield&, int) */

void rcRasterizeTriangles
               (rcContext *param_1,float *param_2,uchar *param_3,int param_4,rcHeightfield *param_5,
               int param_6)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2);
  }
  if (0 < param_4) {
    fVar3 = *(float *)(param_5 + 0x20);
    fVar4 = *(float *)(param_5 + 0x24);
    lVar2 = 0;
    fVar5 = 1.0 / fVar3;
    while( true ) {
      iVar1 = (int)lVar2;
      FUN_00de23cc(fVar3,fVar5,1.0 / fVar4,param_2 + iVar1,param_2 + (iVar1 + 3),
                   param_2 + (iVar1 + 6),*param_3,param_5,param_5 + 8,param_5 + 0x14,param_6);
      if ((ulong)(uint)param_4 + (ulong)(uint)param_4 * 8 + -9 == lVar2) break;
      fVar3 = *(float *)(param_5 + 0x20);
      lVar2 = lVar2 + 9;
      param_3 = param_3 + 1;
    }
  }
  if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de2fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
    return;
  }
  return;
}


