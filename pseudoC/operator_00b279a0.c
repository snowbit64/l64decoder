// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00b279a0
// Size: 436 bytes
// Signature: undefined __thiscall operator=(Array * this, Array * param_1)


/* JSONUtil::Array::TEMPNAMEPLACEHOLDERVALUE(JSONUtil::Array const&) */

Array * __thiscall JSONUtil::Array::operator=(Array *this,Array *param_1)

{
  Atom **ppAVar1;
  Atom **ppAVar2;
  void **ppvVar3;
  Atom **ppAVar4;
  ulong uVar5;
  void *pvVar6;
  Atom *this_00;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  void **ppvVar9;
  Atom *pAVar10;
  size_t __n;
  
  ppvVar9 = *(void ***)this;
  ppvVar3 = *(void ***)(this + 8);
  if (ppvVar9 != ppvVar3) {
    do {
      pvVar6 = *ppvVar9;
      if (pvVar6 != (void *)0x0) {
        Atom::clear();
        operator_delete(pvVar6);
      }
      ppvVar9 = ppvVar9 + 1;
    } while (ppvVar9 != ppvVar3);
    ppvVar9 = *(void ***)this;
  }
  *(void ***)(this + 8) = ppvVar9;
  uVar5 = *(long *)(param_1 + 8) - *(long *)param_1;
  if ((ulong)(*(long *)(this + 0x10) - (long)ppvVar9 >> 3) < (ulong)((long)uVar5 >> 3)) {
    if ((long)uVar5 < 0) {
LAB_00b27b48:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar6 = operator_new(uVar5);
    *(void **)this = pvVar6;
    *(void **)(this + 8) = pvVar6;
    *(void **)(this + 0x10) = (void *)((long)pvVar6 + ((long)uVar5 >> 3) * 8);
    if (ppvVar9 != (void **)0x0) {
      operator_delete(ppvVar9);
    }
  }
  ppAVar1 = *(Atom ***)param_1;
  ppAVar4 = *(Atom ***)(param_1 + 8);
  do {
    if (ppAVar1 == ppAVar4) {
      return this;
    }
    pAVar10 = *ppAVar1;
    this_00 = (Atom *)operator_new(0x10);
    *this_00 = (Atom)0x0;
                    /* try { // try from 00b27a7c to 00b27a83 has its CatchHandler @ 00b27b54 */
    Atom::operator=(this_00,pAVar10);
    ppAVar2 = *(Atom ***)(this + 8);
    if (ppAVar2 < *(Atom ***)(this + 0x10)) {
      *ppAVar2 = this_00;
      *(Atom ***)(this + 8) = ppAVar2 + 1;
    }
    else {
      pvVar6 = *(void **)this;
      __n = (long)ppAVar2 - (long)pvVar6;
      uVar5 = ((long)__n >> 3) + 1;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar7 = (long)*(Atom ***)(this + 0x10) - (long)pvVar6;
      uVar8 = (long)uVar7 >> 2;
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) goto LAB_00b27b48;
        __dest = operator_new(uVar5 << 3);
      }
      ppAVar2 = (Atom **)((long)__dest + ((long)__n >> 3) * 8);
      *ppAVar2 = this_00;
      if (0 < (long)__n) {
        memcpy(__dest,pvVar6,__n);
      }
      *(void **)this = __dest;
      *(Atom ***)(this + 8) = ppAVar2 + 1;
      *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 8);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
    ppAVar1 = ppAVar1 + 1;
  } while( true );
}


