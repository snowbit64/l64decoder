// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLevelChunks
// Entry Point: 00928ec0
// Size: 360 bytes
// Signature: undefined __thiscall getLevelChunks(DestructionGeometryShared * this, uint param_1, uint param_2, vector * param_3, uint param_4)


/* DestructionGeometryShared::getLevelChunks(unsigned int, unsigned int,
   std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&, unsigned int) */

void __thiscall
DestructionGeometryShared::getLevelChunks
          (DestructionGeometryShared *this,uint param_1,uint param_2,vector *param_3,uint param_4)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  void *__dest;
  void *__src;
  ulong __n;
  uint uVar5;
  
  if (param_4 == param_1) {
    puVar2 = *(uint **)(param_3 + 8);
    if (puVar2 == *(uint **)(param_3 + 0x10)) {
      __src = *(void **)param_3;
      __n = (long)puVar2 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
      }
      puVar2 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
      *puVar2 = param_2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_3 = __dest;
      *(uint **)(param_3 + 8) = puVar2 + 1;
      *(void **)(param_3 + 0x10) = (void *)((long)__dest + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *puVar2 = param_2;
      *(uint **)(param_3 + 8) = puVar2 + 1;
    }
  }
  else {
    iVar3 = DestructionChunk::getNumChildren();
    if (iVar3 != 0) {
      uVar5 = 0;
      do {
        iVar3 = DestructionChunk::getFirstChildIndex();
        getLevelChunks(this,param_1,iVar3 + uVar5,param_3,param_4 + 1);
        uVar5 = uVar5 + 1;
        uVar4 = DestructionChunk::getNumChildren();
      } while (uVar5 < uVar4);
    }
  }
  return;
}


