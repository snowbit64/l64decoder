// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00a591c8
// Size: 776 bytes
// Signature: undefined __thiscall insert(vector<Node*,std::__ndk1::allocator<Node*>> * this, __wrap_iter param_1, Node * * param_2)


/* std::__ndk1::vector<Node*, std::__ndk1::allocator<Node*> >::insert(std::__ndk1::__wrap_iter<Node*
   const*>, Node* const&) */

Node ** __thiscall
std::__ndk1::vector<Node*,std::__ndk1::allocator<Node*>>::insert
          (vector<Node*,std::__ndk1::allocator<Node*>> *this,__wrap_iter param_1,Node **param_2)

{
  Node **__src;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  Node **ppNVar7;
  Node **ppNVar9;
  Node **ppNVar10;
  ulong uVar11;
  size_t __n_00;
  Node **ppNVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node *pNVar18;
  Node **ppNVar8;
  
  pvVar4 = *(void **)this;
  ppNVar12 = *(Node ***)(this + 8);
  uVar15 = (ulong)param_1 - (long)pvVar4;
  uVar14 = (long)uVar15 >> 3;
  __src = (Node **)((long)pvVar4 + (uVar15 & 0xfffffffffffffff8));
  if (*(Node ***)(this + 0x10) <= ppNVar12) {
    uVar5 = ((long)ppNVar12 - (long)pvVar4 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar11 = (long)*(Node ***)(this + 0x10) - (long)pvVar4;
    uVar6 = (long)uVar11 >> 2;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar5 << 3);
    }
    ppNVar12 = (Node **)((long)pvVar2 + uVar14 * 8);
    pvVar13 = (void *)((long)pvVar2 + uVar5 * 8);
    if (uVar14 == uVar5) {
      if ((long)uVar15 < 1) {
        uVar14 = (long)uVar15 >> 2;
        if (uVar15 == 0) {
          uVar14 = 1;
        }
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00a594c4 to 00a594cf has its CatchHandler @ 00a594d0 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00a59328 to 00a5932b has its CatchHandler @ 00a594d0 */
        pvVar3 = operator_new(uVar14 << 3);
        pvVar13 = (void *)((long)pvVar3 + uVar14 * 8);
        ppNVar12 = (Node **)((long)pvVar3 + (uVar14 & 0x7ffffffffffffffc) * 2);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
          pvVar4 = *(void **)this;
        }
      }
      else {
        uVar15 = uVar14 + 2;
        if (-1 < (long)(uVar14 + 1)) {
          uVar15 = uVar14 + 1;
        }
        ppNVar12 = (Node **)((long)ppNVar12 + (uVar15 & 0x3ffffffffffffffe) * -4);
      }
    }
    __n = (long)__src - (long)pvVar4;
    ppNVar7 = ppNVar12 + 1;
    *ppNVar12 = *param_2;
    if (0 < (long)__n) {
      memcpy((void *)((long)ppNVar12 - __n),pvVar4,__n);
    }
    __n_00 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_00) {
      memcpy(ppNVar7,__src,__n_00);
      ppNVar7 = (Node **)((long)ppNVar7 + __n_00);
    }
    pvVar4 = *(void **)this;
    *(void **)this = (void *)((long)ppNVar12 - __n);
    *(Node ***)(this + 8) = ppNVar7;
    *(void **)(this + 0x10) = pvVar13;
    if (pvVar4 == (void *)0x0) {
      return ppNVar12;
    }
    operator_delete(pvVar4);
    return ppNVar12;
  }
  if (__src == ppNVar12) {
    *__src = *param_2;
    *(Node ***)(this + 8) = __src + 1;
    return __src;
  }
  uVar5 = (long)ppNVar12 + (-8 - (long)__src);
  uVar11 = uVar5 & 0xfffffffffffffff8;
  ppNVar7 = (Node **)((long)__src + uVar11);
  ppNVar10 = ppNVar12;
  if (ppNVar7 < ppNVar12) {
    uVar15 = uVar15 & 0xfffffffffffffff8;
    ppNVar10 = (Node **)((long)pvVar4 + uVar11 + uVar15 + 8);
    ppNVar9 = ppNVar12;
    if (ppNVar12 <= ppNVar10) {
      ppNVar9 = ppNVar10;
    }
    uVar11 = (long)ppNVar9 + (~(ulong)pvVar4 - (uVar15 + uVar11));
    ppNVar9 = ppNVar12;
    if (0x17 < uVar11) {
      ppNVar10 = (Node **)((long)pvVar4 + (uVar5 & 0xfffffffffffffff8) + uVar15 + 8);
      ppNVar8 = ppNVar12;
      if (ppNVar12 <= ppNVar10) {
        ppNVar8 = ppNVar10;
      }
      lVar1 = ((long)uVar5 >> 3) + uVar14;
      uVar15 = (long)ppNVar8 + (~(ulong)pvVar4 - (uVar15 + (uVar5 & 0xfffffffffffffff8)));
      if (((Node **)((long)pvVar4 + (lVar1 + (uVar15 >> 3)) * 8 + 8) <= ppNVar12) ||
         ((Node **)((long)ppNVar12 + (uVar15 & 0xfffffffffffffff8) + 8) <= ppNVar7)) {
        uVar15 = (uVar11 >> 3) + 1;
        ppNVar10 = ppNVar12 + 2;
        uVar11 = uVar15 & 0x3ffffffffffffffc;
        ppNVar9 = (Node **)((long)pvVar4 + lVar1 * 8 + 0x10);
        ppNVar7 = ppNVar7 + uVar11;
        uVar14 = uVar11;
        do {
          ppNVar8 = ppNVar9 + -1;
          pNVar16 = ppNVar9[-2];
          pNVar18 = ppNVar9[1];
          pNVar17 = *ppNVar9;
          ppNVar9 = ppNVar9 + 4;
          uVar14 = uVar14 - 4;
          ppNVar10[-1] = *ppNVar8;
          ppNVar10[-2] = pNVar16;
          ppNVar10[1] = pNVar18;
          *ppNVar10 = pNVar17;
          ppNVar10 = ppNVar10 + 4;
        } while (uVar14 != 0);
        ppNVar10 = ppNVar12 + uVar11;
        ppNVar9 = ppNVar12 + uVar11;
        if (uVar15 == uVar11) goto LAB_00a5945c;
      }
    }
    do {
      ppNVar8 = ppNVar7 + 1;
      *ppNVar9 = *ppNVar7;
      ppNVar7 = ppNVar8;
      ppNVar10 = ppNVar9 + 1;
      ppNVar9 = ppNVar9 + 1;
    } while (ppNVar8 < ppNVar12);
  }
LAB_00a5945c:
  *(Node ***)(this + 8) = ppNVar10;
  if (uVar5 != 0) {
    memmove(ppNVar12 + -((long)uVar5 >> 3),__src,uVar5);
    ppNVar10 = *(Node ***)(this + 8);
  }
  *__src = param_2[__src <= param_2 && param_2 < ppNVar10];
  return __src;
}


