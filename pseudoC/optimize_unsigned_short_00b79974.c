// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _optimize<unsigned_short>
// Entry Point: 00b79974
// Size: 1708 bytes
// Signature: void __thiscall _optimize<unsigned_short>(IndexedTriangleSet * this, ushort * * param_1)


/* void IndexedTriangleSet::_optimize<unsigned short>(unsigned short**) */

void __thiscall
IndexedTriangleSet::_optimize<unsigned_short>(IndexedTriangleSet *this,ushort **param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  bool bVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  void *pvVar22;
  uint uVar23;
  undefined4 *puVar24;
  ushort *puVar25;
  uint *puVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  void *pvVar33;
  undefined4 *puVar34;
  uint *puVar35;
  uint uVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  undefined2 uVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  uint uVar49;
  undefined auVar50 [16];
  uint uVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  
  if (this[0x88] != (IndexedTriangleSet)0x0) {
    return;
  }
  this[0x88] = (IndexedTriangleSet)0x1;
  if (*(int *)(this + 0x78) != 0) {
    uVar32 = 0;
    do {
      puVar35 = *(uint **)(*(long *)(this + 0x80) + uVar32 * 8);
      puVar19 = (ushort *)operator_new__((ulong)puVar35[3] << 1);
      GeometryUtil::optimiseTriangles
                (puVar35[3] / 3,*puVar35,puVar35[1],*param_1 + puVar35[2],puVar19);
      memcpy(*param_1 + puVar35[2],puVar19,(ulong)puVar35[3] << 1);
      operator_delete__(puVar19);
      uVar32 = uVar32 + 1;
    } while (uVar32 < *(uint *)(this + 0x78));
  }
  uVar23 = *(uint *)(this + 8);
  puVar35 = (uint *)operator_new__((ulong)uVar23 << 2);
  GeometryUtil::optimiseVertices(*(uint *)(this + 0x68) / 3,0,uVar23,*param_1,puVar35);
  uVar23 = *(uint *)(this + 0x68);
  uVar32 = (ulong)uVar23;
  puVar20 = (ushort *)operator_new__(uVar32 << 1);
  puVar21 = *param_1;
  puVar19 = puVar20;
  puVar25 = puVar21;
  if (uVar23 == 0) {
    if (puVar21 == (ushort *)0x0) goto LAB_00b79ab8;
  }
  else {
    do {
      uVar32 = uVar32 - 1;
      *puVar19 = (ushort)puVar35[*puVar25];
      puVar19 = puVar19 + 1;
      puVar25 = puVar25 + 1;
    } while (uVar32 != 0);
  }
  operator_delete__(puVar21);
LAB_00b79ab8:
  *param_1 = puVar20;
  pvVar33 = *(void **)(this + 0x10);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 * 3) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        puVar31 = (undefined8 *)((long)pvVar33 + (uVar32 & 0xffffffff) * 4);
        uVar32 = uVar32 + 3;
        puVar2 = (undefined8 *)((long)pvVar22 + (ulong)(*puVar26 * 3) * 4);
        uVar3 = *(undefined4 *)(puVar31 + 1);
        *puVar2 = *puVar31;
        *(undefined4 *)(puVar2 + 1) = uVar3;
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 3 != uVar32);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x10) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x18);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 1) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        uVar28 = uVar32 & 0xfffffffe;
        uVar32 = uVar32 + 2;
        *(undefined8 *)((long)pvVar22 + (ulong)(*puVar26 << 1) * 4) =
             *(undefined8 *)((long)pvVar33 + uVar28 * 4);
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 2 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x18) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x20);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 1) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        uVar28 = uVar32 & 0xfffffffe;
        uVar32 = uVar32 + 2;
        *(undefined8 *)((long)pvVar22 + (ulong)(*puVar26 << 1) * 4) =
             *(undefined8 *)((long)pvVar33 + uVar28 * 4);
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 2 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x20) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x28);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 1) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        uVar28 = uVar32 & 0xfffffffe;
        uVar32 = uVar32 + 2;
        *(undefined8 *)((long)pvVar22 + (ulong)(*puVar26 << 1) * 4) =
             *(undefined8 *)((long)pvVar33 + uVar28 * 4);
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 2 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x28) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x30);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 1) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        uVar28 = uVar32 & 0xfffffffe;
        uVar32 = uVar32 + 2;
        *(undefined8 *)((long)pvVar22 + (ulong)(*puVar26 << 1) * 4) =
             *(undefined8 *)((long)pvVar33 + uVar28 * 4);
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 2 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x30) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x38);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 * 3) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      puVar26 = puVar35;
      do {
        puVar31 = (undefined8 *)((long)pvVar33 + (uVar32 & 0xffffffff) * 4);
        uVar32 = uVar32 + 3;
        puVar2 = (undefined8 *)((long)pvVar22 + (ulong)(*puVar26 * 3) * 4);
        uVar3 = *(undefined4 *)(puVar31 + 1);
        *puVar2 = *puVar31;
        *(undefined4 *)(puVar2 + 1) = uVar3;
        puVar26 = puVar26 + 1;
      } while ((ulong)uVar23 * 3 != uVar32);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x38) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x40);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 2) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      do {
        piVar1 = (int *)((long)puVar35 + uVar32);
        uVar28 = uVar32 & 0xfffffffc;
        uVar32 = uVar32 + 4;
        auVar50 = *(undefined (*) [16])((long)pvVar33 + uVar28 * 4);
        puVar31 = (undefined8 *)((long)pvVar22 + (ulong)(uint)(*piVar1 << 2) * 4);
        puVar31[1] = auVar50._8_8_;
        *puVar31 = auVar50._0_8_;
      } while ((ulong)uVar23 * 4 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x40) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x48);
  if (pvVar33 != (void *)0x0) {
    uVar23 = *(uint *)(this + 8);
    pvVar22 = operator_new__((ulong)(uVar23 << 2) << 2);
    if (uVar23 != 0) {
      uVar32 = 0;
      do {
        piVar1 = (int *)((long)puVar35 + uVar32);
        uVar28 = uVar32 & 0xfffffffc;
        uVar32 = uVar32 + 4;
        auVar50 = *(undefined (*) [16])((long)pvVar33 + uVar28 * 4);
        puVar31 = (undefined8 *)((long)pvVar22 + (ulong)(uint)(*piVar1 << 2) * 4);
        puVar31[1] = auVar50._8_8_;
        *puVar31 = auVar50._0_8_;
      } while ((ulong)uVar23 * 4 - uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x48) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x50);
  uVar23 = 4;
  if (((byte)this[0xd] & 1) != 0) {
    uVar23 = 1;
  }
  if (pvVar33 != (void *)0x0) {
    uVar36 = *(uint *)(this + 8);
    uVar32 = (ulong)uVar36;
    pvVar22 = operator_new__((ulong)(uVar36 * uVar23) << 2);
    if (uVar36 != 0) {
      uVar36 = 0;
      puVar26 = puVar35;
      do {
        memcpy((void *)((long)pvVar22 + (ulong)(*puVar26 * uVar23) * 4),
               (void *)((long)pvVar33 + (ulong)uVar36 * 4),(ulong)(uVar23 << 2));
        uVar36 = uVar36 + uVar23;
        uVar32 = uVar32 - 1;
        puVar26 = puVar26 + 1;
      } while (uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x50) = pvVar22;
  }
  pvVar33 = *(void **)(this + 0x58);
  if (pvVar33 != (void *)0x0) {
    uVar36 = *(uint *)(this + 8);
    uVar32 = (ulong)uVar36;
    pvVar22 = operator_new__((ulong)(uVar36 * uVar23));
    if (uVar36 != 0) {
      uVar36 = 0;
      puVar26 = puVar35;
      do {
        memcpy((void *)((long)pvVar22 + (ulong)(*puVar26 * uVar23)),
               (void *)((long)pvVar33 + (ulong)uVar36),(ulong)uVar23);
        uVar36 = uVar36 + uVar23;
        uVar32 = uVar32 - 1;
        puVar26 = puVar26 + 1;
      } while (uVar32 != 0);
    }
    operator_delete__(pvVar33);
    *(void **)(this + 0x58) = pvVar22;
  }
  puVar34 = *(undefined4 **)(this + 0x60);
  if (puVar34 != (undefined4 *)0x0) {
    uVar23 = *(uint *)(this + 8);
    uVar32 = (ulong)uVar23;
    pvVar33 = operator_new__(uVar32 << 2);
    puVar24 = puVar34;
    puVar26 = puVar35;
    if (uVar23 != 0) {
      do {
        uVar32 = uVar32 - 1;
        *(undefined4 *)((long)pvVar33 + (ulong)*puVar26 * 4) = *puVar24;
        puVar24 = puVar24 + 1;
        puVar26 = puVar26 + 1;
      } while (uVar32 != 0);
    }
    operator_delete__(puVar34);
    *(void **)(this + 0x60) = pvVar33;
  }
  operator_delete__(puVar35);
  uVar23 = *(uint *)(this + 0x78);
  if (uVar23 != 0) {
    uVar32 = 0;
    lVar27 = *(long *)(this + 0x80);
    do {
      puVar35 = *(uint **)(lVar27 + uVar32 * 8);
      uVar36 = puVar35[3];
      if (uVar36 < 3) {
        uVar49 = 0;
        uVar36 = 0;
      }
      else {
        puVar19 = *param_1 + puVar35[2];
        uVar36 = ~(uVar36 - (uVar36 / 3 + ((uint)((ulong)uVar36 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
                  ) + uVar36;
        if (uVar36 < 0xf) {
          uVar51 = 0;
          uVar30 = 0;
          uVar49 = 0xffffffff;
LAB_00b79ff0:
          iVar29 = ~uVar36 + (int)uVar30;
          uVar36 = uVar49;
          uVar18 = uVar51;
          do {
            uVar4 = *puVar19;
            uVar51 = (uint)uVar4;
            if (uVar4 <= uVar18) {
              uVar51 = uVar18;
            }
            uVar49 = (uint)uVar4;
            if (uVar36 <= uVar4) {
              uVar49 = uVar36;
            }
            bVar17 = iVar29 != -1;
            iVar29 = iVar29 + 1;
            puVar19 = puVar19 + 1;
            uVar36 = uVar49;
            uVar18 = uVar51;
          } while (bVar17);
        }
        else {
          puVar31 = (undefined8 *)(puVar19 + 8);
          uVar30 = (ulong)uVar36 + 1 & 0x1fffffff0;
          auVar52 = ZEXT816(0);
          auVar50._8_8_ = 0xffffffffffffffff;
          auVar50._0_8_ = 0xffffffffffffffff;
          puVar19 = puVar19 + uVar30;
          auVar53._8_8_ = 0xffffffffffffffff;
          auVar53._0_8_ = 0xffffffffffffffff;
          auVar54._8_8_ = 0xffffffffffffffff;
          auVar54._0_8_ = 0xffffffffffffffff;
          auVar55._8_8_ = 0xffffffffffffffff;
          auVar55._0_8_ = 0xffffffffffffffff;
          auVar56 = ZEXT816(0);
          auVar57 = ZEXT816(0);
          auVar58 = ZEXT816(0);
          uVar28 = uVar30;
          do {
            uVar8 = puVar31[-1];
            uVar7 = puVar31[-2];
            uVar12 = puVar31[1];
            uVar11 = *puVar31;
            puVar31 = puVar31 + 4;
            uVar28 = uVar28 - 0x10;
            uVar37 = (undefined2)((ulong)uVar8 >> 0x10);
            uVar41 = (undefined2)((ulong)uVar8 >> 0x20);
            uVar45 = (undefined2)((ulong)uVar8 >> 0x30);
            uVar38 = (undefined2)((ulong)uVar7 >> 0x10);
            uVar42 = (undefined2)((ulong)uVar7 >> 0x20);
            uVar46 = (undefined2)((ulong)uVar7 >> 0x30);
            uVar39 = (undefined2)((ulong)uVar12 >> 0x10);
            uVar43 = (undefined2)((ulong)uVar12 >> 0x20);
            uVar47 = (undefined2)((ulong)uVar12 >> 0x30);
            uVar40 = (undefined2)((ulong)uVar11 >> 0x10);
            uVar44 = (undefined2)((ulong)uVar11 >> 0x20);
            uVar48 = (undefined2)((ulong)uVar11 >> 0x30);
            auVar13._6_2_ = 0;
            auVar13._0_6_ = CONCAT24(uVar37,(int)uVar8) & 0xffff0000ffff;
            auVar13._8_2_ = uVar41;
            auVar13._10_2_ = 0;
            auVar13._12_2_ = uVar45;
            auVar13._14_2_ = 0;
            auVar56 = NEON_umax(auVar56,auVar13,4);
            auVar5._6_2_ = 0;
            auVar5._0_6_ = CONCAT24(uVar38,(int)uVar7) & 0xffff0000ffff;
            auVar5._8_2_ = uVar42;
            auVar5._10_2_ = 0;
            auVar5._12_2_ = uVar46;
            auVar5._14_2_ = 0;
            auVar52 = NEON_umax(auVar52,auVar5,4);
            auVar15._6_2_ = 0;
            auVar15._0_6_ = CONCAT24(uVar39,(int)uVar12) & 0xffff0000ffff;
            auVar15._8_2_ = uVar43;
            auVar15._10_2_ = 0;
            auVar15._12_2_ = uVar47;
            auVar15._14_2_ = 0;
            auVar58 = NEON_umax(auVar58,auVar15,4);
            auVar9._6_2_ = 0;
            auVar9._0_6_ = CONCAT24(uVar40,(int)uVar11) & 0xffff0000ffff;
            auVar9._8_2_ = uVar44;
            auVar9._10_2_ = 0;
            auVar9._12_2_ = uVar48;
            auVar9._14_2_ = 0;
            auVar57 = NEON_umax(auVar57,auVar9,4);
            auVar14._6_2_ = 0;
            auVar14._0_6_ = CONCAT24(uVar37,(int)uVar8) & 0xffff0000ffff;
            auVar14._8_2_ = uVar41;
            auVar14._10_2_ = 0;
            auVar14._12_2_ = uVar45;
            auVar14._14_2_ = 0;
            auVar53 = NEON_umin(auVar53,auVar14,4);
            auVar6._6_2_ = 0;
            auVar6._0_6_ = CONCAT24(uVar38,(int)uVar7) & 0xffff0000ffff;
            auVar6._8_2_ = uVar42;
            auVar6._10_2_ = 0;
            auVar6._12_2_ = uVar46;
            auVar6._14_2_ = 0;
            auVar50 = NEON_umin(auVar50,auVar6,4);
            auVar16._6_2_ = 0;
            auVar16._0_6_ = CONCAT24(uVar39,(int)uVar12) & 0xffff0000ffff;
            auVar16._8_2_ = uVar43;
            auVar16._10_2_ = 0;
            auVar16._12_2_ = uVar47;
            auVar16._14_2_ = 0;
            auVar55 = NEON_umin(auVar55,auVar16,4);
            auVar10._6_2_ = 0;
            auVar10._0_6_ = CONCAT24(uVar40,(int)uVar11) & 0xffff0000ffff;
            auVar10._8_2_ = uVar44;
            auVar10._10_2_ = 0;
            auVar10._12_2_ = uVar48;
            auVar10._14_2_ = 0;
            auVar54 = NEON_umin(auVar54,auVar10,4);
          } while (uVar28 != 0);
          auVar52 = NEON_umax(auVar52,auVar57,4);
          auVar56 = NEON_umax(auVar56,auVar58,4);
          auVar50 = NEON_umin(auVar50,auVar54,4);
          auVar53 = NEON_umin(auVar53,auVar55,4);
          auVar52 = NEON_umax(auVar52,auVar56,4);
          auVar50 = NEON_umin(auVar50,auVar53,4);
          uVar51 = NEON_umaxv(auVar52,4);
          uVar49 = NEON_uminv(auVar50,4);
          if ((ulong)uVar36 + 1 != uVar30) goto LAB_00b79ff0;
        }
        uVar36 = (uVar51 - uVar49) + 1;
      }
      uVar32 = uVar32 + 1;
      *puVar35 = uVar49;
      puVar35[1] = uVar36;
    } while (uVar32 != uVar23);
  }
  return;
}


