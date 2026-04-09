// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fastVertexTransformP
// Entry Point: 009283b0
// Size: 168 bytes
// Signature: undefined __cdecl fastVertexTransformP(float * param_1, uchar * param_2, uchar * param_3, uint param_4, uint param_5)


/* fastVertexTransformP(float*, unsigned char*, unsigned char*, unsigned int, unsigned int) */

void fastVertexTransformP(float *param_1,uchar *param_2,uchar *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar3);
      pfVar2 = (float *)(param_3 + lVar3);
      lVar3 = lVar3 + (ulong)param_5;
      param_4 = param_4 - 1;
      uVar4 = NEON_fmadd(*puVar1,*param_1,(float)puVar1[1] * param_1[4]);
      fVar5 = (float)NEON_fmadd(puVar1[2],param_1[8],uVar4);
      *pfVar2 = fVar5 + param_1[0xc];
      uVar4 = NEON_fmadd(*puVar1,param_1[1],(float)puVar1[1] * param_1[5]);
      fVar5 = (float)NEON_fmadd(puVar1[2],param_1[9],uVar4);
      pfVar2[1] = fVar5 + param_1[0xd];
      uVar4 = NEON_fmadd(*puVar1,param_1[2],(float)puVar1[1] * param_1[6]);
      fVar5 = (float)NEON_fmadd(puVar1[2],param_1[10],uVar4);
      pfVar2[2] = fVar5 + param_1[0xe];
    } while (param_4 != 0);
  }
  return;
}


