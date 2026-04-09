// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<unsigned_short(&)[3]>
// Entry Point: 008d38d8
// Size: 300 bytes
// Signature: void __thiscall __emplace_back_slow_path<unsigned_short(&)[3]>(vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>> * this, unsigned_short * param_1)


/* void std::__ndk1::vector<BrepTriangle, std::__ndk1::allocator<BrepTriangle>
   >::__emplace_back_slow_path<unsigned short (&) [3]>(unsigned short (&) [3]) */

void __thiscall
std::__ndk1::vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>>::
__emplace_back_slow_path<unsigned_short(&)[3]>
          (vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>> *this,unsigned_short *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *__src;
  size_t __n;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(this + 8);
  lVar5 = lVar2 - *(long *)this >> 2;
  uVar1 = lVar5 * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 2;
  uVar8 = lVar7 * -0x6666666666666666;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar1 = 0xccccccccccccccc;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0xccccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x14);
  }
  __src = *(void **)this;
  puVar6 = (undefined4 *)((long)pvVar4 + lVar5 * 4);
  __n = lVar2 - (long)__src;
  uVar3 = *(undefined2 *)(param_1 + 4);
  *puVar6 = *(undefined4 *)param_1;
  *(undefined2 *)(puVar6 + 1) = uVar3;
  *(undefined8 *)((long)puVar6 + 6) = 0xffffffffffffffff;
  puVar6[4] = 0;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar6 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)puVar6 - __n);
  *(undefined4 **)(this + 8) = puVar6 + 5;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x14);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


