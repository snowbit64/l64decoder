// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLODMeshes
// Entry Point: 008f8af8
// Size: 884 bytes
// Signature: undefined __thiscall getLODMeshes(TerrainPatchOccluderManager * this, uint param_1, uint param_2, Matrix4x4 * param_3, Vector3 * param_4, float param_5, IndexedTriangleSet * * param_6, uint * param_7, IndexedTriangleSet * * param_8, uint * param_9, IndexedTriangleSet * * param_10, uint * param_11)


/* TerrainPatchOccluderManager::getLODMeshes(unsigned int, unsigned int, Matrix4x4 const&, Vector3
   const&, float, IndexedTriangleSet const*&, unsigned int&, IndexedTriangleSet const*&, unsigned
   int&, IndexedTriangleSet const*&, unsigned int&) */

void __thiscall
TerrainPatchOccluderManager::getLODMeshes
          (TerrainPatchOccluderManager *this,uint param_1,uint param_2,Matrix4x4 *param_3,
          Vector3 *param_4,float param_5,IndexedTriangleSet **param_6,uint *param_7,
          IndexedTriangleSet **param_8,uint *param_9,IndexedTriangleSet **param_10,uint *param_11)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  ulong uVar8;
  
  uVar5 = *(uint *)(this + 0x100);
  *param_6 = (IndexedTriangleSet *)0x0;
  *param_8 = (IndexedTriangleSet *)0x0;
  iVar1 = *(int *)(this + 0xf8);
  uVar4 = param_2 >> (ulong)(uVar5 & 0x1f);
  uVar5 = param_1 >> (ulong)(uVar5 & 0x1f);
  *param_10 = (IndexedTriangleSet *)0x0;
  uVar2 = (ulong)(uVar5 + iVar1 * uVar4);
  lVar3 = *(long *)(this + 0x118);
  if (*(long *)(lVar3 + uVar2 * 0x380 + 8) != 0) {
    fVar18 = *(float *)(param_3 + 0x18);
    fVar16 = *(float *)(param_3 + 0x10);
    fVar17 = *(float *)(param_3 + 0x14);
    lVar11 = lVar3 + uVar2 * 0x380;
    uVar19 = *(undefined4 *)param_3;
    uVar13 = *(undefined4 *)(param_3 + 4);
    lVar7 = *(long *)(lVar11 + 0x18);
    uVar24 = *(undefined4 *)(lVar7 + 0xc);
    fVar20 = *(float *)(lVar7 + 0x10);
    uVar27 = *(undefined4 *)(lVar7 + 0x14);
    uVar23 = NEON_fmadd(uVar24,uVar19,fVar20 * fVar16);
    uVar26 = NEON_fmadd(uVar24,uVar13,fVar20 * fVar17);
    uVar15 = *(undefined4 *)(param_3 + 0x20);
    uVar14 = *(undefined4 *)(param_3 + 0x24);
    fVar22 = *(float *)(param_3 + 0x30);
    fVar21 = *(float *)(param_3 + 0x34);
    fVar30 = (float)NEON_fmadd(uVar27,uVar15,uVar23);
    uVar23 = *(undefined4 *)(param_3 + 8);
    fVar31 = (float)NEON_fmadd(uVar27,uVar14,uVar26);
    uVar26 = *(undefined4 *)(param_3 + 0x28);
    uVar24 = NEON_fmadd(uVar24,uVar23,fVar20 * fVar18);
    fVar32 = (float)NEON_fmadd(uVar27,uVar26,uVar24);
    fVar29 = *(float *)(param_3 + 0x38);
    fVar25 = *(float *)param_4;
    fVar28 = *(float *)(param_4 + 4);
    fVar20 = (fVar30 + fVar22) - fVar25;
    fVar30 = (fVar21 + fVar31) - fVar28;
    fVar31 = *(float *)(param_4 + 8);
    fVar32 = (fVar29 + fVar32) - fVar31;
    uVar24 = NEON_fmadd(fVar30,fVar30,fVar20 * fVar20);
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x104));
    fVar32 = (float)NEON_fmadd(fVar32,fVar32,uVar24);
    fVar30 = (float)NEON_fmadd(param_5 + -1.0,0x3e4ccccd,0x3f800000);
    fVar33 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x68) + 0x268));
    fVar36 = fVar30 * *(float *)(*(long *)(this + 0x68) + 0x26c);
    fVar20 = (fVar20 + fVar20) * fVar33;
    if (fVar20 <= fVar36) {
      fVar20 = fVar36;
    }
    fVar32 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x18),0xbf666666,SQRT(fVar32));
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    fVar20 = (float)NEON_fmin(fVar32 / fVar20,0x3f800000);
    uVar6 = (uint)(fVar20 * fVar33);
    uVar8 = (ulong)uVar6;
    *param_7 = uVar6;
    uVar10 = *(uint *)(this + 0xf8);
    *param_6 = *(IndexedTriangleSet **)(lVar11 + uVar8 * 0x20 + 8);
    if (uVar4 + 1 < uVar10) {
      uVar12 = (ulong)(uVar5 + uVar10 * (uVar4 + 1));
      if (*(long *)(*(long *)(this + 0x118) + uVar12 * 0x380 + 8) != 0) {
        lVar7 = *(long *)(*(long *)(this + 0x118) + uVar12 * 0x380 + 0x18);
        uVar24 = *(undefined4 *)(lVar7 + 0xc);
        fVar20 = *(float *)(lVar7 + 0x10);
        uVar35 = *(undefined4 *)(lVar7 + 0x14);
        uVar27 = NEON_fmadd(uVar24,uVar19,fVar16 * fVar20);
        uVar34 = NEON_fmadd(uVar24,uVar13,fVar17 * fVar20);
        uVar24 = NEON_fmadd(uVar24,uVar23,fVar18 * fVar20);
        fVar32 = (float)NEON_fmadd(uVar35,uVar15,uVar27);
        fVar33 = (float)NEON_fmadd(uVar35,uVar14,uVar34);
        fVar20 = (float)NEON_fmadd(uVar35,uVar26,uVar24);
        fVar36 = fVar30 * *(float *)(*(long *)(this + 0x68) + 0x26c);
        fVar32 = (fVar22 + fVar32) - fVar25;
        fVar33 = (fVar21 + fVar33) - fVar28;
        fVar20 = (fVar29 + fVar20) - fVar31;
        uVar24 = NEON_fmadd(fVar33,fVar33,fVar32 * fVar32);
        fVar33 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x68) + 0x268));
        fVar32 = (float)NEON_fmadd(fVar20,fVar20,uVar24);
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x104));
        fVar20 = (fVar20 + fVar20) * fVar33;
        if (fVar20 <= fVar36) {
          fVar20 = fVar36;
        }
        fVar32 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x18),0xbf666666,SQRT(fVar32));
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar20 = (float)NEON_fmin(fVar32 / fVar20,0x3f800000);
        uVar9 = 2;
        if ((uint)(int)(fVar20 * fVar33) <= uVar6) {
          uVar9 = 3;
        }
        if ((int)(fVar20 * fVar33) == uVar6) {
          uVar9 = 1;
        }
        *param_9 = uVar6 | uVar9 << 0x10;
        uVar10 = *(uint *)(this + 0xf8);
        *param_8 = *(IndexedTriangleSet **)
                    (lVar3 + uVar2 * 0x380 + (ulong)uVar9 * 0x80 + uVar8 * 0x20 + 8);
      }
    }
    if (uVar5 + 1 < uVar10) {
      uVar12 = (ulong)(uVar5 + 1 + uVar10 * uVar4);
      if (*(long *)(*(long *)(this + 0x118) + uVar12 * 0x380 + 8) != 0) {
        lVar7 = *(long *)(*(long *)(this + 0x118) + uVar12 * 0x380 + 0x18);
        uVar27 = *(undefined4 *)(lVar7 + 0xc);
        fVar20 = *(float *)(lVar7 + 0x10);
        uVar19 = NEON_fmadd(uVar27,uVar19,fVar16 * fVar20);
        uVar13 = NEON_fmadd(uVar27,uVar13,fVar17 * fVar20);
        uVar24 = *(undefined4 *)(lVar7 + 0x14);
        fVar17 = (float)NEON_fmadd(uVar24,uVar15,uVar19);
        uVar15 = NEON_fmadd(uVar27,uVar23,fVar18 * fVar20);
        fVar20 = (float)NEON_fmadd(uVar24,uVar14,uVar13);
        fVar16 = (float)NEON_fmadd(uVar24,uVar26,uVar15);
        fVar25 = (fVar22 + fVar17) - fVar25;
        fVar28 = (fVar21 + fVar20) - fVar28;
        fVar30 = fVar30 * *(float *)(*(long *)(this + 0x68) + 0x26c);
        fVar31 = (fVar29 + fVar16) - fVar31;
        uVar13 = NEON_fmadd(fVar28,fVar28,fVar25 * fVar25);
        fVar25 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x68) + 0x268));
        fVar28 = (float)NEON_fmadd(fVar31,fVar31,uVar13);
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x104));
        fVar20 = (fVar20 + fVar20) * fVar25;
        if (fVar20 <= fVar30) {
          fVar20 = fVar30;
        }
        fVar30 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x18),0xbf666666,SQRT(fVar28));
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar20 = (float)NEON_fmin(fVar30 / fVar20,0x3f800000);
        uVar4 = (uint)(fVar20 * fVar25);
        uVar5 = 5;
        if (uVar4 < uVar6 || uVar4 == uVar6) {
          uVar5 = 6;
        }
        uVar10 = 4;
        if (uVar4 != uVar6) {
          uVar10 = uVar5;
        }
        *param_11 = uVar6 | uVar10 << 0x10;
        *param_10 = *(IndexedTriangleSet **)
                     (lVar3 + uVar2 * 0x380 + (ulong)uVar10 * 0x80 + uVar8 * 0x20 + 8);
      }
    }
  }
  return;
}


