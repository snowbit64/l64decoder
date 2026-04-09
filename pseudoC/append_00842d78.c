// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00842d78
// Size: 620 bytes
// Signature: undefined __thiscall __append(vector<DensityMapMultiModifierLua::DensityMapExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute>> * this, ulong param_1)


/* std::__ndk1::vector<DensityMapMultiModifierLua::DensityMapExecute,
   std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<DensityMapMultiModifierLua::DensityMapExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute>>
::__append(vector<DensityMapMultiModifierLua::DensityMapExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute>>
           *this,ulong param_1)

{
  size_t sVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *__s;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  __s = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 4) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    pvVar9 = *(void **)this;
    lVar6 = (long)__s - (long)pvVar9 >> 4;
    uVar2 = lVar6 * 0x2e8ba2e8ba2e8ba3 + param_1;
    if (0x1745d1745d1745d < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - (long)pvVar9 >> 4;
    uVar7 = lVar4 * 0x5d1745d1745d1746;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar2 = 0x1745d1745d1745d;
    }
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x1745d1745d1745d < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar2 * 0xb0);
    }
    pvVar8 = (void *)((long)pvVar3 + lVar6 * 0x10);
    pvVar3 = (void *)((long)pvVar3 + uVar2 * 0xb0);
    sVar1 = ((param_1 * 0xb0 - 0xb0) / 0xb0) * 0xb0 + 0xb0;
    memset(pvVar8,0,sVar1);
    lVar6 = (long)pvVar8 + sVar1;
    if (__s == pvVar9) {
      *(void **)this = pvVar8;
      *(long *)(this + 8) = lVar6;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + -0xb0;
        uVar12 = *(undefined8 *)((long)__s + lVar4 + -0xa0);
        uVar11 = *(undefined8 *)((long)__s + lVar4 + -0x88);
        uVar10 = *(undefined8 *)((long)__s + lVar4 + -0x90);
        uVar14 = *(undefined8 *)((long)__s + lVar4 + -0xa8);
        uVar13 = *(undefined8 *)((long)__s + lVar4 + -0xb0);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x98) = *(undefined8 *)((long)__s + lVar4 + -0x98);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0xa0) = uVar12;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x88) = uVar11;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x90) = uVar10;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0xa8) = uVar14;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0xb0) = uVar13;
        uVar11 = *(undefined8 *)((long)__s + lVar4 + -0x78);
        uVar10 = *(undefined8 *)((long)__s + lVar4 + -0x80);
        uVar13 = *(undefined8 *)((long)__s + lVar4 + -0x68);
        uVar12 = *(undefined8 *)((long)__s + lVar4 + -0x70);
        uVar15 = *(undefined8 *)((long)__s + lVar4 + -0x4c);
        uVar14 = *(undefined8 *)((long)__s + lVar4 + -0x54);
        uVar17 = *(undefined8 *)((long)__s + lVar4 + -0x58);
        uVar16 = *(undefined8 *)((long)__s + lVar4 + -0x60);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x38) = 0;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x30) = 0;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x78) = uVar11;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x80) = uVar10;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x4c) = uVar15;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x54) = uVar14;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x68) = uVar13;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x70) = uVar12;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x58) = uVar17;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x60) = uVar16;
        uVar10 = *(undefined8 *)((long)__s + lVar4 + -0x38);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x40) = *(undefined8 *)((long)__s + lVar4 + -0x40);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x38) = uVar10;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x30) = *(undefined8 *)((long)__s + lVar4 + -0x30);
        *(undefined8 *)((long)__s + lVar4 + -0x40) = 0;
        *(undefined8 *)((long)__s + lVar4 + -0x38) = 0;
        uVar11 = *(undefined8 *)((long)__s + lVar4 + -0x10);
        uVar10 = *(undefined8 *)((long)__s + lVar4 + -0x18);
        *(undefined8 *)((long)__s + lVar4 + -0x30) = 0;
        uVar13 = *(undefined8 *)((long)__s + lVar4 + -0x20);
        uVar12 = *(undefined8 *)((long)__s + lVar4 + -0x28);
        *(undefined4 *)((long)pvVar8 + lVar4 + -8) = *(undefined4 *)((long)__s + lVar4 + -8);
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x10) = uVar11;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x18) = uVar10;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x20) = uVar13;
        *(undefined8 *)((long)pvVar8 + lVar4 + -0x28) = uVar12;
        lVar4 = lVar5;
      } while ((void *)((long)__s + lVar5) != pvVar9);
      *(void **)(this + 0x10) = pvVar3;
      __s = *(void **)this;
      pvVar9 = *(void **)(this + 8);
      *(long *)this = (long)pvVar8 + lVar5;
      *(long *)(this + 8) = lVar6;
      while (pvVar3 = pvVar9, pvVar3 != __s) {
        pvVar8 = *(void **)((long)pvVar3 + -0x40);
        pvVar9 = (void *)((long)pvVar3 + -0xb0);
        if (pvVar8 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x38) = pvVar8;
          operator_delete(pvVar8);
        }
      }
    }
    if (__s != (void *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar1 = ((param_1 * 0xb0 - 0xb0) / 0xb0) * 0xb0 + 0xb0;
      memset(__s,0,sVar1);
      __s = (void *)((long)__s + sVar1);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


