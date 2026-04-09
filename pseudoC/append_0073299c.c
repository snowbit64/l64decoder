// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0073299c
// Size: 612 bytes
// Signature: undefined __thiscall __append(vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> * this, ulong param_1)


/* std::__ndk1::vector<RoadSegment, std::__ndk1::allocator<RoadSegment> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::vector<RoadSegment,std::__ndk1::allocator<RoadSegment>>::__append
          (vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> *this,ulong param_1)

{
  size_t sVar1;
  ulong uVar2;
  undefined uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *__s;
  void *__s_00;
  void *pvVar11;
  undefined8 uVar12;
  
  __s = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 4) * -0x3333333333333333) < param_1) {
    pvVar11 = *(void **)this;
    lVar8 = (long)__s - (long)pvVar11 >> 4;
    uVar2 = lVar8 * -0x3333333333333333 + param_1;
    if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - (long)pvVar11 >> 4;
    uVar9 = lVar6 * -0x6666666666666666;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x199999999999998 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar2 = 0x333333333333333;
    }
    if (uVar2 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar2 * 0x50);
    }
    __s_00 = (void *)((long)pvVar4 + lVar8 * 0x10);
    pvVar4 = (void *)((long)pvVar4 + uVar2 * 0x50);
    sVar1 = ((param_1 * 0x50 - 0x50) / 0x50) * 0x50 + 0x50;
    memset(__s_00,0,sVar1);
    lVar8 = (long)__s_00 + sVar1;
    if (__s == pvVar11) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar8;
      *(void **)(this + 0x10) = pvVar4;
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + -0x50;
        uVar10 = *(undefined8 *)((long)__s + lVar6 + -0x50);
        *(undefined8 *)((long)__s + lVar6 + -0x50) = 0;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x50) = uVar10;
        uVar3 = *(undefined *)((long)__s + lVar6 + -0x38);
        uVar12 = *(undefined8 *)((long)__s + lVar6 + -0x40);
        uVar10 = *(undefined8 *)((long)__s + lVar6 + -0x48);
        *(undefined8 *)((long)__s_00 + lVar6 + -0x28) = 0;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x20) = 0;
        *(undefined *)((long)__s_00 + lVar6 + -0x38) = uVar3;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x40) = uVar12;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x48) = uVar10;
        uVar10 = *(undefined8 *)((long)__s + lVar6 + -0x28);
        *(undefined8 *)((long)__s_00 + lVar6 + -0x30) = *(undefined8 *)((long)__s + lVar6 + -0x30);
        *(undefined8 *)((long)__s_00 + lVar6 + -0x28) = uVar10;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x20) = *(undefined8 *)((long)__s + lVar6 + -0x20);
        *(undefined8 *)((long)__s + lVar6 + -0x30) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x28) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)__s_00 + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)__s_00 + lVar6 + -8) = 0;
        uVar10 = *(undefined8 *)((long)__s + lVar6 + -0x10);
        *(undefined8 *)((long)__s_00 + lVar6 + -0x18) = *(undefined8 *)((long)__s + lVar6 + -0x18);
        *(undefined8 *)((long)__s_00 + lVar6 + -0x10) = uVar10;
        *(undefined8 *)((long)__s_00 + lVar6 + -8) = *(undefined8 *)((long)__s + lVar6 + -8);
        *(undefined8 *)((long)__s + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)__s + lVar6 + -8) = 0;
        lVar6 = lVar7;
      } while ((void *)((long)__s + lVar7) != pvVar11);
      *(void **)(this + 0x10) = pvVar4;
      __s = *(void **)this;
      pvVar11 = *(void **)(this + 8);
      *(long *)this = (long)__s_00 + lVar7;
      *(long *)(this + 8) = lVar8;
      while (pvVar11 != __s) {
        pvVar4 = *(void **)((long)pvVar11 + -0x18);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar11 + -0x10) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = *(void **)((long)pvVar11 + -0x30);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar11 + -0x28) = pvVar4;
          operator_delete(pvVar4);
        }
        plVar5 = *(long **)((long)pvVar11 + -0x50);
        pvVar4 = (void *)((long)pvVar11 + -0x50);
        *(undefined8 *)((long)pvVar11 + -0x50) = 0;
        pvVar11 = pvVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
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
      sVar1 = ((param_1 * 0x50 - 0x50) / 0x50) * 0x50 + 0x50;
      memset(__s,0,sVar1);
      __s = (void *)((long)__s + sVar1);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


