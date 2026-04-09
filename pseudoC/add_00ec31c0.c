// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add
// Entry Point: 00ec31c0
// Size: 1088 bytes
// Signature: undefined __thiscall add(KdTree * this, double param_1, double param_2, double param_3)


/* FLOAT_MATH::VERTEX_INDEX::KdTree::add(double, double, double) */

undefined4 __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTree::add(KdTree *this,double param_1,double param_2,double param_3)

{
  void **ppvVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *__dest;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int iVar17;
  double *pdVar18;
  
  pdVar8 = *(double **)(this + 0x30);
  pdVar7 = *(double **)(this + 0x38);
  ppvVar1 = (void **)(this + 0x28);
  uVar3 = *(undefined4 *)(this + 0x20);
  if (pdVar8 == pdVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pdVar8 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 3;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00ec35ec;
    if (uVar2 <= (ulong)((long)uVar15 >> 2)) {
      uVar2 = (long)uVar15 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
      pdVar18 = (double *)(lVar9 * 8);
      pdVar7 = (double *)0x0;
      *pdVar18 = param_1;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar2 << 3);
      pdVar18 = (double *)((long)pvVar5 + lVar9 * 8);
      pdVar7 = (double *)((long)pvVar5 + uVar2 * 8);
      *pdVar18 = param_1;
    }
    pdVar18 = pdVar18 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar5,pvVar13,uVar15);
    }
    *(void **)(this + 0x28) = pvVar5;
    *(double **)(this + 0x30) = pdVar18;
    *(double **)(this + 0x38) = pdVar7;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
      pdVar18 = *(double **)(this + 0x30);
      pdVar7 = *(double **)(this + 0x38);
    }
  }
  else {
    pdVar18 = pdVar8 + 1;
    *pdVar8 = param_1;
    *(double **)(this + 0x30) = pdVar18;
  }
  if (pdVar18 == pdVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pdVar7 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 3;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00ec35ec;
    if (uVar2 <= (ulong)((long)uVar15 >> 2)) {
      uVar2 = (long)uVar15 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
      pdVar8 = (double *)(lVar9 * 8);
      pdVar7 = (double *)0x0;
      *pdVar8 = param_2;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar2 << 3);
      pdVar8 = (double *)((long)pvVar5 + lVar9 * 8);
      pdVar7 = (double *)((long)pvVar5 + uVar2 * 8);
      *pdVar8 = param_2;
    }
    pdVar8 = pdVar8 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar5,pvVar13,uVar15);
    }
    *(void **)(this + 0x28) = pvVar5;
    *(double **)(this + 0x30) = pdVar8;
    *(double **)(this + 0x38) = pdVar7;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
      pdVar8 = *(double **)(this + 0x30);
      pdVar7 = *(double **)(this + 0x38);
    }
  }
  else {
    pdVar8 = pdVar18 + 1;
    *pdVar18 = param_2;
    *(double **)(this + 0x30) = pdVar8;
  }
  if (pdVar8 == pdVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pdVar7 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 3;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_00ec35ec:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar15 >> 2)) {
      uVar2 = (long)uVar15 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
      pdVar7 = (double *)(lVar9 * 8);
      pvVar5 = (void *)0x0;
      *pdVar7 = param_3;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar2 << 3);
      pdVar7 = (double *)((long)__dest + lVar9 * 8);
      pvVar5 = (void *)((long)__dest + uVar2 * 8);
      *pdVar7 = param_3;
    }
    if (0 < (long)uVar15) {
      memcpy(__dest,pvVar13,uVar15);
    }
    *(void **)(this + 0x28) = __dest;
    *(double **)(this + 0x30) = pdVar7 + 1;
    *(void **)(this + 0x38) = pvVar5;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  else {
    *pdVar8 = param_3;
    *(double **)(this + 0x30) = pdVar8 + 1;
  }
  puVar12 = *(undefined8 **)(this + 0x18);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  if (puVar12 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x6010);
    lVar9 = 0x10;
    do {
      puVar16 = (undefined4 *)((long)puVar6 + lVar9);
      lVar9 = lVar9 + 0x18;
      *puVar16 = 0;
      *(undefined8 *)(puVar16 + 2) = 0;
      *(undefined8 *)(puVar16 + 4) = 0;
    } while ((undefined8 *)(puVar16 + 6) != puVar6 + 0xc02);
    *puVar6 = 0;
LAB_00ec3464:
    uVar11 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined8 **)(this + 0x18) = puVar6;
  }
  else {
    uVar11 = *(uint *)(puVar12 + 1);
    puVar6 = puVar12;
    if (uVar11 == 0x400) {
      puVar6 = (undefined8 *)operator_new(0x6010);
      lVar9 = 0x10;
      do {
        puVar16 = (undefined4 *)((long)puVar6 + lVar9);
        lVar9 = lVar9 + 0x18;
        *puVar16 = 0;
        *(undefined8 *)(puVar16 + 2) = 0;
        *(undefined8 *)(puVar16 + 4) = 0;
      } while ((undefined8 *)(puVar16 + 6) != puVar6 + 0xc02);
      *puVar6 = 0;
      *puVar12 = puVar6;
      goto LAB_00ec3464;
    }
  }
  puVar14 = puVar6 + (ulong)uVar11 * 3 + 2;
  *(undefined4 *)puVar14 = uVar3;
  puVar6[(ulong)uVar11 * 3 + 3] = 0;
  puVar6[(ulong)uVar11 * 3 + 4] = 0;
  puVar12 = (undefined8 *)(this + 0x10);
  puVar16 = (undefined4 *)*puVar12;
  *(uint *)(puVar6 + 1) = uVar11 + 1;
  if (puVar16 != (undefined4 *)0x0) {
    iVar17 = 0;
    uVar4 = uVar3;
    do {
      pdVar7 = (double *)(***(code ***)this)(this,uVar4);
      pdVar8 = (double *)(***(code ***)this)(this,*puVar16);
      if (iVar17 == 2) {
        if (pdVar7[2] <= pdVar8[2]) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec356c;
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec3564;
        }
        iVar17 = 0;
      }
      else if (iVar17 == 1) {
        if (pdVar7[1] <= pdVar8[1]) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec356c;
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec3564;
        }
        iVar17 = 2;
      }
      else {
        if (iVar17 != 0) {
          return uVar3;
        }
        if (*pdVar7 <= *pdVar8) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) {
LAB_00ec356c:
            puVar12 = (undefined8 *)(puVar16 + 2);
            break;
          }
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec3564;
        }
        iVar17 = 1;
      }
      uVar4 = *(undefined4 *)puVar14;
      puVar16 = puVar10;
    } while( true );
  }
LAB_00ec3570:
  *puVar12 = puVar14;
  return uVar3;
LAB_00ec3564:
  puVar12 = (undefined8 *)(puVar16 + 4);
  goto LAB_00ec3570;
}


