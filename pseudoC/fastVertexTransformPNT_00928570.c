// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fastVertexTransformPNT
// Entry Point: 00928570
// Size: 388 bytes
// Signature: undefined __cdecl fastVertexTransformPNT(float * param_1, uchar * param_2, uchar * param_3, uint param_4, uint param_5)


/* fastVertexTransformPNT(float*, unsigned char*, unsigned char*, unsigned int, unsigned int) */

void fastVertexTransformPNT(float *param_1,uchar *param_2,uchar *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar3 + 0x14);
      pfVar2 = (float *)(param_3 + lVar3);
      param_4 = param_4 - 1;
      lVar3 = lVar3 + (ulong)param_5;
      uVar4 = NEON_fmadd(puVar1[-5],*param_1,(float)puVar1[-4] * param_1[4]);
      fVar5 = (float)NEON_fmadd(puVar1[-3],param_1[8],uVar4);
      *pfVar2 = fVar5 + param_1[0xc];
      uVar4 = NEON_fmadd(puVar1[-5],param_1[1],(float)puVar1[-4] * param_1[5]);
      fVar5 = (float)NEON_fmadd(puVar1[-3],param_1[9],uVar4);
      pfVar2[1] = fVar5 + param_1[0xd];
      uVar4 = NEON_fmadd(puVar1[-5],param_1[2],(float)puVar1[-4] * param_1[6]);
      fVar5 = (float)NEON_fmadd(puVar1[-3],param_1[10],uVar4);
      pfVar2[2] = fVar5 + param_1[0xe];
      uVar4 = NEON_fmadd(puVar1[-2],*param_1,(float)puVar1[-1] * param_1[4]);
      fVar5 = (float)NEON_fmadd(*puVar1,param_1[8],uVar4);
      pfVar2[3] = fVar5;
      uVar4 = NEON_fmadd(puVar1[-2],param_1[1],(float)puVar1[-1] * param_1[5]);
      fVar5 = (float)NEON_fmadd(*puVar1,param_1[9],uVar4);
      pfVar2[4] = fVar5;
      uVar4 = NEON_fmadd(puVar1[-2],param_1[2],(float)puVar1[-1] * param_1[6]);
      fVar5 = (float)NEON_fmadd(*puVar1,param_1[10],uVar4);
      pfVar2[5] = fVar5;
      uVar4 = NEON_fmadd(puVar1[3],*param_1,(float)puVar1[4] * param_1[4]);
      fVar5 = (float)NEON_fmadd(puVar1[5],param_1[8],uVar4);
      pfVar2[8] = fVar5;
      uVar4 = NEON_fmadd(puVar1[3],param_1[1],(float)puVar1[4] * param_1[5]);
      fVar5 = (float)NEON_fmadd(puVar1[5],param_1[9],uVar4);
      pfVar2[9] = fVar5;
      uVar4 = NEON_fmadd(puVar1[3],param_1[2],(float)puVar1[4] * param_1[6]);
      fVar5 = (float)NEON_fmadd(puVar1[5],param_1[10],uVar4);
      pfVar2[10] = fVar5;
    } while (param_4 != 0);
  }
  return;
}


