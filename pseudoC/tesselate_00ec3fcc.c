// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tesselate
// Entry Point: 00ec3fcc
// Size: 1212 bytes
// Signature: undefined __thiscall tesselate(Myfm_Tesselate * this, float * param_1, float * param_2, float * param_3, uint param_4)


/* FLOAT_MATH::Myfm_Tesselate::tesselate(float const*, float const*, float const*, unsigned int) */

void __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,float *param_1,float *param_2,float *param_3,uint param_4)

{
  bool bVar1;
  void **ppvVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *__dest;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_4 < *(uint *)(this + 0x38)) {
    fVar19 = *param_1;
    fVar16 = param_1[1];
    fVar24 = *param_3;
    fVar18 = param_3[1];
    fVar23 = *param_2;
    fVar17 = param_2[1];
    fVar20 = param_1[2];
    fVar22 = param_3[2];
    fVar21 = param_2[2];
    uVar26 = NEON_fmadd(fVar24 - fVar19,fVar24 - fVar19,(fVar18 - fVar16) * (fVar18 - fVar16));
    uVar29 = NEON_fmadd(fVar19 - fVar23,fVar19 - fVar23,(fVar16 - fVar17) * (fVar16 - fVar17));
    fVar25 = (float)NEON_fmadd(fVar22 - fVar20,fVar22 - fVar20,uVar26);
    fVar30 = *(float *)(this + 8);
    uVar26 = NEON_fmadd(fVar23 - fVar24,fVar23 - fVar24,(fVar17 - fVar18) * (fVar17 - fVar18));
    fVar27 = (float)NEON_fmadd(fVar20 - fVar21,fVar20 - fVar21,uVar29);
    fVar28 = (float)NEON_fmadd(fVar21 - fVar22,fVar21 - fVar22,uVar26);
    bVar1 = fVar30 < fVar25;
    if (((bVar1 || fVar27 != fVar30) && (bVar1 || fVar30 <= fVar27) || fVar28 != fVar30) &&
        ((bVar1 || fVar27 != fVar30) && (bVar1 || fVar30 <= fVar27) || fVar30 <= fVar28)) {
      iVar9 = 1;
      if (fVar28 < fVar25 || fVar28 < fVar27) {
        iVar9 = 2;
      }
      if (fVar25 <= fVar27 && fVar28 <= fVar27) {
        iVar9 = 0;
      }
      if (iVar9 == 2) {
        pfVar8 = &local_74;
        local_74 = (float)NEON_fmadd(fVar19 - fVar24,0x3f000000,fVar24);
        uStack_70 = NEON_fmadd(fVar16 - fVar18,0x3f000000,fVar18);
        local_6c = NEON_fmadd(fVar20 - fVar22,0x3f000000,fVar22);
        pfVar7 = param_2;
LAB_00ec4420:
        tesselate(this,param_1,pfVar7,pfVar8,param_4 + 1);
        param_1 = &local_74;
      }
      else {
        if (iVar9 != 1) {
          if (iVar9 != 0) goto LAB_00ec4440;
          local_74 = (float)NEON_fmadd(fVar23 - fVar19,0x3f000000,fVar19);
          uStack_70 = NEON_fmadd(fVar17 - fVar16,0x3f000000,fVar16);
          local_6c = NEON_fmadd(fVar21 - fVar20,0x3f000000,fVar20);
          pfVar7 = &local_74;
          pfVar8 = param_3;
          goto LAB_00ec4420;
        }
        local_74 = (float)NEON_fmadd(fVar24 - fVar23,0x3f000000,fVar23);
        uStack_70 = NEON_fmadd(fVar18 - fVar17,0x3f000000,fVar17);
        local_6c = NEON_fmadd(fVar22 - fVar21,0x3f000000,fVar21);
        tesselate(this,param_1,param_2,&local_74,param_4 + 1);
        param_2 = &local_74;
      }
      tesselate(this,param_1,param_2,param_3,param_4 + 1);
      goto LAB_00ec4440;
    }
  }
  uVar26 = (**(code **)**(undefined8 **)(this + 0x18))
                     (*(undefined8 **)(this + 0x18),param_1,&local_74);
  uVar29 = (**(code **)**(undefined8 **)(this + 0x18))
                     (*(undefined8 **)(this + 0x18),param_2,&local_74);
  uVar5 = (**(code **)**(undefined8 **)(this + 0x18))
                    (*(undefined8 **)(this + 0x18),param_3,&local_74);
  puVar15 = *(undefined4 **)(this + 0x28);
  puVar10 = *(undefined4 **)(this + 0x30);
  ppvVar2 = (void **)(this + 0x20);
  if (puVar15 == puVar10) {
    pvVar12 = *ppvVar2;
    uVar13 = (long)puVar15 - (long)pvVar12;
    lVar11 = (long)uVar13 >> 2;
    uVar3 = lVar11 + 1;
    if (uVar3 >> 0x3e != 0) goto LAB_00ec4470;
    if (uVar3 <= (ulong)((long)uVar13 >> 1)) {
      uVar3 = (long)uVar13 >> 1;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      pvVar6 = (void *)0x0;
      puVar14 = (undefined4 *)(lVar11 * 4);
      puVar10 = (undefined4 *)0x0;
      *puVar14 = uVar26;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar6 = operator_new(uVar3 << 2);
      puVar14 = (undefined4 *)((long)pvVar6 + lVar11 * 4);
      puVar10 = (undefined4 *)((long)pvVar6 + uVar3 * 4);
      *puVar14 = uVar26;
    }
    puVar14 = puVar14 + 1;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(this + 0x20) = pvVar6;
    *(undefined4 **)(this + 0x28) = puVar14;
    *(undefined4 **)(this + 0x30) = puVar10;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      puVar14 = *(undefined4 **)(this + 0x28);
      puVar10 = *(undefined4 **)(this + 0x30);
    }
  }
  else {
    puVar14 = puVar15 + 1;
    *puVar15 = uVar26;
    *(undefined4 **)(this + 0x28) = puVar14;
  }
  if (puVar14 == puVar10) {
    pvVar12 = *ppvVar2;
    uVar13 = (long)puVar10 - (long)pvVar12;
    lVar11 = (long)uVar13 >> 2;
    uVar3 = lVar11 + 1;
    if (uVar3 >> 0x3e != 0) goto LAB_00ec4470;
    if (uVar3 <= (ulong)((long)uVar13 >> 1)) {
      uVar3 = (long)uVar13 >> 1;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      pvVar6 = (void *)0x0;
      puVar15 = (undefined4 *)(lVar11 * 4);
      puVar10 = (undefined4 *)0x0;
      *puVar15 = uVar29;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar6 = operator_new(uVar3 << 2);
      puVar15 = (undefined4 *)((long)pvVar6 + lVar11 * 4);
      puVar10 = (undefined4 *)((long)pvVar6 + uVar3 * 4);
      *puVar15 = uVar29;
    }
    puVar15 = puVar15 + 1;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(this + 0x20) = pvVar6;
    *(undefined4 **)(this + 0x28) = puVar15;
    *(undefined4 **)(this + 0x30) = puVar10;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      puVar15 = *(undefined4 **)(this + 0x28);
      puVar10 = *(undefined4 **)(this + 0x30);
    }
  }
  else {
    puVar15 = puVar14 + 1;
    *puVar14 = uVar29;
    *(undefined4 **)(this + 0x28) = puVar15;
  }
  if (puVar15 == puVar10) {
    pvVar12 = *ppvVar2;
    uVar13 = (long)puVar10 - (long)pvVar12;
    lVar11 = (long)uVar13 >> 2;
    uVar3 = lVar11 + 1;
    if (uVar3 >> 0x3e != 0) {
LAB_00ec4470:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)((long)uVar13 >> 1)) {
      uVar3 = (long)uVar13 >> 1;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      puVar10 = (undefined4 *)(lVar11 * 4);
      pvVar6 = (void *)0x0;
      *puVar10 = uVar5;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar3 << 2);
      puVar10 = (undefined4 *)((long)__dest + lVar11 * 4);
      pvVar6 = (void *)((long)__dest + uVar3 * 4);
      *puVar10 = uVar5;
    }
    if (0 < (long)uVar13) {
      memcpy(__dest,pvVar12,uVar13);
    }
    *(void **)(this + 0x20) = __dest;
    *(undefined4 **)(this + 0x28) = puVar10 + 1;
    *(void **)(this + 0x30) = pvVar6;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar15 = uVar5;
    *(undefined4 **)(this + 0x28) = puVar15 + 1;
  }
LAB_00ec4440:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


