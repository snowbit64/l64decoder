// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00b6f5e0
// Size: 396 bytes
// Signature: undefined __thiscall insert(BrepSpatialHash * this, Brep * param_1, ushort param_2)


/* BrepSpatialHash::insert(Brep const*, unsigned short) */

void __thiscall BrepSpatialHash::insert(BrepSpatialHash *this,Brep *param_1,ushort param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  void *__dest;
  ushort *puVar3;
  void **ppvVar4;
  void *__src;
  ulong __n;
  ushort **ppuVar5;
  float fVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x2ef0) + (ulong)param_2 * 0x10);
  uVar7 = *(undefined8 *)(puVar1 + 1);
  fVar6 = (float)NEON_fmadd(*puVar1,0x42c80000,0x3f000000);
  ppvVar4 = (void **)(this + (ulong)((uint)((int)((float)uVar7 * 100.0 + 0.5) * 0x127409f ^
                                            (int)fVar6 * 0x466f45d ^
                                           (int)((float)((ulong)uVar7 >> 0x20) * 100.0 + 0.5) *
                                           0x4f9ffb7) % 500) * 0x18);
  ppuVar5 = (ushort **)(ppvVar4 + 1);
  puVar3 = *ppuVar5;
  if (puVar3 == (ushort *)ppvVar4[2]) {
    __src = *ppvVar4;
    __n = (long)puVar3 - (long)__src;
    if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar2 = ((long)__n >> 1) + 1;
    if (uVar2 <= __n) {
      uVar2 = __n;
    }
    if (0x7ffffffffffffffd < __n) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar2 << 1);
    }
    puVar3 = (ushort *)((long)__dest + ((long)__n >> 1) * 2);
    *puVar3 = param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *ppvVar4 = __dest;
    *ppuVar5 = puVar3 + 1;
    ppvVar4[2] = (ushort *)((long)__dest + uVar2 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar3 = param_2;
    *ppuVar5 = puVar3 + 1;
  }
  return;
}


