// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimplexNoise1D
// Entry Point: 00b5cc88
// Size: 140 bytes
// Signature: undefined __cdecl getSimplexNoise1D(float param_1, Seed * param_2)


/* SimplexNoiseUtil::getSimplexNoise1D(float, SimplexNoiseUtil::Seed const&) */

float SimplexNoiseUtil::getSimplexNoise1D(float param_1,Seed *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  dVar10 = (double)NEON_fmov(0x3f800000,4);
  iVar2 = (int)param_1 - (uint)(param_1 < 0.0);
  bVar1 = (byte)iVar2;
  fVar3 = param_1 - (float)iVar2;
  fVar8 = fVar3 + -1.0;
  uVar5 = NEON_scvtf((ulong)CONCAT14(param_2[(byte)(bVar1 + 1)],(uint)(byte)param_2[bVar1]) &
                     0x700000007,4);
  uVar7 = NEON_cmeq((ulong)CONCAT14(param_2[(byte)(bVar1 + 1)],(uint)(byte)param_2[bVar1]) &
                    0x800000008,0,4);
  fVar4 = (float)uVar5 + SUB84(dVar10,0);
  fVar6 = (float)((ulong)uVar5 >> 0x20) + (float)((ulong)dVar10 >> 0x20);
  dVar10 = dVar10 - (double)CONCAT44(fVar8 * fVar8,fVar3 * fVar3);
  fVar9 = SUB84(dVar10,0);
  fVar11 = (float)((ulong)dVar10 >> 0x20);
  fVar9 = fVar9 * fVar9;
  fVar11 = fVar11 * fVar11;
  uVar5 = NEON_bif(CONCAT44(fVar6,fVar4),CONCAT44(-fVar6,-fVar4),uVar7,1);
  return (fVar9 * fVar9 * fVar3 * (float)uVar5 +
         fVar11 * fVar11 * fVar8 * (float)((ulong)uVar5 >> 0x20)) * 0.395;
}


