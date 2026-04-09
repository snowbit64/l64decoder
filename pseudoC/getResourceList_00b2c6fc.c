// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getResourceList
// Entry Point: 00b2c6fc
// Size: 384 bytes
// Signature: undefined __thiscall getResourceList(ResourceManager * this, vector * param_1)


/* ResourceManager::getResourceList(std::__ndk1::vector<Resource*, std::__ndk1::allocator<Resource*>
   >&) */

void __thiscall ResourceManager::getResourceList(ResourceManager *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *__dest;
  ResourceManager **ppRVar4;
  ResourceManager *pRVar5;
  void *__src;
  ulong __n;
  ResourceManager **ppRVar6;
  
  Mutex::enterCriticalSection();
  ppRVar6 = *(ResourceManager ***)(this + 0x18);
  do {
    if (ppRVar6 == (ResourceManager **)(this + 0x20)) {
      Mutex::leaveCriticalSection();
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      __src = *(void **)param_1;
      __n = (long)puVar2 - (long)__src;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 2)) {
        uVar1 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
      }
      puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar2 = ppRVar6[4];
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_1 = __dest;
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
      *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar2 = ppRVar6[4];
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    }
    ppRVar4 = (ResourceManager **)ppRVar6[1];
    if ((ResourceManager **)ppRVar6[1] == (ResourceManager **)0x0) {
      ppRVar4 = ppRVar6 + 2;
      bVar3 = (ResourceManager **)*(ResourceManager **)*ppRVar4 != ppRVar6;
      ppRVar6 = (ResourceManager **)*ppRVar4;
      if (bVar3) {
        do {
          pRVar5 = *ppRVar4;
          ppRVar4 = (ResourceManager **)(pRVar5 + 0x10);
          ppRVar6 = (ResourceManager **)*ppRVar4;
        } while (*ppRVar6 != pRVar5);
      }
    }
    else {
      do {
        ppRVar6 = ppRVar4;
        ppRVar4 = (ResourceManager **)*ppRVar6;
      } while ((ResourceManager **)*ppRVar6 != (ResourceManager **)0x0);
    }
  } while( true );
}


