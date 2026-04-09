// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008d3e1c
// Size: 396 bytes
// Signature: undefined __thiscall __append(vector<Vector3,std::__ndk1::allocator<Vector3>> * this, ulong param_1, Vector3 * param_2)


/* std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >::__append(unsigned long, Vector3
   const&) */

void __thiscall
std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::__append
          (vector<Vector3,std::__ndk1::allocator<Vector3>> *this,ulong param_1,Vector3 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar10 >> 2) * -0x5555555555555555) < param_1) {
    lVar7 = (long)puVar10 - *(long *)this >> 2;
    uVar1 = lVar7 * -0x5555555555555555 + param_1;
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this >> 2;
    uVar8 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0xc);
    }
    puVar6 = (undefined8 *)((long)pvVar3 + lVar7 * 4);
    lVar7 = param_1 * 0xc;
    pvVar2 = (void *)((long)puVar6 + lVar7);
    puVar5 = puVar6;
    do {
      lVar7 = lVar7 + -0xc;
      uVar9 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar5 = uVar9;
      puVar5 = (undefined8 *)((long)puVar5 + 0xc);
    } while (lVar7 != 0);
    __src = *(void **)this;
    __n = (long)puVar10 - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar6 - __n);
    *(void **)(this + 8) = pvVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar5 = puVar10;
    if (param_1 != 0) {
      lVar7 = param_1 * 0xc;
      puVar5 = (undefined8 *)((long)puVar10 + param_1 * 0xc);
      do {
        lVar7 = lVar7 + -0xc;
        uVar9 = *(undefined8 *)param_2;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_2 + 8);
        *puVar10 = uVar9;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (lVar7 != 0);
    }
    *(undefined8 **)(this + 8) = puVar5;
  }
  return;
}


