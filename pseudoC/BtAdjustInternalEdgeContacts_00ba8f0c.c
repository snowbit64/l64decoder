// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BtAdjustInternalEdgeContacts
// Entry Point: 00ba8f0c
// Size: 3696 bytes
// Signature: undefined __cdecl BtAdjustInternalEdgeContacts(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, int param_4, int param_5, int param_6)


/* BtAdjustInternalEdgeContacts(btManifoldPoint&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, int, int, int) */

void BtAdjustInternalEdgeContacts
               (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,
               btCollisionObjectWrapper *param_3,int param_4,int param_5,int param_6)

{
  btVector3 *pbVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  short *psVar10;
  long lVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  undefined8 local_160;
  float local_158;
  undefined4 local_154;
  undefined8 local_150;
  float local_148;
  undefined4 local_144;
  undefined8 local_140;
  float local_138;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  undefined8 local_120;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 200);
  if (*(int *)(lVar6 + 8) != 0x15) {
    if (*(int *)(lVar6 + 8) != 0x16) goto LAB_00ba99d0;
    lVar6 = *(long *)(lVar6 + 0x30);
  }
  lVar6 = *(long *)(lVar6 + 0x50);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x20) <= param_4)) goto LAB_00ba99d0;
  iVar14 = *(int *)(*(long *)(lVar6 + 0x30) + (long)param_4 * 4) + param_5;
  if ((*(int *)(lVar6 + 0x24) <= iVar14) ||
     ((((int)((long)param_4 + 1) < *(int *)(lVar6 + 0x20) &&
       (*(int *)(*(long *)(lVar6 + 0x30) + ((long)param_4 + 1) * 4) <= iVar14)) ||
      (lVar11 = *(long *)(lVar6 + 0x28), lVar11 == 0)))) goto LAB_00ba99d0;
  pbVar2 = (byte *)(lVar11 + (long)iVar14 * 8);
  if ((*pbVar2 >> 6 & 1) == 0) goto LAB_00ba99d0;
  plVar9 = *(long **)(param_2 + 8);
  fVar17 = 1.0;
  if ((param_6 & 1U) != 0) {
    fVar17 = -1.0;
  }
  (**(code **)(*plVar9 + 0xd8))(plVar9,0,&local_b0);
  (**(code **)(*plVar9 + 0xd8))(plVar9,1,&local_c0);
  (**(code **)(*plVar9 + 0xd8))(plVar9,2,&local_d0);
  fVar16 = *(float *)(plVar9 + 0xc) - *(float *)(plVar9 + 10);
  fVar18 = *(float *)((long)plVar9 + 100) - *(float *)((long)plVar9 + 0x54);
  fVar22 = *(float *)((long)plVar9 + 0x74) - *(float *)((long)plVar9 + 0x54);
  fVar24 = *(float *)(plVar9 + 0xd) - *(float *)(plVar9 + 0xb);
  fVar28 = *(float *)(plVar9 + 0xf) - *(float *)(plVar9 + 0xb);
  pbVar1 = (btVector3 *)(param_1 + 0x10);
  local_d4 = 0;
  fVar20 = *(float *)(plVar9 + 0xe) - *(float *)(plVar9 + 10);
  fStack_dc = (float)NEON_fmadd(fVar24,fVar20,fVar28 * -fVar16);
  local_e0 = (float)NEON_fmadd(fVar18,fVar28,fVar22 * -fVar24);
  local_d8 = (float)NEON_fmadd(fVar16,fVar22,fVar20 * -fVar18);
  uVar21 = NEON_fmadd(local_e0,local_e0,fStack_dc * fStack_dc);
  fVar16 = (float)NEON_fmadd(local_d8,local_d8,uVar21);
  fVar16 = 1.0 / SQRT(fVar16);
  local_e0 = local_e0 * fVar16;
  fStack_dc = fStack_dc * fVar16;
  local_d8 = local_d8 * fVar16;
  btNearestPointInLineSegment
            (pbVar1,(btVector3 *)&local_b0,(btVector3 *)&local_c0,(btVector3 *)&local_f0);
  puVar7 = *(undefined8 **)(param_2 + 0x18);
  fVar22 = *(float *)(param_1 + 0x40);
  fVar20 = *(float *)(param_1 + 0x44);
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  local_100 = *(undefined8 *)(param_1 + 0x10);
  fVar24 = *(float *)(param_1 + 0x48);
  local_104 = 0;
  fVar16 = (float)puVar7[2] * fVar20 + (float)*puVar7 * fVar22 + (float)puVar7[4] * fVar24;
  fVar18 = (float)((ulong)puVar7[2] >> 0x20) * fVar20 + (float)((ulong)*puVar7 >> 0x20) * fVar22 +
           (float)((ulong)puVar7[4] >> 0x20) * fVar24;
  uVar21 = NEON_fmadd(*(undefined4 *)(puVar7 + 1),fVar22,*(float *)(puVar7 + 3) * fVar20);
  local_108 = (float)NEON_fmadd(*(undefined4 *)(puVar7 + 5),fVar24,uVar21);
  fVar20 = (float)NEON_fmadd(local_108,local_108,fVar18 * fVar18 + fVar16 * fVar16);
  fVar20 = 1.0 / SQRT(fVar20);
  local_110 = CONCAT44(fVar18 * fVar20,fVar16 * fVar20);
  local_108 = local_108 * fVar20;
  psVar10 = (short *)(pbVar2 + 2);
  fVar16 = *(float *)(lVar6 + 0x18);
  if (fVar16 <= ABS(((float)(int)*psVar10 / 32767.0) * 6.283185)) {
    iVar13 = -1;
    fVar18 = 1e+18;
  }
  else {
    btNearestPointInLineSegment
              (pbVar1,(btVector3 *)&local_b0,(btVector3 *)&local_c0,(btVector3 *)&local_120);
    uVar21 = NEON_fmadd((float)local_100 - (float)local_120,(float)local_100 - (float)local_120,
                        (local_100._4_4_ - local_120._4_4_) * (local_100._4_4_ - local_120._4_4_));
    fVar16 = (float)NEON_fmadd((float)uStack_f8 - local_118,(float)uStack_f8 - local_118,uVar21);
    fVar16 = SQRT(fVar16);
    fVar18 = fVar16;
    if (1e+18 <= fVar16) {
      fVar18 = 1e+18;
    }
    iVar13 = -(uint)(1e+18 <= fVar16);
    fVar16 = *(float *)(lVar6 + 0x18);
  }
  lVar11 = lVar11 + (long)iVar14 * 8;
  psVar12 = (short *)(lVar11 + 4);
  if (ABS(((float)(int)*psVar12 / 32767.0) * 6.283185) < fVar16) {
    btNearestPointInLineSegment
              (pbVar1,(btVector3 *)&local_c0,(btVector3 *)&local_d0,(btVector3 *)&local_120);
    uVar21 = NEON_fmadd((float)local_100 - (float)local_120,(float)local_100 - (float)local_120,
                        (local_100._4_4_ - local_120._4_4_) * (local_100._4_4_ - local_120._4_4_));
    fVar16 = (float)NEON_fmadd((float)uStack_f8 - local_118,(float)uStack_f8 - local_118,uVar21);
    if (SQRT(fVar16) < fVar18) {
      iVar13 = 1;
      fVar18 = SQRT(fVar16);
    }
    fVar16 = *(float *)(lVar6 + 0x18);
  }
  psVar15 = (short *)(lVar11 + 6);
  iVar14 = iVar13;
  if (ABS(((float)(int)*psVar15 / 32767.0) * 6.283185) < fVar16) {
    btNearestPointInLineSegment
              (pbVar1,(btVector3 *)&local_d0,(btVector3 *)&local_b0,(btVector3 *)&local_120);
    uVar21 = NEON_fmadd((float)local_100 - (float)local_120,(float)local_100 - (float)local_120,
                        (local_100._4_4_ - local_120._4_4_) * (local_100._4_4_ - local_120._4_4_));
    fVar20 = (float)NEON_fmadd((float)uStack_f8 - local_118,(float)uStack_f8 - local_118,uVar21);
    fVar16 = *(float *)(lVar6 + 0x18);
    iVar14 = 2;
    if (fVar18 <= SQRT(fVar20)) {
      iVar14 = iVar13;
    }
  }
  iVar13 = 0;
  if (fVar16 <= ABS(((float)(int)*psVar10 / 32767.0) * 6.283185)) {
    bVar4 = false;
  }
  else if (iVar14 == 0) {
    bVar4 = false;
    uVar21 = NEON_fmadd((float)local_100 - local_f0,(float)local_100 - local_f0,
                        (local_100._4_4_ - fStack_ec) * (local_100._4_4_ - fStack_ec));
    fVar16 = (float)NEON_fmadd((float)uStack_f8 - local_e8,(float)uStack_f8 - local_e8,uVar21);
    if (SQRT(fVar16) < *(float *)(lVar6 + 0x14)) {
      local_114 = 0;
      fVar18 = (float)local_b0 - (float)local_c0;
      fVar20 = (float)((ulong)local_b0 >> 0x20) - (float)((ulong)local_c0 >> 0x20);
      local_120 = CONCAT44(fVar20,fVar18);
      fVar22 = local_a8 - local_b8;
      fVar16 = ((float)(int)*psVar10 / 32767.0) * 6.283185;
      local_118 = fVar22;
      if (fVar16 == 0.0) {
LAB_00ba94a8:
        iVar13 = 1;
      }
      else {
        fVar28 = (float)NEON_fmadd(fVar22,fVar22,fVar20 * fVar20 + fVar18 * fVar18);
        fVar24 = -1.0;
        if ((*pbVar2 & 1) != 0) {
          fVar24 = 1.0;
        }
        fVar32 = local_e0 * fVar24;
        fVar33 = fStack_dc * fVar24;
        fVar34 = fVar24 * local_d8;
        sincosf(fVar16 * 0.5,&fStack_164,&local_168);
        fStack_164 = fStack_164 / SQRT(fVar28);
        uVar23 = CONCAT44(fVar20 * fStack_164,fVar18 * fStack_164);
        local_128 = fVar22 * fStack_164;
        fStack_124 = local_168;
        fVar22 = local_168;
        local_130 = uVar23;
        fVar16 = (float)quatRotate((btQuaternion *)&local_130,(btVector3 *)&local_e0);
        fVar20 = fVar22;
        fVar18 = (float)uVar23;
        if ((*pbVar2 & 8) != 0) {
          fVar20 = -fVar22;
          fVar16 = -fVar16;
          fVar18 = -(float)uVar23;
        }
        uVar21 = NEON_fmadd((undefined4)local_110,fVar32,fVar33 * local_110._4_4_);
        fVar28 = (float)NEON_fmadd(local_108,fVar34,uVar21);
        if (fVar28 < *(float *)(lVar6 + 8)) {
          fVar22 = fVar24 * fVar16;
          uVar21 = NEON_fmadd((undefined4)local_110,fVar22,local_110._4_4_ * fVar24 * fVar18);
          fVar16 = (float)NEON_fmadd(local_108,fVar24 * fVar20,uVar21);
          if (fVar16 < *(float *)(lVar6 + 8)) goto LAB_00ba94a8;
        }
        local_144 = 0;
        local_150 = CONCAT44(fStack_dc * fVar24,local_e0 * fVar24);
        local_148 = fVar24 * local_d8;
        fVar16 = 6.283185;
        fVar18 = local_110._4_4_;
        uVar5 = btClampNormal((btVector3 *)&local_120,(btVector3 *)&local_150,
                              (btVector3 *)&local_110,((float)(int)*psVar10 / 32767.0) * 6.283185,
                              (btVector3 *)&local_140);
        if ((uVar5 & 1) != 0) {
          if (((uint)param_6 >> 2 & 1) == 0) {
            fVar22 = fVar17 * local_d8;
            uVar21 = NEON_fmadd((float)local_140,fVar17 * local_e0,
                                fVar17 * fStack_dc * local_140._4_4_);
            fVar20 = (float)NEON_fmadd(local_138,fVar22,uVar21);
            fVar16 = local_138;
            fVar18 = (float)local_140;
            if (fVar20 <= 0.0) goto LAB_00ba9b00;
          }
          fVar20 = (float)operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_140);
          fVar24 = *(float *)(param_1 + 0x50);
          *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x30) - fVar20 * fVar24;
          *(float *)(param_1 + 0x40) = fVar20;
          *(float *)(param_1 + 0x44) = fVar16;
          *(float *)(param_1 + 0x48) = fVar22;
          *(float *)(param_1 + 0x4c) = fVar18;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                            fVar22 * fVar24,(float)*(undefined8 *)(param_1 + 0x34) - fVar16 * fVar24
                           );
          *(undefined8 *)(param_1 + 0x24) = uVar23;
          uVar21 = btTransform::invXform
                             (*(btTransform **)(param_2 + 0x18),(btVector3 *)(param_1 + 0x20));
          *(undefined4 *)(param_1 + 0x10) = uVar21;
          *(int *)(param_1 + 0x14) = (int)uVar23;
          *(float *)(param_1 + 0x18) = fVar22;
          *(float *)(param_1 + 0x1c) = fVar18;
        }
LAB_00ba9b00:
        iVar13 = 0;
      }
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  btNearestPointInLineSegment
            ((btVector3 *)&local_100,(btVector3 *)&local_c0,(btVector3 *)&local_d0,
             (btVector3 *)&local_f0);
  if ((ABS(((float)(int)*psVar12 / 32767.0) * 6.283185) < *(float *)(lVar6 + 0x18)) && (iVar14 == 1)
     ) {
    uVar21 = NEON_fmadd((float)local_100 - local_f0,(float)local_100 - local_f0,
                        (local_100._4_4_ - fStack_ec) * (local_100._4_4_ - fStack_ec));
    fVar16 = (float)NEON_fmadd((float)uStack_f8 - local_e8,(float)uStack_f8 - local_e8,uVar21);
    if (SQRT(fVar16) < *(float *)(lVar6 + 0x14)) {
      local_114 = 0;
      fVar18 = (float)local_c0 - (float)local_d0;
      fVar20 = (float)((ulong)local_c0 >> 0x20) - (float)((ulong)local_d0 >> 0x20);
      local_120 = CONCAT44(fVar20,fVar18);
      fVar22 = local_b8 - local_c8;
      fVar16 = ((float)(int)*psVar12 / 32767.0) * 6.283185;
      local_118 = fVar22;
      if (fVar16 == 0.0) {
LAB_00ba9688:
        iVar13 = iVar13 + 1;
      }
      else {
        fVar28 = (float)NEON_fmadd(fVar22,fVar22,fVar20 * fVar20 + fVar18 * fVar18);
        fVar24 = -1.0;
        if ((*pbVar2 & 2) != 0) {
          fVar24 = 1.0;
        }
        fVar32 = local_e0 * fVar24;
        fVar33 = fStack_dc * fVar24;
        fVar34 = fVar24 * local_d8;
        sincosf(fVar16 * 0.5,&fStack_16c,&local_170);
        fStack_16c = fStack_16c / SQRT(fVar28);
        uVar23 = CONCAT44(fVar20 * fStack_16c,fVar18 * fStack_16c);
        local_128 = fVar22 * fStack_16c;
        fStack_124 = local_170;
        local_130 = uVar23;
        fVar18 = (float)quatRotate((btQuaternion *)&local_130,(btVector3 *)&local_e0);
        fVar16 = (float)uVar23;
        if ((*pbVar2 & 0x10) != 0) {
          local_170 = -local_170;
          fVar16 = -(float)uVar23;
          fVar18 = -fVar18;
        }
        uVar21 = NEON_fmadd((undefined4)local_110,fVar32,fVar33 * local_110._4_4_);
        fVar20 = (float)NEON_fmadd(local_108,fVar34,uVar21);
        if (fVar20 < *(float *)(lVar6 + 8)) {
          uVar21 = NEON_fmadd((undefined4)local_110,fVar24 * fVar18,
                              local_110._4_4_ * fVar24 * fVar16);
          fVar16 = (float)NEON_fmadd(local_108,fVar24 * local_170,uVar21);
          if (fVar16 < *(float *)(lVar6 + 8)) goto LAB_00ba9688;
        }
        puVar7 = *(undefined8 **)(param_2 + 0x18);
        fVar20 = *(float *)(param_1 + 0x40);
        fVar16 = *(float *)(param_1 + 0x44);
        fVar22 = *(float *)(param_1 + 0x48);
        local_134 = 0;
        local_154 = 0;
        uVar21 = NEON_fmadd(*(undefined4 *)(puVar7 + 1),fVar20,*(float *)(puVar7 + 3) * fVar16);
        fVar18 = *(float *)(puVar7 + 5);
        uVar23 = CONCAT44(fStack_dc * fVar24,local_e0 * fVar24);
        local_158 = fVar24 * local_d8;
        local_140 = CONCAT44((float)((ulong)puVar7[2] >> 0x20) * fVar16 +
                             (float)((ulong)*puVar7 >> 0x20) * fVar20 +
                             (float)((ulong)puVar7[4] >> 0x20) * fVar22,
                             (float)puVar7[2] * fVar16 + (float)*puVar7 * fVar20 +
                             (float)puVar7[4] * fVar22);
        local_138 = (float)NEON_fmadd(fVar18,fVar22,uVar21);
        fVar16 = 6.283185;
        local_160 = uVar23;
        uVar5 = btClampNormal((btVector3 *)&local_120,(btVector3 *)&local_160,
                              (btVector3 *)&local_140,((float)(int)*psVar12 / 32767.0) * 6.283185,
                              (btVector3 *)&local_150);
        if ((uVar5 & 1) != 0) {
          uVar21 = (int)uVar23;
          if (((uint)param_6 >> 2 & 1) == 0) {
            fVar18 = fVar17 * local_d8;
            uVar21 = NEON_fmadd((undefined4)local_150,fVar17 * local_e0,
                                fVar17 * fStack_dc * local_150._4_4_);
            fVar20 = (float)NEON_fmadd(local_148,fVar18,uVar21);
            fVar16 = local_148;
            uVar21 = (undefined4)local_150;
            if (fVar20 <= 0.0) goto LAB_00ba968c;
          }
          fVar20 = (float)operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_150);
          fVar22 = *(float *)(param_1 + 0x50);
          *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x30) - fVar20 * fVar22;
          *(float *)(param_1 + 0x40) = fVar20;
          *(float *)(param_1 + 0x44) = fVar16;
          *(float *)(param_1 + 0x48) = fVar18;
          *(undefined4 *)(param_1 + 0x4c) = uVar21;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                            fVar18 * fVar22,(float)*(undefined8 *)(param_1 + 0x34) - fVar16 * fVar22
                           );
          *(undefined8 *)(param_1 + 0x24) = uVar23;
          uVar19 = btTransform::invXform
                             (*(btTransform **)(param_2 + 0x18),(btVector3 *)(param_1 + 0x20));
          *(undefined4 *)(param_1 + 0x10) = uVar19;
          *(int *)(param_1 + 0x14) = (int)uVar23;
          *(float *)(param_1 + 0x18) = fVar18;
          *(undefined4 *)(param_1 + 0x1c) = uVar21;
        }
      }
LAB_00ba968c:
      bVar4 = true;
    }
  }
  btNearestPointInLineSegment
            ((btVector3 *)&local_100,(btVector3 *)&local_d0,(btVector3 *)&local_b0,
             (btVector3 *)&local_f0);
  if ((ABS(((float)(int)*psVar15 / 32767.0) * 6.283185) < *(float *)(lVar6 + 0x18)) && (iVar14 == 2)
     ) {
    uVar21 = NEON_fmadd((float)local_100 - local_f0,(float)local_100 - local_f0,
                        (local_100._4_4_ - fStack_ec) * (local_100._4_4_ - fStack_ec));
    fVar16 = (float)NEON_fmadd((float)uStack_f8 - local_e8,(float)uStack_f8 - local_e8,uVar21);
    if (SQRT(fVar16) < *(float *)(lVar6 + 0x14)) {
      local_114 = 0;
      fVar18 = (float)local_d0 - (float)local_b0;
      fVar20 = (float)((ulong)local_d0 >> 0x20) - (float)((ulong)local_b0 >> 0x20);
      local_120 = CONCAT44(fVar20,fVar18);
      fVar22 = local_c8 - local_a8;
      fVar16 = ((float)(int)*psVar15 / 32767.0) * 6.283185;
      local_118 = fVar22;
      if (fVar16 == 0.0) {
LAB_00ba985c:
        iVar13 = iVar13 + 1;
      }
      else {
        fVar28 = (float)NEON_fmadd(fVar22,fVar22,fVar20 * fVar20 + fVar18 * fVar18);
        fVar24 = -1.0;
        if ((*pbVar2 & 4) != 0) {
          fVar24 = 1.0;
        }
        fVar32 = local_e0 * fVar24;
        fVar33 = fStack_dc * fVar24;
        fVar34 = fVar24 * local_d8;
        sincosf(fVar16 * 0.5,&fStack_174,&local_178);
        fStack_174 = fStack_174 / SQRT(fVar28);
        uVar23 = CONCAT44(fVar20 * fStack_174,fVar18 * fStack_174);
        local_128 = fVar22 * fStack_174;
        fStack_124 = local_178;
        local_130 = uVar23;
        fVar18 = (float)quatRotate((btQuaternion *)&local_130,(btVector3 *)&local_e0);
        fVar16 = (float)uVar23;
        if ((*pbVar2 & 0x20) != 0) {
          local_178 = -local_178;
          fVar16 = -(float)uVar23;
          fVar18 = -fVar18;
        }
        uVar21 = NEON_fmadd((undefined4)local_110,fVar32,fVar33 * local_110._4_4_);
        fVar20 = (float)NEON_fmadd(local_108,fVar34,uVar21);
        if (fVar20 < *(float *)(lVar6 + 8)) {
          uVar21 = NEON_fmadd((undefined4)local_110,fVar24 * fVar18,
                              local_110._4_4_ * fVar24 * fVar16);
          fVar16 = (float)NEON_fmadd(local_108,fVar24 * local_178,uVar21);
          if (fVar16 < *(float *)(lVar6 + 8)) goto LAB_00ba985c;
        }
        puVar7 = *(undefined8 **)(param_2 + 0x18);
        fVar20 = *(float *)(param_1 + 0x40);
        fVar16 = *(float *)(param_1 + 0x44);
        fVar22 = *(float *)(param_1 + 0x48);
        local_134 = 0;
        local_154 = 0;
        uVar21 = NEON_fmadd(*(undefined4 *)(puVar7 + 1),fVar20,*(float *)(puVar7 + 3) * fVar16);
        fVar18 = *(float *)(puVar7 + 5);
        uVar23 = CONCAT44(fStack_dc * fVar24,local_e0 * fVar24);
        local_158 = fVar24 * local_d8;
        local_140 = CONCAT44((float)((ulong)puVar7[2] >> 0x20) * fVar16 +
                             (float)((ulong)*puVar7 >> 0x20) * fVar20 +
                             (float)((ulong)puVar7[4] >> 0x20) * fVar22,
                             (float)puVar7[2] * fVar16 + (float)*puVar7 * fVar20 +
                             (float)puVar7[4] * fVar22);
        local_138 = (float)NEON_fmadd(fVar18,fVar22,uVar21);
        fVar16 = 6.283185;
        local_160 = uVar23;
        uVar5 = btClampNormal((btVector3 *)&local_120,(btVector3 *)&local_160,
                              (btVector3 *)&local_140,((float)(int)*psVar15 / 32767.0) * 6.283185,
                              (btVector3 *)&local_150);
        if ((uVar5 & 1) != 0) {
          uVar21 = (int)uVar23;
          if (((uint)param_6 >> 2 & 1) == 0) {
            fVar18 = fVar17 * local_d8;
            uVar21 = NEON_fmadd((undefined4)local_150,fVar17 * local_e0,
                                fVar17 * fStack_dc * local_150._4_4_);
            fVar20 = (float)NEON_fmadd(local_148,fVar18,uVar21);
            fVar16 = local_148;
            uVar21 = (undefined4)local_150;
            if (fVar20 <= 0.0) goto LAB_00ba9860;
          }
          fVar20 = (float)operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_150);
          fVar22 = *(float *)(param_1 + 0x50);
          *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x30) - fVar20 * fVar22;
          *(float *)(param_1 + 0x40) = fVar20;
          *(float *)(param_1 + 0x44) = fVar16;
          *(float *)(param_1 + 0x48) = fVar18;
          *(undefined4 *)(param_1 + 0x4c) = uVar21;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                            fVar18 * fVar22,(float)*(undefined8 *)(param_1 + 0x34) - fVar16 * fVar22
                           );
          *(undefined8 *)(param_1 + 0x24) = uVar23;
          uVar19 = btTransform::invXform
                             (*(btTransform **)(param_2 + 0x18),(btVector3 *)(param_1 + 0x20));
          *(undefined4 *)(param_1 + 0x10) = uVar19;
          *(int *)(param_1 + 0x14) = (int)uVar23;
          *(float *)(param_1 + 0x18) = fVar18;
          *(undefined4 *)(param_1 + 0x1c) = uVar21;
        }
      }
LAB_00ba9860:
      bVar4 = true;
    }
  }
  if ((bVar4) && (iVar13 != 0)) {
    if (((uint)param_6 >> 1 & 1) == 0) {
      local_114 = 0;
      fVar16 = fVar17 * local_e0;
      local_118 = fVar17 * local_d8;
      local_120 = CONCAT44(fVar17 * fStack_dc,fVar16);
      uVar21 = NEON_fmadd(fVar16,(undefined4)local_110,fVar17 * fStack_dc * local_110._4_4_);
      fVar18 = (float)NEON_fmadd(local_118,local_108,uVar21);
      if (fVar18 < 0.0) goto LAB_00ba99d0;
      fVar20 = local_108;
      fVar17 = (float)operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_120);
      *(float *)(param_1 + 0x40) = fVar17;
      *(float *)(param_1 + 0x44) = fVar16;
      *(float *)(param_1 + 0x48) = fVar18;
      *(float *)(param_1 + 0x4c) = fVar20;
    }
    else {
      uVar21 = NEON_fmadd(local_e0,(undefined4)local_110,fStack_dc * local_110._4_4_);
      fVar17 = (float)NEON_fmadd(local_d8,local_108,uVar21);
      if (fVar17 < 0.0) {
        local_e0 = -local_e0;
        fStack_dc = -fStack_dc;
        local_d8 = -local_d8;
      }
      puVar8 = *(undefined4 **)(param_2 + 0x18);
      uVar19 = NEON_fmadd(*puVar8,local_e0,(float)puVar8[1] * fStack_dc);
      uVar30 = puVar8[2];
      uVar25 = NEON_fmadd(puVar8[4],local_e0,fStack_dc * (float)puVar8[5]);
      uVar29 = NEON_fmadd(puVar8[8],local_e0,fStack_dc * (float)puVar8[9]);
      uVar21 = puVar8[6];
      uVar31 = puVar8[10];
      *(undefined4 *)(param_1 + 0x4c) = 0;
      fVar17 = (float)NEON_fmadd(uVar30,local_d8,uVar19);
      fVar16 = (float)NEON_fmadd(uVar21,local_d8,uVar25);
      fVar18 = (float)NEON_fmadd(uVar31,local_d8,uVar29);
      *(float *)(param_1 + 0x40) = fVar17;
      *(float *)(param_1 + 0x44) = fVar16;
      *(float *)(param_1 + 0x48) = fVar18;
    }
    fVar20 = *(float *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fVar17 = *(float *)(param_1 + 0x30) - fVar17 * fVar20;
    fVar16 = *(float *)(param_1 + 0x34) - fVar20 * fVar16;
    fVar18 = *(float *)(param_1 + 0x38) - fVar20 * fVar18;
    *(float *)(param_1 + 0x20) = fVar17;
    *(float *)(param_1 + 0x24) = fVar16;
    *(float *)(param_1 + 0x28) = fVar18;
    puVar7 = *(undefined8 **)(param_2 + 0x18);
    fVar16 = fVar16 - *(float *)((long)puVar7 + 0x34);
    uVar23 = puVar7[2];
    fVar17 = fVar17 - *(float *)(puVar7 + 6);
    uVar26 = *puVar7;
    fVar18 = fVar18 - *(float *)(puVar7 + 7);
    uVar21 = NEON_fmadd(*(undefined4 *)(puVar7 + 1),fVar17,fVar16 * *(float *)(puVar7 + 3));
    uVar27 = puVar7[4];
    uVar19 = *(undefined4 *)(puVar7 + 5);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar21 = NEON_fmadd(uVar19,fVar18,uVar21);
    *(ulong *)(param_1 + 0x10) =
         CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar16 + (float)((ulong)uVar26 >> 0x20) * fVar17
                  + (float)((ulong)uVar27 >> 0x20) * fVar18,
                  (float)uVar23 * fVar16 + (float)uVar26 * fVar17 + (float)uVar27 * fVar18);
    *(undefined4 *)(param_1 + 0x18) = uVar21;
  }
LAB_00ba99d0:
  if (*(long *)(lVar3 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


