// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tesselate
// Entry Point: 00ec3b10
// Size: 1212 bytes
// Signature: undefined __thiscall tesselate(Myfm_Tesselate * this, double * param_1, double * param_2, double * param_3, uint param_4)


/* FLOAT_MATH::Myfm_Tesselate::tesselate(double const*, double const*, double const*, unsigned int)
    */

void __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,double *param_1,double *param_2,double *param_3,uint param_4)

{
  bool bVar1;
  void **ppvVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *__dest;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_4 < *(uint *)(this + 0x38)) {
    dVar21 = *param_1;
    dVar18 = param_1[1];
    dVar26 = *param_3;
    dVar20 = param_3[1];
    dVar25 = *param_2;
    dVar19 = param_2[1];
    dVar22 = param_1[2];
    dVar24 = param_3[2];
    dVar23 = param_2[2];
    uVar28 = NEON_fmadd(dVar26 - dVar21,dVar26 - dVar21,(dVar20 - dVar18) * (dVar20 - dVar18));
    uVar31 = NEON_fmadd(dVar21 - dVar25,dVar21 - dVar25,(dVar18 - dVar19) * (dVar18 - dVar19));
    dVar27 = (double)NEON_fmadd(dVar24 - dVar22,dVar24 - dVar22,uVar28);
    dVar32 = *(double *)(this + 0x10);
    uVar28 = NEON_fmadd(dVar25 - dVar26,dVar25 - dVar26,(dVar19 - dVar20) * (dVar19 - dVar20));
    dVar29 = (double)NEON_fmadd(dVar22 - dVar23,dVar22 - dVar23,uVar31);
    dVar30 = (double)NEON_fmadd(dVar23 - dVar24,dVar23 - dVar24,uVar28);
    bVar1 = dVar32 < dVar27;
    if (((bVar1 || dVar29 != dVar32) && (bVar1 || dVar32 <= dVar29) || dVar30 != dVar32) &&
        ((bVar1 || dVar29 != dVar32) && (bVar1 || dVar32 <= dVar29) || dVar32 <= dVar30)) {
      iVar11 = 1;
      if (dVar30 < dVar27 || dVar30 < dVar29) {
        iVar11 = 2;
      }
      if (dVar27 <= dVar29 && dVar30 <= dVar29) {
        iVar11 = 0;
      }
      if (iVar11 == 2) {
        pdVar10 = &local_80;
        local_80 = (double)NEON_fmadd(dVar21 - dVar26,0x3fe0000000000000,dVar26);
        uStack_78 = NEON_fmadd(dVar18 - dVar20,0x3fe0000000000000,dVar20);
        local_70 = NEON_fmadd(dVar22 - dVar24,0x3fe0000000000000,dVar24);
        pdVar9 = param_2;
LAB_00ec3f64:
        tesselate(this,param_1,pdVar9,pdVar10,param_4 + 1);
        param_1 = &local_80;
      }
      else {
        if (iVar11 != 1) {
          if (iVar11 != 0) goto LAB_00ec3f84;
          local_80 = (double)NEON_fmadd(dVar25 - dVar21,0x3fe0000000000000,dVar21);
          uStack_78 = NEON_fmadd(dVar19 - dVar18,0x3fe0000000000000,dVar18);
          local_70 = NEON_fmadd(dVar23 - dVar22,0x3fe0000000000000,dVar22);
          pdVar9 = &local_80;
          pdVar10 = param_3;
          goto LAB_00ec3f64;
        }
        local_80 = (double)NEON_fmadd(dVar26 - dVar25,0x3fe0000000000000,dVar25);
        uStack_78 = NEON_fmadd(dVar20 - dVar19,0x3fe0000000000000,dVar19);
        local_70 = NEON_fmadd(dVar24 - dVar23,0x3fe0000000000000,dVar23);
        tesselate(this,param_1,param_2,&local_80,param_4 + 1);
        param_2 = &local_80;
      }
      tesselate(this,param_1,param_2,param_3,param_4 + 1);
      goto LAB_00ec3f84;
    }
  }
  uVar5 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_1,&local_80);
  uVar6 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_2,&local_80);
  uVar7 = (**(code **)(**(long **)(this + 0x18) + 8))(*(long **)(this + 0x18),param_3,&local_80);
  puVar17 = *(undefined4 **)(this + 0x28);
  puVar12 = *(undefined4 **)(this + 0x30);
  ppvVar2 = (void **)(this + 0x20);
  if (puVar17 == puVar12) {
    pvVar14 = *ppvVar2;
    uVar15 = (long)puVar17 - (long)pvVar14;
    lVar13 = (long)uVar15 >> 2;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x3e != 0) goto LAB_00ec3fb4;
    if (uVar3 <= (ulong)((long)uVar15 >> 1)) {
      uVar3 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      pvVar8 = (void *)0x0;
      puVar16 = (undefined4 *)(lVar13 * 4);
      puVar12 = (undefined4 *)0x0;
      *puVar16 = uVar5;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar8 = operator_new(uVar3 << 2);
      puVar16 = (undefined4 *)((long)pvVar8 + lVar13 * 4);
      puVar12 = (undefined4 *)((long)pvVar8 + uVar3 * 4);
      *puVar16 = uVar5;
    }
    puVar16 = puVar16 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar8,pvVar14,uVar15);
    }
    *(void **)(this + 0x20) = pvVar8;
    *(undefined4 **)(this + 0x28) = puVar16;
    *(undefined4 **)(this + 0x30) = puVar12;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
      puVar16 = *(undefined4 **)(this + 0x28);
      puVar12 = *(undefined4 **)(this + 0x30);
    }
  }
  else {
    puVar16 = puVar17 + 1;
    *puVar17 = uVar5;
    *(undefined4 **)(this + 0x28) = puVar16;
  }
  if (puVar16 == puVar12) {
    pvVar14 = *ppvVar2;
    uVar15 = (long)puVar12 - (long)pvVar14;
    lVar13 = (long)uVar15 >> 2;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x3e != 0) goto LAB_00ec3fb4;
    if (uVar3 <= (ulong)((long)uVar15 >> 1)) {
      uVar3 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      pvVar8 = (void *)0x0;
      puVar17 = (undefined4 *)(lVar13 * 4);
      puVar12 = (undefined4 *)0x0;
      *puVar17 = uVar6;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar8 = operator_new(uVar3 << 2);
      puVar17 = (undefined4 *)((long)pvVar8 + lVar13 * 4);
      puVar12 = (undefined4 *)((long)pvVar8 + uVar3 * 4);
      *puVar17 = uVar6;
    }
    puVar17 = puVar17 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar8,pvVar14,uVar15);
    }
    *(void **)(this + 0x20) = pvVar8;
    *(undefined4 **)(this + 0x28) = puVar17;
    *(undefined4 **)(this + 0x30) = puVar12;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
      puVar17 = *(undefined4 **)(this + 0x28);
      puVar12 = *(undefined4 **)(this + 0x30);
    }
  }
  else {
    puVar17 = puVar16 + 1;
    *puVar16 = uVar6;
    *(undefined4 **)(this + 0x28) = puVar17;
  }
  if (puVar17 == puVar12) {
    pvVar14 = *ppvVar2;
    uVar15 = (long)puVar12 - (long)pvVar14;
    lVar13 = (long)uVar15 >> 2;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x3e != 0) {
LAB_00ec3fb4:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)((long)uVar15 >> 1)) {
      uVar3 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      puVar12 = (undefined4 *)(lVar13 * 4);
      pvVar8 = (void *)0x0;
      *puVar12 = uVar7;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar3 << 2);
      puVar12 = (undefined4 *)((long)__dest + lVar13 * 4);
      pvVar8 = (void *)((long)__dest + uVar3 * 4);
      *puVar12 = uVar7;
    }
    if (0 < (long)uVar15) {
      memcpy(__dest,pvVar14,uVar15);
    }
    *(void **)(this + 0x20) = __dest;
    *(undefined4 **)(this + 0x28) = puVar12 + 1;
    *(void **)(this + 0x30) = pvVar8;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar17 = uVar7;
    *(undefined4 **)(this + 0x28) = puVar17 + 1;
  }
LAB_00ec3f84:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


