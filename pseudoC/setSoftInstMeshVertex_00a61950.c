// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSoftInstMeshVertex
// Entry Point: 00a61950
// Size: 548 bytes
// Signature: undefined __cdecl setSoftInstMeshVertex(SoftInstFoliageMeshData * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13)


/* FoliageLayerGraphics::setSoftInstMeshVertex(FoliageLayerGraphics::SoftInstFoliageMeshData*,
   float, float, float, float, float, float, float, float, float, float, float, float) */

void FoliageLayerGraphics::setSoftInstMeshVertex
               (SoftInstFoliageMeshData *param_1,float param_2,float param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
               float param_11,float param_12,float param_13)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = param_2 * 32767.0 * 0.0625 + 0.5;
  if (-32768.0 <= fVar13) {
    if (fVar13 <= 32767.0) {
      uVar3 = (undefined2)(int)fVar13;
    }
    else {
      uVar3 = 0x7fff;
    }
  }
  else {
    uVar3 = 0x8000;
  }
  *(undefined2 *)param_1 = uVar3;
  fVar13 = param_3 * 32767.0 * 0.0625 + 0.5;
  if (-32768.0 <= fVar13) {
    if (fVar13 <= 32767.0) {
      uVar3 = (undefined2)(int)fVar13;
    }
    else {
      uVar3 = 0x7fff;
    }
  }
  else {
    uVar3 = 0x8000;
  }
  *(undefined2 *)(param_1 + 2) = uVar3;
  fVar13 = param_4 * 32767.0 * 0.0625 + 0.5;
  if (-32768.0 <= fVar13) {
    if (fVar13 <= 32767.0) {
      uVar3 = (undefined2)(int)fVar13;
    }
    else {
      uVar3 = 0x7fff;
    }
  }
  else {
    uVar3 = 0x8000;
  }
  *(undefined2 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  fVar15 = (float)NEON_fmadd(param_13,0x46fffe00,0x3f000000);
  fVar7 = param_5 * 0.125 * 32767.0;
  fVar9 = (float)NEON_fmadd(param_7,0x46fffe00,0x3f000000);
  fVar8 = param_6 * 0.125 * 32767.0;
  fVar11 = (float)NEON_fmadd(param_8,0x46fffe00,0x3f000000);
  fVar12 = (float)NEON_fmadd(param_9,0x46fffe00,0x3f000000);
  fVar14 = (float)NEON_fmadd(param_10,0x46fffe00,0x3f000000);
  fVar13 = (float)NEON_fmadd(param_11,0x46fffe00,0x3f000000);
  fVar17 = (float)NEON_fmin(fVar15,0x46fffe00);
  fVar16 = (float)NEON_fmin(fVar9,0x46fffe00);
  fVar18 = (float)NEON_fmin(fVar11,0x46fffe00);
  uVar3 = 0x8000;
  if (-32768.0 <= fVar15) {
    uVar3 = (short)(int)fVar17;
  }
  fVar15 = 0.5;
  if (fVar7 < 0.0) {
    fVar15 = -0.5;
  }
  *(undefined2 *)(param_1 + 6) = uVar3;
  fVar17 = 0.5;
  if (fVar8 < 0.0) {
    fVar17 = -0.5;
  }
  fVar10 = (float)NEON_fmin(fVar12,0x46fffe00);
  fVar5 = (float)NEON_fmadd(param_12,0x46fffe00,0x3f000000);
  fVar6 = (float)NEON_fmin(fVar14,0x46fffe00);
  uVar3 = 0x8000;
  if (-32768.0 <= fVar9) {
    uVar3 = (short)(int)fVar16;
  }
  fVar16 = (float)NEON_fmin(fVar13,0x46fffe00);
  fVar9 = (float)NEON_fmin(fVar5,0x46fffe00);
  uVar4 = 0x8000;
  uVar1 = uVar4;
  if (-32768.0 <= fVar11) {
    uVar1 = (short)(int)fVar18;
  }
  uVar2 = uVar4;
  if (-32768.0 <= fVar12) {
    uVar2 = (short)(int)fVar10;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar3;
  *(short *)(param_1 + 8) = (short)(int)(fVar7 + fVar15);
  uVar3 = uVar4;
  if (-32768.0 <= fVar14) {
    uVar3 = (short)(int)fVar6;
  }
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  *(short *)(param_1 + 10) = (short)(int)(fVar8 + fVar17);
  if (-32768.0 <= fVar13) {
    uVar4 = (short)(int)fVar16;
  }
  *(undefined2 *)(param_1 + 0x10) = uVar2;
  *(undefined2 *)(param_1 + 0x12) = uVar3;
  uVar3 = 0x8000;
  if (-32768.0 <= fVar5) {
    uVar3 = (short)(int)fVar9;
  }
  *(undefined2 *)(param_1 + 0x14) = uVar4;
  *(undefined2 *)(param_1 + 0x16) = uVar3;
  return;
}


