// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onContact
// Entry Point: 0074b220
// Size: 688 bytes
// Signature: undefined __thiscall onContact(CollisionEffectManager * this, TransformGroup * param_1, TransformGroup * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, float param_6)


/* CollisionEffectManager::onContact(TransformGroup*, TransformGroup*, Vector3 const&, Vector3
   const&, Vector3 const&, float) */

void __thiscall
CollisionEffectManager::onContact
          (CollisionEffectManager *this,TransformGroup *param_1,TransformGroup *param_2,
          Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,float param_6)

{
  ulong uVar1;
  TransformGroup **ppTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  TransformGroup *pTVar8;
  undefined8 uVar9;
  TransformGroup *pTVar10;
  void *__src;
  ulong __n;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  
  lVar6 = tpidr_el0;
  lVar7 = *(long *)(lVar6 + 0x28);
  uVar13 = *(undefined4 *)param_5;
  fVar12 = *(float *)(param_5 + 4);
  uVar11 = *(undefined4 *)param_4;
  fVar16 = *(float *)(param_4 + 4);
  pTVar8 = *(TransformGroup **)param_3;
  uVar3 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(undefined8 *)param_4;
  uVar4 = *(undefined4 *)(param_4 + 8);
  uVar18 = NEON_fmadd(uVar13,uVar13,fVar12 * fVar12);
  uVar15 = *(undefined4 *)(param_5 + 8);
  pTVar10 = *(TransformGroup **)param_5;
  uVar5 = *(undefined4 *)(param_5 + 8);
  fVar19 = (float)NEON_fmadd(uVar15,uVar15,uVar18);
  uVar18 = *(undefined4 *)(param_4 + 8);
  uVar13 = NEON_fmsub(uVar13,uVar11,fVar12 * -fVar16);
  fVar14 = 1.0;
  fVar12 = 1.0;
  if (1e-06 < fVar19) {
    fVar12 = 1.0 / SQRT(fVar19);
  }
  uVar11 = NEON_fmadd(uVar11,uVar11,fVar16 * fVar16);
  fVar17 = (float)NEON_fmadd(uVar18,uVar18,uVar11);
  fVar16 = (float)NEON_fmsub(uVar15,uVar18,uVar13);
  if (1e-06 < fVar17) {
    fVar14 = 1.0 / SQRT(fVar17);
  }
  fVar14 = fVar16 * fVar12 * fVar14;
  fVar12 = 0.0;
  if ((0.0 <= fVar14) && (fVar12 = 1.0, fVar14 <= 1.0)) {
    fVar12 = fVar14;
  }
  fVar12 = acosf(fVar12);
  ppTVar2 = *(TransformGroup ***)(this + 0x20);
  if (ppTVar2 == *(TransformGroup ***)(this + 0x28)) {
    __src = *(void **)(this + 0x18);
    __n = (long)ppTVar2 - (long)__src;
    uVar1 = ((long)__n >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 5)) {
      uVar1 = (long)__n >> 5;
    }
    if (0x7fffffffffffffbf < __n) {
      uVar1 = 0x3ffffffffffffff;
    }
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x40);
    ppTVar2 = (TransformGroup **)((long)__dest + ((long)__n >> 6) * 0x40);
    uVar3 = *(undefined4 *)(param_3 + 8);
    uVar4 = *(undefined4 *)(param_4 + 8);
    ppTVar2[2] = *(TransformGroup **)param_3;
    *(undefined4 *)(ppTVar2 + 3) = uVar3;
    pTVar8 = *(TransformGroup **)param_5;
    *ppTVar2 = param_1;
    ppTVar2[1] = param_2;
    uVar9 = *(undefined8 *)param_4;
    uVar3 = *(undefined4 *)(param_5 + 8);
    *(undefined4 *)((long)ppTVar2 + 0x24) = uVar4;
    *(undefined8 *)((long)ppTVar2 + 0x1c) = uVar9;
    ppTVar2[5] = pTVar8;
    *(undefined4 *)(ppTVar2 + 6) = uVar3;
    *(float *)((long)ppTVar2 + 0x34) = param_6;
    *(float *)(ppTVar2 + 7) = fVar19;
    *(float *)((long)ppTVar2 + 0x3c) = fVar12 * 57.29578;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(TransformGroup ***)(this + 0x20) = ppTVar2 + 8;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1 * 0x40);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppTVar2 = param_1;
    ppTVar2[1] = param_2;
    *(float *)((long)ppTVar2 + 0x34) = param_6;
    *(float *)(ppTVar2 + 7) = fVar19;
    ppTVar2[2] = pTVar8;
    *(undefined4 *)(ppTVar2 + 3) = uVar3;
    *(undefined8 *)((long)ppTVar2 + 0x1c) = uVar9;
    *(undefined4 *)((long)ppTVar2 + 0x24) = uVar4;
    ppTVar2[5] = pTVar10;
    *(undefined4 *)(ppTVar2 + 6) = uVar5;
    *(float *)((long)ppTVar2 + 0x3c) = fVar12 * 57.29578;
    *(TransformGroup ***)(this + 0x20) = ppTVar2 + 8;
  }
  if (*(long *)(lVar6 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


