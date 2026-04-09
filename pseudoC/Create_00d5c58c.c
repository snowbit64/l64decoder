// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Create
// Entry Point: 00d5c58c
// Size: 1900 bytes
// Signature: undefined __thiscall Create(RMNode * this, ulong param_1, ulong param_2, ulong param_3, double param_4)


/* HACD::RMNode::Create(unsigned long, unsigned long, unsigned long, double) */

void __thiscall
HACD::RMNode::Create(RMNode *this,ulong param_1,ulong param_2,ulong param_3,double param_4)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulong *puVar7;
  ulong *puVar8;
  void **ppvVar9;
  RMNode *pRVar10;
  long lVar11;
  void *pvVar12;
  ulong *puVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  double *pdVar22;
  long *this_00;
  double *pdVar23;
  double *pdVar24;
  double *pdVar25;
  double *pdVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  void *pvVar30;
  void *pvVar31;
  long lVar32;
  double *pdVar33;
  void **ppvVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  
  ComputeBB();
  dVar35 = *(double *)(this + 0x38) - *(double *)(this + 0x20);
  dVar37 = *(double *)(this + 0x40) - *(double *)(this + 0x28);
  dVar38 = *(double *)(this + 0x30) - *(double *)(this + 0x18);
  dVar36 = dVar37;
  if (dVar37 <= dVar35) {
    dVar36 = dVar35;
  }
  if (dVar36 <= dVar38) {
    dVar36 = dVar38;
  }
  if (((param_1 == param_2) || (uVar27 = *(ulong *)(this + 0xd0), uVar27 <= param_3)) ||
     (dVar36 < param_4)) {
    this[0xe8] = (RMNode)0x1;
  }
  else {
    lVar21 = *(long *)(this + 0xe0);
    lVar28 = *(long *)(lVar21 + 0x58);
    lVar32 = *(long *)(lVar21 + 0x20);
    lVar1 = lVar28 + 1;
    this_00 = (long *)(lVar32 + lVar28 * 0xf0);
    pdVar33 = (double *)(this_00 + 3);
    *pdVar33 = *(double *)(this + 0x18);
    dVar39 = *(double *)(this + 0x20);
    this_00[0x1c] = lVar21;
    pdVar2 = (double *)(this_00 + 0x21);
    pdVar3 = (double *)(this_00 + 0x22);
    *(long *)(this + 8) = lVar28;
    *(long *)(this + 0x10) = lVar1;
    pdVar23 = (double *)(this_00 + 4);
    *pdVar23 = dVar39;
    dVar39 = *(double *)(this + 0x28);
    *this_00 = lVar28;
    pdVar22 = (double *)(this_00 + 5);
    *pdVar22 = dVar39;
    dVar39 = *(double *)(this + 0x30);
    pdVar24 = (double *)(this_00 + 6);
    *pdVar24 = dVar39;
    dVar40 = *(double *)(this + 0x38);
    *(long *)(lVar21 + 0x58) = lVar28 + 2;
    pdVar4 = (double *)(this_00 + 0x23);
    lVar21 = *(long *)(this + 0xe0);
    pdVar25 = (double *)(this_00 + 7);
    *pdVar25 = dVar40;
    dVar41 = *(double *)(this + 0x40);
    this_00[0x3a] = lVar21;
    pdVar26 = (double *)(this_00 + 8);
    *pdVar26 = dVar41;
    lVar21 = *(long *)(this + 0x18);
    this_00[0x1e] = lVar1;
    this_00[0x21] = lVar21;
    this_00[0x22] = *(long *)(this + 0x20);
    this_00[0x23] = *(long *)(this + 0x28);
    this_00[0x24] = *(long *)(this + 0x30);
    this_00[0x25] = *(long *)(this + 0x38);
    this_00[0x26] = *(long *)(this + 0x40);
    if (dVar38 == dVar36) {
      dVar36 = (double)NEON_fmadd(dVar38,0xbfe0000000000000,dVar39);
      *pdVar24 = dVar36;
      *pdVar2 = dVar36;
    }
    else if (dVar38 == dVar36 || dVar35 != dVar36) {
      dVar36 = (double)NEON_fmadd(dVar37,0xbfe0000000000000,dVar41);
      *pdVar26 = dVar36;
      *pdVar4 = dVar36;
    }
    else {
      dVar36 = (double)NEON_fmadd(dVar35,0xbfe0000000000000,dVar40);
      *pdVar25 = dVar36;
      *pdVar3 = dVar36;
    }
    lVar19 = lVar32 + lVar28 * 0xf0;
    lVar21 = **(long **)(this + 0xe0);
    lVar11 = (*(long **)(this + 0xe0))[1];
    puVar20 = (ulong *)(lVar19 + 0xd8);
    uVar29 = *puVar20;
    pvVar30 = (void *)(lVar19 + 0x48);
    uVar17 = uVar27;
    if (uVar29 < uVar27) {
      uVar16 = uVar27 << 3;
      if (uVar27 >> 0x3d != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      pvVar12 = operator_new__(uVar16);
      lVar19 = lVar32 + lVar28 * 0xf0;
      ppvVar34 = (void **)(lVar19 + 200);
      pvVar15 = *ppvVar34;
      pvVar31 = pvVar30;
      if (uVar29 != 0x10) {
        pvVar31 = pvVar15;
      }
      memcpy(pvVar12,pvVar31,*(long *)(lVar19 + 0xd0) << 3);
      if (pvVar15 != (void *)0x0) {
        operator_delete__(pvVar15);
        uVar17 = *(ulong *)(this + 0xd0);
      }
      *ppvVar34 = pvVar12;
      *puVar20 = uVar27;
    }
    lVar19 = lVar32 + lVar1 * 0xf0;
    puVar13 = (ulong *)(lVar19 + 0xd8);
    uVar29 = *puVar13;
    pvVar31 = (void *)(lVar19 + 0x48);
    uVar27 = uVar17;
    if (uVar29 < uVar17) {
      uVar16 = uVar17 << 3;
      if (uVar17 >> 0x3d != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      pvVar14 = operator_new__(uVar16);
      lVar19 = lVar32 + lVar1 * 0xf0;
      ppvVar34 = (void **)(lVar19 + 200);
      pvVar12 = *ppvVar34;
      pvVar15 = pvVar31;
      if (uVar29 != 0x10) {
        pvVar15 = pvVar12;
      }
      memcpy(pvVar14,pvVar15,*(long *)(lVar19 + 0xd0) << 3);
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
        uVar27 = *(ulong *)(this + 0xd0);
      }
      *ppvVar34 = pvVar14;
      *puVar13 = uVar17;
    }
    if (uVar27 != 0) {
      uVar27 = 0;
      lVar28 = lVar32 + lVar28 * 0xf0;
      lVar32 = lVar32 + lVar1 * 0xf0;
      pdVar5 = (double *)(this_00 + 0x25);
      pdVar6 = (double *)(this_00 + 0x26);
      puVar7 = (ulong *)(lVar28 + 0xd0);
      ppvVar34 = (void **)(lVar28 + 200);
      puVar8 = (ulong *)(lVar32 + 0xd0);
      ppvVar9 = (void **)(lVar32 + 200);
      do {
        dVar36 = *pdVar24;
        pRVar10 = this + 0x48;
        if (*(long *)(this + 0xd8) != 0x10) {
          pRVar10 = *(RMNode **)(this + 200);
        }
        lVar19 = *(long *)(pRVar10 + uVar27 * 8);
        plVar18 = (long *)(lVar21 + lVar19 * 0x18);
        lVar1 = *plVar18;
        lVar32 = plVar18[1];
        lVar28 = plVar18[2];
        dVar35 = *(double *)(lVar11 + lVar1 * 0x18);
        if ((((((dVar35 <= dVar36) && (*pdVar33 <= dVar35)) &&
              ((dVar37 = *(double *)(lVar11 + lVar1 * 0x18 + 8), dVar37 <= *pdVar25 &&
               ((*pdVar23 <= dVar37 &&
                (dVar37 = *(double *)(lVar11 + lVar1 * 0x18 + 0x10), dVar37 <= *pdVar26)))))) &&
             (*pdVar22 <= dVar37)) ||
            (((((dVar37 = *(double *)(lVar11 + lVar32 * 0x18), dVar37 <= dVar36 &&
                (*pdVar33 <= dVar37)) &&
               (dVar38 = *(double *)(lVar11 + lVar32 * 0x18 + 8), dVar38 <= *pdVar25)) &&
              ((*pdVar23 <= dVar38 &&
               (dVar38 = *(double *)(lVar11 + lVar32 * 0x18 + 0x10), dVar38 <= *pdVar26)))) &&
             (*pdVar22 <= dVar38)))) ||
           (((dVar38 = *(double *)(lVar11 + lVar28 * 0x18), dVar38 <= dVar36 && (*pdVar33 <= dVar38)
             ) && ((dVar36 = *(double *)(lVar11 + lVar28 * 0x18 + 8), dVar36 <= *pdVar25 &&
                   (((*pdVar23 <= dVar36 &&
                     (dVar36 = *(double *)(lVar11 + lVar28 * 0x18 + 0x10), dVar36 <= *pdVar26)) &&
                    (*pdVar22 <= dVar36)))))))) {
          uVar17 = *puVar7;
          uVar29 = *puVar20;
          if (uVar17 == uVar29) {
            uVar29 = uVar17 << 1;
            uVar16 = uVar17 << 4;
            if (uVar29 >> 0x3d != 0) {
              uVar16 = 0xffffffffffffffff;
            }
            pvVar15 = operator_new__(uVar16);
            pvVar14 = *ppvVar34;
            pvVar12 = pvVar30;
            if (uVar17 != 0x10) {
              pvVar12 = pvVar14;
            }
            memcpy(pvVar15,pvVar12,uVar17 << 3);
            if (pvVar14 != (void *)0x0) {
              operator_delete__(pvVar14);
              uVar17 = *puVar7;
            }
            *ppvVar34 = pvVar15;
            *puVar20 = uVar29;
          }
          else {
            pvVar15 = *ppvVar34;
          }
          pvVar12 = pvVar30;
          if (uVar29 != 0x10) {
            pvVar12 = pvVar15;
          }
          plVar18 = (long *)((long)pvVar12 + uVar17 * 8);
          *puVar7 = uVar17 + 1;
LAB_00d5c8dc:
          *plVar18 = lVar19;
        }
        else {
          dVar36 = (double)this_00[0x24];
          if (((((dVar35 <= dVar36) && (*pdVar2 <= dVar35)) &&
               ((dVar35 = *(double *)(lVar11 + lVar1 * 0x18 + 8), dVar35 <= *pdVar5 &&
                ((*pdVar3 <= dVar35 &&
                 (dVar35 = *(double *)(lVar11 + lVar1 * 0x18 + 0x10), dVar35 <= *pdVar6)))))) &&
              (*pdVar4 <= dVar35)) ||
             ((((((dVar37 <= dVar36 && (*pdVar2 <= dVar37)) &&
                 (dVar35 = *(double *)(lVar11 + lVar32 * 0x18 + 8), dVar35 <= *pdVar5)) &&
                ((*pdVar3 <= dVar35 &&
                 (dVar35 = *(double *)(lVar11 + lVar32 * 0x18 + 0x10), dVar35 <= *pdVar6)))) &&
               (*pdVar4 <= dVar35)) ||
              (((dVar38 <= dVar36 && (*pdVar2 <= dVar38)) &&
               ((dVar36 = *(double *)(lVar11 + lVar28 * 0x18 + 8), dVar36 <= *pdVar5 &&
                (((*pdVar3 <= dVar36 &&
                  (dVar36 = *(double *)(lVar11 + lVar28 * 0x18 + 0x10), dVar36 <= *pdVar6)) &&
                 (*pdVar4 <= dVar36)))))))))) {
            uVar17 = *puVar8;
            uVar29 = *puVar13;
            if (uVar17 == uVar29) {
              uVar29 = uVar17 << 1;
              uVar16 = uVar17 << 4;
              if (uVar29 >> 0x3d != 0) {
                uVar16 = 0xffffffffffffffff;
              }
              pvVar15 = operator_new__(uVar16);
              pvVar14 = *ppvVar9;
              pvVar12 = pvVar31;
              if (uVar17 != 0x10) {
                pvVar12 = pvVar14;
              }
              memcpy(pvVar15,pvVar12,uVar17 << 3);
              if (pvVar14 != (void *)0x0) {
                operator_delete__(pvVar14);
                uVar17 = *puVar8;
              }
              *ppvVar9 = pvVar15;
              *puVar13 = uVar29;
            }
            else {
              pvVar15 = *ppvVar9;
            }
            pvVar12 = pvVar31;
            if (uVar29 != 0x10) {
              pvVar12 = pvVar15;
            }
            plVar18 = (long *)((long)pvVar12 + uVar17 * 8);
            *puVar8 = uVar17 + 1;
            goto LAB_00d5c8dc;
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < *(ulong *)(this + 0xd0));
    }
    Create((RMNode *)(this_00 + 0x1e),param_1 + 1,param_2,param_3,param_4);
    Create((RMNode *)this_00,param_1 + 1,param_2,param_3,param_4);
    *(undefined8 *)(this + 0xd0) = 0;
    if (*(void **)(this + 200) != (void *)0x0) {
      operator_delete__(*(void **)(this + 200));
    }
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd8) = 0x10;
  }
  return;
}


