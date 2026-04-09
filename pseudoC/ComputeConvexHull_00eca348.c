// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeConvexHull
// Entry Point: 00eca348
// Size: 1764 bytes
// Signature: undefined __thiscall ComputeConvexHull(VoxelSet * this, Mesh * param_1, ulong param_2)


/* VHACD::VoxelSet::ComputeConvexHull(VHACD::Mesh&, unsigned long) const */

void __thiscall VHACD::VoxelSet::ComputeConvexHull(VoxelSet *this,Mesh *param_1,ulong param_2)

{
  undefined uVar1;
  VoxelSet *pVVar2;
  Mesh *__src;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  short *psVar13;
  ulong uVar14;
  int iVar15;
  double *pdVar16;
  int *piVar17;
  int *piVar18;
  ulong *puVar19;
  int iVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  Mesh *pMVar28;
  int iVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  undefined auStack_708 [4];
  undefined8 local_704;
  void *local_6f8;
  char local_6f0;
  undefined8 local_6e4;
  void *local_6d8;
  char local_6d0;
  ulong local_6c4;
  void *local_6b8;
  char local_6b0;
  ulong auStack_6a8 [192];
  ulong *local_a8;
  ulong uStack_a0;
  ulong local_98;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  uVar22 = *(ulong *)(this + 0xa08);
  if (uVar22 != 0) {
    uStack_a0 = 0;
    local_a8 = (ulong *)0x0;
    local_98 = 0x40;
    puVar9 = (undefined8 *)operator_new__(0x180008);
    uVar27 = 0;
    uVar30 = 0;
    *puVar9 = 0x10000;
    do {
      pVVar2 = this + 0x9c0;
      if (*(long *)(this + 0xa10) != 8) {
        pVVar2 = *(VoxelSet **)(this + 0xa00);
      }
      if (uVar27 < uVar22) {
        uVar12 = 0;
        dVar31 = *(double *)(this + 0x9b8);
        psVar13 = (short *)(pVVar2 + uVar27 * 8 + 4);
        dVar32 = *(double *)(this + 0x9a0);
        dVar33 = *(double *)(this + 0x9a8);
        dVar34 = *(double *)(this + 0x9b0);
        do {
          if ((psVar13[1] == 4) && (uVar30 = uVar30 + 1, uVar30 == param_2)) {
            uVar30 = 0;
            pdVar16 = (double *)(puVar9 + 1 + uVar12 * 3);
            uVar12 = uVar12 + 8;
            dVar38 = ((double)(int)psVar13[-2] + -0.5) * dVar31 + dVar32;
            dVar35 = ((double)(int)psVar13[-2] + 0.5) * dVar31 + dVar32;
            dVar41 = ((double)(int)psVar13[-1] + -0.5) * dVar31 + dVar33;
            dVar36 = ((double)(int)psVar13[-1] + 0.5) * dVar31 + dVar33;
            dVar42 = dVar31 * ((double)(int)*psVar13 + -0.5) + dVar34;
            dVar37 = dVar31 * ((double)(int)*psVar13 + 0.5) + dVar34;
            *pdVar16 = dVar38;
            pdVar16[1] = dVar41;
            pdVar16[2] = dVar42;
            pdVar16[3] = dVar35;
            pdVar16[4] = dVar41;
            pdVar16[5] = dVar42;
            pdVar16[6] = dVar35;
            pdVar16[7] = dVar36;
            pdVar16[8] = dVar42;
            pdVar16[9] = dVar38;
            pdVar16[10] = dVar36;
            pdVar16[0xb] = dVar42;
            pdVar16[0xc] = dVar38;
            pdVar16[0xd] = dVar41;
            pdVar16[0xe] = dVar37;
            pdVar16[0xf] = dVar35;
            pdVar16[0x10] = dVar41;
            pdVar16[0x11] = dVar37;
            pdVar16[0x12] = dVar35;
            pdVar16[0x13] = dVar36;
            pdVar16[0x14] = dVar37;
            pdVar16[0x15] = dVar38;
            pdVar16[0x16] = dVar36;
            pdVar16[0x17] = dVar37;
          }
          uVar27 = uVar27 + 1;
        } while ((uVar12 >> 0x10 == 0) && (psVar13 = psVar13 + 4, uVar27 < uVar22));
      }
      local_6f0 = '\x01';
      local_6f8 = (void *)0x0;
      local_704 = 0;
      local_6e4 = 0;
      local_6c4 = 0;
      local_6d0 = '\x01';
      local_6d8 = (void *)0x0;
      local_6b0 = '\x01';
      local_6b8 = (void *)0x0;
      btConvexHullComputer::compute(auStack_708,SUB81(puVar9 + 1,0),1,0x18,-1.0,-1.0);
      if (0 < (int)local_704) {
        lVar23 = 0;
        lVar25 = 0;
        uVar12 = uStack_a0;
        uVar24 = local_98;
        iVar20 = (int)local_704;
        do {
          uVar39 = *(undefined8 *)((long)local_6f8 + lVar23);
          fVar40 = *(float *)((undefined8 *)((long)local_6f8 + lVar23) + 1);
          uVar14 = uVar12;
          uVar26 = uVar24;
          puVar21 = local_a8;
          uVar8 = local_98;
          if (uVar12 == uVar24) {
            uVar26 = uVar24 * 2;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar26;
            uVar12 = uVar24 * 0x30 | 8;
            if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            puVar10 = (ulong *)operator_new__(uVar12);
            puVar19 = local_a8;
            puVar11 = auStack_6a8;
            if (uVar24 != 0x40) {
              puVar11 = local_a8;
            }
            puVar21 = puVar10 + 1;
            *puVar10 = uVar26;
            memcpy(puVar21,puVar11,uVar24 * 0x18);
            uVar14 = uVar24;
            uVar8 = uVar26;
            if (puVar19 != (ulong *)0x0) {
              operator_delete__(puVar19 + -1);
              uVar14 = uStack_a0;
              iVar20 = (int)local_704;
            }
          }
          local_98 = uVar8;
          local_a8 = puVar21;
          puVar21 = auStack_6a8;
          if (uVar26 != 0x40) {
            puVar21 = local_a8;
          }
          uVar12 = uVar14 + 1;
          pdVar16 = (double *)(puVar21 + uVar14 * 3);
          lVar25 = lVar25 + 1;
          lVar23 = lVar23 + 0x10;
          uStack_a0 = uVar12;
          pdVar16[1] = (double)(float)((ulong)uVar39 >> 0x20);
          *pdVar16 = (double)(float)uVar39;
          pdVar16[2] = (double)fVar40;
          uVar24 = uVar26;
        } while (lVar25 < iVar20);
      }
      if ((local_6b8 != (void *)0x0) && (local_6b0 != '\0')) {
        btAlignedFreeInternal(local_6b8);
      }
      local_6b8 = (void *)0x0;
      local_6c4 = 0;
      local_6b0 = 1;
      if ((local_6d8 != (void *)0x0) && (local_6d0 != '\0')) {
        btAlignedFreeInternal(local_6d8);
      }
      local_6d0 = 1;
      local_6d8 = (void *)0x0;
      local_6e4 = 0;
      if ((local_6f8 != (void *)0x0) && (local_6f0 != '\0')) {
        btAlignedFreeInternal(local_6f8);
      }
    } while (uVar27 < uVar22);
    operator_delete__(puVar9);
    local_6f0 = '\x01';
    local_6d0 = '\x01';
    local_6b0 = '\x01';
    local_704 = 0;
    uVar1 = (char)auStack_6a8;
    if (local_98 != 0x40) {
      uVar1 = (char)local_a8;
    }
    local_6e4 = 0;
    local_6c4 = 0;
    local_6f8 = (void *)0x0;
    local_6d8 = (void *)0x0;
    local_6b8 = (void *)0x0;
    btConvexHullComputer::compute(auStack_708,(bool)uVar1,1,0x18,-1.0,-1.0);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (0 < (int)local_704) {
      lVar23 = 0;
      lVar25 = 0;
      uVar30 = *(ulong *)(param_1 + 0x610);
      uVar22 = 0;
      iVar20 = (int)local_704;
      do {
        uVar39 = *(undefined8 *)((long)local_6f8 + lVar23);
        fVar40 = *(float *)((undefined8 *)((long)local_6f8 + lVar23) + 1);
        if (uVar22 == uVar30) {
          uVar27 = uVar30 * 2;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar27;
          uVar22 = uVar30 * 0x30 | 8;
          if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          puVar11 = (ulong *)operator_new__(uVar22);
          pMVar28 = *(Mesh **)(param_1 + 0x600);
          puVar21 = puVar11 + 1;
          *puVar11 = uVar27;
          __src = param_1;
          if (uVar30 != 0x40) {
            __src = pMVar28;
          }
          memcpy(puVar21,__src,uVar30 * 0x18);
          uVar22 = uVar30;
          if (pMVar28 != (Mesh *)0x0) {
            operator_delete__(pMVar28 + -8);
            uVar22 = *(ulong *)(param_1 + 0x608);
            iVar20 = (int)local_704;
          }
          *(ulong **)(param_1 + 0x600) = puVar21;
          *(ulong *)(param_1 + 0x610) = uVar27;
          uVar30 = uVar27;
        }
        else {
          puVar21 = *(ulong **)(param_1 + 0x600);
        }
        puVar11 = (ulong *)param_1;
        if (uVar30 != 0x40) {
          puVar11 = puVar21;
        }
        pdVar16 = (double *)(puVar11 + uVar22 * 3);
        lVar25 = lVar25 + 1;
        lVar23 = lVar23 + 0x10;
        *(ulong *)(param_1 + 0x608) = uVar22 + 1;
        pdVar16[1] = (double)(float)((ulong)uVar39 >> 0x20);
        *pdVar16 = (double)(float)uVar39;
        pdVar16[2] = (double)fVar40;
        uVar22 = uVar22 + 1;
      } while (lVar25 < iVar20);
    }
    uVar22 = local_6c4 & 0xffffffff;
    if (0 < (int)local_6c4) {
      uVar30 = 0;
      do {
        lVar25 = (long)*(int *)((long)local_6b8 + uVar30 * 4);
        piVar17 = (int *)((long)local_6d8 +
                         (long)*(int *)((long)local_6d8 + lVar25 * 0xc + 4) * 0xc + lVar25 * 0xc);
        iVar20 = piVar17[2];
        piVar17 = piVar17 + (long)*piVar17 * 3;
        if (piVar17[2] != iVar20) {
          uVar27 = *(ulong *)(param_1 + 0x920);
          uVar12 = *(ulong *)(param_1 + 0x928);
          iVar7 = piVar17[2];
          iVar29 = *(int *)((long)local_6d8 + lVar25 * 0xc + 8);
          do {
            iVar15 = iVar7;
            if (uVar27 == uVar12) {
              uVar24 = uVar12 * 2;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar24;
              uVar27 = uVar12 * 0x18 + 8;
              if (SUB168(auVar5 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar12 * 0x18) {
                uVar27 = 0xffffffffffffffff;
              }
              puVar11 = (ulong *)operator_new__(uVar27);
              puVar19 = *(ulong **)(param_1 + 0x918);
              puVar21 = puVar11 + 1;
              *puVar11 = uVar24;
              puVar11 = (ulong *)(param_1 + 0x618);
              if (uVar12 != 0x40) {
                puVar11 = puVar19;
              }
              memcpy(puVar21,puVar11,uVar12 * 0xc);
              uVar27 = uVar12;
              if (puVar19 != (ulong *)0x0) {
                operator_delete__(puVar19 + -1);
                uVar27 = *(ulong *)(param_1 + 0x920);
              }
              *(ulong **)(param_1 + 0x918) = puVar21;
              *(ulong *)(param_1 + 0x928) = uVar24;
              uVar12 = uVar24;
            }
            else {
              puVar21 = *(ulong **)(param_1 + 0x918);
            }
            puVar11 = (ulong *)(param_1 + 0x618);
            if (uVar12 != 0x40) {
              puVar11 = puVar21;
            }
            piVar18 = (int *)((long)puVar11 + uVar27 * 0xc);
            uVar27 = uVar27 + 1;
            *(ulong *)(param_1 + 0x920) = uVar27;
            *piVar18 = iVar20;
            piVar18[1] = iVar29;
            piVar18[2] = iVar15;
            piVar17 = piVar17 + (long)piVar17[1] * 3 + (long)piVar17[(long)piVar17[1] * 3] * 3;
            iVar7 = piVar17[2];
            iVar29 = iVar15;
          } while (piVar17[2] != iVar20);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar22);
    }
    if ((local_6b8 != (void *)0x0) && (local_6b0 != '\0')) {
      btAlignedFreeInternal(local_6b8);
    }
    local_6b8 = (void *)0x0;
    local_6c4 = 0;
    local_6b0 = 1;
    if ((local_6d8 != (void *)0x0) && (local_6d0 != '\0')) {
      btAlignedFreeInternal(local_6d8);
    }
    local_6d0 = 1;
    local_6d8 = (void *)0x0;
    local_6e4 = 0;
    if ((local_6f8 != (void *)0x0) && (local_6f0 != '\0')) {
      btAlignedFreeInternal(local_6f8);
    }
    if (local_a8 != (ulong *)0x0) {
      operator_delete__(local_a8 + -1);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


