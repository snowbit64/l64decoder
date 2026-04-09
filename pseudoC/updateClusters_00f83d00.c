// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClusters
// Entry Point: 00f83d00
// Size: 1996 bytes
// Signature: undefined updateClusters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updateClusters() */

void btSoftBody::updateClusters(void)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long in_x0;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar21;
  ulong uVar20;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_160;
  float local_158;
  undefined4 local_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  btMatrix3x3 abStack_130 [48];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  uVar6 = CProfileManager::Start_Profile("UpdateClusters");
  iVar4 = *(int *)(in_x0 + 0x5dc);
  if (0 < iVar4) {
    puVar18 = (undefined8 *)((ulong)local_d0 | 4);
    lVar17 = 0;
    do {
      lVar16 = *(long *)(*(long *)(in_x0 + 0x5e8) + lVar17 * 8);
      uVar5 = *(uint *)(lVar16 + 0x24);
      uVar14 = (ulong)uVar5;
      if (uVar5 != 0) {
        local_d0 = (undefined  [8])CONCAT44(local_d0._4_4_,0x38d1b717);
        *(undefined8 *)((long)puVar18 + 0x24) = 0;
        *(undefined8 *)((long)puVar18 + 0x1c) = 0;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        local_c0 = CONCAT44(0x3951b717,(undefined4)local_c0);
        local_a8 = 0x399d4951;
        if ((int)uVar5 < 1) {
          fVar19 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
        }
        else {
          fVar19 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
          plVar10 = *(long **)(lVar16 + 0x30);
          pfVar9 = *(float **)(lVar16 + 0x10);
          uVar6 = uVar14;
          do {
            fVar23 = *pfVar9;
            uVar6 = uVar6 - 1;
            uVar24 = *(undefined8 *)(*plVar10 + 0x10);
            fVar19 = fVar19 + (float)uVar24 * fVar23;
            fVar21 = fVar21 + (float)((ulong)uVar24 >> 0x20) * fVar23;
            fVar22 = (float)NEON_fmadd(*(undefined4 *)(*plVar10 + 0x18),fVar23,fVar22);
            plVar10 = plVar10 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar6 != 0);
        }
        fVar23 = *(float *)(lVar16 + 0xa4);
        *(undefined4 *)(lVar16 + 0x114) = 0;
        *(ulong *)(lVar16 + 0x108) = CONCAT44(fVar21 * fVar23,fVar19 * fVar23);
        *(float *)(lVar16 + 0x110) = fVar23 * fVar22;
        if (0 < (int)uVar5) {
          local_a8 = 0x399d4951;
          local_b0 = 0;
          local_b8 = 0;
          local_c8 = 0;
          plVar10 = *(long **)(lVar16 + 0x30);
          puVar8 = (undefined4 *)(*(long *)(lVar16 + 0x50) + 8);
          uVar6 = uVar14;
          local_c0 = 0x3951b71700000000;
          local_d0 = (undefined  [8])0x38d1b717;
          do {
            lVar13 = *plVar10;
            uVar6 = uVar6 - 1;
            uVar42 = *puVar8;
            fVar34 = *(float *)(lVar13 + 0x10) - fVar19 * fVar23;
            fVar36 = *(float *)(lVar13 + 0x14) - fVar21 * fVar23;
            fVar37 = *(float *)(lVar13 + 0x18) - fVar23 * fVar22;
            fVar25 = (float)*(undefined8 *)(puVar8 + -2);
            fVar27 = (float)((ulong)*(undefined8 *)(puVar8 + -2) >> 0x20);
            local_d0 = (undefined  [8])
                       CONCAT44((float)((ulong)local_d0 >> 0x20) + fVar27 * fVar34,
                                SUB84(local_d0,0) + fVar25 * fVar34);
            local_c8 = NEON_fmadd(uVar42,fVar34,local_c8);
            local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) + fVar27 * fVar36,
                                (float)local_c0 + fVar25 * fVar36);
            local_b8 = NEON_fmadd(uVar42,fVar36,local_b8);
            local_b0 = CONCAT44((float)((ulong)local_b0 >> 0x20) + fVar27 * fVar37,
                                (float)local_b0 + fVar25 * fVar37);
            local_a8 = NEON_fmadd(uVar42,fVar37,local_a8);
            plVar10 = plVar10 + 1;
            puVar8 = puVar8 + 4;
          } while (uVar6 != 0);
        }
        if (((DAT_021257c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_021257c0), iVar4 != 0)) {
          DAT_021257b8 = 0x1038d1b717;
          __cxa_guard_release(&DAT_021257c0);
        }
        uVar6 = btPolarDecomposition::decompose
                          ((btPolarDecomposition *)&DAT_021257b8,(btMatrix3x3 *)local_d0,
                           (btMatrix3x3 *)&local_100,abStack_130);
        uVar24 = *(undefined8 *)(lVar16 + 0xa8);
        *(undefined4 *)(lVar16 + 0xe4) = 0;
        uVar33 = *(undefined8 *)(lVar16 + 0xb8);
        *(undefined4 *)(lVar16 + 0xf4) = 0;
        *(undefined8 *)(lVar16 + 0x68) = uStack_f8;
        *(undefined8 *)(lVar16 + 0x60) = local_100;
        *(undefined8 *)(lVar16 + 0x78) = uStack_e8;
        *(undefined8 *)(lVar16 + 0x70) = local_f0;
        uVar40 = NEON_rev64(uVar24,4);
        uVar26 = *(undefined8 *)(lVar16 + 0x70);
        uVar44 = NEON_rev64(uVar33,4);
        *(undefined8 *)(lVar16 + 0x88) = uStack_d8;
        *(undefined8 *)(lVar16 + 0x80) = local_e0;
        fVar30 = *(float *)(lVar16 + 0x68);
        fVar37 = (float)((ulong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
        uVar20 = *(ulong *)(lVar16 + 0x80);
        fVar19 = (float)*(undefined8 *)(lVar16 + 0x60);
        fVar21 = (float)uVar26;
        uVar29 = *(undefined8 *)(lVar16 + 200);
        fVar35 = *(float *)(lVar16 + 0x78);
        fVar31 = *(float *)(lVar16 + 0xd0);
        *(undefined4 *)(lVar16 + 0x104) = 0;
        fVar22 = (float)uVar20;
        fVar23 = (float)(uVar20 >> 0x20);
        fVar48 = (float)((ulong)uVar33 >> 0x20);
        fVar27 = (float)((ulong)uVar26 >> 0x20);
        fVar34 = *(float *)(lVar16 + 0xb0);
        uVar45 = NEON_rev64(uVar29,4);
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar43 = *(float *)(lVar16 + 0xc0);
        fVar36 = *(float *)(lVar16 + 0x88);
        uVar26 = NEON_rev64(uVar26,4);
        fVar38 = fVar19 * (float)uVar40 + (float)uVar44 * fVar37 + (float)uVar45 * fVar30;
        fVar41 = fVar21 * (float)((ulong)uVar40 >> 0x20) + (float)((ulong)uVar44 >> 0x20) * fVar27 +
                 (float)((ulong)uVar45 >> 0x20) * fVar35;
        fVar49 = fVar22 * (float)uVar24 + (float)uVar33 * fVar23 + fVar36 * (float)uVar29;
        fVar28 = (float)((ulong)uVar29 >> 0x20);
        fVar46 = fVar19 * (float)uVar24 + (float)uVar33 * fVar37 + (float)uVar29 * fVar30;
        fVar47 = fVar21 * fVar25 + fVar48 * fVar27 + fVar28 * fVar35;
        fVar32 = (float)NEON_fmadd(fVar36,fVar31,fVar34 * fVar22 + fVar43 * fVar23);
        fVar50 = fVar23 * fVar48 + fVar22 * fVar25 + fVar36 * fVar28;
        uVar24 = NEON_rev64(uVar20,4);
        fVar48 = fVar34 * fVar19 + fVar37 * fVar43 + fVar30 * fVar31;
        fVar31 = fVar21 * fVar34 + fVar43 * fVar27 + fVar31 * fVar35;
        fVar34 = fVar19 * fVar49 + fVar37 * fVar50 + fVar30 * fVar32;
        fVar25 = fVar21 * fVar49 + fVar27 * fVar50 + fVar35 * fVar32;
        fVar28 = fVar38 * fVar37 + fVar19 * fVar46 + fVar48 * fVar30;
        fVar30 = fVar41 * fVar19 + fVar37 * fVar47 + fVar31 * fVar30;
        fVar37 = (float)uVar26 * fVar38 + fVar46 * fVar21 + fVar48 * fVar35;
        fVar27 = (float)((ulong)uVar26 >> 0x20) * fVar41 + fVar47 * fVar27 + fVar31 * fVar35;
        *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar16 + 0x110);
        *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)(lVar16 + 0x108);
        uVar42 = NEON_fmadd(fVar32,fVar36,fVar49 * fVar22 + fVar50 * fVar23);
        *(ulong *)(lVar16 + 0xf8) = CONCAT44(fVar25,fVar34);
        fVar19 = (float)uVar24 * fVar38 + fVar46 * fVar22 + fVar48 * fVar36;
        fVar21 = (float)((ulong)uVar24 >> 0x20) * fVar41 + fVar47 * fVar23 + fVar31 * fVar36;
        *(undefined4 *)(lVar16 + 0x100) = uVar42;
        *(ulong *)(lVar16 + 0xd8) = CONCAT44(fVar37,fVar28);
        *(float *)(lVar16 + 0xe0) = fVar19;
        *(float *)(lVar16 + 0xf0) = fVar21;
        *(ulong *)(lVar16 + 0xe8) = CONCAT44(fVar27,fVar30);
        *(undefined8 *)(lVar16 + 0x168) = 0;
        *(undefined8 *)(lVar16 + 0x160) = 0;
        *(undefined8 *)(lVar16 + 0x178) = 0;
        *(undefined8 *)(lVar16 + 0x170) = 0;
        if ((int)uVar5 < 1) {
          fVar22 = 0.0;
          fVar48 = 0.0;
          fVar35 = 0.0;
          fVar23 = 0.0;
          fVar31 = 0.0;
          fVar32 = 0.0;
        }
        else {
          fVar22 = 0.0;
          fVar48 = 0.0;
          fVar35 = 0.0;
          fVar23 = 0.0;
          fVar31 = 0.0;
          fVar32 = 0.0;
          plVar10 = *(long **)(lVar16 + 0x30);
          pfVar9 = *(float **)(lVar16 + 0x10);
          uVar11 = uVar14;
          do {
            lVar13 = *plVar10;
            fVar38 = *pfVar9;
            uVar11 = uVar11 - 1;
            fVar41 = fVar38 * *(float *)(lVar13 + 0x30);
            fVar43 = *(float *)(lVar13 + 0x34) * fVar38;
            fVar38 = *(float *)(lVar13 + 0x38) * fVar38;
            fVar32 = fVar32 + fVar41;
            fVar31 = fVar31 + fVar43;
            fVar23 = fVar23 + fVar38;
            *(float *)(lVar16 + 0x160) = fVar32;
            *(float *)(lVar16 + 0x164) = fVar31;
            *(float *)(lVar16 + 0x168) = fVar23;
            fVar46 = *(float *)(lVar13 + 0x10) - *(float *)(lVar16 + 0x108);
            fVar47 = *(float *)(lVar13 + 0x14) - *(float *)(lVar16 + 0x10c);
            fVar49 = *(float *)(lVar13 + 0x18) - *(float *)(lVar16 + 0x110);
            uVar39 = NEON_fmadd(fVar47,fVar38,fVar35);
            fVar38 = (float)NEON_fnmsub(fVar49,fVar41,fVar46 * fVar38);
            fVar41 = (float)NEON_fnmsub(fVar46,fVar43,fVar47 * fVar41);
            fVar35 = (float)NEON_fmsub(fVar49,fVar43,uVar39);
            fVar48 = fVar38 + fVar48;
            fVar22 = fVar41 + fVar22;
            *(float *)(lVar16 + 0x170) = fVar35;
            *(float *)(lVar16 + 0x174) = fVar48;
            *(float *)(lVar16 + 0x178) = fVar22;
            plVar10 = plVar10 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar11 != 0);
        }
        *(undefined4 *)(lVar16 + 0x16c) = 0;
        *(undefined4 *)(lVar16 + 0x17c) = 0;
        fVar43 = (float)NEON_fmsub(*(undefined4 *)(lVar16 + 0x18c),*(undefined4 *)(lVar16 + 0xa4),
                                   *(undefined4 *)(lVar16 + 0xa4));
        fVar38 = *(float *)(lVar16 + 0x194);
        *(undefined8 *)(lVar16 + 0x158) = 0;
        fVar41 = 1.0 - *(float *)(lVar16 + 400);
        fVar34 = (float)NEON_fmadd(uVar42,fVar22,fVar35 * fVar34 + fVar48 * fVar25);
        *(undefined8 *)(lVar16 + 0x120) = 0;
        *(undefined8 *)(lVar16 + 0x118) = 0;
        *(undefined8 *)(lVar16 + 0x130) = 0;
        *(undefined8 *)(lVar16 + 0x128) = 0;
        *(undefined8 *)(lVar16 + 0x140) = 0;
        *(undefined8 *)(lVar16 + 0x138) = 0;
        *(undefined8 *)(lVar16 + 0x150) = 0;
        *(undefined8 *)(lVar16 + 0x148) = 0;
        *(float *)(lVar16 + 0x160) = fVar43 * fVar32;
        *(float *)(lVar16 + 0x164) = fVar43 * fVar31;
        *(float *)(lVar16 + 0x168) = fVar43 * fVar23;
        *(ulong *)(lVar16 + 0x170) =
             CONCAT44((fVar30 * fVar35 + fVar27 * fVar48 + fVar21 * fVar22) * fVar41,
                      (fVar28 * fVar35 + fVar37 * fVar48 + fVar19 * fVar22) * fVar41);
        *(float *)(lVar16 + 0x178) = fVar34 * fVar41;
        if ((0.0 < fVar38) && (0 < *(int *)(lVar16 + 0x24))) {
          lVar7 = 0;
          lVar13 = 0;
          while( true ) {
            fVar25 = *(float *)(lVar16 + 0x60);
            puVar15 = (undefined8 *)(*(long *)(lVar16 + 0x50) + lVar7);
            fVar28 = *(float *)(lVar16 + 0x68);
            uVar24 = *puVar15;
            fVar27 = *(float *)(lVar16 + 0x74);
            fVar30 = *(float *)(lVar16 + 0x78);
            fVar23 = (float)uVar24;
            fVar37 = (float)((ulong)uVar24 >> 0x20);
            uVar26 = NEON_rev64(CONCAT44(*(float *)(lVar16 + 100) * fVar37,
                                         *(float *)(lVar16 + 0x70) * fVar23),4);
            fVar31 = *(float *)(puVar15 + 1);
            fVar19 = (float)NEON_fmadd(fVar36,fVar31,
                                       (float)uVar20 * fVar23 + *(float *)(lVar16 + 0x84) * fVar37);
            fVar34 = *(float *)(lVar16 + 0x98);
            lVar12 = *(long *)(*(long *)(lVar16 + 0x30) + lVar13 * 8);
            lVar13 = lVar13 + 1;
            uVar24 = *(undefined8 *)(lVar16 + 0x90);
            *(undefined4 *)(lVar12 + 0x1c) = 0;
            fVar21 = (float)*(undefined8 *)(lVar12 + 0x10);
            fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20);
            uVar42 = NEON_fmadd((fVar19 + fVar34) - *(float *)(lVar12 + 0x18),fVar38,
                                *(float *)(lVar12 + 0x18));
            *(undefined4 *)(lVar12 + 0x18) = uVar42;
            *(ulong *)(lVar12 + 0x10) =
                 CONCAT44(fVar22 + (((float)((ulong)uVar26 >> 0x20) + fVar37 * fVar27 +
                                     fVar30 * fVar31 + (float)((ulong)uVar24 >> 0x20)) - fVar22) *
                                   fVar38,
                          fVar21 + (((float)uVar26 + fVar23 * fVar25 + fVar28 * fVar31 +
                                    (float)uVar24) - fVar21) * fVar38);
            if (*(int *)(lVar16 + 0x24) <= lVar13) break;
            fVar38 = *(float *)(lVar16 + 0x194);
            lVar7 = lVar7 + 0x10;
            uVar20 = (ulong)*(uint *)(lVar16 + 0x80);
            fVar36 = *(float *)(lVar16 + 0x88);
          }
        }
        if (*(char *)(lVar16 + 0x1a1) != '\0') {
          plVar10 = *(long **)(lVar16 + 0x30);
          lVar13 = *plVar10;
          local_150 = *(float *)(lVar13 + 0x10);
          fStack_14c = *(float *)(lVar13 + 0x14);
          local_138 = *(float *)(lVar13 + 0x18);
          fStack_144 = *(float *)(lVar13 + 0x1c);
          fStack_148 = local_138;
          fStack_134 = fStack_144;
          local_140 = local_150;
          fStack_13c = fStack_14c;
          if (1 < (int)uVar5) {
            lVar13 = uVar14 - 1;
            do {
              plVar10 = plVar10 + 1;
              lVar7 = *plVar10;
              lVar13 = lVar13 + -1;
              fVar19 = *(float *)(lVar7 + 0x10);
              fVar21 = *(float *)(lVar7 + 0x14);
              fVar22 = *(float *)(lVar7 + 0x18);
              fVar23 = *(float *)(lVar7 + 0x1c);
              local_150 = (float)NEON_fminnm(fVar19,local_150);
              fStack_14c = (float)NEON_fminnm(fVar21,fStack_14c);
              fStack_148 = (float)NEON_fminnm(fVar22,fStack_148);
              fStack_144 = (float)NEON_fminnm(fVar23,fStack_144);
              if (local_140 <= fVar19) {
                local_140 = fVar19;
              }
              if (fStack_13c <= fVar21) {
                fStack_13c = fVar21;
              }
              if (local_138 <= fVar22) {
                local_138 = fVar22;
              }
              if (fStack_134 <= fVar23) {
                fStack_134 = fVar23;
              }
            } while (lVar13 != 0);
          }
          if (*(btDbvtNode **)(lVar16 + 0x180) == (btDbvtNode *)0x0) {
            puVar15 = *(undefined8 **)(in_x0 + 0x580);
            if (puVar15 == (undefined8 *)0x0) {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              puVar15 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
              puVar15[6] = 0;
              puVar15[1] = 0;
              *puVar15 = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
              puVar15[5] = 0;
              puVar15[4] = 0;
            }
            else {
              *(undefined8 *)(in_x0 + 0x580) = 0;
            }
            puVar15[4] = 0;
            puVar15[5] = lVar16;
            puVar15[6] = 0;
            puVar15[1] = CONCAT44(fStack_144,fStack_148);
            *puVar15 = CONCAT44(fStack_14c,local_150);
            puVar15[3] = CONCAT44(fStack_134,local_138);
            puVar15[2] = CONCAT44(fStack_13c,local_140);
            uVar6 = FUN_00f42680((btDbvt *)(in_x0 + 0x578),*(undefined8 *)(in_x0 + 0x578),puVar15);
            *(int *)(in_x0 + 0x58c) = *(int *)(in_x0 + 0x58c) + 1;
            *(undefined8 **)(lVar16 + 0x180) = puVar15;
          }
          else {
            local_158 = *(float *)(in_x0 + 0x240) * 3.0;
            local_154 = 0;
            local_160 = CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x160) >> 0x20) * local_158
                                 ,(float)*(undefined8 *)(lVar16 + 0x160) * local_158);
            local_158 = local_158 * *(float *)(lVar16 + 0x168);
            uVar6 = btDbvt::update((btDbvt *)(in_x0 + 0x578),*(btDbvtNode **)(lVar16 + 0x180),
                                   (btDbvtAabbMm *)&local_150,(btVector3 *)&local_160,
                                   *(float *)(in_x0 + 0x24c));
          }
        }
        iVar4 = *(int *)(in_x0 + 0x5dc);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar4);
  }
  puVar3 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar4 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar4;
  if (iVar4 == 0 && *piVar1 != 0) {
    uVar5 = gettimeofday((timeval *)local_d0,(__timezone_ptr_t)0x0);
    uVar6 = (ulong)uVar5;
    iVar4 = *(int *)(puVar3 + 0x18);
    uVar42 = NEON_fmadd((float)(unkuint9)
                               (ulong)((CONCAT44(uStack_c4,local_c8) +
                                       ((long)local_d0 - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar42;
  }
  if (iVar4 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


