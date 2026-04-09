// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeTexture_main
// Entry Point: 00966d94
// Size: 420 bytes
// Signature: undefined __thiscall removeTexture_main(RegistryPipeline * this, Texture * param_1)


/* TextureStreamingManager::RegistryPipeline::removeTexture_main(Texture&) */

void __thiscall
TextureStreamingManager::RegistryPipeline::removeTexture_main
          (RegistryPipeline *this,Texture *param_1)

{
  ulong uVar1;
  Texture *pTVar2;
  ulonglong *puVar3;
  long lVar4;
  void *__dest;
  void *__src;
  ulong __n;
  ulonglong local_78;
  RegistryPipeline *local_70;
  void **ppvStack_68;
  undefined local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_70 = this + 8;
  local_58 = *(long *)(lVar4 + 0x28);
  ppvStack_68 = (void **)(this + 0x30);
  local_78 = *(ulonglong *)(param_1 + 0x70);
  local_60 = 0;
  Mutex::enterCriticalSection();
                    /* try { // try from 00966de8 to 00966def has its CatchHandler @ 00966f54 */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>>
  ::__erase_unique<unsigned_long_long>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>>
              *)(this + 0x38),&local_78);
                    /* try { // try from 00966df0 to 00966df7 has its CatchHandler @ 00966f50 */
  Mutex::leaveCriticalSection();
  pTVar2 = param_1 + 0x31;
  if (((byte)param_1[0x30] & 1) != 0) {
    pTVar2 = *(Texture **)(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  logFeedback("[RegistryPipeline] 3: start unregister texture 0x%p \'%s\' [id: %llu]",param_1,pTVar2
              ,local_78);
  local_70 = this + 0xb0;
  local_60 = 0;
  ppvStack_68 = (void **)(this + 0xd8);
  Mutex::enterCriticalSection();
  puVar3 = *(ulonglong **)(this + 0xe0);
  if (puVar3 == *(ulonglong **)(this + 0xe8)) {
    __src = *(void **)(this + 0xd8);
    __n = (long)puVar3 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00966f20 to 00966f33 has its CatchHandler @ 00966f38 */
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
                    /* try { // try from 00966e9c to 00966e9f has its CatchHandler @ 00966f38 */
      __dest = operator_new(uVar1 << 3);
    }
    puVar3 = (ulonglong *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar3 = local_78;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xd8) = __dest;
    *(ulonglong **)(this + 0xe0) = puVar3 + 1;
    *(void **)(this + 0xe8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar3 = local_78;
    *(ulonglong **)(this + 0xe0) = puVar3 + 1;
  }
                    /* try { // try from 00966ee8 to 00966eef has its CatchHandler @ 00966f4c */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78);
}


