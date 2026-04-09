// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPerlinNoise2D
// Entry Point: 007be07c
// Size: 308 bytes
// Signature: undefined __cdecl getPerlinNoise2D(float param_1, float param_2, float param_3, uint param_4, int param_5)


/* PerlinNoiseUtil::getPerlinNoise2D(float, float, float, unsigned int, int) */

float PerlinNoiseUtil::getPerlinNoise2D
                (float param_1,float param_2,float param_3,uint param_4,int param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int iVar13;
  undefined8 uVar12;
  float fVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  int iVar18;
  int iVar19;
  
  if (param_4 != 0) {
    fVar1 = 0.0;
    uVar2 = NEON_fmov(0x3f800000,4);
    fVar3 = 0.0;
    fVar4 = 1.0;
    do {
      fVar3 = fVar3 + fVar4;
      param_4 = param_4 - 1;
      iVar9 = (int)param_2 * 0x39;
      iVar15 = param_5 * 0x61 + (int)param_1;
      iVar10 = iVar15 + iVar9 + 0x39;
      iVar13 = iVar15 + iVar9;
      iVar5 = iVar15 + 1 + iVar9 + 0x39;
      iVar9 = iVar15 + 1 + iVar9;
      iVar15 = iVar10 * 0x2000;
      iVar17 = iVar13 * 0x2000;
      iVar18 = iVar5 * 0x2000;
      iVar19 = iVar9 * 0x2000;
      iVar10 = CONCAT13((byte)((uint)iVar15 >> 0x18) ^ (byte)((uint)iVar10 >> 0x18),
                        CONCAT12((byte)((uint)iVar15 >> 0x10) ^ (byte)((uint)iVar10 >> 0x10),
                                 CONCAT11((byte)((uint)iVar15 >> 8) ^ (byte)((uint)iVar10 >> 8),
                                          (char)iVar10)));
      iVar15 = CONCAT13((byte)((uint)iVar18 >> 0x18) ^ (byte)((uint)iVar5 >> 0x18),
                        CONCAT12((byte)((uint)iVar18 >> 0x10) ^ (byte)((uint)iVar5 >> 0x10),
                                 CONCAT11((byte)((uint)iVar18 >> 8) ^ (byte)((uint)iVar5 >> 8),
                                          (char)iVar5)));
      iVar9 = CONCAT13((byte)((uint)iVar19 >> 0x18) ^ (byte)((uint)iVar9 >> 0x18),
                       CONCAT12((byte)((uint)iVar19 >> 0x10) ^ (byte)((uint)iVar9 >> 0x10),
                                CONCAT11((byte)((uint)iVar19 >> 8) ^ (byte)((uint)iVar9 >> 8),
                                         (char)iVar9)));
      iVar5 = (int)(CONCAT17((byte)((uint)iVar17 >> 0x18) ^ (byte)((uint)iVar13 >> 0x18),
                             CONCAT16((byte)((uint)iVar17 >> 0x10) ^ (byte)((uint)iVar13 >> 0x10),
                                      CONCAT15((byte)((uint)iVar17 >> 8) ^ (byte)((uint)iVar13 >> 8)
                                               ,CONCAT14((char)iVar13,iVar10)))) >> 0x20);
      uVar12 = NEON_scvtf(CONCAT44((iVar5 * iVar5 * 0x3d73 + 0xc0ae5) * iVar5 + 0x5208dd0d,
                                   (iVar10 * iVar10 * 0x3d73 + 0xc0ae5) * iVar10 + 0x5208dd0d) &
                          0x7fffffff7fffffff,4);
      uVar16 = NEON_scvtf(CONCAT44((iVar9 * iVar9 * 0x3d73 + 0xc0ae5) * iVar9 + 0x5208dd0d,
                                   (iVar15 * iVar15 * 0x3d73 + 0xc0ae5) * iVar15 + 0x5208dd0d) &
                          0x7fffffff7fffffff,4);
      fVar6 = param_1 - (float)(int)(float)(int)param_1;
      param_1 = param_1 + param_1;
      fVar11 = (float)uVar2 - (float)uVar12 * 9.313226e-10;
      fVar7 = (float)((ulong)uVar2 >> 0x20);
      fVar14 = fVar7 - (float)((ulong)uVar12 >> 0x20) * 9.313226e-10;
      fVar14 = fVar14 + ((fVar7 - (float)((ulong)uVar16 >> 0x20) * 9.313226e-10) - fVar14) * fVar6;
      fVar7 = param_2 - (float)(int)(float)(int)param_2;
      param_2 = param_2 + param_2;
      uVar8 = NEON_fmadd((fVar11 + (((float)uVar2 - (float)uVar16 * 9.313226e-10) - fVar11) * fVar6)
                         - fVar14,fVar7,fVar14);
      fVar1 = (float)NEON_fmadd(uVar8,fVar4,fVar1);
      fVar4 = fVar4 * param_3;
    } while (param_4 != 0);
    return fVar1 / fVar3;
  }
  return NAN;
}


