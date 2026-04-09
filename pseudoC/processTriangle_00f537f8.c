// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f537f8
// Size: 2656 bytes
// Signature: undefined __thiscall processTriangle(btConnectivityProcessor * this, btVector3 * param_1, int param_2, int param_3)


/* btConnectivityProcessor::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
btConnectivityProcessor::processTriangle
          (btConnectivityProcessor *this,btVector3 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
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
  float fVar43;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  iVar10 = *(int *)(this + 8);
  uVar7 = *(uint *)(this + 0xc);
  if ((iVar10 != param_2) || (uVar7 != param_3)) {
    fVar37 = *(float *)(param_1 + 0x10);
    fVar38 = *(float *)(param_1 + 0x14);
    fVar41 = *(float *)param_1;
    fVar40 = *(float *)(param_1 + 4);
    fVar32 = *(float *)(param_1 + 0x20);
    fVar34 = *(float *)(param_1 + 0x24);
    fVar39 = *(float *)(param_1 + 0x18);
    fVar42 = *(float *)(param_1 + 8);
    fVar35 = *(float *)(param_1 + 0x28);
    lVar9 = *(long *)(this + 0x18);
    local_90 = 0xffffffff;
    local_a0 = -1;
    fVar36 = *(float *)(lVar9 + 0x90);
    local_98 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    fVar24 = (float)NEON_fnmsub(fVar34 - fVar40,fVar37 - fVar41,
                                (fVar32 - fVar41) * (fVar38 - fVar40));
    uVar17 = NEON_fnmsub(fVar35 - fVar42,fVar38 - fVar40,(fVar34 - fVar40) * (fVar39 - fVar42));
    uVar19 = NEON_fnmsub(fVar32 - fVar41,fVar39 - fVar42,(fVar35 - fVar42) * (fVar37 - fVar41));
    uVar17 = NEON_fmadd(uVar17,uVar17,fVar24 * fVar24);
    fVar24 = (float)NEON_fmadd(uVar19,uVar19,uVar17);
    if (fVar36 <= fVar24) {
      pfVar8 = *(float **)(this + 0x10);
      fVar24 = pfVar8[4];
      fVar23 = pfVar8[5];
      fVar20 = *pfVar8;
      fVar22 = pfVar8[1];
      fVar30 = pfVar8[8];
      fVar29 = pfVar8[9];
      fVar28 = pfVar8[6];
      fVar25 = pfVar8[2];
      fVar31 = pfVar8[10];
      fVar43 = (float)NEON_fnmsub(fVar29 - fVar22,fVar24 - fVar20,
                                  (fVar30 - fVar20) * (fVar23 - fVar22));
      uVar17 = NEON_fnmsub(fVar31 - fVar25,fVar23 - fVar22,(fVar29 - fVar22) * (fVar28 - fVar25));
      uVar19 = NEON_fnmsub(fVar30 - fVar20,fVar28 - fVar25,(fVar31 - fVar25) * (fVar24 - fVar20));
      uVar17 = NEON_fmadd(uVar17,uVar17,fVar43 * fVar43);
      fVar43 = (float)NEON_fmadd(uVar19,uVar19,uVar17);
      if (fVar36 <= fVar43) {
        uVar17 = NEON_fmadd(fVar22 - fVar40,fVar22 - fVar40,(fVar20 - fVar41) * (fVar20 - fVar41));
        fVar43 = (float)NEON_fmadd(fVar25 - fVar42,fVar25 - fVar42,uVar17);
        if (fVar43 < fVar36) {
          local_98 = 0xffffffff00000000;
          local_a8 = 0xffffffff00000000;
        }
        uVar12 = (uint)(fVar43 < fVar36);
        uVar17 = NEON_fmadd(fVar22 - fVar38,fVar22 - fVar38,(fVar20 - fVar37) * (fVar20 - fVar37));
        fVar43 = (float)NEON_fmadd(fVar25 - fVar39,fVar25 - fVar39,uVar17);
        if (fVar43 < fVar36) {
          uVar13 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          *(undefined4 *)((ulong)&local_98 | uVar13 << 2) = 0;
          *(undefined4 *)((ulong)&local_a8 | uVar13 << 2) = 1;
        }
        uVar17 = NEON_fmadd(fVar22 - fVar34,fVar22 - fVar34,(fVar20 - fVar32) * (fVar20 - fVar32));
        fVar43 = (float)NEON_fmadd(fVar25 - fVar35,fVar25 - fVar35,uVar17);
        if (fVar43 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 0;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 2;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar23 - fVar40,fVar23 - fVar40,(fVar24 - fVar41) * (fVar24 - fVar41));
        fVar43 = (float)NEON_fmadd(fVar28 - fVar42,fVar28 - fVar42,uVar17);
        if (fVar43 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 1;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 0;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar23 - fVar38,fVar23 - fVar38,(fVar24 - fVar37) * (fVar24 - fVar37));
        fVar43 = (float)NEON_fmadd(fVar28 - fVar39,fVar28 - fVar39,uVar17);
        if (fVar43 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 1;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 1;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar23 - fVar34,fVar23 - fVar34,(fVar24 - fVar32) * (fVar24 - fVar32));
        fVar43 = (float)NEON_fmadd(fVar28 - fVar35,fVar28 - fVar35,uVar17);
        if (fVar43 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 1;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 2;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar29 - fVar40,fVar29 - fVar40,(fVar30 - fVar41) * (fVar30 - fVar41));
        fVar40 = (float)NEON_fmadd(fVar31 - fVar42,fVar31 - fVar42,uVar17);
        if (fVar40 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 2;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 0;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar29 - fVar38,fVar29 - fVar38,(fVar30 - fVar37) * (fVar30 - fVar37));
        fVar37 = (float)NEON_fmadd(fVar31 - fVar39,fVar31 - fVar39,uVar17);
        if (fVar37 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 2;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 1;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        uVar17 = NEON_fmadd(fVar29 - fVar34,fVar29 - fVar34,(fVar30 - fVar32) * (fVar30 - fVar32));
        fVar32 = (float)NEON_fmadd(fVar31 - fVar35,fVar31 - fVar35,uVar17);
        if (fVar32 < fVar36) {
          *(undefined4 *)((long)&local_98 + (ulong)uVar12 * 4) = 2;
          *(undefined4 *)((long)&local_a8 + (ulong)uVar12 * 4) = 2;
          if (1 < uVar12) goto LAB_00f53924;
          uVar12 = uVar12 + 1;
        }
        if (uVar12 == 2) {
          uVar13 = local_98 & 0xffffffff;
          iVar16 = local_98._4_4_;
          if (((int)local_98 == 0) && (local_98._4_4_ == 2)) {
            iVar16 = 0;
            uVar13 = 2;
            local_a8 = NEON_rev64(local_a8,4);
            local_98 = 2;
          }
          fVar32 = (float)(uVar7 | iVar10 << 0x15);
          uVar7 = (int)fVar32 + (uVar7 << 0xf ^ 0xffffffff);
          uVar7 = (uVar7 ^ (int)uVar7 >> 10) * 9;
          uVar7 = uVar7 ^ (int)uVar7 >> 6;
          uVar7 = uVar7 + (uVar7 << 0xb ^ 0xffffffff);
          uVar7 = uVar7 ^ (int)uVar7 >> 0x10;
          uVar12 = *(int *)(lVar9 + 0x50) - 1U & uVar7;
          if ((uVar12 < *(uint *)(lVar9 + 0xc)) &&
             (iVar10 = *(int *)(*(long *)(lVar9 + 0x18) + (long)(int)uVar12 * 4), iVar10 != -1)) {
            do {
              if (fVar32 == *(float *)(*(long *)(lVar9 + 0x78) + (long)iVar10 * 4)) {
                if (*(long *)(lVar9 + 0x58) != 0) {
                  puVar15 = (uint *)(*(long *)(lVar9 + 0x58) + (long)iVar10 * 0x10);
                  goto LAB_00f53d34;
                }
                break;
              }
              iVar10 = *(int *)(*(long *)(lVar9 + 0x38) + (long)iVar10 * 4);
            } while (iVar10 != -1);
          }
          local_c0 = 0.0;
          uStack_b4 = 0x40c90fdb;
          fStack_bc = 6.283185;
          fStack_b8 = 6.283185;
          local_d0 = fVar32;
          btHashMap<btHashInt,btTriangleInfo>::insert
                    ((btHashMap<btHashInt,btTriangleInfo> *)(lVar9 + 8),(btHashInt *)&local_d0,
                     (btTriangleInfo *)&local_c0);
          lVar9 = *(long *)(this + 0x18);
          uVar7 = *(int *)(lVar9 + 0x50) - 1U & uVar7;
          if ((uVar7 < *(uint *)(lVar9 + 0xc)) &&
             (iVar10 = *(int *)(*(long *)(lVar9 + 0x18) + (long)(int)uVar7 * 4), iVar10 != -1)) {
            do {
              if (fVar32 == *(float *)(*(long *)(lVar9 + 0x78) + (long)iVar10 * 4)) {
                puVar15 = (uint *)(*(long *)(lVar9 + 0x58) + (long)iVar10 * 0x10);
                goto LAB_00f53d18;
              }
              iVar10 = *(int *)(*(long *)(lVar9 + 0x38) + (long)iVar10 * 4);
            } while (iVar10 != -1);
          }
          puVar15 = (uint *)0x0;
LAB_00f53d18:
          pfVar8 = *(float **)(this + 0x10);
          fVar20 = *pfVar8;
          fVar22 = pfVar8[1];
          fVar24 = pfVar8[4];
          fVar23 = pfVar8[5];
          fVar30 = pfVar8[8];
          fVar29 = pfVar8[9];
          fVar25 = pfVar8[2];
          fVar28 = pfVar8[6];
          fVar31 = pfVar8[10];
LAB_00f53d34:
          pfVar1 = pfVar8 + (long)iVar16 * 4;
          uVar11 = -(uVar13 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
          pfVar8 = (float *)((long)pfVar8 + uVar11);
          iVar16 = iVar16 + (int)uVar13;
          uVar21 = *(undefined8 *)((long)(param_1 + (long)local_a0 * 0x10) + 8);
          uVar18 = *(undefined8 *)(param_1 + (long)local_a0 * 0x10);
          puVar3 = (undefined8 *)(param_1 + (long)(int)local_a8 * 0x10);
          puVar2 = (undefined8 *)(param_1 + (long)(3 - ((int)local_a8 + local_a0)) * 0x10);
          puVar14 = *(undefined8 **)(this + 0x10);
          fVar33 = *pfVar1 - *pfVar8;
          fStack_b8 = (float)uVar21;
          uStack_b4 = (undefined4)((ulong)uVar21 >> 0x20);
          local_c0 = (float)uVar18;
          fStack_bc = (float)((ulong)uVar18 >> 0x20);
          fVar42 = pfVar1[1] - pfVar8[1];
          fVar32 = pfVar1[2] - pfVar8[2];
          pfVar8 = (float *)((long)puVar14 + uVar11);
          fStack_d8 = (float)puVar2[1];
          uStack_d4 = (undefined4)((ulong)puVar2[1] >> 0x20);
          local_e0 = (float)*puVar2;
          fStack_dc = (float)((ulong)*puVar2 >> 0x20);
          fStack_c8 = (float)puVar3[1];
          uStack_c4 = (undefined4)((ulong)puVar3[1] >> 0x20);
          local_d0 = (float)*puVar3;
          fStack_cc = (float)((ulong)*puVar3 >> 0x20);
          puVar4 = puVar14 + (3 - (long)iVar16) * 2;
          local_e4 = 0;
          uVar17 = NEON_fmadd(fVar42,fVar42,fVar33 * fVar33);
          fVar40 = (float)NEON_fmadd(fVar32,fVar32,uVar17);
          fVar43 = -((fStack_cc - fStack_bc) * (local_e0 - local_c0)) +
                   (local_d0 - local_c0) * (fStack_dc - fStack_bc);
          fVar27 = -((fVar23 - fVar22) * (fVar30 - fVar20)) + (fVar24 - fVar20) * (fVar29 - fVar22);
          fVar34 = -((fStack_dc - fStack_bc) * (fStack_c8 - fStack_b8)) +
                   (fStack_cc - fStack_bc) * (fStack_d8 - fStack_b8);
          fVar35 = -((fVar29 - fVar22) * (fVar28 - fVar25)) + (fVar23 - fVar22) * (fVar31 - fVar25);
          fVar37 = -((fStack_d8 - fStack_b8) * (local_d0 - local_c0)) +
                   (fStack_c8 - fStack_b8) * (local_e0 - local_c0);
          fVar38 = -((fVar31 - fVar25) * (fVar24 - fVar20)) + (fVar28 - fVar25) * (fVar30 - fVar20);
          uVar21 = NEON_fmov(0x3f800000,4);
          uVar18 = NEON_fsqrt(CONCAT44(fVar27 * fVar27 + fVar35 * fVar35 + fVar38 * fVar38,
                                       fVar43 * fVar43 + fVar34 * fVar34 + fVar37 * fVar37),4);
          fVar39 = (float)uVar21 / (float)uVar18;
          fVar36 = (float)((ulong)uVar21 >> 0x20);
          fVar41 = fVar36 / (float)((ulong)uVar18 >> 0x20);
          fVar24 = 1.0 / SQRT(fVar40);
          fVar37 = fVar39 * fVar37;
          fVar38 = fVar41 * fVar38;
          fVar43 = fVar39 * fVar43;
          fVar27 = fVar41 * fVar27;
          fVar39 = fVar39 * fVar34;
          fVar41 = fVar41 * fVar35;
          fVar32 = fVar24 * fVar32;
          fVar33 = fVar24 * fVar33;
          fVar24 = fVar24 * fVar42;
          fVar40 = -(fVar43 * fVar33) + fVar39 * fVar32;
          fVar42 = -(fVar27 * fVar33) + fVar41 * fVar32;
          fVar20 = -(fVar32 * fVar37) + fVar43 * fVar24;
          fVar22 = -(fVar38 * fVar32) + fVar27 * fVar24;
          fVar32 = -(fVar39 * fVar24) + fVar37 * fVar33;
          fVar24 = -(fVar41 * fVar24) + fVar38 * fVar33;
          local_f0 = CONCAT44(fVar38,fVar41);
          uVar18 = NEON_fsqrt(CONCAT44(fVar22 * fVar22 + fVar42 * fVar42 + fVar24 * fVar24,
                                       fVar20 * fVar20 + fVar40 * fVar40 + fVar32 * fVar32),4);
          fVar35 = (float)uVar21 / (float)uVar18;
          fVar36 = fVar36 / (float)((ulong)uVar18 >> 0x20);
          fVar20 = fVar35 * fVar20;
          fVar22 = fVar36 * fVar22;
          fVar40 = fVar35 * fVar40;
          fVar42 = fVar36 * fVar42;
          fVar35 = fVar35 * fVar32;
          fVar36 = fVar36 * fVar24;
          uVar13 = NEON_fcmlt(CONCAT44(fVar22 * (*(float *)puVar4 - *pfVar8) +
                                       (*(float *)((long)puVar4 + 4) - pfVar8[1]) * fVar42 +
                                       (*(float *)(puVar4 + 1) - pfVar8[2]) * fVar36,
                                       fVar20 * (*(float *)puVar2 - *(float *)puVar3) +
                                       (*(float *)((long)puVar2 + 4) - *(float *)((long)puVar3 + 4))
                                       * fVar40 +
                                       (*(float *)(puVar2 + 1) - *(float *)(puVar3 + 1)) * fVar35),0
                              ,4);
          fVar34 = -fVar36;
          fVar24 = -fVar22;
          fVar32 = -fVar42;
          if ((uVar13 & 0x100000000) == 0) {
            fVar34 = fVar36;
            fVar24 = fVar22;
            fVar32 = fVar42;
          }
          bVar6 = (uVar13 & 1) == 0;
          fVar36 = -fVar40;
          if (bVar6) {
            fVar36 = fVar40;
          }
          fVar40 = -fVar35;
          if (bVar6) {
            fVar40 = fVar35;
          }
          fVar35 = -fVar20;
          if (bVar6) {
            fVar35 = fVar20;
          }
          fVar42 = (float)NEON_fnmsub(fVar40,fVar32,fVar36 * fVar34);
          fVar20 = (float)NEON_fnmsub(fVar35,fVar34,fVar40 * fVar24);
          fVar22 = (float)NEON_fnmsub(fVar36,fVar24,fVar35 * fVar32);
          uVar17 = NEON_fmadd(fVar20,fVar20,fVar42 * fVar42);
          fVar23 = (float)NEON_fmadd(fVar22,fVar22,uVar17);
          local_e8 = fVar27;
          if (*(float *)(*(long *)(this + 0x18) + 0x8c) <= fVar23) {
            fVar23 = 1.0 / SQRT(fVar23);
            fVar25 = (float)NEON_fnmsub(fVar23 * fVar20,fVar34,fVar23 * fVar22 * fVar32);
            fVar22 = (float)NEON_fnmsub(fVar23 * fVar22,fVar24,fVar23 * fVar42 * fVar34);
            uVar17 = NEON_fnmsub(fVar23 * fVar42,fVar32,fVar23 * fVar20 * fVar24);
            uVar19 = NEON_fmadd(fVar36,fVar32,fVar35 * fVar24);
            uVar26 = NEON_fmadd(fVar22,fVar22,fVar25 * fVar25);
            fVar32 = (float)NEON_fmadd(fVar40,fVar34,uVar19);
            fVar34 = (float)NEON_fmadd(uVar17,uVar17,uVar26);
            uVar17 = NEON_fmadd(uVar17,fVar40,fVar22 * fVar36);
            fVar24 = (float)NEON_fmadd(fVar25,fVar35,uVar17);
            fVar32 = atan2f(fVar24 / SQRT(fVar34),fVar32);
            uVar17 = NEON_fmadd(fVar36,fVar38,fVar35 * fVar41);
            fVar24 = (float)NEON_fmadd(fVar40,fVar27,uVar17);
            bVar6 = fVar24 < 0.0;
            fVar24 = 3.141593 - fVar32;
            if (!bVar6) {
              fVar24 = -(3.141593 - fVar32);
            }
          }
          else {
            bVar6 = false;
            fVar24 = 0.0;
          }
          if (iVar16 == 3) {
            fVar34 = (float)puVar14[2] - (float)puVar14[4];
            fVar35 = (float)((ulong)puVar14[2] >> 0x20) - (float)((ulong)puVar14[4] >> 0x20);
            fVar36 = *(float *)(puVar14 + 3) - *(float *)(puVar14 + 5);
            fVar32 = (float)NEON_fmadd(fVar36,fVar36,fVar34 * fVar34 + fVar35 * fVar35);
            sincosf(fVar24 * -0.5,&fStack_104,&local_108);
            fStack_104 = fStack_104 / SQRT(fVar32);
            uVar18 = CONCAT44(fVar35 * fStack_104,fVar34 * fStack_104);
            local_f8 = fStack_104 * fVar36;
            fStack_f4 = local_108;
            local_100 = uVar18;
            fVar32 = (float)quatRotate((btQuaternion *)&local_100,(btVector3 *)&local_f0);
            uVar17 = NEON_fmadd((int)uVar18,fVar37,fVar32 * fVar39);
            fVar32 = (float)NEON_fmadd(local_108,fVar43,uVar17);
            if (fVar32 < 0.0) {
              *puVar15 = *puVar15 | 0x10;
            }
            puVar15[2] = (uint)-fVar24;
            if (!bVar6) goto LAB_00f53924;
            uVar7 = *puVar15 | 2;
          }
          else if (iVar16 == 2) {
            fVar34 = (float)puVar14[4] - (float)*puVar14;
            fVar35 = (float)((ulong)puVar14[4] >> 0x20) - (float)((ulong)*puVar14 >> 0x20);
            fVar36 = *(float *)(puVar14 + 5) - *(float *)(puVar14 + 1);
            fVar32 = (float)NEON_fmadd(fVar36,fVar36,fVar34 * fVar34 + fVar35 * fVar35);
            sincosf(fVar24 * -0.5,&fStack_10c,&local_110);
            fStack_10c = fStack_10c / SQRT(fVar32);
            uVar18 = CONCAT44(fVar35 * fStack_10c,fVar34 * fStack_10c);
            local_f8 = fStack_10c * fVar36;
            fStack_f4 = local_110;
            local_100 = uVar18;
            fVar32 = (float)quatRotate((btQuaternion *)&local_100,(btVector3 *)&local_f0);
            uVar17 = NEON_fmadd((int)uVar18,fVar37,fVar32 * fVar39);
            fVar32 = (float)NEON_fmadd(local_110,fVar43,uVar17);
            if (fVar32 < 0.0) {
              *puVar15 = *puVar15 | 0x20;
            }
            puVar15[3] = (uint)-fVar24;
            if (!bVar6) goto LAB_00f53924;
            uVar7 = *puVar15 | 4;
          }
          else {
            if (iVar16 != 1) goto LAB_00f53924;
            fVar34 = (float)*puVar14 - (float)puVar14[2];
            fVar35 = (float)((ulong)*puVar14 >> 0x20) - (float)((ulong)puVar14[2] >> 0x20);
            fVar36 = *(float *)(puVar14 + 1) - *(float *)(puVar14 + 3);
            fVar32 = (float)NEON_fmadd(fVar36,fVar36,fVar34 * fVar34 + fVar35 * fVar35);
            sincosf(fVar24 * -0.5,&fStack_114,&local_118);
            fStack_114 = fStack_114 / SQRT(fVar32);
            uVar18 = CONCAT44(fVar35 * fStack_114,fVar34 * fStack_114);
            local_f8 = fStack_114 * fVar36;
            fStack_f4 = local_118;
            local_100 = uVar18;
            fVar32 = (float)quatRotate((btQuaternion *)&local_100,(btVector3 *)&local_f0);
            uVar17 = NEON_fmadd((int)uVar18,fVar37,fVar32 * fVar39);
            fVar32 = (float)NEON_fmadd(local_118,fVar43,uVar17);
            if (fVar32 < 0.0) {
              *puVar15 = *puVar15 | 8;
            }
            puVar15[1] = (uint)-fVar24;
            if (!bVar6) goto LAB_00f53924;
            uVar7 = *puVar15 | 1;
          }
          *puVar15 = uVar7;
        }
      }
    }
  }
LAB_00f53924:
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


