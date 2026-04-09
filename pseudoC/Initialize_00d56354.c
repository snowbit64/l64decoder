// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00d56354
// Size: 2148 bytes
// Signature: undefined __thiscall Initialize(MeshDecimator * this, ulong param_1, ulong param_2, Vec3 * param_3, Vec3 * param_4)


/* HACD::MeshDecimator::Initialize(unsigned long, unsigned long, HACD::Vec3<double>*,
   HACD::Vec3<long>*) */

void __thiscall
HACD::MeshDecimator::Initialize
          (MeshDecimator *this,ulong param_1,ulong param_2,Vec3 *param_3,Vec3 *param_4)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  void **ppvVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long local_80 [4];
  
  lVar1 = tpidr_el0;
  local_80[3] = *(long *)(lVar1 + 0x28);
  *(ulong *)(this + 0x20) = param_1;
  *(ulong *)(this + 0x28) = param_2;
  *(ulong *)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  *(Vec3 **)this = param_4;
  *(Vec3 **)(this + 8) = param_3;
  pvVar3 = operator_new__(param_2);
  pvVar22 = *(void **)(this + 0x58);
  *(void **)(this + 0x98) = pvVar3;
  if ((ulong)((*(long *)(this + 0x68) - (long)pvVar22 >> 3) * 0x6db6db6db6db6db7) < param_2 * 3) {
    if (0x492492492492492 < param_2 * 3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar20 = *(long *)(this + 0x60);
    pvVar4 = operator_new(param_2 * 0xa8);
    lVar11 = (lVar20 - (long)pvVar22) / 0x38;
    pvVar7 = (void *)((long)pvVar4 + lVar11 * 0x38);
    pvVar3 = pvVar7;
    if (lVar20 - (long)pvVar22 != 0) {
      lVar17 = 0;
      do {
        lVar18 = lVar20 + lVar17;
        lVar25 = lVar17 + lVar11 * 0x38;
        lVar17 = lVar17 + -0x38;
        uVar28 = *(undefined8 *)(lVar18 + -0x30);
        uVar27 = *(undefined8 *)(lVar18 + -0x38);
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x28) = *(undefined8 *)(lVar18 + -0x28);
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x30) = uVar28;
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x38) = uVar27;
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x20) = *(undefined8 *)(lVar18 + -0x20);
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x18) = *(undefined8 *)(lVar18 + -0x18);
        *(undefined8 *)((long)pvVar4 + lVar25 + -0x10) = *(undefined8 *)(lVar18 + -0x10);
        *(undefined2 *)((long)pvVar4 + lVar25 + -8) = *(undefined2 *)(lVar18 + -8);
      } while ((void *)(lVar20 + lVar17) != pvVar22);
      pvVar3 = (void *)((long)pvVar4 + lVar17 + lVar11 * 0x38);
    }
    *(void **)(this + 0x58) = pvVar3;
    *(void **)(this + 0x60) = pvVar7;
    *(void **)(this + 0x68) = (void *)((long)pvVar4 + param_2 * 0xa8);
    if (pvVar22 != (void *)0x0) {
      operator_delete(pvVar22);
      param_1 = *(ulong *)(this + 0x20);
    }
  }
  plVar19 = (long *)(this + 0x40);
  lVar11 = *(long *)(this + 0x48);
  lVar20 = lVar11 - *plVar19 >> 3;
  bVar2 = param_1 < (ulong)(lVar20 * 0x7d6343eb1a1f58d1);
  uVar8 = param_1 + lVar20 * -0x7d6343eb1a1f58d1;
  if (bVar2 || uVar8 == 0) {
    if (bVar2) {
      lVar20 = *plVar19 + param_1 * 0x188;
      while (lVar11 != lVar20) {
        if (*(void **)(lVar11 + -0x70) != (void *)0x0) {
          operator_delete__(*(void **)(lVar11 + -0x70));
        }
        ppvVar9 = (void **)(lVar11 + -0x108);
        lVar11 = lVar11 + -0x188;
        if (*ppvVar9 != (void *)0x0) {
          operator_delete__(*ppvVar9);
        }
      }
      *(long *)(this + 0x48) = lVar20;
    }
  }
  else {
    std::__ndk1::vector<HACD::MDVertex,std::__ndk1::allocator<HACD::MDVertex>>::__append
              ((vector<HACD::MDVertex,std::__ndk1::allocator<HACD::MDVertex>> *)plVar19,uVar8);
  }
  uVar8 = *(ulong *)(this + 0x20);
  if (uVar8 != 0) {
    lVar11 = *(long *)(this + 0x40);
    if (uVar8 == 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar8 & 0xfffffffffffffffe;
      uVar12 = uVar15;
      lVar20 = lVar11;
      do {
        *(undefined *)(lVar20 + 0x180) = 1;
        uVar12 = uVar12 - 2;
        *(undefined *)(lVar20 + 0x308) = 1;
        lVar20 = lVar20 + 0x310;
      } while (uVar12 != 0);
      if (uVar8 == uVar15) goto LAB_00d565c4;
    }
    lVar20 = uVar8 - uVar15;
    puVar16 = (undefined *)(lVar11 + uVar15 * 0x188 + 0x180);
    do {
      *puVar16 = 1;
      lVar20 = lVar20 + -1;
      puVar16 = puVar16 + 0x188;
    } while (lVar20 != 0);
  }
LAB_00d565c4:
  lVar11 = *(long *)(this + 0x28);
  if (0 < lVar11) {
    lVar20 = 0;
    lVar17 = 0;
LAB_00d56600:
    lVar18 = 0;
    plVar10 = (long *)(*(long *)this + lVar20 * 0x18);
    lVar25 = *plVar10;
    local_80[1] = plVar10[1];
    local_80[0] = lVar25;
    local_80[2] = plVar10[2];
    *(undefined *)(*(long *)(this + 0x98) + lVar20) = 1;
    do {
      lVar18 = lVar18 + 1;
      lVar21 = *plVar19;
      lVar24 = lVar21 + lVar25 * 0x188;
      plVar10 = (long *)(lVar24 + 0x98);
      uVar15 = *(ulong *)(lVar24 + 0x128);
      plVar6 = *(long **)(lVar24 + 0x118);
      uVar8 = *(ulong *)(lVar24 + 0x120);
      lVar23 = local_80[(ulong)((uint)lVar18 + (((uint)lVar18 & 0xff) / 3) * -3) & 0xff];
      uVar12 = uVar8;
      plVar5 = plVar10;
      plVar13 = plVar10;
      if (uVar15 != 0x10) {
        plVar5 = plVar6;
        plVar13 = plVar6;
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        if (lVar20 == *plVar5) goto LAB_00d56794;
        plVar5 = plVar5 + 1;
      }
      uVar12 = uVar15;
      plVar5 = plVar6;
      if (uVar8 == uVar15) {
        uVar12 = uVar15 << 1;
        uVar8 = uVar15 << 4;
        if (uVar12 >> 0x3d != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        plVar5 = (long *)operator_new__(uVar8);
        memcpy(plVar5,plVar13,uVar15 << 3);
        uVar8 = uVar15;
        if (plVar6 != (long *)0x0) {
          operator_delete__(plVar6);
          uVar8 = *(ulong *)(lVar24 + 0x120);
          lVar21 = *(long *)(this + 0x40);
        }
        *(ulong *)(lVar24 + 0x128) = uVar12;
        *(long **)(lVar24 + 0x118) = plVar5;
      }
      if (uVar12 != 0x10) {
        plVar10 = plVar5;
      }
      *(ulong *)(lVar24 + 0x120) = uVar8 + 1;
      plVar10[uVar8] = lVar20;
LAB_00d56794:
      plVar10 = *(long **)(this + 0x58);
      lVar24 = *(long *)(lVar21 + lVar25 * 0x188 + 0x88);
      if (lVar24 != 0) {
        plVar13 = (long *)(lVar21 + lVar25 * 0x188);
        if (plVar13[0x12] != 0x10) {
          plVar13 = (long *)plVar13[0x10];
        }
        do {
          lVar21 = *plVar13;
          if (((plVar10[lVar21 * 7] == lVar25) && (plVar10[lVar21 * 7 + 1] == lVar23)) ||
             ((plVar10[lVar21 * 7] == lVar23 && (plVar10[lVar21 * 7 + 1] == lVar25)))) {
            if (lVar21 != -1) {
              *(undefined *)(plVar10 + lVar21 * 7 + 6) = 0;
              if (lVar18 != 3) goto LAB_00d56688;
              goto LAB_00d565f0;
            }
            break;
          }
          lVar24 = lVar24 + -1;
          plVar13 = plVar13 + 1;
        } while (lVar24 != 0);
      }
      plVar13 = *(long **)(this + 0x60);
      if (plVar13 == *(long **)(this + 0x68)) {
        uVar12 = ((long)plVar13 - (long)plVar10) / 0x38;
        uVar8 = uVar12 + 1;
        if (0x492492492492492 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar8 <= uVar12 * 2) {
          uVar8 = uVar12 * 2;
        }
        if (0x249249249249248 < uVar12) {
          uVar8 = 0x492492492492492;
        }
        if (0x492492492492492 < uVar8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pvVar3 = operator_new(uVar8 * 0x38);
        plVar5 = (long *)((long)pvVar3 + uVar12 * 0x38);
        *plVar5 = lVar25;
        plVar5[1] = lVar23;
        *(undefined2 *)(plVar5 + 6) = 0x101;
        plVar6 = plVar5;
        if (plVar13 != plVar10) {
          lVar21 = 0;
          do {
            lVar24 = lVar21 + uVar12 * 0x38;
            lVar14 = lVar21 + -0x38;
            uVar28 = *(undefined8 *)((long)plVar13 + lVar21 + -0x30);
            uVar27 = *(undefined8 *)((long)plVar13 + lVar21 + -0x38);
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x28) =
                 *(undefined8 *)((long)plVar13 + lVar21 + -0x28);
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x30) = uVar28;
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x38) = uVar27;
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x20) =
                 *(undefined8 *)((long)plVar13 + lVar21 + -0x20);
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x18) =
                 *(undefined8 *)((long)plVar13 + lVar21 + -0x18);
            *(undefined8 *)((long)pvVar3 + lVar24 + -0x10) =
                 *(undefined8 *)((long)plVar13 + lVar21 + -0x10);
            *(undefined2 *)((long)pvVar3 + lVar24 + -8) =
                 *(undefined2 *)((long)plVar13 + lVar21 + -8);
            lVar21 = lVar14;
          } while ((long *)((long)plVar13 + lVar14) != plVar10);
          plVar6 = (long *)((long)pvVar3 + lVar14 + uVar12 * 0x38);
        }
        *(long **)(this + 0x58) = plVar6;
        *(long **)(this + 0x60) = plVar5 + 7;
        *(void **)(this + 0x68) = (void *)((long)pvVar3 + uVar8 * 0x38);
        if (plVar10 != (long *)0x0) {
          operator_delete(plVar10);
        }
      }
      else {
        *plVar13 = lVar25;
        plVar13[1] = lVar23;
        *(undefined2 *)(plVar13 + 6) = 0x101;
        *(long **)(this + 0x60) = plVar13 + 7;
      }
      lVar21 = *plVar19;
      plVar13 = (long *)(lVar21 + lVar25 * 0x188);
      uVar15 = plVar13[0x12];
      plVar5 = (long *)plVar13[0x10];
      puVar26 = (ulong *)(plVar13 + 0x11);
      uVar12 = *puVar26;
      uVar8 = uVar12;
      plVar6 = plVar13;
      plVar10 = plVar13;
      if (uVar15 != 0x10) {
        plVar6 = plVar5;
        plVar10 = plVar5;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (lVar17 == *plVar6) goto code_r0x00d56a54;
        plVar6 = plVar6 + 1;
      }
      uVar8 = uVar15;
      plVar6 = plVar5;
      if (uVar12 == uVar15) {
        uVar8 = uVar15 << 1;
        uVar12 = uVar15 << 4;
        if (uVar8 >> 0x3d != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        plVar6 = (long *)operator_new__(uVar12);
        memcpy(plVar6,plVar10,uVar15 << 3);
        uVar12 = uVar15;
        if (plVar5 != (long *)0x0) {
          operator_delete__(plVar5);
          uVar12 = *puVar26;
          lVar21 = *plVar19;
        }
        plVar13[0x10] = (long)plVar6;
        plVar13[0x12] = uVar8;
      }
      if (uVar8 != 0x10) {
        plVar13 = plVar6;
      }
      *puVar26 = uVar12 + 1;
      plVar13[uVar12] = lVar17;
code_r0x00d56a54:
      plVar10 = (long *)(lVar21 + lVar23 * 0x188);
      uVar15 = plVar10[0x12];
      plVar5 = (long *)plVar10[0x10];
      puVar26 = (ulong *)(plVar10 + 0x11);
      uVar12 = *puVar26;
      uVar8 = uVar12;
      plVar6 = plVar10;
      plVar13 = plVar10;
      if (uVar15 != 0x10) {
        plVar6 = plVar5;
        plVar13 = plVar5;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (lVar17 == *plVar6) goto LAB_00d56674;
        plVar6 = plVar6 + 1;
      }
      uVar8 = uVar15;
      plVar6 = plVar5;
      if (uVar12 == uVar15) {
        uVar8 = uVar15 << 1;
        uVar12 = uVar15 << 4;
        if (uVar8 >> 0x3d != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        plVar6 = (long *)operator_new__(uVar12);
        memcpy(plVar6,plVar13,uVar15 << 3);
        uVar12 = uVar15;
        if (plVar5 != (long *)0x0) {
          operator_delete__(plVar5);
          uVar12 = *puVar26;
        }
        plVar10[0x10] = (long)plVar6;
        plVar10[0x12] = uVar8;
      }
      if (uVar8 != 0x10) {
        plVar10 = plVar6;
      }
      *puVar26 = uVar12 + 1;
      plVar10[uVar12] = lVar17;
LAB_00d56674:
      lVar17 = lVar17 + 1;
      if (lVar18 == 3) goto LAB_00d565f0;
LAB_00d56688:
      lVar25 = local_80[lVar18];
    } while( true );
  }
  *(undefined8 *)(this + 0x30) = 0;
joined_r0x00d56ae8:
  if (uVar8 != 0) {
    uVar12 = 0;
    lVar11 = *(long *)(this + 0x40);
    do {
      lVar17 = lVar11 + uVar12 * 0x188;
      lVar20 = *(long *)(lVar17 + 0x88);
      *(undefined *)(lVar17 + 0x181) = 0;
      if (lVar20 != 0) {
        plVar19 = (long *)(lVar11 + uVar12 * 0x188);
        if (plVar19[0x12] != 0x10) {
          plVar19 = (long *)plVar19[0x10];
        }
        do {
          if (*(char *)((long)*(void **)(this + 0x58) + *plVar19 * 0x38 + 0x30) != '\0') {
            *(undefined *)(lVar17 + 0x181) = 1;
            break;
          }
          lVar20 = lVar20 + -1;
          plVar19 = plVar19 + 1;
        } while (lVar20 != 0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar8);
  }
  if (*(long *)(lVar1 + 0x28) != local_80[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00d565f0:
  lVar20 = lVar20 + 1;
  if (lVar20 == lVar11) goto LAB_00d56adc;
  goto LAB_00d56600;
LAB_00d56adc:
  uVar8 = *(ulong *)(this + 0x20);
  *(long *)(this + 0x30) = lVar17;
  goto joined_r0x00d56ae8;
}


