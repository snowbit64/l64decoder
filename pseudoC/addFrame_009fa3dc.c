// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFrame
// Entry Point: 009fa3dc
// Size: 2260 bytes
// Signature: undefined __thiscall addFrame(DeferredDebugRenderer * this, Matrix4x4 * param_1, float param_2, bool param_3, float * param_4, float * param_5, float * param_6, uint param_7, CATEGORY param_8, int param_9, bool param_10, uint param_11, double param_12)


/* DeferredDebugRenderer::addFrame(Matrix4x4 const&, float, bool, float*, float*, float*, unsigned
   int, DeferredDebugRenderer::CATEGORY, int, bool, unsigned int, double) */

void __thiscall
DeferredDebugRenderer::addFrame
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float param_2,bool param_3,float *param_4,
          float *param_5,float *param_6,uint param_7,CATEGORY param_8,int param_9,bool param_10,
          uint param_11,double param_12)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  float local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float afStack_e0 [3];
  float afStack_d4 [3];
  float afStack_c8 [3];
  float afStack_bc [3];
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x2a0) & param_8) == 0) goto LAB_009fac6c;
  uStack_118 = *(undefined8 *)(param_1 + 8);
  local_120 = *(undefined8 *)param_1;
  uStack_108 = *(undefined8 *)(param_1 + 0x18);
  uStack_110 = *(undefined8 *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar23 = *(float *)(param_1 + 0x18);
  uStack_f8 = *(undefined8 *)(param_1 + 0x28);
  local_100 = *(undefined8 *)(param_1 + 0x20);
  local_e8 = *(undefined8 *)(param_1 + 0x38);
  local_f0 = *(undefined8 *)(param_1 + 0x30);
  fVar25 = fVar12 * 0.0;
  fVar29 = fVar13 * 0.0;
  fVar28 = fVar23 * 0.0;
  uVar24 = *(undefined4 *)param_1;
  uVar8 = *(undefined4 *)(param_1 + 4);
  uVar11 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar27 = *(float *)(param_1 + 0x34);
  uVar21 = NEON_fmadd(uVar24,0,fVar25);
  uVar20 = NEON_fmadd(uVar8,0,fVar29);
  uVar31 = NEON_fmadd(param_2,uVar24,fVar25);
  uVar15 = NEON_fmadd(param_2,uVar8,fVar29);
  uVar16 = NEON_fmadd(param_2,uVar11,fVar28);
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  uVar19 = NEON_fmadd(uVar11,0,fVar28);
  uVar30 = NEON_fmadd(uVar24,0,fVar12 * param_2);
  local_130 = (float)NEON_fmadd(uVar7,0,uVar21);
  fStack_12c = (float)NEON_fmadd(uVar9,0,uVar20);
  local_140 = (float)NEON_fmadd(uVar7,0,uVar31);
  fStack_13c = (float)NEON_fmadd(uVar9,0,uVar15);
  local_138 = (float)NEON_fmadd(uVar10,0,uVar16);
  uVar15 = NEON_fmadd(uVar8,0,fVar13 * param_2);
  uVar16 = NEON_fmadd(uVar11,0,fVar23 * param_2);
  local_188 = *(float *)(param_1 + 0x38);
  local_130 = fVar6 + local_130;
  fStack_12c = fVar27 + fStack_12c;
  local_128 = (float)NEON_fmadd(uVar10,0,uVar19);
  local_150 = (float)NEON_fmadd(uVar7,0,uVar30);
  local_140 = fVar6 + local_140;
  fStack_13c = fVar27 + fStack_13c;
  local_138 = local_188 + local_138;
  fStack_14c = (float)NEON_fmadd(uVar9,0,uVar15);
  local_148 = (float)NEON_fmadd(uVar10,0,uVar16);
  local_128 = local_188 + local_128;
  local_150 = fVar6 + local_150;
  fStack_14c = fVar27 + fStack_14c;
  local_148 = local_188 + local_148;
  local_160 = (float)NEON_fmadd(param_2,uVar7,uVar21);
  fStack_15c = (float)NEON_fmadd(param_2,uVar9,uVar20);
  local_158 = (float)NEON_fmadd(param_2,uVar10,uVar19);
  local_160 = fVar6 + local_160;
  fStack_15c = fVar27 + fStack_15c;
  local_158 = local_188 + local_158;
  uStack_1a8 = 0x3f0ccccd00000000;
  local_1b0 = 0x3f80000000000000;
  uStack_198 = 0x3f0ccccd00000000;
  uStack_1a0 = 0x3f800000;
  uStack_1b8 = 0x3f0ccccd3f800000;
  local_1c0 = 0;
  if (param_4 != (float *)0x0) {
    uStack_198 = *(undefined8 *)(param_4 + 2);
    uStack_1a0 = *(undefined8 *)param_4;
    uStack_1a8 = *(undefined8 *)(param_4 + 6);
    local_1b0 = *(undefined8 *)(param_4 + 4);
    local_1c0 = *(undefined8 *)(param_4 + 8);
    uStack_1b8 = *(undefined8 *)(param_4 + 10);
  }
  uStack_1d8 = 0x3f0ccccd00000000;
  local_1e0 = 0x3f80000000000000;
  uStack_1c8 = 0x3f0ccccd00000000;
  uStack_1d0 = 0x3f800000;
  uStack_1f8 = 0x3f0ccccd00000000;
  local_200 = 0x3f8000003f800000;
  uStack_1e8 = 0x3f0ccccd3f800000;
  uStack_1f0 = 0;
  if (param_5 != (float *)0x0) {
    uStack_1c8 = *(undefined8 *)(param_5 + 2);
    uStack_1d0 = *(undefined8 *)param_5;
    uStack_1d8 = *(undefined8 *)(param_5 + 6);
    local_1e0 = *(undefined8 *)(param_5 + 4);
    uStack_1f0 = *(undefined8 *)(param_5 + 8);
    uStack_1e8 = *(undefined8 *)(param_5 + 10);
    uStack_1f8 = *(undefined8 *)(param_5 + 0xe);
    local_200 = *(undefined8 *)(param_5 + 0xc);
  }
  uStack_218 = 0x3f0ccccd00000000;
  local_220 = 0x3f80000000000000;
  uStack_208 = 0x3f0ccccd00000000;
  uStack_210 = 0x3f800000;
  uStack_228 = 0x3f0ccccd3f800000;
  local_230 = 0;
  if (param_6 != (float *)0x0) {
    uStack_208 = *(undefined8 *)(param_6 + 2);
    uStack_210 = *(undefined8 *)param_6;
    uStack_218 = *(undefined8 *)(param_6 + 6);
    local_220 = *(undefined8 *)(param_6 + 4);
    uStack_228 = *(undefined8 *)(param_6 + 10);
    local_230 = *(undefined8 *)(param_6 + 8);
  }
  fVar17 = param_2 - param_2 * 0.15;
  uVar16 = NEON_fmadd(fVar17,uVar24,fVar25);
  uVar31 = NEON_fmadd(fVar17,uVar8,fVar29);
  uVar30 = NEON_fmadd(fVar17,uVar11,fVar28);
  fVar22 = (float)NEON_fmadd(fVar17,uVar7,uVar21);
  fVar29 = (float)NEON_fmadd(fVar17,uVar9,uVar20);
  uVar15 = NEON_fmadd(uVar24,0,fVar17 * fVar12);
  fVar26 = (float)NEON_fmadd(uVar7,0,uVar16);
  uVar8 = NEON_fmadd(uVar8,0,fVar17 * fVar13);
  fVar25 = (float)NEON_fmadd(uVar9,0,uVar31);
  uVar11 = NEON_fmadd(uVar11,0,fVar17 * fVar23);
  fVar28 = (float)NEON_fmadd(fVar17,uVar10,uVar19);
  local_168 = (float)NEON_fmadd(uVar10,0,uVar30);
  fVar12 = (float)NEON_fmadd(uVar7,0,uVar15);
  fVar13 = (float)NEON_fmadd(uVar9,0,uVar8);
  local_178 = (float)NEON_fmadd(uVar10,0,uVar11);
  local_168 = local_188 + local_168;
  fVar23 = param_2 * 0.15 * 0.25;
  fVar13 = fVar27 + fVar13;
  local_170 = CONCAT44(fVar27 + fVar25,fVar6 + fVar26);
  local_178 = local_188 + local_178;
  local_188 = local_188 + fVar28;
  local_190 = CONCAT44(fVar27 + fVar29,fVar6 + fVar22);
  local_180 = CONCAT44(fVar13,fVar6 + fVar12);
  uVar4 = param_7;
  if ((uint)param_9 < 2) {
    addArrowHead(this,(Vector3 *)&local_170,(Vector3 *)&local_140,fVar17,fVar13,fVar23,0,
                 (float *)&uStack_1a0,param_1);
    addArrowHead(this,(Vector3 *)&local_180,(Vector3 *)&local_150,fVar17,fVar13,fVar23,1,
                 (float *)&local_1b0,param_1);
    addArrowHead(this,(Vector3 *)&local_190,(Vector3 *)&local_160,fVar17,fVar13,fVar23,2,
                 (float *)&local_1c0,param_1);
    if ((param_7 == 0xffffffff) || (param_7 == 2)) {
      if ((param_8 == 0x7ff) || (uVar5 = *(uint *)(this + 0x2a0) & param_8, uVar5 != 0)) {
        getPlaneSelectSquares(3,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&local_230,afStack_c8,(float *)&local_230,afStack_d4,
                    (float *)&local_230,param_8);
        puVar3 = &local_230;
        addTriangle(this,afStack_e0,(float *)&local_230,afStack_bc,(float *)&local_230,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
        uVar5 = (uint)((*(uint *)(this + 0x2a0) & param_8) != 0);
      }
      if ((param_8 == 0x7ff) || (uVar5 != 0)) {
        getPlaneSelectSquares(-3,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&local_230,afStack_c8,(float *)&local_230,afStack_d4,
                    (float *)&local_230,param_8);
        puVar3 = &local_230;
        addTriangle(this,afStack_e0,(float *)&local_230,afStack_bc,(float *)&local_230,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
      }
      if ((param_7 == 1) || (param_7 == 0xffffffff)) goto LAB_009fa800;
    }
    else if (param_7 == 1) {
LAB_009fa800:
      if ((param_8 == 0x7ff) || (uVar5 = *(uint *)(this + 0x2a0) & param_8, uVar5 != 0)) {
        getPlaneSelectSquares(2,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&local_220,afStack_c8,(float *)&local_220,afStack_d4,
                    (float *)&local_220,param_8);
        puVar3 = &local_220;
        addTriangle(this,afStack_e0,(float *)&local_220,afStack_bc,(float *)&local_220,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
        uVar5 = (uint)((*(uint *)(this + 0x2a0) & param_8) != 0);
      }
      if ((param_8 == 0x7ff) || (uVar5 != 0)) {
        getPlaneSelectSquares(-2,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&local_220,afStack_c8,(float *)&local_220,afStack_d4,
                    (float *)&local_220,param_8);
        puVar3 = &local_220;
        addTriangle(this,afStack_e0,(float *)&local_220,afStack_bc,(float *)&local_220,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
      }
    }
    if (param_7 + 1 < 2) {
      if ((param_8 == 0x7ff) || (uVar5 = *(uint *)(this + 0x2a0) & param_8, uVar5 != 0)) {
        getPlaneSelectSquares(1,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&uStack_210,afStack_c8,(float *)&uStack_210,afStack_d4,
                    (float *)&uStack_210,param_8);
        puVar3 = &uStack_210;
        addTriangle(this,afStack_e0,(float *)&uStack_210,afStack_bc,(float *)&uStack_210,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
        uVar5 = (uint)((*(uint *)(this + 0x2a0) & param_8) != 0);
      }
      if ((param_8 == 0x7ff) || (uVar5 != 0)) {
        getPlaneSelectSquares(-1,param_2 * 0.125,param_1,(Vector3 *)afStack_e0);
        addTriangle(this,afStack_e0,(float *)&uStack_210,afStack_c8,(float *)&uStack_210,afStack_d4,
                    (float *)&uStack_210,param_8);
        puVar3 = &uStack_210;
        addTriangle(this,afStack_e0,(float *)&uStack_210,afStack_bc,(float *)&uStack_210,afStack_c8,
                    (float *)puVar3,param_8);
        uVar4 = (uint)puVar3;
      }
    }
    if (param_10) {
      this[0x1f8] = (DeferredDebugRenderer)0x0;
      if (param_7 == 0) {
        iVar2 = 1;
        puVar3 = &uStack_210;
LAB_009faa3c:
        addPlaneSelect(this,iVar2,(float *)puVar3,param_2 * 0.125,param_1,param_11,param_12,param_8)
        ;
      }
      else {
        if (param_7 == 2) {
          iVar2 = 3;
          puVar3 = &local_230;
          goto LAB_009faa3c;
        }
        if (param_7 == 1) {
          iVar2 = 2;
          puVar3 = &local_220;
          goto LAB_009faa3c;
        }
      }
      this[0x1f8] = (DeferredDebugRenderer)0x1;
    }
  }
  if (((param_9 & 0xfffffffdU) == 0) && (param_3)) {
    fVar27 = fVar23 + param_2;
    uVar7 = NEON_fmadd(fVar27,*(undefined4 *)(param_1 + 8),*(float *)(param_1 + 0x18) * 0.0);
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),0,uVar7);
    fVar13 = *(float *)(param_1 + 0x38);
    uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar27 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * 0.0,
                      (float)*(undefined8 *)(param_1 + 0x30) +
                      (float)*(undefined8 *)(param_1 + 0x10) * 0.0 +
                      (float)*(undefined8 *)param_1 * fVar27 +
                      (float)*(undefined8 *)(param_1 + 0x20) * 0.0);
    local_f0 = uVar14;
    local_e8._0_4_ = fVar13 + fVar6;
    addSolidMesh(this,(Matrix4x4 *)&local_120,(float *)&uStack_1d0,
                 (float *)DeferredDebugProxyMeshUtil::s_cubeProxyVertices,
                 (ushort *)DeferredDebugProxyMeshUtil::s_cubeProxyIndices,0xc,fVar23,uVar4,false);
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 8),0,fVar27 * *(float *)(param_1 + 0x18));
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),0,uVar7);
    fVar25 = *(float *)(param_1 + 0x38);
    uVar18 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar27 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * 0.0,
                      (float)*(undefined8 *)(param_1 + 0x30) +
                      (float)*(undefined8 *)(param_1 + 0x10) * fVar27 +
                      (float)*(undefined8 *)param_1 * 0.0 +
                      (float)*(undefined8 *)(param_1 + 0x20) * 0.0);
    local_170 = uVar14;
    local_168 = fVar13 + fVar6;
    local_f0 = uVar18;
    local_e8._0_4_ = fVar25 + fVar12;
    addSolidMesh(this,(Matrix4x4 *)&local_120,(float *)&local_1e0,
                 (float *)DeferredDebugProxyMeshUtil::s_cubeProxyVertices,
                 (ushort *)DeferredDebugProxyMeshUtil::s_cubeProxyIndices,0xc,fVar23,uVar4,false);
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 8),0,*(float *)(param_1 + 0x18) * 0.0);
    fVar6 = (float)NEON_fmadd(fVar27,*(undefined4 *)(param_1 + 0x28),uVar7);
    fVar13 = *(float *)(param_1 + 0x38);
    uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20) * 0.0 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar27,
                      (float)*(undefined8 *)(param_1 + 0x30) +
                      (float)*(undefined8 *)(param_1 + 0x10) * 0.0 +
                      (float)*(undefined8 *)param_1 * 0.0 +
                      (float)*(undefined8 *)(param_1 + 0x20) * fVar27);
    local_e8 = CONCAT44(local_e8._4_4_,fVar13 + fVar6);
    local_180 = uVar18;
    local_178 = fVar25 + fVar12;
    local_f0 = uVar14;
    addSolidMesh(this,(Matrix4x4 *)&local_120,(float *)&uStack_1f0,
                 (float *)DeferredDebugProxyMeshUtil::s_cubeProxyVertices,
                 (ushort *)DeferredDebugProxyMeshUtil::s_cubeProxyIndices,0xc,fVar23,uVar4,false);
    local_190 = uVar14;
    local_188 = fVar13 + fVar6;
    addSolidMesh(this,param_1,(float *)&local_200,
                 (float *)DeferredDebugProxyMeshUtil::s_cubeProxyVertices,
                 (ushort *)DeferredDebugProxyMeshUtil::s_cubeProxyIndices,0xc,fVar23,uVar4,false);
  }
  addLine(this,&local_130,(float *)&uStack_1a0,(float *)&local_170,(float *)&uStack_1a0,param_8);
  addLine(this,&local_130,(float *)&local_1b0,(float *)&local_180,(float *)&local_1b0,param_8);
  addLine(this,&local_130,(float *)&local_1c0,(float *)&local_190,(float *)&local_1c0,param_8);
LAB_009fac6c:
  if (*(long *)(lVar1 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


