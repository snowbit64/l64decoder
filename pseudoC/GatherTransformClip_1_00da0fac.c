// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GatherTransformClip<1>
// Entry Point: 00da0fac
// Size: 1036 bytes
// Signature: void __cdecl GatherTransformClip<1>(int * param_1, int * param_2, int * param_3, int param_4, int * param_5, __Float32x4_t * param_6, __Float32x4_t * param_7, __Float32x4_t * param_8, float * param_9, ushort * * param_10, VertexLayout * param_11, float * param_12, __Float32x4_t * param_13, uint * param_14, ClipPlanes param_15)


/* void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GatherTransformClip<1>(int&,
   int&, int&, int, int&, __Float32x4_t*, __Float32x4_t*, __Float32x4_t*, float const*, unsigned
   short const*&, MaskedOcclusionCulling::VertexLayout const&, float const*, __Float32x4_t*,
   unsigned int&, MaskedOcclusionCulling::ClipPlanes) */

void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GatherTransformClip<1>
               (int *param_1,int *param_2,int *param_3,int param_4,int *param_5,
               __Float32x4_t *param_6,__Float32x4_t *param_7,__Float32x4_t *param_8,float *param_9,
               ushort **param_10,VertexLayout *param_11,float *param_12,__Float32x4_t *param_13,
               uint *param_14,ClipPlanes param_15)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ushort *puVar15;
  float *pfVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ushort *in_d0;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  ushort *in_register_00005008;
  float fVar25;
  ushort *in_d1;
  undefined4 uVar26;
  ushort *in_register_00005028;
  float fVar27;
  ushort *in_d2;
  float fVar28;
  float fVar29;
  ushort *in_register_00005048;
  float fVar30;
  float fVar31;
  ushort *in_d3;
  float fVar32;
  float fVar33;
  ushort *in_register_00005068;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  puVar11 = (uint *)(ulong)(uint)param_4;
  iVar3 = *param_2;
  iVar4 = *param_3;
  if (iVar3 == iVar4) {
    lVar13 = 0;
    lVar9 = *(long *)param_11;
    uVar17 = (int)param_5 - *(int *)param_6;
    if (3 < (int)uVar17) {
      uVar17 = 4;
    }
    *puVar11 = uVar17;
    uVar12 = ~(-1 << (ulong)(uVar17 & 0x1f));
    puVar15 = (ushort *)(lVar9 + 0xc);
    *(uint *)CONCAT44(in_stack_00000034,param_15) = uVar12;
    uVar17 = *puVar11;
    do {
      if (0 < (int)uVar17) {
        in_register_00005008 = (param_10 + (ulong)puVar15[-6] * 2)[1];
        in_d0 = param_10[(ulong)puVar15[-6] * 2];
        if (uVar17 != 1) {
          in_register_00005028 = (param_10 + (ulong)puVar15[-3] * 2)[1];
          in_d1 = param_10[(ulong)puVar15[-3] * 2];
          if (2 < uVar17) {
            in_register_00005048 = (param_10 + (ulong)*puVar15 * 2)[1];
            in_d2 = param_10[(ulong)*puVar15 * 2];
            if (uVar17 != 3) {
              in_register_00005068 = (param_10 + (ulong)puVar15[3] * 2)[1];
              in_d3 = param_10[(ulong)puVar15[3] * 2];
            }
          }
        }
      }
      uVar36 = (undefined4)((ulong)in_d2 >> 0x20);
      puVar15 = puVar15 + 1;
      uVar22 = (undefined4)((ulong)in_d0 >> 0x20);
      auVar38._4_4_ = uVar22;
      auVar38._0_4_ = uVar22;
      auVar38._8_4_ = uVar22;
      auVar38._12_4_ = uVar22;
      uVar26 = (undefined4)((ulong)in_d1 >> 0x20);
      auVar39._8_8_ = auVar38._8_8_;
      auVar39._4_4_ = uVar26;
      auVar39._0_4_ = uVar22;
      auVar40._4_4_ = uVar22;
      auVar40._0_4_ = uVar26;
      auVar40._8_4_ = uVar36;
      auVar40._12_4_ = uVar36;
      auVar40 = NEON_ext(auVar40,auVar39,8,1);
      auVar40 = NEON_ext(auVar40,auVar40,8,1);
      *(ulong *)((long)(param_7 + lVar13) + 8) = CONCAT44((int)in_d3,(int)in_d2);
      *(ulong *)(param_7 + lVar13) = CONCAT44((int)in_d1,(int)in_d0);
      *(long *)((long)(param_8 + lVar13) + 8) = auVar40._8_8_;
      *(long *)(param_8 + lVar13) = auVar40._0_8_;
      ((undefined8 *)((long)param_9 + lVar13))[1] =
           CONCAT44((int)((ulong)in_register_00005068 >> 0x20),
                    (int)((ulong)in_register_00005048 >> 0x20));
      *(undefined8 *)((long)param_9 + lVar13) =
           CONCAT44((int)((ulong)in_register_00005028 >> 0x20),
                    (int)((ulong)in_register_00005008 >> 0x20));
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x30);
    if (param_13 != (__Float32x4_t *)0x0) {
      pfVar16 = (float *)(param_13 + 0x30);
      pfVar1 = (float *)(param_13 + 0x34);
      pfVar2 = (float *)(param_13 + 0x3c);
      fVar5 = *(float *)param_13;
      pfVar8 = (float *)(param_13 + 4);
      fVar35 = *(float *)(param_13 + 0x20);
      fVar37 = *(float *)(param_13 + 0x24);
      fVar6 = *pfVar16;
      fVar45 = *(float *)(param_13 + 0x2c);
      fVar31 = (float)*(undefined8 *)param_9;
      fVar32 = (float)((ulong)*(undefined8 *)param_9 >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_9 + 2);
      fVar34 = (float)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20);
      fVar7 = *pfVar1;
      fVar21 = *pfVar2;
      fVar41 = *(float *)(param_13 + 0x1c);
      fVar46 = *(float *)(param_13 + 0x10);
      fVar43 = *(float *)(param_13 + 0x14);
      fVar44 = *(float *)(param_13 + 0xc);
      fVar20 = (float)*(undefined8 *)param_7;
      fVar23 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_7 + 8);
      fVar25 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
      fVar27 = (float)*(undefined8 *)param_8;
      fVar28 = (float)((ulong)*(undefined8 *)param_8 >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_8 + 8);
      fVar30 = (float)((ulong)*(undefined8 *)(param_8 + 8) >> 0x20);
      fVar42 = *pfVar8;
      *(ulong *)(param_7 + 8) =
           CONCAT44(fVar25 * fVar5 + fVar30 * fVar46 + fVar34 * fVar35 + fVar6,
                    fVar24 * fVar5 + fVar29 * fVar46 + fVar33 * fVar35 + fVar6);
      *(ulong *)param_7 =
           CONCAT44(fVar23 * fVar5 + fVar28 * fVar46 + fVar32 * fVar35 + fVar6,
                    fVar20 * fVar5 + fVar27 * fVar46 + fVar31 * fVar35 + fVar6);
      *(ulong *)(param_8 + 8) =
           CONCAT44(fVar25 * fVar42 + fVar30 * fVar43 + fVar34 * fVar37 + fVar7,
                    fVar24 * fVar42 + fVar29 * fVar43 + fVar33 * fVar37 + fVar7);
      *(ulong *)param_8 =
           CONCAT44(fVar23 * fVar42 + fVar28 * fVar43 + fVar32 * fVar37 + fVar7,
                    fVar20 * fVar42 + fVar27 * fVar43 + fVar31 * fVar37 + fVar7);
      *(ulong *)(param_9 + 2) =
           CONCAT44(fVar25 * fVar44 + fVar30 * fVar41 + fVar34 * fVar45 + fVar21,
                    fVar24 * fVar44 + fVar29 * fVar41 + fVar33 * fVar45 + fVar21);
      *(ulong *)param_9 =
           CONCAT44(fVar23 * fVar44 + fVar28 * fVar41 + fVar32 * fVar45 + fVar21,
                    fVar20 * fVar44 + fVar27 * fVar41 + fVar31 * fVar45 + fVar21);
      fVar35 = *(float *)(param_13 + 0x20);
      fVar41 = *(float *)(param_13 + 0x24);
      fVar5 = *pfVar16;
      fVar43 = *(float *)(param_13 + 0x2c);
      fVar6 = *pfVar1;
      fVar31 = (float)*(undefined8 *)(param_9 + 4);
      fVar32 = (float)((ulong)*(undefined8 *)(param_9 + 4) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_9 + 6);
      fVar34 = (float)((ulong)*(undefined8 *)(param_9 + 6) >> 0x20);
      fVar7 = *pfVar2;
      fVar42 = *(float *)(param_13 + 0x1c);
      fVar44 = *(float *)(param_13 + 0x10);
      fVar37 = *(float *)(param_13 + 0x14);
      fVar25 = *(float *)param_13;
      fVar45 = *(float *)(param_13 + 0xc);
      fVar46 = *pfVar8;
      fVar27 = (float)*(undefined8 *)(param_8 + 0x10);
      fVar28 = (float)((ulong)*(undefined8 *)(param_8 + 0x10) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_8 + 0x18);
      fVar30 = (float)((ulong)*(undefined8 *)(param_8 + 0x18) >> 0x20);
      fVar21 = (float)*(undefined8 *)(param_7 + 0x10);
      fVar20 = (float)((ulong)*(undefined8 *)(param_7 + 0x10) >> 0x20);
      fVar23 = (float)*(undefined8 *)(param_7 + 0x18);
      fVar24 = (float)((ulong)*(undefined8 *)(param_7 + 0x18) >> 0x20);
      *(ulong *)(param_7 + 0x18) =
           CONCAT44(fVar24 * fVar25 + fVar30 * fVar44 + fVar34 * fVar35 + fVar5,
                    fVar23 * fVar25 + fVar29 * fVar44 + fVar33 * fVar35 + fVar5);
      *(ulong *)(param_7 + 0x10) =
           CONCAT44(fVar20 * fVar25 + fVar28 * fVar44 + fVar32 * fVar35 + fVar5,
                    fVar21 * fVar25 + fVar27 * fVar44 + fVar31 * fVar35 + fVar5);
      *(ulong *)(param_8 + 0x18) =
           CONCAT44(fVar24 * fVar46 + fVar30 * fVar37 + fVar34 * fVar41 + fVar6,
                    fVar23 * fVar46 + fVar29 * fVar37 + fVar33 * fVar41 + fVar6);
      *(ulong *)(param_8 + 0x10) =
           CONCAT44(fVar20 * fVar46 + fVar28 * fVar37 + fVar32 * fVar41 + fVar6,
                    fVar21 * fVar46 + fVar27 * fVar37 + fVar31 * fVar41 + fVar6);
      *(ulong *)(param_9 + 6) =
           CONCAT44(fVar24 * fVar45 + fVar30 * fVar42 + fVar34 * fVar43 + fVar7,
                    fVar23 * fVar45 + fVar29 * fVar42 + fVar33 * fVar43 + fVar7);
      *(ulong *)(param_9 + 4) =
           CONCAT44(fVar20 * fVar45 + fVar28 * fVar42 + fVar32 * fVar43 + fVar7,
                    fVar21 * fVar45 + fVar27 * fVar42 + fVar31 * fVar43 + fVar7);
      fVar35 = *(float *)(param_13 + 0x20);
      fVar41 = *(float *)(param_13 + 0x24);
      fVar5 = *pfVar16;
      fVar6 = *pfVar1;
      fVar42 = *(float *)(param_13 + 0x2c);
      fVar31 = (float)*(undefined8 *)(param_9 + 8);
      fVar32 = (float)((ulong)*(undefined8 *)(param_9 + 8) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_9 + 10);
      fVar34 = (float)((ulong)*(undefined8 *)(param_9 + 10) >> 0x20);
      fVar7 = *pfVar2;
      fVar44 = *(float *)(param_13 + 0x1c);
      fVar25 = *(float *)param_13;
      fVar37 = *(float *)(param_13 + 0x10);
      fVar45 = *(float *)(param_13 + 0x14);
      fVar43 = *pfVar8;
      fVar46 = *(float *)(param_13 + 0xc);
      fVar21 = (float)*(undefined8 *)(param_7 + 0x20);
      fVar20 = (float)((ulong)*(undefined8 *)(param_7 + 0x20) >> 0x20);
      fVar23 = (float)*(undefined8 *)(param_7 + 0x28);
      fVar24 = (float)((ulong)*(undefined8 *)(param_7 + 0x28) >> 0x20);
      fVar27 = (float)*(undefined8 *)(param_8 + 0x20);
      fVar28 = (float)((ulong)*(undefined8 *)(param_8 + 0x20) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_8 + 0x28);
      fVar30 = (float)((ulong)*(undefined8 *)(param_8 + 0x28) >> 0x20);
      *(ulong *)(param_7 + 0x28) =
           CONCAT44(fVar24 * fVar25 + fVar30 * fVar37 + fVar34 * fVar35 + fVar5,
                    fVar23 * fVar25 + fVar29 * fVar37 + fVar33 * fVar35 + fVar5);
      *(ulong *)(param_7 + 0x20) =
           CONCAT44(fVar20 * fVar25 + fVar28 * fVar37 + fVar32 * fVar35 + fVar5,
                    fVar21 * fVar25 + fVar27 * fVar37 + fVar31 * fVar35 + fVar5);
      *(ulong *)(param_8 + 0x28) =
           CONCAT44(fVar24 * fVar43 + fVar30 * fVar45 + fVar34 * fVar41 + fVar6,
                    fVar23 * fVar43 + fVar29 * fVar45 + fVar33 * fVar41 + fVar6);
      *(ulong *)(param_8 + 0x20) =
           CONCAT44(fVar20 * fVar43 + fVar28 * fVar45 + fVar32 * fVar41 + fVar6,
                    fVar21 * fVar43 + fVar27 * fVar45 + fVar31 * fVar41 + fVar6);
      *(ulong *)(param_9 + 10) =
           CONCAT44(fVar24 * fVar46 + fVar30 * fVar44 + fVar34 * fVar42 + fVar7,
                    fVar23 * fVar46 + fVar29 * fVar44 + fVar33 * fVar42 + fVar7);
      *(ulong *)(param_9 + 8) =
           CONCAT44(fVar20 * fVar46 + fVar28 * fVar44 + fVar32 * fVar42 + fVar7,
                    fVar21 * fVar46 + fVar27 * fVar44 + fVar31 * fVar42 + fVar7);
    }
    lVar13 = *(long *)param_11;
    *(int *)param_6 = *(int *)param_6 + 4;
    *(long *)param_11 = lVar13 + 0x18;
  }
  else {
    *puVar11 = 0;
    if (iVar3 <= iVar4) {
      iVar3 = iVar3 + 0x20;
    }
    iVar3 = iVar3 - iVar4;
    iVar4 = iVar3;
    if (3 < iVar3) {
      iVar4 = 4;
    }
    if (iVar3 < 1) {
      uVar17 = 0;
    }
    else {
      lVar13 = 0;
      uVar12 = *param_3;
      puVar14 = (uint *)(param_8 + 0x10);
      pfVar16 = param_9 + 4;
      puVar10 = (uint *)(param_7 + 0x10);
      do {
        puVar18 = param_14 + (long)(int)uVar12 * 0xc;
        uVar12 = uVar12 + 1 & 0x1f;
        lVar13 = lVar13 + 1;
        uVar19 = *puVar18;
        *param_3 = uVar12;
        uVar17 = *puVar11;
        puVar10[-4] = uVar19;
        puVar14[-4] = puVar18[1];
        pfVar16[-4] = (float)puVar18[2];
        *puVar10 = puVar18[4];
        *puVar14 = puVar18[5];
        *pfVar16 = (float)puVar18[6];
        puVar10[4] = puVar18[8];
        puVar10 = puVar10 + 1;
        puVar14[4] = puVar18[9];
        puVar14 = puVar14 + 1;
        pfVar16[4] = (float)puVar18[10];
        pfVar16 = pfVar16 + 1;
      } while (lVar13 < (int)(uVar17 + iVar4));
    }
    lVar13 = *(long *)param_11;
    *(uint *)param_6 = *(int *)param_6 + uVar17;
    uVar17 = *puVar11;
    *(uint *)CONCAT44(in_stack_00000034,param_15) = ~(-1 << (ulong)(uVar17 + iVar4 & 0x1f));
    uVar12 = ~(-1 << (ulong)(*puVar11 & 0x1f));
    *(long *)param_11 = lVar13 + (long)(int)(uVar17 * 3) * 2;
  }
  if (in_stack_00000038 == 0) {
    return;
  }
  ClipTriangleAndAddToBuffer
            ((__Float32x4_t *)param_1,param_7,param_8,(__Float32x4_t *)param_9,(int *)param_14,
             (uint *)param_2,param_15,uVar12,in_stack_00000038);
  return;
}


