// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GatherTransformClip<0>
// Entry Point: 00da4940
// Size: 1056 bytes
// Signature: void __thiscall GatherTransformClip<0>(MaskedOcclusionCullingPrivate * this, int * param_1, int * param_2, int * param_3, int param_4, int * param_5, __Float32x4_t * param_6, __Float32x4_t * param_7, __Float32x4_t * param_8, float * param_9, ushort * * param_10, VertexLayout * param_11, float * param_12, __Float32x4_t * param_13, uint * param_14, ClipPlanes param_15)


/* void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GatherTransformClip<0>(int&,
   int&, int&, int, int&, __Float32x4_t*, __Float32x4_t*, __Float32x4_t*, float const*, unsigned
   short const*&, MaskedOcclusionCulling::VertexLayout const&, float const*, __Float32x4_t*,
   unsigned int&, MaskedOcclusionCulling::ClipPlanes) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GatherTransformClip<0>
          (MaskedOcclusionCullingPrivate *this,int *param_1,int *param_2,int *param_3,int param_4,
          int *param_5,__Float32x4_t *param_6,__Float32x4_t *param_7,__Float32x4_t *param_8,
          float *param_9,ushort **param_10,VertexLayout *param_11,float *param_12,
          __Float32x4_t *param_13,uint *param_14,ClipPlanes param_15)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  iVar16 = *param_1;
  iVar2 = *param_2;
  if (iVar16 == iVar2) {
    uVar12 = param_4 - *param_5;
    if (3 < (int)uVar12) {
      uVar12 = 4;
    }
    *param_3 = uVar12;
    uVar12 = ~(-1 << (ulong)(uVar12 & 0x1f));
    *param_14 = uVar12;
    uVar14 = (ulong)(uint)*param_3;
    puVar10 = *param_10;
    if (0 < *param_3) {
      lVar11 = (long)*(int *)param_11;
      lVar1 = (long)*(int *)(param_11 + 8);
      puVar13 = (undefined4 *)(param_7 + 0x10);
      puVar15 = (undefined4 *)(param_8 + 0x10);
      puVar8 = puVar10 + 2;
      pfVar17 = (float *)(param_6 + 0x20);
      do {
        uVar14 = uVar14 - 1;
        iVar16 = *(int *)(param_11 + 8);
        uVar3 = puVar8[-1];
        pfVar19 = (float *)((long)param_9 + lVar11 * (ulong)puVar8[-2]);
        pfVar17[-8] = *pfVar19;
        puVar13[-4] = *(undefined4 *)((long)pfVar19 + lVar1);
        pfVar20 = (float *)((long)param_9 + lVar11 * (ulong)uVar3);
        uVar3 = *puVar8;
        puVar15[-4] = *(undefined4 *)((long)pfVar19 + (long)iVar16);
        iVar16 = *(int *)(param_11 + 8);
        pfVar17[-4] = *pfVar20;
        *puVar13 = *(undefined4 *)((long)pfVar20 + lVar1);
        pfVar19 = (float *)((long)param_9 + lVar11 * (ulong)uVar3);
        *puVar15 = *(undefined4 *)((long)pfVar20 + (long)iVar16);
        iVar16 = *(int *)(param_11 + 8);
        *pfVar17 = *pfVar19;
        puVar13[4] = *(undefined4 *)((long)pfVar19 + lVar1);
        puVar13 = puVar13 + 1;
        puVar15[4] = *(undefined4 *)((long)pfVar19 + (long)iVar16);
        puVar15 = puVar15 + 1;
        puVar8 = puVar8 + 3;
        pfVar17 = pfVar17 + 1;
      } while (uVar14 != 0);
    }
    if (param_12 != (float *)0x0) {
      pfVar17 = param_12 + 0xc;
      pfVar19 = param_12 + 0xd;
      pfVar20 = param_12 + 0xf;
      fVar4 = *param_12;
      pfVar7 = param_12 + 1;
      fVar35 = param_12[8];
      fVar36 = param_12[9];
      fVar5 = *pfVar17;
      fVar41 = param_12[0xb];
      fVar31 = (float)*(undefined8 *)param_8;
      fVar32 = (float)((ulong)*(undefined8 *)param_8 >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_8 + 8);
      fVar34 = (float)((ulong)*(undefined8 *)(param_8 + 8) >> 0x20);
      fVar6 = *pfVar19;
      fVar22 = *pfVar20;
      fVar37 = param_12[7];
      fVar42 = param_12[4];
      fVar39 = param_12[5];
      fVar40 = param_12[3];
      fVar21 = (float)*(undefined8 *)param_6;
      fVar24 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
      fVar25 = (float)*(undefined8 *)(param_6 + 8);
      fVar26 = (float)((ulong)*(undefined8 *)(param_6 + 8) >> 0x20);
      fVar27 = (float)*(undefined8 *)param_7;
      fVar28 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_7 + 8);
      fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
      fVar38 = *pfVar7;
      *(ulong *)(param_6 + 8) =
           CONCAT44(fVar26 * fVar4 + fVar30 * fVar42 + fVar34 * fVar35 + fVar5,
                    fVar25 * fVar4 + fVar29 * fVar42 + fVar33 * fVar35 + fVar5);
      *(ulong *)param_6 =
           CONCAT44(fVar24 * fVar4 + fVar28 * fVar42 + fVar32 * fVar35 + fVar5,
                    fVar21 * fVar4 + fVar27 * fVar42 + fVar31 * fVar35 + fVar5);
      *(ulong *)(param_7 + 8) =
           CONCAT44(fVar26 * fVar38 + fVar30 * fVar39 + fVar34 * fVar36 + fVar6,
                    fVar25 * fVar38 + fVar29 * fVar39 + fVar33 * fVar36 + fVar6);
      *(ulong *)param_7 =
           CONCAT44(fVar24 * fVar38 + fVar28 * fVar39 + fVar32 * fVar36 + fVar6,
                    fVar21 * fVar38 + fVar27 * fVar39 + fVar31 * fVar36 + fVar6);
      *(ulong *)(param_8 + 8) =
           CONCAT44(fVar26 * fVar40 + fVar30 * fVar37 + fVar34 * fVar41 + fVar22,
                    fVar25 * fVar40 + fVar29 * fVar37 + fVar33 * fVar41 + fVar22);
      *(ulong *)param_8 =
           CONCAT44(fVar24 * fVar40 + fVar28 * fVar37 + fVar32 * fVar41 + fVar22,
                    fVar21 * fVar40 + fVar27 * fVar37 + fVar31 * fVar41 + fVar22);
      fVar35 = param_12[8];
      fVar37 = param_12[9];
      fVar4 = *pfVar17;
      fVar39 = param_12[0xb];
      fVar5 = *pfVar19;
      fVar31 = (float)*(undefined8 *)(param_8 + 0x10);
      fVar32 = (float)((ulong)*(undefined8 *)(param_8 + 0x10) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_8 + 0x18);
      fVar34 = (float)((ulong)*(undefined8 *)(param_8 + 0x18) >> 0x20);
      fVar6 = *pfVar20;
      fVar38 = param_12[7];
      fVar40 = param_12[4];
      fVar36 = param_12[5];
      fVar26 = *param_12;
      fVar41 = param_12[3];
      fVar42 = *pfVar7;
      fVar27 = (float)*(undefined8 *)(param_7 + 0x10);
      fVar28 = (float)((ulong)*(undefined8 *)(param_7 + 0x10) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_7 + 0x18);
      fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 0x18) >> 0x20);
      fVar22 = (float)*(undefined8 *)(param_6 + 0x10);
      fVar21 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_6 + 0x18);
      fVar25 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
      *(ulong *)(param_6 + 0x18) =
           CONCAT44(fVar25 * fVar26 + fVar30 * fVar40 + fVar34 * fVar35 + fVar4,
                    fVar24 * fVar26 + fVar29 * fVar40 + fVar33 * fVar35 + fVar4);
      *(ulong *)(param_6 + 0x10) =
           CONCAT44(fVar21 * fVar26 + fVar28 * fVar40 + fVar32 * fVar35 + fVar4,
                    fVar22 * fVar26 + fVar27 * fVar40 + fVar31 * fVar35 + fVar4);
      *(ulong *)(param_7 + 0x18) =
           CONCAT44(fVar25 * fVar42 + fVar30 * fVar36 + fVar34 * fVar37 + fVar5,
                    fVar24 * fVar42 + fVar29 * fVar36 + fVar33 * fVar37 + fVar5);
      *(ulong *)(param_7 + 0x10) =
           CONCAT44(fVar21 * fVar42 + fVar28 * fVar36 + fVar32 * fVar37 + fVar5,
                    fVar22 * fVar42 + fVar27 * fVar36 + fVar31 * fVar37 + fVar5);
      *(ulong *)(param_8 + 0x18) =
           CONCAT44(fVar25 * fVar41 + fVar30 * fVar38 + fVar34 * fVar39 + fVar6,
                    fVar24 * fVar41 + fVar29 * fVar38 + fVar33 * fVar39 + fVar6);
      *(ulong *)(param_8 + 0x10) =
           CONCAT44(fVar21 * fVar41 + fVar28 * fVar38 + fVar32 * fVar39 + fVar6,
                    fVar22 * fVar41 + fVar27 * fVar38 + fVar31 * fVar39 + fVar6);
      fVar35 = param_12[8];
      fVar37 = param_12[9];
      fVar4 = *pfVar17;
      fVar5 = *pfVar19;
      fVar38 = param_12[0xb];
      fVar31 = (float)*(undefined8 *)(param_8 + 0x20);
      fVar32 = (float)((ulong)*(undefined8 *)(param_8 + 0x20) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_8 + 0x28);
      fVar34 = (float)((ulong)*(undefined8 *)(param_8 + 0x28) >> 0x20);
      fVar6 = *pfVar20;
      fVar40 = param_12[7];
      fVar26 = *param_12;
      fVar36 = param_12[4];
      fVar41 = param_12[5];
      fVar39 = *pfVar7;
      fVar42 = param_12[3];
      fVar22 = (float)*(undefined8 *)(param_6 + 0x20);
      fVar21 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_6 + 0x28);
      fVar25 = (float)((ulong)*(undefined8 *)(param_6 + 0x28) >> 0x20);
      fVar27 = (float)*(undefined8 *)(param_7 + 0x20);
      fVar28 = (float)((ulong)*(undefined8 *)(param_7 + 0x20) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_7 + 0x28);
      fVar30 = (float)((ulong)*(undefined8 *)(param_7 + 0x28) >> 0x20);
      *(ulong *)(param_6 + 0x28) =
           CONCAT44(fVar25 * fVar26 + fVar30 * fVar36 + fVar34 * fVar35 + fVar4,
                    fVar24 * fVar26 + fVar29 * fVar36 + fVar33 * fVar35 + fVar4);
      *(ulong *)(param_6 + 0x20) =
           CONCAT44(fVar21 * fVar26 + fVar28 * fVar36 + fVar32 * fVar35 + fVar4,
                    fVar22 * fVar26 + fVar27 * fVar36 + fVar31 * fVar35 + fVar4);
      *(ulong *)(param_7 + 0x28) =
           CONCAT44(fVar25 * fVar39 + fVar30 * fVar41 + fVar34 * fVar37 + fVar5,
                    fVar24 * fVar39 + fVar29 * fVar41 + fVar33 * fVar37 + fVar5);
      *(ulong *)(param_7 + 0x20) =
           CONCAT44(fVar21 * fVar39 + fVar28 * fVar41 + fVar32 * fVar37 + fVar5,
                    fVar22 * fVar39 + fVar27 * fVar41 + fVar31 * fVar37 + fVar5);
      *(ulong *)(param_8 + 0x28) =
           CONCAT44(fVar25 * fVar42 + fVar30 * fVar40 + fVar34 * fVar38 + fVar6,
                    fVar24 * fVar42 + fVar29 * fVar40 + fVar33 * fVar38 + fVar6);
      *(ulong *)(param_8 + 0x20) =
           CONCAT44(fVar21 * fVar42 + fVar28 * fVar40 + fVar32 * fVar38 + fVar6,
                    fVar22 * fVar42 + fVar27 * fVar40 + fVar31 * fVar38 + fVar6);
      puVar10 = *param_10;
    }
    *param_5 = *param_5 + 4;
    *param_10 = puVar10 + 0xc;
  }
  else {
    *param_3 = 0;
    if (iVar16 <= iVar2) {
      iVar16 = iVar16 + 0x20;
    }
    iVar16 = iVar16 - iVar2;
    iVar2 = iVar16;
    if (3 < iVar16) {
      iVar2 = 4;
    }
    if (iVar16 < 1) {
      iVar16 = 0;
    }
    else {
      lVar11 = 0;
      uVar12 = *param_2;
      puVar13 = (undefined4 *)(param_7 + 0x10);
      puVar15 = (undefined4 *)(param_8 + 0x10);
      puVar9 = (undefined4 *)(param_6 + 0x10);
      do {
        puVar18 = (undefined4 *)(param_13 + (long)(int)uVar12 * 0x30);
        uVar12 = uVar12 + 1 & 0x1f;
        lVar11 = lVar11 + 1;
        uVar23 = *puVar18;
        *param_2 = uVar12;
        iVar16 = *param_3;
        puVar9[-4] = uVar23;
        puVar13[-4] = puVar18[1];
        puVar15[-4] = puVar18[2];
        *puVar9 = puVar18[4];
        *puVar13 = puVar18[5];
        *puVar15 = puVar18[6];
        puVar9[4] = puVar18[8];
        puVar9 = puVar9 + 1;
        puVar13[4] = puVar18[9];
        puVar13 = puVar13 + 1;
        puVar15[4] = puVar18[10];
        puVar15 = puVar15 + 1;
      } while (lVar11 < iVar16 + iVar2);
    }
    puVar10 = *param_10;
    *param_5 = *param_5 + iVar16;
    iVar16 = *param_3;
    *param_14 = ~(-1 << (ulong)(iVar16 + iVar2 & 0x1f));
    uVar12 = ~(-1 << (ulong)(*param_3 & 0x1f));
    *param_10 = puVar10 + iVar16 * 3;
  }
  if (param_15 == 0) {
    return;
  }
  ClipTriangleAndAddToBuffer
            ((__Float32x4_t *)this,param_6,param_7,param_8,(int *)param_13,(uint *)param_1,
             (uint)param_14,uVar12,param_15);
  return;
}


