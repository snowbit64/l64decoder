// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStaticDelete
// Entry Point: 00b2c2bc
// Size: 384 bytes
// Signature: undefined __thiscall getStaticDelete(ResourceManager * this, char * param_1, uint param_2, ResourceDesc * param_3, STREAM_QUEUE param_4, bool param_5, bool * param_6)


/* ResourceManager::getStaticDelete(char const*, unsigned int, ResourceDesc*,
   StreamManager::STREAM_QUEUE, bool, bool&) */

long * __thiscall
ResourceManager::getStaticDelete
          (ResourceManager *this,char *param_1,uint param_2,ResourceDesc *param_3,
          STREAM_QUEUE param_4,bool param_5,bool *param_6)

{
  ulong uVar1;
  long **pplVar2;
  int iVar3;
  long *plVar4;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  *param_6 = false;
  plVar4 = (long *)getInternal(this,param_1,param_2,param_3,1,true,param_5,param_6);
  if (*param_6 == false) {
    if ((plVar4 != (long *)0x0) && (iVar3 = FUN_00f27700(0xffffffff,plVar4 + 1), iVar3 < 2)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  else {
    pplVar2 = *(long ***)(this + 0x38);
    if (pplVar2 == *(long ***)(this + 0x40)) {
      __src = *(void **)(this + 0x30);
      __n = (long)pplVar2 - (long)__src;
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
      pplVar2 = (long **)((long)__dest + ((long)__n >> 3) * 8);
      *pplVar2 = plVar4;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x30) = __dest;
      *(long ***)(this + 0x38) = pplVar2 + 1;
      *(void **)(this + 0x40) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *pplVar2 = plVar4;
      *(long ***)(this + 0x38) = pplVar2 + 1;
    }
  }
  Mutex::leaveCriticalSection();
  return plVar4;
}


