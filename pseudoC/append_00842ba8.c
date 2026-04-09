// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00842ba8
// Size: 464 bytes
// Signature: undefined __thiscall __append(vector<DensityMapMultiModifierLua::TerrainExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute>> * this, ulong param_1)


/* std::__ndk1::vector<DensityMapMultiModifierLua::TerrainExecute,
   std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<DensityMapMultiModifierLua::TerrainExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute>>
::__append(vector<DensityMapMultiModifierLua::TerrainExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *__s;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  
  __s = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 5) < param_1) {
    pvVar13 = *(void **)this;
    lVar11 = (long)__s - (long)pvVar13 >> 5;
    uVar1 = lVar11 + param_1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = *(long *)(this + 0x10) - (long)pvVar13;
    uVar9 = (long)uVar6 >> 4;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 << 5);
    }
    pvVar12 = (void *)((long)pvVar4 + lVar11 * 0x20);
    pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x20);
    memset(pvVar12,0,param_1 * 0x20);
    pvVar5 = (void *)((long)pvVar12 + param_1 * 0x20);
    if (__s == pvVar13) {
      *(void **)this = pvVar12;
      *(void **)(this + 8) = pvVar5;
      *(void **)(this + 0x10) = pvVar4;
    }
    else {
      lVar11 = 0;
      do {
        lVar8 = lVar11 + -0x20;
        uVar10 = *(undefined8 *)((long)__s + lVar11 + -0x20);
        *(undefined8 *)((long)pvVar12 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)pvVar12 + lVar11 + -8) = 0;
        uVar2 = *(undefined8 *)((long)__s + lVar11 + -0x18);
        uVar3 = *(undefined8 *)((long)__s + lVar11 + -0x10);
        *(undefined8 *)((long)pvVar12 + lVar11 + -0x20) = uVar10;
        *(undefined8 *)((long)pvVar12 + lVar11 + -0x18) = uVar2;
        *(undefined8 *)((long)pvVar12 + lVar11 + -0x10) = uVar3;
        *(undefined8 *)((long)pvVar12 + lVar11 + -8) = *(undefined8 *)((long)__s + lVar11 + -8);
        *(undefined8 *)((long)__s + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)__s + lVar11 + -8) = 0;
        lVar11 = lVar8;
      } while ((void *)((long)__s + lVar8) != pvVar13);
      *(void **)(this + 0x10) = pvVar4;
      __s = *(void **)this;
      pvVar13 = *(void **)(this + 8);
      *(long *)this = (long)pvVar12 + lVar8;
      *(void **)(this + 8) = pvVar5;
      while (pvVar4 = pvVar13, pvVar4 != __s) {
        pvVar12 = *(void **)((long)pvVar4 + -0x18);
        pvVar13 = (void *)((long)pvVar4 + -0x20);
        if (pvVar12 != (void *)0x0) {
          pvVar5 = pvVar12;
          pvVar7 = *(void **)((long)pvVar4 + -0x10);
          if (*(void **)((long)pvVar4 + -0x10) != pvVar12) {
            do {
              pvVar5 = *(void **)((long)pvVar7 + -0x40);
              pvVar14 = (void *)((long)pvVar7 + -0xb0);
              if (pvVar5 != (void *)0x0) {
                *(void **)((long)pvVar7 + -0x38) = pvVar5;
                operator_delete(pvVar5);
              }
              pvVar7 = pvVar14;
            } while (pvVar14 != pvVar12);
            pvVar5 = *(void **)((long)pvVar4 + -0x18);
          }
          *(void **)((long)pvVar4 + -0x10) = pvVar12;
          operator_delete(pvVar5);
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
      memset(__s,0,param_1 * 0x20);
      __s = (void *)((long)__s + param_1 * 0x20);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


