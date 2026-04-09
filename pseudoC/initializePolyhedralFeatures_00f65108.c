// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializePolyhedralFeatures
// Entry Point: 00f65108
// Size: 6600 bytes
// Signature: undefined __thiscall initializePolyhedralFeatures(btPolyhedralConvexShape * this, int param_1)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btPolyhedralConvexShape::initializePolyhedralFeatures(int) */

undefined8 __thiscall
btPolyhedralConvexShape::initializePolyhedralFeatures(btPolyhedralConvexShape *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *__s;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  undefined4 *puVar17;
  ulong uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  int *piVar23;
  undefined8 *puVar24;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  size_t __n;
  void **ppvVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  uint *puVar38;
  char *pcVar39;
  ulong *puVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong local_1d0;
  btAlignedObjectArray abStack_1c0 [4];
  undefined8 local_1bc;
  long local_1b0;
  char local_1a8;
  btAlignedObjectArray abStack_1a0 [4];
  ulong local_19c;
  undefined8 *local_190;
  char local_188;
  undefined auStack_180 [4];
  ulong local_17c;
  long local_170;
  char local_168;
  undefined8 local_15c;
  long local_150;
  char local_148;
  ulong local_13c;
  long local_130;
  char local_128;
  btAlignedObjectArray abStack_120 [4];
  undefined8 local_11c;
  undefined8 *local_110;
  char local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float fStack_e8;
  undefined3 uStack_e4;
  undefined uStack_e1;
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  uint uStack_b4;
  uint local_b0;
  long local_a8;
  char local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  if ((*(undefined8 **)(this + 0x48) != (undefined8 *)0x0) &&
     ((**(code **)**(undefined8 **)(this + 0x48))(), *(long *)(this + 0x48) != 0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xb0,0x10);
  *(undefined *)(puVar7 + 4) = 1;
  puVar7[3] = 0;
  *(undefined *)(puVar7 + 8) = 1;
  *(undefined8 *)((long)puVar7 + 0xc) = 0;
  puVar7[7] = 0;
  *(undefined8 *)((long)puVar7 + 0x2c) = 0;
  *puVar7 = &PTR__btConvexPolyhedron_0101b008;
  *(undefined *)(puVar7 + 0xc) = 1;
  puVar7[0xb] = 0;
  *(undefined8 *)((long)puVar7 + 0x4c) = 0;
  *(undefined8 **)(this + 0x48) = puVar7;
  local_108 = '\x01';
  local_110 = (undefined8 *)0x0;
  local_11c = 0;
  iVar6 = (**(code **)(*(long *)this + 0xc0))(this);
  if (iVar6 < 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar30 = 0;
    uVar34 = 0;
    uVar35 = 0;
    puVar24 = (undefined8 *)0x0;
    do {
      puVar7 = puVar24;
      puVar8 = local_110;
      if (uVar30 == uVar35) {
        uVar2 = uVar35 << 1;
        if (uVar35 == 0) {
          uVar2 = 1;
        }
        if ((int)uVar35 < (int)uVar2) {
          uVar34 = uVar2;
          if (uVar2 == 0) {
            puVar7 = (undefined8 *)0x0;
            if (0 < (int)uVar35) goto LAB_00f652bc;
LAB_00f652e8:
            uVar35 = uVar2;
            puVar8 = puVar7;
            if (puVar24 == (undefined8 *)0x0) goto LAB_00f6522c;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            puVar7 = (undefined8 *)
                     (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4,
                                0x10);
            if ((int)uVar35 < 1) goto LAB_00f652e8;
LAB_00f652bc:
            uVar14 = (ulong)uVar35;
            puVar8 = puVar7;
            puVar21 = puVar24;
            do {
              uVar42 = *puVar21;
              uVar14 = uVar14 - 1;
              puVar8[1] = puVar21[1];
              *puVar8 = uVar42;
              puVar8 = puVar8 + 2;
              puVar21 = puVar21 + 2;
            } while (uVar14 != 0);
          }
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(puVar24);
          uVar35 = uVar2;
          puVar8 = puVar7;
        }
      }
LAB_00f6522c:
      local_110 = puVar8;
      lVar31 = uVar30 * 2;
      uVar14 = uVar30 & 0xffffffff;
      uVar30 = uVar30 + 1;
      (**(code **)(*(long *)this + 0xd8))(this,uVar14,puVar7 + lVar31);
      iVar6 = (**(code **)(*(long *)this + 0xc0))(this);
      puVar24 = puVar7;
    } while ((int)uVar30 < iVar6);
    local_11c = CONCAT44(uVar34,(int)uVar30);
    local_108 = '\x01';
  }
  local_168 = '\x01';
  local_170 = 0;
  local_148 = '\x01';
  local_150 = 0;
  local_17c = 0;
  local_15c = 0;
  local_128 = '\x01';
  local_130 = 0;
  local_13c = 0;
  if (param_1 == 0) {
    btConvexHullComputer::compute(auStack_180,SUB81(puVar7,0),0,0x10,0.0,0.0);
  }
  else {
    local_e0 = 0.0;
    fStack_dc = 0.0;
    uStack_d8 = (float)CONCAT31(uStack_d8._1_3_,1);
    local_f0._4_4_ = 0.0;
    fStack_e8 = 0.0;
    btGeometryUtil::getPlaneEquationsFromVertices(abStack_120,(btAlignedObjectArray *)&local_f0);
    iVar6 = (int)local_f0._4_4_;
    puVar7 = (undefined8 *)0x0;
    local_188 = 1;
    local_190 = (undefined8 *)0x0;
    local_19c = 0;
    if (0 < (int)local_f0._4_4_) {
      uVar30 = 0;
      lVar31 = 0;
      lVar32 = (long)(int)local_f0._4_4_;
      lVar27 = CONCAT44(fStack_dc,local_e0);
      puVar24 = (undefined8 *)0x0;
      do {
        puVar8 = (undefined8 *)(lVar27 + lVar31 * 0x10);
        iVar37 = (int)uVar30;
        local_b8 = (undefined4)*puVar8;
        uStack_b4 = (uint)((ulong)*puVar8 >> 0x20);
        local_b0 = *(uint *)(puVar8 + 1);
        fVar48 = *(float *)((long)puVar8 + 0xc);
        fVar41 = (float)(**(code **)(*(long *)this + 0x60))(this);
        puVar8 = puVar24;
        iVar36 = (int)lVar31;
        puVar21 = local_190;
        if ((int)lVar31 == iVar37) {
          uVar34 = iVar37 << 1;
          if (iVar37 == 0) {
            uVar34 = 1;
          }
          uVar14 = (ulong)uVar34;
          iVar36 = iVar37;
          if (iVar37 < (int)uVar34) {
            puVar7 = puVar24;
            if (uVar34 == 0) {
              puVar8 = (undefined8 *)0x0;
              puVar21 = puVar8;
              if (0 < iVar37) goto LAB_00f65480;
LAB_00f654a8:
              puVar21 = puVar8;
              puVar7 = puVar8;
              uVar30 = uVar14;
              if (puVar24 == (undefined8 *)0x0) goto LAB_00f653c8;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              puVar8 = (undefined8 *)
                       (*(code *)PTR_FUN_01048e38)
                                 (-(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4,0x10);
              puVar21 = puVar8;
              if (iVar37 < 1) goto LAB_00f654a8;
LAB_00f65480:
              do {
                uVar42 = *puVar7;
                uVar30 = uVar30 - 1;
                puVar8[1] = puVar7[1];
                *puVar8 = uVar42;
                puVar8 = puVar8 + 2;
                puVar7 = puVar7 + 2;
              } while (uVar30 != 0);
            }
            puVar8 = puVar21;
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(puVar24);
            puVar7 = puVar8;
            uVar30 = uVar14;
            puVar21 = puVar8;
          }
        }
LAB_00f653c8:
        local_190 = puVar21;
        puVar24 = puVar8 + (long)iVar36 * 2;
        lVar31 = lVar31 + 1;
        *(uint *)(puVar24 + 1) = local_b0;
        *puVar24 = CONCAT44(uStack_b4,local_b8);
        *(float *)((long)puVar24 + 0xc) = fVar48 - fVar41;
        puVar24 = puVar8;
      } while (lVar31 != lVar32);
      local_19c = CONCAT44((int)uVar30,iVar6);
    }
    local_188 = 1;
    local_a0 = '\x01';
    local_a8 = 0;
    uStack_b4 = 0;
    local_b0 = 0;
    btGeometryUtil::getVerticesFromPlaneEquations(abStack_1a0,(btAlignedObjectArray *)&local_b8);
    lVar31 = local_a8;
    btConvexHullComputer::compute(auStack_180,SUB81(local_a8,0),0,0x10,0.0,0.0);
    if ((lVar31 != 0) && (local_a0 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(lVar31);
    }
    if (puVar7 != (undefined8 *)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(puVar7);
    }
    if ((CONCAT44(fStack_dc,local_e0) != 0) && ((char)uStack_d8 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  iVar6 = (int)local_13c;
  uVar30 = local_13c & 0xffffffff;
  if ((int)local_13c < 1) {
    lVar31 = 0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar31 = (*(code *)PTR_FUN_01048e38)(uVar30 << 4,0x10);
  }
  local_190 = (undefined8 *)0x0;
  local_19c = 0;
  local_188 = '\x01';
  uStack_d4 = 0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  local_c8 = 0;
  local_d0 = 0;
  fStack_e8 = 0.0;
  _uStack_e4 = 0;
  local_f0._0_4_ = 0.0;
  local_f0._4_4_ = 0.0;
  uStack_d8 = 1.401298e-45;
  btAlignedObjectArray<btFace>::resize
            ((btAlignedObjectArray<btFace> *)abStack_1a0,iVar6,(btFace *)&local_f0);
  if ((CONCAT44(fStack_dc,local_e0) != 0) && ((char)uStack_d8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  lVar27 = *(long *)(this + 0x48);
  iVar36 = (int)local_17c;
  uVar14 = local_17c & 0xffffffff;
  uVar34 = *(uint *)(lVar27 + 0xc);
  if (((int)uVar34 < (int)local_17c) && (*(int *)(lVar27 + 0x10) < (int)local_17c)) {
    if ((int)local_17c == 0) {
      lVar32 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar32 = (*(code *)PTR_FUN_01048e38)((long)(int)local_17c << 4,0x10);
      uVar34 = *(uint *)(lVar27 + 0xc);
    }
    if (0 < (int)uVar34) {
      lVar11 = 0;
      do {
        puVar7 = (undefined8 *)(*(long *)(lVar27 + 0x18) + lVar11);
        uVar42 = *puVar7;
        ((undefined8 *)(lVar32 + lVar11))[1] = puVar7[1];
        *(undefined8 *)(lVar32 + lVar11) = uVar42;
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar34 * 0x10 - lVar11 != 0);
    }
    if ((*(long *)(lVar27 + 0x18) != 0) && (*(char *)(lVar27 + 0x20) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(lVar27 + 0x18) = lVar32;
    *(int *)(lVar27 + 0x10) = iVar36;
    *(undefined *)(lVar27 + 0x20) = 1;
  }
  lVar12 = local_130;
  lVar11 = local_150;
  lVar32 = local_170;
  *(int *)(lVar27 + 0xc) = iVar36;
  if (0 < iVar36) {
    lVar27 = 0;
    do {
      uVar42 = *(undefined8 *)(local_170 + lVar27);
      puVar7 = (undefined8 *)(*(long *)(*(long *)(this + 0x48) + 0x18) + lVar27);
      puVar7[1] = ((undefined8 *)(local_170 + lVar27))[1];
      *puVar7 = uVar42;
      lVar27 = lVar27 + 0x10;
    } while (uVar14 * 0x10 - lVar27 != 0);
  }
  if (0 < iVar6) {
    uVar14 = 0;
    do {
      iVar6 = 0;
      piVar23 = (int *)(lVar11 + (long)*(int *)(lVar12 + uVar14 * 4) * 0xc);
      piVar26 = piVar23;
LAB_00f6581c:
      do {
        lVar27 = (long)local_190;
        lVar28 = (long)local_190 + uVar14 * 0x30;
        puVar29 = (uint *)(lVar28 + 4);
        uVar34 = *puVar29;
        iVar36 = piVar26[(long)piVar26[1] * 3 + 2];
        puVar38 = (uint *)(lVar28 + 8);
        if (uVar34 == *puVar38) {
          uVar35 = uVar34 << 1;
          if (uVar34 == 0) {
            uVar35 = 1;
          }
          if ((int)uVar34 < (int)uVar35) {
            if (uVar35 == 0) {
              uVar9 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar9 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar35 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar35 << 2,
                                 0x10);
              uVar34 = *puVar29;
            }
            puVar40 = (ulong *)(lVar27 + uVar14 * 0x30 + 0x10);
            uVar10 = *puVar40;
            if ((int)uVar34 < 1) {
              if (uVar10 != 0) goto LAB_00f65934;
            }
            else {
              uVar15 = (ulong)uVar34;
              if ((uVar34 < 8) || ((uVar9 < uVar10 + uVar15 * 4 && (uVar10 < uVar9 + uVar15 * 4))))
              {
                uVar18 = 0;
              }
              else {
                uVar18 = uVar15 & 0xfffffff8;
                puVar7 = (undefined8 *)(uVar10 + 0x10);
                puVar24 = (undefined8 *)(uVar9 + 0x10);
                uVar25 = uVar18;
                do {
                  puVar8 = puVar7 + -1;
                  uVar42 = puVar7[-2];
                  uVar45 = puVar7[1];
                  uVar44 = *puVar7;
                  uVar25 = uVar25 - 8;
                  puVar7 = puVar7 + 4;
                  puVar24[-1] = *puVar8;
                  puVar24[-2] = uVar42;
                  puVar24[1] = uVar45;
                  *puVar24 = uVar44;
                  puVar24 = puVar24 + 4;
                } while (uVar25 != 0);
                if (uVar18 == uVar15) goto LAB_00f65934;
              }
              lVar28 = uVar15 - uVar18;
              puVar17 = (undefined4 *)(uVar10 + uVar18 * 4);
              puVar20 = (undefined4 *)(uVar9 + uVar18 * 4);
              do {
                lVar28 = lVar28 + -1;
                *puVar20 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar20 = puVar20 + 1;
              } while (lVar28 != 0);
LAB_00f65934:
              if (*(char *)(lVar27 + uVar14 * 0x30 + 0x18) != '\0') {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
            }
            *puVar40 = uVar9;
            uVar34 = *puVar29;
            *puVar38 = uVar35;
            *(undefined *)(lVar27 + uVar14 * 0x30 + 0x18) = 1;
          }
        }
        *(int *)(*(long *)(lVar27 + uVar14 * 0x30 + 0x10) + (long)(int)uVar34 * 4) = iVar36;
        *puVar29 = *puVar29 + 1;
        if (1 < iVar6) {
          iVar6 = 2;
          piVar26 = piVar26 + (long)piVar26[1] * 3 + (long)piVar26[(long)piVar26[1] * 3] * 3;
          if (piVar26 == piVar23) goto LAB_00f65a38;
          goto LAB_00f6581c;
        }
        puVar7 = (undefined8 *)(lVar32 + (long)iVar36 * 0x10);
        puVar24 = (undefined8 *)(lVar32 + (long)piVar26[2] * 0x10);
        uVar42 = *puVar7;
        uVar44 = *puVar24;
        fVar41 = (float)uVar44 - (float)uVar42;
        fVar48 = (float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar42 >> 0x20);
        lVar27 = (long)iVar6;
        fVar43 = *(float *)(puVar24 + 1) - *(float *)(puVar7 + 1);
        *(undefined4 *)((long)&stack0xffffffffffffff1c + lVar27 * 0x10) = 0;
        fVar47 = (float)NEON_fmadd(fVar43,fVar43,fVar41 * fVar41 + fVar48 * fVar48);
        fVar47 = 1.0 / SQRT(fVar47);
        *(ulong *)((long)&local_f0 + lVar27 * 4 * 4) = CONCAT44(fVar48 * fVar47,fVar41 * fVar47);
        (&fStack_e8)[lVar27 * 4] = fVar47 * fVar43;
        iVar6 = iVar6 + 1;
        piVar26 = piVar26 + (long)piVar26[1] * 3 + (long)piVar26[(long)piVar26[1] * 3] * 3;
      } while (piVar26 != piVar23);
      if (iVar6 == 2) {
LAB_00f65a38:
        puVar7 = (undefined8 *)(lVar31 + uVar14 * 0x10);
        *(undefined4 *)((long)puVar7 + 0xc) = 0;
        fVar43 = -(fStack_e8 * fStack_dc) + local_f0._4_4_ * uStack_d8;
        fVar47 = -((float)local_f0 * uStack_d8) + fStack_e8 * local_e0;
        fVar41 = -(local_e0 * local_f0._4_4_) + (float)local_f0 * fStack_dc;
        fVar48 = (float)NEON_fmadd(fVar41,fVar41,fVar43 * fVar43 + fVar47 * fVar47);
        fVar48 = 1.0 / SQRT(fVar48);
        *puVar7 = CONCAT44(fVar47 * fVar48,fVar43 * fVar48);
        *(float *)(puVar7 + 1) = fVar48 * fVar41;
        lVar27 = (long)local_190 + uVar14 * 0x30;
        *(float *)(lVar27 + 0x20) = fVar43 * fVar48;
        *(undefined4 *)(lVar27 + 0x24) = *(undefined4 *)((long)puVar7 + 4);
        *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)(puVar7 + 1);
        *(undefined4 *)(lVar27 + 0x2c) = 0x7149f2ca;
      }
      else {
        puVar7 = (undefined8 *)(lVar31 + uVar14 * 0x10);
        *puVar7 = 0;
        puVar7[1] = 0;
      }
      uVar34 = *(uint *)((long)local_190 + uVar14 * 0x30 + 4);
      uVar9 = (ulong)uVar34;
      if ((int)uVar34 < 1) {
        fVar41 = 1e+30;
      }
      else {
        puVar17 = (undefined4 *)(lVar31 + uVar14 * 0x10);
        fVar41 = 1e+30;
        uVar42 = *(undefined8 *)(puVar17 + 1);
        piVar26 = *(int **)((long)local_190 + uVar14 * 0x30 + 0x10);
        do {
          uVar9 = uVar9 - 1;
          puVar20 = (undefined4 *)(*(long *)(*(long *)(this + 0x48) + 0x18) + (long)*piVar26 * 0x10)
          ;
          uVar44 = *(undefined8 *)(puVar20 + 1);
          fVar48 = (float)NEON_fmadd(*puVar17,*puVar20,(float)uVar42 * (float)uVar44);
          fVar41 = (float)NEON_fminnm(fVar41,fVar48 + (float)((ulong)uVar42 >> 0x20) *
                                                      (float)((ulong)uVar44 >> 0x20));
          piVar26 = piVar26 + 1;
        } while (uVar9 != 0);
      }
      lVar27 = uVar14 * 0x30;
      uVar14 = uVar14 + 1;
      *(float *)((long)local_190 + lVar27 + 0x2c) = -fVar41;
    } while (uVar14 != uVar30);
  }
  if ((int)local_19c < 1) {
    btConvexPolyhedron::initialize();
  }
  else {
    local_1d0 = 0;
    uVar34 = 0;
    uVar30 = 0;
    do {
      uVar14 = uVar30;
      if (local_1d0 == uVar34) {
        uVar35 = (int)local_1d0 << 1;
        if (local_1d0 == 0) {
          uVar35 = 1;
        }
        if (local_1d0 < uVar35) {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uVar14 = (*(code *)PTR_FUN_01048e38)((ulong)uVar35 << 2,0x10);
          if (local_1d0 == 0) {
            if (uVar30 == 0) {
              uVar34 = 1;
              goto LAB_00f65b9c;
            }
          }
          else {
            if (local_1d0 < 8) {
              uVar9 = 0;
            }
            else if ((uVar14 < uVar30 + local_1d0 * 4) && (uVar30 < uVar14 + local_1d0 * 4)) {
              uVar9 = 0;
            }
            else {
              uVar10 = local_1d0 & 0xfffffffffffffff8;
              uVar9 = local_1d0 & 0x7ffffffffffffff8;
              puVar7 = (undefined8 *)(uVar30 + 0x10);
              puVar24 = (undefined8 *)(uVar14 + 0x10);
              do {
                puVar8 = puVar7 + -1;
                uVar42 = puVar7[-2];
                uVar45 = puVar7[1];
                uVar44 = *puVar7;
                uVar10 = uVar10 - 8;
                puVar7 = puVar7 + 4;
                puVar24[-1] = *puVar8;
                puVar24[-2] = uVar42;
                puVar24[1] = uVar45;
                *puVar24 = uVar44;
                puVar24 = puVar24 + 4;
              } while (uVar10 != 0);
              if (local_1d0 == uVar9) goto LAB_00f65b70;
            }
            do {
              lVar27 = uVar9 * 4;
              uVar9 = uVar9 + 1;
              *(undefined4 *)(uVar14 + lVar27) = *(undefined4 *)(uVar30 + lVar27);
            } while (local_1d0 != uVar9);
          }
LAB_00f65b70:
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(uVar30);
          uVar34 = uVar35;
        }
      }
LAB_00f65b9c:
      *(int *)(uVar14 + local_1d0 * 4) = (int)local_1d0;
      local_1d0 = local_1d0 + 1;
      uVar30 = uVar14;
    } while ((int)local_1d0 < (int)local_19c);
    if ((int)local_1d0 == 0) {
      btConvexPolyhedron::initialize();
    }
    else {
      do {
        iVar6 = (int)local_1d0;
        local_1d0 = (ulong)(iVar6 - 1U);
        uVar34 = *(uint *)(uVar14 + (long)(int)(iVar6 - 1U) * 4);
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar29 = (uint *)(*(code *)PTR_FUN_01048e38)(4,0x10);
        *puVar29 = uVar34;
        if (iVar6 < 2) {
LAB_00f6612c:
          uVar35 = 1;
LAB_00f66130:
          uVar30 = 0;
          do {
            lVar27 = (long)local_190;
            uVar2 = puVar29[uVar30];
            uVar34 = *(uint *)((long)local_190 + (long)(int)uVar2 * 0x30 + 4);
            uVar9 = (ulong)uVar34;
            if ((int)uVar34 < 1) {
              __s = (void *)0x0;
            }
            else {
              __n = uVar9 * 4;
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              __s = (void *)(*(code *)PTR_FUN_01048e38)(__n,0x10);
              memset(__s,0,__n);
              pvVar16 = *(void **)(lVar27 + (long)(int)uVar2 * 0x30 + 0x10);
              if ((uVar34 < 8) ||
                 ((__s < (void *)((long)pvVar16 + uVar9 * 4) &&
                  (pvVar16 < (void *)((long)__s + __n))))) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar9 & 0xfffffff8;
                puVar7 = (undefined8 *)((long)pvVar16 + 0x10);
                puVar24 = (undefined8 *)((long)__s + 0x10);
                uVar15 = uVar10;
                do {
                  puVar8 = puVar7 + -1;
                  uVar42 = puVar7[-2];
                  uVar45 = puVar7[1];
                  uVar44 = *puVar7;
                  uVar15 = uVar15 - 8;
                  puVar7 = puVar7 + 4;
                  puVar24[-1] = *puVar8;
                  puVar24[-2] = uVar42;
                  puVar24[1] = uVar45;
                  *puVar24 = uVar44;
                  puVar24 = puVar24 + 4;
                } while (uVar15 != 0);
                if (uVar10 == uVar9) goto LAB_00f66200;
              }
              lVar27 = uVar9 - uVar10;
              puVar17 = (undefined4 *)((long)pvVar16 + uVar10 * 4);
              puVar20 = (undefined4 *)((long)__s + uVar10 * 4);
              do {
                lVar27 = lVar27 + -1;
                *puVar20 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar20 = puVar20 + 1;
              } while (lVar27 != 0);
            }
LAB_00f66200:
            lVar27 = *(long *)(this + 0x48);
            iVar6 = *(int *)(lVar27 + 0x2c);
            if (iVar6 == *(int *)(lVar27 + 0x30)) {
              iVar36 = iVar6 << 1;
              if (iVar6 == 0) {
                iVar36 = 1;
              }
              btAlignedObjectArray<btFace>::reserve
                        ((btAlignedObjectArray<btFace> *)(lVar27 + 0x28),iVar36);
              iVar6 = *(int *)(lVar27 + 0x2c);
            }
            lVar32 = *(long *)(lVar27 + 0x38);
            lVar11 = lVar32 + (long)iVar6 * 0x30;
            pcVar39 = (char *)(lVar11 + 0x18);
            *pcVar39 = '\x01';
            ppvVar33 = (void **)(lVar11 + 0x10);
            *ppvVar33 = (void *)0x0;
            puVar38 = (uint *)(lVar11 + 4);
            *puVar38 = 0;
            *(uint *)(lVar11 + 8) = 0;
            if ((int)uVar34 < 1) {
              *puVar38 = uVar34;
            }
            else {
              lVar12 = uVar9 * 4;
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              pvVar16 = (void *)(*(code *)PTR_FUN_01048e38)(lVar12,0x10);
              uVar2 = *puVar38;
              uVar10 = (ulong)uVar2;
              pvVar13 = *ppvVar33;
              if ((int)uVar2 < 1) {
                if (pvVar13 != (void *)0x0) goto LAB_00f66374;
              }
              else {
                if ((uVar2 < 8) ||
                   ((pvVar16 < (void *)((long)pvVar13 + uVar10 * 4) &&
                    (pvVar13 < (void *)((long)pvVar16 + uVar10 * 4))))) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = uVar10 & 0xfffffff8;
                  puVar7 = (undefined8 *)((long)pvVar13 + 0x10);
                  puVar24 = (undefined8 *)((long)pvVar16 + 0x10);
                  uVar18 = uVar15;
                  do {
                    puVar8 = puVar7 + -1;
                    uVar42 = puVar7[-2];
                    uVar45 = puVar7[1];
                    uVar44 = *puVar7;
                    uVar18 = uVar18 - 8;
                    puVar7 = puVar7 + 4;
                    puVar24[-1] = *puVar8;
                    puVar24[-2] = uVar42;
                    puVar24[1] = uVar45;
                    *puVar24 = uVar44;
                    puVar24 = puVar24 + 4;
                  } while (uVar18 != 0);
                  if (uVar15 == uVar10) goto LAB_00f66374;
                }
                lVar28 = uVar10 - uVar15;
                puVar17 = (undefined4 *)((long)pvVar13 + uVar15 * 4);
                puVar20 = (undefined4 *)((long)pvVar16 + uVar15 * 4);
                do {
                  lVar28 = lVar28 + -1;
                  *puVar20 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar20 = puVar20 + 1;
                } while (lVar28 != 0);
LAB_00f66374:
                if (*pcVar39 != '\0') {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
              }
              *pcVar39 = '\x01';
              *ppvVar33 = pvVar16;
              *(uint *)(lVar11 + 8) = uVar34;
              memset(pvVar16,0,(long)(int)uVar34 << 2);
              pvVar16 = *ppvVar33;
              *puVar38 = uVar34;
              if (uVar34 < 8) {
                uVar15 = 0;
              }
              else if ((pvVar16 < (void *)((long)__s + lVar12)) &&
                      (__s < (void *)((long)pvVar16 + lVar12))) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar9 & 0xfffffff8;
                puVar7 = (undefined8 *)((long)__s + 0x10);
                puVar24 = (undefined8 *)((long)pvVar16 + 0x10);
                uVar10 = uVar15;
                do {
                  puVar8 = puVar7 + -1;
                  uVar42 = puVar7[-2];
                  uVar45 = puVar7[1];
                  uVar44 = *puVar7;
                  uVar10 = uVar10 - 8;
                  puVar7 = puVar7 + 4;
                  puVar24[-1] = *puVar8;
                  puVar24[-2] = uVar42;
                  puVar24[1] = uVar45;
                  *puVar24 = uVar44;
                  puVar24 = puVar24 + 4;
                } while (uVar10 != 0);
                if (uVar15 == uVar9) goto LAB_00f66464;
              }
              lVar11 = uVar9 - uVar15;
              puVar17 = (undefined4 *)((long)pvVar16 + uVar15 * 4);
              puVar20 = (undefined4 *)((long)__s + uVar15 * 4);
              do {
                lVar11 = lVar11 + -1;
                *puVar17 = *puVar20;
                puVar17 = puVar17 + 1;
                puVar20 = puVar20 + 1;
              } while (lVar11 != 0);
            }
LAB_00f66464:
            lVar32 = lVar32 + (long)iVar6 * 0x30;
            *(ulong *)(lVar32 + 0x28) = CONCAT35(fStack_dc._0_3_,CONCAT41(local_e0,uStack_e1));
            *(ulong *)(lVar32 + 0x20) = CONCAT35(uStack_e4,CONCAT41(fStack_e8,local_f0._7_1_));
            *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
            if (__s != (void *)0x0) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)(__s);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar35);
        }
        else {
          uVar35 = 1;
          lVar27 = (long)local_190 + (long)(int)uVar34 * 0x30;
          uVar34 = 1;
          uVar49 = *(undefined4 *)(lVar27 + 0x20);
          uVar42 = *(undefined8 *)(lVar27 + 0x24);
          uVar30 = (ulong)(iVar6 - 2);
          puVar38 = puVar29;
          do {
            uVar2 = *(uint *)(uVar14 + uVar30 * 4);
            lVar27 = (long)local_190 + (long)(int)uVar2 * 0x30;
            uVar44 = *(undefined8 *)(lVar27 + 0x24);
            fVar41 = (float)NEON_fmadd(*(undefined4 *)(lVar27 + 0x20),uVar49,
                                       (float)uVar44 * (float)uVar42);
            puVar29 = puVar38;
            if (0.999 < fVar41 + (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar42 >> 0x20)) {
              if (uVar35 == uVar34) {
                uVar3 = uVar34 << 1;
                if (uVar34 == 0) {
                  uVar3 = 1;
                }
                if ((int)uVar34 < (int)uVar3) {
                  if (uVar3 == 0) {
                    puVar29 = (uint *)0x0;
                    if (0 < (int)uVar34) goto LAB_00f65da8;
LAB_00f65dd8:
                    uVar34 = uVar3;
                    if (puVar38 == (uint *)0x0) goto LAB_00f65e98;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    puVar29 = (uint *)(*(code *)PTR_FUN_01048e38)
                                                (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar3 << 2,0x10);
                    if ((int)uVar34 < 1) goto LAB_00f65dd8;
LAB_00f65da8:
                    uVar9 = (ulong)uVar34;
                    if (uVar34 < 8) {
                      uVar15 = 0;
LAB_00f65e3c:
                      lVar27 = uVar9 - uVar15;
                      puVar19 = puVar38 + uVar15;
                      puVar22 = puVar29 + uVar15;
                      do {
                        lVar27 = lVar27 + -1;
                        *puVar22 = *puVar19;
                        puVar19 = puVar19 + 1;
                        puVar22 = puVar22 + 1;
                      } while (lVar27 != 0);
                    }
                    else {
                      if ((puVar29 < puVar38 + uVar9) && (puVar38 < puVar29 + uVar9)) {
                        uVar15 = 0;
                        goto LAB_00f65e3c;
                      }
                      uVar15 = uVar9 & 0xfffffff8;
                      puVar7 = (undefined8 *)(puVar38 + 4);
                      puVar24 = (undefined8 *)(puVar29 + 4);
                      uVar10 = uVar15;
                      do {
                        puVar8 = puVar7 + -1;
                        uVar44 = puVar7[-2];
                        uVar46 = puVar7[1];
                        uVar45 = *puVar7;
                        uVar10 = uVar10 - 8;
                        puVar7 = puVar7 + 4;
                        puVar24[-1] = *puVar8;
                        puVar24[-2] = uVar44;
                        puVar24[1] = uVar46;
                        *puVar24 = uVar45;
                        puVar24 = puVar24 + 4;
                      } while (uVar10 != 0);
                      if (uVar15 != uVar9) goto LAB_00f65e3c;
                    }
                  }
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)(puVar38);
                  uVar34 = uVar3;
                }
              }
LAB_00f65e98:
              puVar29[(int)uVar35] = uVar2;
              uVar35 = uVar35 + 1;
              iVar6 = (int)local_1d0;
              if (0 < iVar6) {
                uVar9 = 0;
                do {
                  if (*(uint *)(uVar14 + uVar9 * 4) == uVar2) {
                    if ((int)uVar9 < iVar6) {
                      local_1d0 = (ulong)(iVar6 - 1);
                      uVar1 = *(undefined4 *)(uVar14 + uVar9 * 4);
                      *(undefined4 *)(uVar14 + uVar9 * 4) = *(undefined4 *)(uVar14 + local_1d0 * 4);
                      *(undefined4 *)(uVar14 + local_1d0 * 4) = uVar1;
                    }
                    break;
                  }
                  uVar9 = uVar9 + 1;
                } while (local_1d0 != uVar9);
              }
            }
            bVar5 = 0 < (long)uVar30;
            uVar30 = uVar30 - 1;
            puVar38 = puVar29;
          } while (bVar5);
          if ((int)uVar35 < 2) {
            if (uVar35 == 1) goto LAB_00f6612c;
          }
          else {
            uVar34 = 0;
            uVar30 = 0;
            local_a8 = 0;
            uVar9 = (ulong)uVar35;
            uStack_b4 = 0;
            local_b0 = 0;
            local_100._0_4_ = 0.0;
            local_100._4_4_ = 0.0;
            local_f8._0_4_ = 0.0;
            local_f8._4_4_ = 0;
            do {
              lVar27 = (long)local_190 + (long)(int)puVar29[uVar30] * 0x30;
              iVar6 = *(int *)(lVar27 + 4);
              local_100._0_4_ = (float)local_100 + (float)*(undefined8 *)(lVar27 + 0x20);
              local_100._4_4_ =
                   local_100._4_4_ + (float)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x20);
              local_f8._0_4_ = (float)local_f8 + *(float *)(lVar27 + 0x28);
              if (0 < iVar6) {
                lVar32 = 0;
                do {
                  local_a0 = '\x01';
                  iVar36 = *(int *)(*(long *)(lVar27 + 0x10) + lVar32 * 4);
                  if (0 < (int)uVar34) {
                    uVar10 = (ulong)uVar34;
                    piVar26 = (int *)(local_a8 + 0x14);
                    do {
                      if (*piVar26 == iVar36) goto LAB_00f65ffc;
                      uVar10 = uVar10 - 1;
                      piVar26 = piVar26 + 6;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)
                           (*(long *)(*(long *)(this + 0x48) + 0x18) + (long)iVar36 * 0x10);
                  uVar44 = puVar7[1];
                  uVar42 = *puVar7;
                  fStack_e8 = (float)uVar44;
                  _uStack_e4 = (undefined4)((ulong)uVar44 >> 0x20);
                  local_f0._0_4_ = (float)uVar42;
                  local_f0._4_4_ = (float)((ulong)uVar42 >> 0x20);
                  uVar2 = local_b0;
                  lVar11 = local_a8;
                  if (uVar34 == local_b0) {
                    uVar3 = uVar34 << 1;
                    if (uVar34 == 0) {
                      uVar3 = 1;
                    }
                    if ((int)uVar34 < (int)uVar3) {
                      if (uVar3 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        gNumAlignedAllocs = gNumAlignedAllocs + 1;
                        lVar11 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar3 * 0x18,0x10);
                        uVar34 = uStack_b4;
                      }
                      if (0 < (int)uVar34) {
                        lVar12 = 0;
                        do {
                          puVar7 = (undefined8 *)(lVar11 + lVar12);
                          puVar24 = (undefined8 *)(local_a8 + lVar12);
                          lVar12 = lVar12 + 0x18;
                          uVar44 = puVar24[1];
                          uVar42 = *puVar24;
                          puVar7[2] = puVar24[2];
                          puVar7[1] = uVar44;
                          *puVar7 = uVar42;
                        } while ((ulong)uVar34 * 0x18 - lVar12 != 0);
                      }
                      uVar34 = uStack_b4;
                      uVar2 = uVar3;
                      if ((local_a8 != 0) && (local_a0 != '\0')) {
                        gNumAlignedFree = gNumAlignedFree + 1;
                        (*(code *)PTR_FUN_01048e40)();
                        uVar34 = uStack_b4;
                      }
                    }
                  }
                  local_a8 = lVar11;
                  local_b0 = uVar2;
                  puVar7 = (undefined8 *)(local_a8 + (long)(int)uVar34 * 0x18);
                  puVar7[1] = CONCAT44(_uStack_e4,fStack_e8);
                  *puVar7 = CONCAT44(local_f0._4_4_,(float)local_f0);
                  *(float *)(puVar7 + 2) = local_e0;
                  *(int *)((long)puVar7 + 0x14) = iVar36;
                  uVar34 = uStack_b4 + 1;
                  iVar6 = *(int *)(lVar27 + 4);
                  uStack_b4 = uVar34;
LAB_00f65ffc:
                  lVar32 = lVar32 + 1;
                } while (lVar32 < iVar6);
              }
              local_a0 = '\x01';
              uVar30 = uVar30 + 1;
            } while (uVar30 != uVar9);
            local_e0 = 0.0;
            fStack_dc = 0.0;
            uStack_d8 = (float)CONCAT31(uStack_d8._1_3_,1);
            local_f0._4_4_ = 0.0;
            fStack_e8 = 0.0;
            fVar41 = (float)NEON_fmadd((float)local_f8,(float)local_f8,
                                       (float)local_100 * (float)local_100 +
                                       local_100._4_4_ * local_100._4_4_);
            lVar27 = (long)local_190 + (long)(int)*puVar29 * 0x30;
            local_d0 = *(undefined8 *)(lVar27 + 0x20);
            local_c8 = *(undefined8 *)(lVar27 + 0x28);
            local_1a8 = '\x01';
            local_1b0 = 0;
            local_1bc = 0;
            fVar41 = 1.0 / SQRT(fVar41);
            local_100 = CONCAT44(local_100._4_4_ * fVar41,(float)local_100 * fVar41);
            local_f8 = CONCAT44(local_f8._4_4_,fVar41 * (float)local_f8);
            GrahamScanConvexHull2D
                      ((btAlignedObjectArray *)&local_b8,abStack_1c0,(btVector3 *)&local_100);
            if (0 < (int)local_1bc) {
              lVar27 = 0;
              do {
                lVar32 = local_1b0;
                if (local_f0._4_4_ == fStack_e8) {
                  fVar41 = (float)((int)local_f0._4_4_ << 1);
                  if (local_f0._4_4_ == 0.0) {
                    fVar41 = 1.401298e-45;
                  }
                  if ((int)local_f0._4_4_ < (int)fVar41) {
                    if (fVar41 == 0.0) {
                      uVar30 = 0;
                    }
                    else {
                      gNumAlignedAllocs = gNumAlignedAllocs + 1;
                      uVar30 = (*(code *)PTR_FUN_01048e38)
                                         (-(ulong)((uint)fVar41 >> 0x1f) & 0xfffffffc00000000 |
                                          (ulong)(uint)fVar41 << 2,0x10);
                    }
                    uVar10 = CONCAT44(fStack_dc,local_e0);
                    if ((int)local_f0._4_4_ < 1) {
                      if (uVar10 != 0) goto LAB_00f6669c;
                    }
                    else {
                      uVar15 = (ulong)(uint)local_f0._4_4_;
                      if (((uint)local_f0._4_4_ < 8) ||
                         ((uVar30 < uVar10 + uVar15 * 4 && (uVar10 < uVar30 + uVar15 * 4)))) {
                        uVar18 = 0;
                      }
                      else {
                        uVar18 = uVar15 & 0xfffffff8;
                        puVar7 = (undefined8 *)(uVar10 + 0x10);
                        puVar24 = (undefined8 *)(uVar30 + 0x10);
                        uVar25 = uVar18;
                        do {
                          puVar8 = puVar7 + -1;
                          uVar42 = puVar7[-2];
                          uVar45 = puVar7[1];
                          uVar44 = *puVar7;
                          uVar25 = uVar25 - 8;
                          puVar7 = puVar7 + 4;
                          puVar24[-1] = *puVar8;
                          puVar24[-2] = uVar42;
                          puVar24[1] = uVar45;
                          *puVar24 = uVar44;
                          puVar24 = puVar24 + 4;
                        } while (uVar25 != 0);
                        if (uVar18 == uVar15) goto LAB_00f6669c;
                      }
                      lVar11 = uVar15 - uVar18;
                      puVar17 = (undefined4 *)(uVar10 + uVar18 * 4);
                      puVar20 = (undefined4 *)(uVar30 + uVar18 * 4);
                      do {
                        lVar11 = lVar11 + -1;
                        *puVar20 = *puVar17;
                        puVar17 = puVar17 + 1;
                        puVar20 = puVar20 + 1;
                      } while (lVar11 != 0);
LAB_00f6669c:
                      if ((char)uStack_d8 != '\0') {
                        gNumAlignedFree = gNumAlignedFree + 1;
                        (*(code *)PTR_FUN_01048e40)();
                      }
                    }
                    local_e0 = (float)uVar30;
                    fStack_dc = (float)(uVar30 >> 0x20);
                    uStack_d8 = (float)CONCAT31(uStack_d8._1_3_,1);
                    fStack_e8 = fVar41;
                  }
                }
                *(undefined4 *)(CONCAT44(fStack_dc,local_e0) + (long)(int)local_f0._4_4_ * 4) =
                     *(undefined4 *)(lVar32 + lVar27 * 0x18 + 0x14);
                uVar30 = (ulong)uStack_b4;
                local_f0._4_4_ = (float)((int)local_f0._4_4_ + 1);
                if (0 < (int)uStack_b4) {
                  piVar26 = (int *)(local_a8 + 0x14);
                  do {
                    if (*piVar26 == *(int *)(local_1b0 + lVar27 * 0x18 + 0x14)) {
                      *piVar26 = -1;
                      break;
                    }
                    uVar30 = uVar30 - 1;
                    piVar26 = piVar26 + 6;
                  } while (uVar30 != 0);
                }
                lVar27 = lVar27 + 1;
              } while (lVar27 < (int)local_1bc);
            }
            if (0 < (int)uStack_b4) {
              uVar30 = 0;
              do {
                iVar6 = *(int *)(local_a8 + uVar30 * 0x18 + 0x14);
                bVar5 = true;
                if (iVar6 != -1) {
                  bVar5 = (int)local_19c + -1 < 0;
                }
                if (bVar5 == (iVar6 != -1 && SBORROW4((int)local_19c,1))) {
                  uVar10 = 0;
                  puVar38 = puVar29;
                  uVar15 = uVar9;
LAB_00f667ac:
                  do {
                    if (uVar10 != *puVar38) {
                      uVar15 = uVar15 - 1;
                      puVar38 = puVar38 + 1;
                      if (uVar15 != 0) goto LAB_00f667ac;
                      uVar34 = *(uint *)((long)local_190 + uVar10 * 0x30 + 4);
                      uVar15 = (ulong)uVar34;
                      if (0 < (int)uVar34) {
                        piVar26 = *(int **)((long)local_190 + uVar10 * 0x30 + 0x10);
                        do {
                          if (*piVar26 == iVar6) {
                            bVar5 = true;
                            goto joined_r0x00f66800;
                          }
                          uVar15 = uVar15 - 1;
                          piVar26 = piVar26 + 1;
                        } while (uVar15 != 0);
                      }
                    }
                    uVar10 = uVar10 + 1;
                    puVar38 = puVar29;
                    uVar15 = uVar9;
                  } while (uVar10 != (local_19c & 0xffffffff));
                }
                uVar30 = uVar30 + 1;
              } while (uVar30 != uStack_b4);
            }
            btAlignedObjectArray<btFace>::push_back
                      ((btAlignedObjectArray<btFace> *)(*(long *)(this + 0x48) + 0x28),
                       (btFace *)&local_f0);
            bVar5 = false;
joined_r0x00f66800:
            if ((local_1b0 != 0) && (local_1a8 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            if ((CONCAT44(fStack_dc,local_e0) != 0) && ((char)uStack_d8 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            if ((local_a8 != 0) && (local_a0 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            if (bVar5) goto LAB_00f66130;
          }
        }
        if (puVar29 != (uint *)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(puVar29);
        }
      } while ((int)local_1d0 != 0);
      btConvexPolyhedron::initialize();
      if (uVar14 == 0) goto LAB_00f668fc;
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(uVar14);
  }
LAB_00f668fc:
  uVar30 = local_19c & 0xffffffff;
  if (0 < (int)local_19c) {
    lVar27 = 0;
    do {
      lVar32 = (long)local_190 + lVar27;
      if (*(long *)(lVar32 + 0x10) != 0 && *(char *)(lVar32 + 0x18) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      lVar27 = lVar27 + 0x30;
      *(undefined *)(lVar32 + 0x18) = 1;
      *(undefined8 *)(lVar32 + 0x10) = 0;
      *(undefined4 *)(lVar32 + 4) = 0;
      *(undefined4 *)(lVar32 + 8) = 0;
    } while (uVar30 * 0x30 - lVar27 != 0);
  }
  if ((local_190 != (undefined8 *)0x0) && (local_188 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (lVar31 != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((local_130 != 0) && (local_128 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((local_150 != 0) && (local_148 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((local_170 != 0) && (local_168 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((local_110 != (undefined8 *)0x0) && (local_108 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


