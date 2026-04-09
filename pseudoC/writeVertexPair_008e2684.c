// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeVertexPair
// Entry Point: 008e2684
// Size: 604 bytes
// Signature: undefined __cdecl writeVertexPair(Vertex * param_1, Vertex * param_2, Vector3 * param_3, Vector3 * param_4, float param_5, int param_6, int param_7, Vector3 * param_8, Vector3 * param_9, float param_10, float param_11, bool param_12, bool param_13)


/* TyreTrackGeometry::writeVertexPair(TyreTrackGeometry::Vertex*, TyreTrackGeometry::Vertex*,
   Vector3 const&, Vector3 const&, float, int, int, Vector3 const&, Vector3 const&, float, float,
   bool, bool) */

void TyreTrackGeometry::writeVertexPair
               (Vertex *param_1,Vertex *param_2,Vector3 *param_3,Vector3 *param_4,float param_5,
               int param_6,int param_7,Vector3 *param_8,Vector3 *param_9,float param_10,
               float param_11,bool param_12,bool param_13)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar9 = 1.0;
  uVar6 = *(undefined8 *)param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)param_1 = uVar6;
  uVar6 = *(undefined8 *)param_4;
  fVar22 = 1.0 - param_5;
  if (-1 < param_6) {
    fVar22 = param_5;
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)param_2 = uVar6;
  fVar20 = *(float *)(param_9 + 8);
  fVar16 = *(float *)(param_8 + 8);
  fVar18 = *(float *)param_9;
  fVar19 = *(float *)(param_9 + 4);
  fVar15 = -ABS(*(float *)(param_8 + 4));
  if (!param_13) {
    fVar15 = ABS(*(float *)(param_8 + 4));
  }
  fVar21 = 0.5;
  if (*(float *)param_8 * 32767.0 < 0.0) {
    fVar21 = -0.5;
  }
  fVar12 = (float)param_7 * 0.0625 * 0.125 * 32767.0;
  fVar13 = 0.5;
  if (fVar15 * 32767.0 < 0.0) {
    fVar13 = -0.5;
  }
  fVar10 = *(float *)(param_4 + 8);
  fVar7 = *(float *)param_4 - *(float *)param_3;
  fVar22 = fVar22 * 0.125 * 32767.0;
  fVar24 = 0.5;
  if (fVar16 * 32767.0 < 0.0) {
    fVar24 = -0.5;
  }
  fVar17 = (float)(param_7 + 1) * 0.0625 * 0.125 * 32767.0;
  fVar8 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar14 = *(float *)(param_3 + 8);
  fVar23 = 0.5;
  if (param_11 * 32767.0 < 0.0) {
    fVar23 = -0.5;
  }
  uVar5 = (undefined2)(int)(*(float *)param_8 * 32767.0 + fVar21);
  *(undefined2 *)(param_1 + 0xc) = uVar5;
  fVar21 = 0.5;
  if (fVar12 < 0.0) {
    fVar21 = -0.5;
  }
  fVar10 = fVar10 - fVar14;
  fVar14 = 0.5;
  if (fVar22 < 0.0) {
    fVar14 = -0.5;
  }
  uVar2 = (undefined2)(int)(fVar15 * 32767.0 + fVar13);
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  uVar3 = (undefined2)(int)(fVar16 * 32767.0 + fVar24);
  *(undefined2 *)(param_1 + 0x10) = uVar3;
  fVar15 = 0.5;
  if (fVar17 < 0.0) {
    fVar15 = -0.5;
  }
  uVar11 = NEON_fmadd(fVar7,fVar7,fVar8 * fVar8);
  uVar4 = (undefined2)(int)(param_11 * 32767.0 + fVar23);
  *(undefined2 *)(param_1 + 0x12) = uVar4;
  *(undefined2 *)(param_2 + 0x10) = uVar3;
  *(undefined2 *)(param_2 + 0xc) = uVar5;
  *(undefined2 *)(param_2 + 0x12) = uVar4;
  fVar16 = (float)NEON_fmadd(fVar10,fVar10,uVar11);
  *(undefined2 *)(param_2 + 0xe) = uVar2;
  uVar1 = (int)(fVar18 * 255.0) & 0xffU | ((int)(fVar19 * 255.0) & 0xffU) << 8 |
          ((int)(fVar20 * 255.0) & 0xffU) << 0x10 | (int)(param_10 * 255.0) << 0x18;
  *(short *)(param_1 + 0x18) = (short)(int)(fVar12 + fVar21);
  uVar5 = (undefined2)(int)(fVar22 + fVar14);
  *(undefined2 *)(param_1 + 0x1a) = uVar5;
  *(short *)(param_2 + 0x18) = (short)(int)(fVar17 + fVar15);
  *(undefined2 *)(param_2 + 0x1a) = uVar5;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_2 + 0x14) = uVar1;
  if (1e-06 < fVar16) {
    fVar9 = 1.0 / SQRT(fVar16);
  }
  fVar22 = fVar7 * fVar9 * 32767.0;
  fVar15 = fVar8 * fVar9 * 32767.0;
  fVar9 = fVar10 * fVar9 * 32767.0;
  fVar16 = 0.5;
  if (fVar22 < 0.0) {
    fVar16 = -0.5;
  }
  fVar18 = 0.5;
  if (fVar15 < 0.0) {
    fVar18 = -0.5;
  }
  fVar19 = 0.5;
  if (fVar9 < 0.0) {
    fVar19 = -0.5;
  }
  uVar5 = 0;
  if (!param_12) {
    uVar5 = 0x7fff;
  }
  *(undefined2 *)(param_1 + 0x22) = uVar5;
  uVar2 = (undefined2)(int)(fVar22 + fVar16);
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  uVar3 = (undefined2)(int)(fVar15 + fVar18);
  *(undefined2 *)(param_1 + 0x1e) = uVar3;
  uVar4 = (undefined2)(int)(fVar9 + fVar19);
  *(undefined2 *)(param_1 + 0x20) = uVar4;
  *(undefined2 *)(param_2 + 0x1c) = uVar2;
  *(undefined2 *)(param_2 + 0x1e) = uVar3;
  *(undefined2 *)(param_2 + 0x20) = uVar4;
  *(undefined2 *)(param_2 + 0x22) = uVar5;
  return;
}


