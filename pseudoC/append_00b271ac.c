// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b271ac
// Size: 316 bytes
// Signature: undefined __thiscall __append(vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>> * this, ulong param_1, CacheEntry * param_2)


/* std::__ndk1::vector<DomXMLFile::CacheEntry, std::__ndk1::allocator<DomXMLFile::CacheEntry>
   >::__append(unsigned long, DomXMLFile::CacheEntry const&) */

void __thiscall
std::__ndk1::vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>>::__append
          (vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>> *this,
          ulong param_1,CacheEntry *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 4) < param_1) {
    lVar8 = (long)puVar6 - *(long *)this >> 4;
    uVar1 = lVar8 + param_1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = *(long *)(this + 0x10) - *(long *)this;
    uVar4 = (long)uVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 << 4);
    }
    puVar7 = (undefined8 *)((long)pvVar2 + lVar8 * 0x10);
    lVar8 = param_1 * 0x10;
    puVar5 = puVar7;
    do {
      uVar9 = *(undefined8 *)param_2;
      lVar8 = lVar8 + -0x10;
      puVar5[1] = *(undefined8 *)(param_2 + 8);
      *puVar5 = uVar9;
      puVar5 = puVar5 + 2;
    } while (lVar8 != 0);
    __src = *(void **)this;
    __n = (long)puVar6 - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar7 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar7 - __n);
    *(undefined8 **)(this + 8) = puVar7 + param_1 * 2;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar7 = puVar6;
    if (param_1 != 0) {
      puVar7 = puVar6 + param_1 * 2;
      lVar8 = param_1 << 4;
      do {
        uVar9 = *(undefined8 *)param_2;
        lVar8 = lVar8 + -0x10;
        puVar6[1] = *(undefined8 *)(param_2 + 8);
        *puVar6 = uVar9;
        puVar6 = puVar6 + 2;
      } while (lVar8 != 0);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  return;
}


