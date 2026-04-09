// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeUnavailability
// Entry Point: 00b15ad4
// Size: 332 bytes
// Signature: undefined __thiscall synchronizeUnavailability(VoiceChatManager * this, bool param_1)


/* VoiceChatManager::synchronizeUnavailability(bool) */

void __thiscall VoiceChatManager::synchronizeUnavailability(VoiceChatManager *this,bool param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  void *__dest;
  undefined8 *puVar4;
  void *__src;
  ulong __n;
  undefined8 uVar5;
  
  puVar3 = (undefined *)operator_new(0x28);
  uVar2 = *(undefined2 *)(this + 0x428);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  puVar3[0x20] = 0;
  *(undefined2 *)(puVar3 + 2) = uVar2;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  uVar5 = Watch::getTimeSec();
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  puVar3[0x20] = param_1;
  Mutex::enterCriticalSection();
  puVar4 = *(undefined8 **)(this + 0x14d8);
  if (puVar4 == *(undefined8 **)(this + 0x14e0)) {
    __src = *(void **)(this + 0x14d0);
    __n = (long)puVar4 - (long)__src;
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
    puVar4 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar4 = puVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x14d0) = __dest;
    *(undefined8 **)(this + 0x14d8) = puVar4 + 1;
    *(void **)(this + 0x14e0) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar4 = puVar3;
    *(undefined8 **)(this + 0x14d8) = puVar4 + 1;
  }
  Mutex::leaveCriticalSection();
  return;
}


