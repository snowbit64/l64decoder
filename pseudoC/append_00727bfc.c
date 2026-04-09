// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00727bfc
// Size: 532 bytes
// Signature: undefined __thiscall __append(vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> * this, ulong param_1)


/* std::__ndk1::vector<StoppingPath, std::__ndk1::allocator<StoppingPath> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::vector<StoppingPath,std::__ndk1::allocator<StoppingPath>>::__append
          (vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> *this,ulong param_1)

{
  size_t __n;
  void **ppvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void **__s;
  void *__s_00;
  void **ppvVar9;
  
  __s = *(void ***)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * -0x3333333333333333) < param_1) {
    ppvVar9 = *(void ***)this;
    lVar6 = (long)__s - (long)ppvVar9 >> 3;
    uVar4 = lVar6 * -0x3333333333333333 + param_1;
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(long *)(this + 0x10) - (long)ppvVar9 >> 3;
    uVar7 = lVar3 * -0x6666666666666666;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    if (uVar4 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar4 * 0x28);
    }
    __s_00 = (void *)((long)pvVar2 + lVar6 * 8);
    pvVar2 = (void *)((long)pvVar2 + uVar4 * 0x28);
    __n = ((param_1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    memset(__s_00,0,__n);
    lVar6 = (long)__s_00 + __n;
    if (__s == ppvVar9) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar6;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      lVar3 = 0;
      do {
        lVar5 = lVar3 + -0x28;
        *(undefined8 *)((long)__s_00 + lVar3 + -0x20) = 0;
        *(undefined8 *)((long)__s_00 + lVar3 + -0x18) = 0;
        uVar8 = *(undefined8 *)((long)__s + lVar3 + -0x20);
        *(undefined8 *)((long)__s_00 + lVar3 + -0x28) = *(undefined8 *)((long)__s + lVar3 + -0x28);
        *(undefined8 *)((long)__s_00 + lVar3 + -0x20) = uVar8;
        *(undefined8 *)((long)__s_00 + lVar3 + -0x18) = *(undefined8 *)((long)__s + lVar3 + -0x18);
        *(undefined8 *)((long)__s + lVar3 + -0x28) = 0;
        *(undefined8 *)((long)__s + lVar3 + -0x20) = 0;
        uVar8 = *(undefined8 *)((long)__s + lVar3 + -0x10);
        *(undefined8 *)((long)__s + lVar3 + -0x18) = 0;
        *(undefined *)((long)__s_00 + lVar3 + -8) = *(undefined *)((long)__s + lVar3 + -8);
        *(undefined8 *)((long)__s_00 + lVar3 + -0x10) = uVar8;
        lVar3 = lVar5;
      } while ((void **)((long)__s + lVar5) != ppvVar9);
      *(void **)(this + 0x10) = pvVar2;
      __s = *(void ***)this;
      ppvVar9 = *(void ***)(this + 8);
      *(long *)this = (long)__s_00 + lVar5;
      *(long *)(this + 8) = lVar6;
      while (ppvVar1 = ppvVar9, ppvVar1 != __s) {
        ppvVar9 = ppvVar1 + -5;
        pvVar2 = *ppvVar9;
        if (pvVar2 != (void *)0x0) {
          ppvVar1[-4] = pvVar2;
          operator_delete(pvVar2);
        }
      }
    }
    if (__s != (void **)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      uVar4 = (param_1 * 0x28 - 0x28) / 0x28;
      memset(__s,0,uVar4 * 0x28 + 0x28);
      __s = __s + uVar4 * 5 + 5;
    }
    *(void ***)(this + 8) = __s;
  }
  return;
}


