// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009d7d8c
// Size: 516 bytes
// Signature: undefined __thiscall __append(vector<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>,std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::vector<PoissonDiskUtil::Point,
   std::__ndk1::allocator<PoissonDiskUtil::Point> >,
   std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,
   std::__ndk1::allocator<PoissonDiskUtil::Point> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>,std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>>>
::__append(vector<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>,std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>>>
           *this,ulong param_1)

{
  undefined8 uVar1;
  void **ppvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void **__s;
  void *__s_00;
  size_t __n;
  void **ppvVar9;
  
  __s = *(void ***)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * -0x5555555555555555) < param_1) {
    ppvVar9 = *(void ***)this;
    lVar7 = (long)__s - (long)ppvVar9 >> 3;
    uVar5 = lVar7 * -0x5555555555555555 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - (long)ppvVar9 >> 3;
    uVar8 = lVar4 * 0x5555555555555556;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 0x18);
    }
    __s_00 = (void *)((long)pvVar3 + lVar7 * 8);
    pvVar3 = (void *)((long)pvVar3 + uVar5 * 0x18);
    __n = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    memset(__s_00,0,__n);
    lVar7 = (long)__s_00 + __n;
    if (__s == ppvVar9) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar7;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      lVar4 = 0;
      do {
        lVar6 = lVar4 + -0x18;
        *(undefined8 *)((long)__s_00 + lVar4 + -0x10) = 0;
        *(undefined8 *)((long)__s_00 + lVar4 + -8) = 0;
        uVar1 = *(undefined8 *)((long)__s + lVar4 + -0x10);
        *(undefined8 *)((long)__s_00 + lVar4 + -0x18) = *(undefined8 *)((long)__s + lVar4 + -0x18);
        *(undefined8 *)((long)__s_00 + lVar4 + -0x10) = uVar1;
        *(undefined8 *)((long)__s_00 + lVar4 + -8) = *(undefined8 *)((long)__s + lVar4 + -8);
        *(undefined8 *)((long)__s + lVar4 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar4 + -0x10) = 0;
        *(undefined8 *)((long)__s + lVar4 + -8) = 0;
        lVar4 = lVar6;
      } while ((void **)((long)__s + lVar6) != ppvVar9);
      *(void **)(this + 0x10) = pvVar3;
      __s = *(void ***)this;
      ppvVar9 = *(void ***)(this + 8);
      *(long *)this = (long)__s_00 + lVar6;
      *(long *)(this + 8) = lVar7;
      while (ppvVar2 = ppvVar9, ppvVar2 != __s) {
        ppvVar9 = ppvVar2 + -3;
        pvVar3 = *ppvVar9;
        if (pvVar3 != (void *)0x0) {
          ppvVar2[-2] = pvVar3;
          operator_delete(pvVar3);
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
      uVar5 = (param_1 * 0x18 - 0x18) / 0x18;
      memset(__s,0,uVar5 * 0x18 + 0x18);
      __s = __s + uVar5 * 3 + 3;
    }
    *(void ***)(this + 8) = __s;
  }
  return;
}


