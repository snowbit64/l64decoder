// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _optimize<unsigned_int>
// Entry Point: 00b7a020
// Size: 1644 bytes
// Signature: void __thiscall _optimize<unsigned_int>(IndexedTriangleSet * this, uint * * param_1)


/* void IndexedTriangleSet::_optimize<unsigned int>(unsigned int**) */

void __thiscall IndexedTriangleSet::_optimize<unsigned_int>(IndexedTriangleSet *this,uint **param_1)

{
  int *piVar1;
  undefined (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  bool bVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  void *pvVar13;
  uint uVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined (*pauVar19) [16];
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  void *pvVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  undefined auVar28 [16];
  uint uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  
  if (this[0x88] != (IndexedTriangleSet)0x0) {
    return;
  }
  this[0x88] = (IndexedTriangleSet)0x1;
  if (*(int *)(this + 0x78) != 0) {
    uVar22 = 0;
    do {
      puVar25 = *(uint **)(*(long *)(this + 0x80) + uVar22 * 8);
      puVar9 = (uint *)operator_new__((ulong)puVar25[3] << 2);
      GeometryUtil::optimiseTriangles
                (puVar25[3] / 3,*puVar25,puVar25[1],*param_1 + puVar25[2],puVar9);
      memcpy(*param_1 + puVar25[2],puVar9,(ulong)puVar25[3] << 2);
      operator_delete__(puVar9);
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)(this + 0x78));
  }
  uVar14 = *(uint *)(this + 8);
  puVar10 = (uint *)operator_new__((ulong)uVar14 << 2);
  GeometryUtil::optimiseVertices(*(uint *)(this + 0x68) / 3,0,uVar14,*param_1,puVar10);
  uVar14 = *(uint *)(this + 0x68);
  uVar22 = (ulong)uVar14;
  puVar11 = (uint *)operator_new__(uVar22 << 2);
  puVar12 = *param_1;
  puVar9 = puVar11;
  puVar25 = puVar12;
  if (uVar14 == 0) {
    if (puVar12 == (uint *)0x0) goto LAB_00b7a164;
  }
  else {
    do {
      uVar22 = uVar22 - 1;
      *puVar9 = puVar10[*puVar25];
      puVar9 = puVar9 + 1;
      puVar25 = puVar25 + 1;
    } while (uVar22 != 0);
  }
  operator_delete__(puVar12);
LAB_00b7a164:
  *param_1 = puVar11;
  pvVar23 = *(void **)(this + 0x10);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 * 3) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        puVar3 = (undefined8 *)((long)pvVar23 + (uVar22 & 0xffffffff) * 4);
        uVar22 = uVar22 + 3;
        puVar4 = (undefined8 *)((long)pvVar13 + (ulong)(*puVar9 * 3) * 4);
        uVar5 = *(undefined4 *)(puVar3 + 1);
        *puVar4 = *puVar3;
        *(undefined4 *)(puVar4 + 1) = uVar5;
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 3 != uVar22);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x10) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x18);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 1) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        uVar17 = uVar22 & 0xfffffffe;
        uVar22 = uVar22 + 2;
        *(undefined8 *)((long)pvVar13 + (ulong)(*puVar9 << 1) * 4) =
             *(undefined8 *)((long)pvVar23 + uVar17 * 4);
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 2 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x18) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x20);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 1) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        uVar17 = uVar22 & 0xfffffffe;
        uVar22 = uVar22 + 2;
        *(undefined8 *)((long)pvVar13 + (ulong)(*puVar9 << 1) * 4) =
             *(undefined8 *)((long)pvVar23 + uVar17 * 4);
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 2 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x20) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x28);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 1) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        uVar17 = uVar22 & 0xfffffffe;
        uVar22 = uVar22 + 2;
        *(undefined8 *)((long)pvVar13 + (ulong)(*puVar9 << 1) * 4) =
             *(undefined8 *)((long)pvVar23 + uVar17 * 4);
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 2 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x28) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x30);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 1) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        uVar17 = uVar22 & 0xfffffffe;
        uVar22 = uVar22 + 2;
        *(undefined8 *)((long)pvVar13 + (ulong)(*puVar9 << 1) * 4) =
             *(undefined8 *)((long)pvVar23 + uVar17 * 4);
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 2 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x30) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x38);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 * 3) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      puVar9 = puVar10;
      do {
        puVar3 = (undefined8 *)((long)pvVar23 + (uVar22 & 0xffffffff) * 4);
        uVar22 = uVar22 + 3;
        puVar4 = (undefined8 *)((long)pvVar13 + (ulong)(*puVar9 * 3) * 4);
        uVar5 = *(undefined4 *)(puVar3 + 1);
        *puVar4 = *puVar3;
        *(undefined4 *)(puVar4 + 1) = uVar5;
        puVar9 = puVar9 + 1;
      } while ((ulong)uVar14 * 3 != uVar22);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x38) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x40);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 2) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      do {
        piVar1 = (int *)((long)puVar10 + uVar22);
        uVar17 = uVar22 & 0xfffffffc;
        uVar22 = uVar22 + 4;
        auVar28 = *(undefined (*) [16])((long)pvVar23 + uVar17 * 4);
        puVar3 = (undefined8 *)((long)pvVar13 + (ulong)(uint)(*piVar1 << 2) * 4);
        puVar3[1] = auVar28._8_8_;
        *puVar3 = auVar28._0_8_;
      } while ((ulong)uVar14 * 4 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x40) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x48);
  if (pvVar23 != (void *)0x0) {
    uVar14 = *(uint *)(this + 8);
    pvVar13 = operator_new__((ulong)(uVar14 << 2) << 2);
    if (uVar14 != 0) {
      uVar22 = 0;
      do {
        piVar1 = (int *)((long)puVar10 + uVar22);
        uVar17 = uVar22 & 0xfffffffc;
        uVar22 = uVar22 + 4;
        auVar28 = *(undefined (*) [16])((long)pvVar23 + uVar17 * 4);
        puVar3 = (undefined8 *)((long)pvVar13 + (ulong)(uint)(*piVar1 << 2) * 4);
        puVar3[1] = auVar28._8_8_;
        *puVar3 = auVar28._0_8_;
      } while ((ulong)uVar14 * 4 - uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x48) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x50);
  uVar14 = 4;
  if (((byte)this[0xd] & 1) != 0) {
    uVar14 = 1;
  }
  if (pvVar23 != (void *)0x0) {
    uVar26 = *(uint *)(this + 8);
    uVar22 = (ulong)uVar26;
    pvVar13 = operator_new__((ulong)(uVar26 * uVar14) << 2);
    if (uVar26 != 0) {
      uVar26 = 0;
      puVar9 = puVar10;
      do {
        memcpy((void *)((long)pvVar13 + (ulong)(*puVar9 * uVar14) * 4),
               (void *)((long)pvVar23 + (ulong)uVar26 * 4),(ulong)(uVar14 << 2));
        uVar26 = uVar26 + uVar14;
        uVar22 = uVar22 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x50) = pvVar13;
  }
  pvVar23 = *(void **)(this + 0x58);
  if (pvVar23 != (void *)0x0) {
    uVar26 = *(uint *)(this + 8);
    uVar22 = (ulong)uVar26;
    pvVar13 = operator_new__((ulong)(uVar26 * uVar14));
    if (uVar26 != 0) {
      uVar26 = 0;
      puVar9 = puVar10;
      do {
        memcpy((void *)((long)pvVar13 + (ulong)(*puVar9 * uVar14)),
               (void *)((long)pvVar23 + (ulong)uVar26),(ulong)uVar14);
        uVar26 = uVar26 + uVar14;
        uVar22 = uVar22 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar22 != 0);
    }
    operator_delete__(pvVar23);
    *(void **)(this + 0x58) = pvVar13;
  }
  puVar24 = *(undefined4 **)(this + 0x60);
  if (puVar24 != (undefined4 *)0x0) {
    uVar14 = *(uint *)(this + 8);
    uVar22 = (ulong)uVar14;
    pvVar23 = operator_new__(uVar22 << 2);
    puVar15 = puVar24;
    puVar9 = puVar10;
    if (uVar14 != 0) {
      do {
        uVar22 = uVar22 - 1;
        *(undefined4 *)((long)pvVar23 + (ulong)*puVar9 * 4) = *puVar15;
        puVar15 = puVar15 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar22 != 0);
    }
    operator_delete__(puVar24);
    *(void **)(this + 0x60) = pvVar23;
  }
  operator_delete__(puVar10);
  uVar14 = *(uint *)(this + 0x78);
  if (uVar14 != 0) {
    uVar22 = 0;
    lVar16 = *(long *)(this + 0x80);
    do {
      puVar9 = *(uint **)(lVar16 + uVar22 * 8);
      uVar26 = puVar9[3];
      if (uVar26 < 3) {
        uVar27 = 0;
        uVar26 = 0;
      }
      else {
        puVar25 = *param_1 + puVar9[2];
        uVar26 = ~(uVar26 - (uVar26 / 3 + ((uint)((ulong)uVar26 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
                  ) + uVar26;
        if (uVar26 < 7) {
          uVar29 = 0;
          uVar20 = 0;
          uVar27 = 0xffffffff;
LAB_00b7a65c:
          iVar18 = ~uVar26 + (int)uVar20;
          uVar26 = uVar27;
          uVar21 = uVar29;
          do {
            uVar27 = *puVar25;
            uVar29 = uVar27;
            if (uVar27 <= uVar21) {
              uVar29 = uVar21;
            }
            if (uVar26 <= uVar27) {
              uVar27 = uVar26;
            }
            bVar8 = iVar18 != -1;
            iVar18 = iVar18 + 1;
            puVar25 = puVar25 + 1;
            uVar26 = uVar27;
            uVar21 = uVar29;
          } while (bVar8);
        }
        else {
          pauVar19 = (undefined (*) [16])(puVar25 + 4);
          uVar20 = (ulong)uVar26 + 1 & 0x1fffffff8;
          auVar30 = ZEXT816(0);
          auVar28._8_8_ = 0xffffffffffffffff;
          auVar28._0_8_ = 0xffffffffffffffff;
          puVar25 = puVar25 + uVar20;
          auVar31._8_8_ = 0xffffffffffffffff;
          auVar31._0_8_ = 0xffffffffffffffff;
          auVar32 = ZEXT816(0);
          uVar17 = uVar20;
          do {
            pauVar2 = pauVar19 + -1;
            auVar7 = *pauVar19;
            auVar6 = *pauVar19;
            pauVar19 = pauVar19 + 2;
            uVar17 = uVar17 - 8;
            auVar30 = NEON_umax(auVar30,*pauVar2,4);
            auVar28 = NEON_umin(*pauVar2,auVar28,4);
            auVar32 = NEON_umax(auVar32,auVar6,4);
            auVar31 = NEON_umin(auVar7,auVar31,4);
          } while (uVar17 != 0);
          auVar30 = NEON_umax(auVar30,auVar32,4);
          auVar28 = NEON_umin(auVar28,auVar31,4);
          uVar29 = NEON_umaxv(auVar30,4);
          uVar27 = NEON_uminv(auVar28,4);
          if ((ulong)uVar26 + 1 != uVar20) goto LAB_00b7a65c;
        }
        uVar26 = (uVar29 - uVar27) + 1;
      }
      uVar22 = uVar22 + 1;
      *puVar9 = uVar27;
      puVar9[1] = uVar26;
    } while (uVar22 != uVar14);
  }
  return;
}


