// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0093e304
// Size: 408 bytes
// Signature: undefined __thiscall __append(vector<I3DSceneGraphFactory::SkinnedShape,std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape>> * this, ulong param_1)


/* std::__ndk1::vector<I3DSceneGraphFactory::SkinnedShape,
   std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<I3DSceneGraphFactory::SkinnedShape,std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape>>
::__append(vector<I3DSceneGraphFactory::SkinnedShape,std::__ndk1::allocator<I3DSceneGraphFactory::SkinnedShape>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *__s;
  long lVar11;
  void *pvVar12;
  
  __s = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 5) < param_1) {
    pvVar12 = *(void **)this;
    lVar11 = (long)__s - (long)pvVar12 >> 5;
    uVar1 = lVar11 + param_1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = *(long *)(this + 0x10) - (long)pvVar12;
    uVar9 = (long)uVar7 >> 4;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 << 5);
    }
    pvVar6 = (void *)((long)pvVar5 + lVar11 * 0x20);
    pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x20);
    memset(pvVar6,0,param_1 * 0x20);
    pvVar2 = (void *)((long)pvVar6 + param_1 * 0x20);
    if (__s == pvVar12) {
      *(void **)this = pvVar6;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = pvVar5;
    }
    else {
      lVar11 = 0;
      do {
        lVar8 = lVar11 + -0x20;
        uVar10 = *(undefined8 *)((long)__s + lVar11 + -0x20);
        *(undefined8 *)((long)pvVar6 + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)pvVar6 + lVar11 + -8) = 0;
        uVar3 = *(undefined8 *)((long)__s + lVar11 + -0x18);
        uVar4 = *(undefined8 *)((long)__s + lVar11 + -0x10);
        *(undefined8 *)((long)pvVar6 + lVar11 + -0x20) = uVar10;
        *(undefined8 *)((long)pvVar6 + lVar11 + -0x18) = uVar3;
        *(undefined8 *)((long)pvVar6 + lVar11 + -0x10) = uVar4;
        *(undefined8 *)((long)pvVar6 + lVar11 + -8) = *(undefined8 *)((long)__s + lVar11 + -8);
        *(undefined8 *)((long)__s + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar11 + -0x10) = 0;
        *(undefined8 *)((long)__s + lVar11 + -8) = 0;
        lVar11 = lVar8;
      } while ((void *)((long)__s + lVar8) != pvVar12);
      *(void **)(this + 0x10) = pvVar5;
      __s = *(void **)this;
      pvVar12 = *(void **)(this + 8);
      *(long *)this = (long)pvVar6 + lVar8;
      *(void **)(this + 8) = pvVar2;
      while (pvVar5 = pvVar12, pvVar5 != __s) {
        pvVar6 = *(void **)((long)pvVar5 + -0x18);
        pvVar12 = (void *)((long)pvVar5 + -0x20);
        if (pvVar6 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x10) = pvVar6;
          operator_delete(pvVar6);
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


