// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00a17940
// Size: 660 bytes
// Signature: undefined __thiscall __append(vector<Renderer::PlaneRenderInfoDesc,std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc>> * this, ulong param_1)


/* std::__ndk1::vector<Renderer::PlaneRenderInfoDesc,
   std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<Renderer::PlaneRenderInfoDesc,std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc>>::
__append(vector<Renderer::PlaneRenderInfoDesc,std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc>>
         *this,ulong param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = *(undefined2 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar5 >> 3) * -0x7063e7063e7063e7) < param_1) {
    lVar4 = (long)puVar5 - *(long *)this >> 3;
    uVar2 = lVar4 * -0x7063e7063e7063e7 + param_1;
    if (0xc7ce0c7ce0c7ce < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar8 = lVar7 * 0x1f3831f3831f3832;
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    if (0x63e7063e7063e6 < (ulong)(lVar7 * -0x7063e7063e7063e7)) {
      uVar2 = 0xc7ce0c7ce0c7ce;
    }
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xc7ce0c7ce0c7ce < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar2 * 0x148);
    }
    puVar6 = (undefined2 *)((long)pvVar3 + lVar4 * 8);
    puVar5 = puVar6;
    do {
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(undefined8 *)(puVar5 + 0xe) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      *(undefined8 *)(puVar5 + 0x16) = 0;
      *(undefined8 *)(puVar5 + 0x12) = 0;
      *(undefined8 *)(puVar5 + 0x1e) = 0;
      *(undefined8 *)(puVar5 + 0x1a) = 0;
      *(undefined8 *)(puVar5 + 0x26) = 0;
      *(undefined8 *)(puVar5 + 0x22) = 0;
      *(undefined8 *)(puVar5 + 0x2e) = 0;
      *(undefined8 *)(puVar5 + 0x2a) = 0;
      *(undefined8 *)(puVar5 + 0x36) = 0;
      *(undefined8 *)(puVar5 + 0x32) = 0;
      *(undefined8 *)(puVar5 + 0x3e) = 0;
      *(undefined8 *)(puVar5 + 0x3a) = 0;
      *(undefined8 *)(puVar5 + 0x46) = 0;
      *(undefined8 *)(puVar5 + 0x42) = 0;
      *(undefined4 *)(puVar5 + 0x4a) = 0;
      *(undefined8 *)(puVar5 + 0x50) = 0;
      *(undefined8 *)(puVar5 + 0x4c) = 0x3f8000003f800000;
      *(undefined8 *)(puVar5 + 0x58) = 0x3f800000;
      *(undefined8 *)(puVar5 + 0x54) = 0;
      *(undefined8 *)(puVar5 + 0x60) = 0x3f80000000000000;
      *(undefined8 *)(puVar5 + 0x5c) = 0;
      *(undefined8 *)(puVar5 + 0x68) = 0;
      *(undefined8 *)(puVar5 + 100) = 0;
      *(undefined8 *)(puVar5 + 0x70) = 0;
      *(undefined8 *)(puVar5 + 0x6c) = 0x3f8000003f800000;
      *(undefined8 *)(puVar5 + 0x78) = 0x3f800000;
      *(undefined8 *)(puVar5 + 0x74) = 0;
      *(undefined8 *)(puVar5 + 0x80) = 0x3f80000000000000;
      *(undefined8 *)(puVar5 + 0x7c) = 0;
      puVar1 = puVar5 + 0xa4;
      *(undefined8 *)(puVar5 + 0x88) = 0;
      *(undefined8 *)(puVar5 + 0x84) = 0;
      *(undefined4 *)(puVar5 + 0x8c) = 0x3f800000;
      *(undefined8 *)((long)puVar5 + 0x121) = 0;
      *(undefined8 *)(puVar5 + 0x8e) = 0;
      *(undefined8 *)(puVar5 + 0x9e) = 0;
      *(undefined4 *)(puVar5 + 0xa2) = 0;
      *(undefined8 *)(puVar5 + 0x96) = 0;
      *(undefined8 *)(puVar5 + 0x9a) = 0;
      puVar5 = puVar1;
    } while (puVar1 != puVar6 + param_1 * 0xa4);
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar6 - __n);
    *(undefined2 **)(this + 8) = puVar6 + param_1 * 0xa4;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar2 * 0x148);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_1 != 0) {
      puVar6 = puVar5 + param_1 * 0xa4;
      do {
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        *(undefined8 *)(puVar5 + 2) = 0;
        *(undefined8 *)(puVar5 + 0xe) = 0;
        *(undefined8 *)(puVar5 + 10) = 0;
        *(undefined8 *)(puVar5 + 0x16) = 0;
        *(undefined8 *)(puVar5 + 0x12) = 0;
        *(undefined8 *)(puVar5 + 0x1e) = 0;
        *(undefined8 *)(puVar5 + 0x1a) = 0;
        *(undefined8 *)(puVar5 + 0x26) = 0;
        *(undefined8 *)(puVar5 + 0x22) = 0;
        *(undefined8 *)(puVar5 + 0x2e) = 0;
        *(undefined8 *)(puVar5 + 0x2a) = 0;
        *(undefined8 *)(puVar5 + 0x36) = 0;
        *(undefined8 *)(puVar5 + 0x32) = 0;
        *(undefined8 *)(puVar5 + 0x3e) = 0;
        *(undefined8 *)(puVar5 + 0x3a) = 0;
        *(undefined8 *)(puVar5 + 0x46) = 0;
        *(undefined8 *)(puVar5 + 0x42) = 0;
        *(undefined4 *)(puVar5 + 0x4a) = 0;
        *(undefined8 *)(puVar5 + 0x50) = 0;
        *(undefined8 *)(puVar5 + 0x4c) = 0x3f8000003f800000;
        *(undefined8 *)(puVar5 + 0x58) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x54) = 0;
        *(undefined8 *)(puVar5 + 0x60) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 0x5c) = 0;
        *(undefined8 *)(puVar5 + 0x68) = 0;
        *(undefined8 *)(puVar5 + 100) = 0;
        *(undefined8 *)(puVar5 + 0x70) = 0;
        *(undefined8 *)(puVar5 + 0x6c) = 0x3f8000003f800000;
        *(undefined8 *)(puVar5 + 0x78) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x74) = 0;
        *(undefined8 *)(puVar5 + 0x80) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 0x7c) = 0;
        puVar1 = puVar5 + 0xa4;
        *(undefined8 *)(puVar5 + 0x88) = 0;
        *(undefined8 *)(puVar5 + 0x84) = 0;
        *(undefined4 *)(puVar5 + 0x8c) = 0x3f800000;
        *(undefined8 *)((long)puVar5 + 0x121) = 0;
        *(undefined8 *)(puVar5 + 0x8e) = 0;
        *(undefined8 *)(puVar5 + 0x9e) = 0;
        *(undefined4 *)(puVar5 + 0xa2) = 0;
        *(undefined8 *)(puVar5 + 0x96) = 0;
        *(undefined8 *)(puVar5 + 0x9a) = 0;
        puVar5 = puVar1;
      } while (puVar1 != puVar6);
    }
    *(undefined2 **)(this + 8) = puVar6;
  }
  return;
}


