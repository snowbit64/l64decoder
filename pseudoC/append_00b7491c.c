// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b7491c
// Size: 392 bytes
// Signature: undefined __thiscall __append(vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> * this, ulong param_1)


/* std::__ndk1::vector<Brep::VertexCone, std::__ndk1::allocator<Brep::VertexCone>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::__append
          (vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 2) * -0x5555555555555555) < param_1) {
    lVar6 = (long)puVar8 - *(long *)this >> 2;
    uVar1 = lVar6 * -0x5555555555555555 + param_1;
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(long *)(this + 0x10) - *(long *)this >> 2;
    uVar7 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0xc);
    }
    lVar3 = param_1 * 0xc;
    puVar5 = (undefined8 *)((long)pvVar2 + lVar6 * 4);
    lVar6 = (long)puVar5 + lVar3;
    puVar4 = puVar5;
    do {
      *puVar4 = 0xffffffffffffffff;
      lVar3 = lVar3 + -0xc;
      *(undefined2 *)(puVar4 + 1) = 0xffff;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    } while (lVar3 != 0);
    __src = *(void **)this;
    __n = (long)puVar8 - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar5 - __n);
    *(long *)(this + 8) = lVar6;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar4 = puVar8;
    if (param_1 != 0) {
      lVar6 = param_1 * 0xc;
      puVar4 = (undefined8 *)((long)puVar8 + param_1 * 0xc);
      do {
        *puVar8 = 0xffffffffffffffff;
        lVar6 = lVar6 + -0xc;
        *(undefined2 *)(puVar8 + 1) = 0xffff;
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      } while (lVar6 != 0);
    }
    *(undefined8 **)(this + 8) = puVar4;
  }
  return;
}


