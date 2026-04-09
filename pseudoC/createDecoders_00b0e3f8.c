// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDecoders
// Entry Point: 00b0e3f8
// Size: 496 bytes
// Signature: undefined __thiscall createDecoders(SoftAudioBuffer * this, char * param_1, uint param_2, uint param_3)


/* SoftAudioBuffer::createDecoders(char*, unsigned int, unsigned int) */

byte __thiscall
SoftAudioBuffer::createDecoders(SoftAudioBuffer *this,char *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  if (param_3 == 0) {
    bVar3 = false;
  }
  else {
    uVar6 = 0;
    bVar3 = true;
    do {
                    /* try { // try from 00b0e474 to 00b0e4e7 has its CatchHandler @ 00b0e604 */
      lVar5 = stb_vorbis_open_memory(param_1,param_2,0,0);
      if (lVar5 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00b0e5b0 to 00b0e5bb has its CatchHandler @ 00b0e5e8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00b0e548 to 00b0e55b has its CatchHandler @ 00b0e600 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "SoftAudioBuffer: Ogg Vorbis decoder failed to initialize (is the ogg data broken?)"
                          );
        break;
      }
      plVar2 = *(long **)(this + 0x70);
      if (plVar2 == *(long **)(this + 0x78)) {
        __src = *(void **)(this + 0x68);
        __n = (long)plVar2 - (long)__src;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00b0e58c to 00b0e59f has its CatchHandler @ 00b0e600 */
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
        plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
        *plVar2 = lVar5;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(this + 0x68) = __dest;
        *(long **)(this + 0x70) = plVar2 + 1;
        *(void **)(this + 0x78) = (void *)((long)__dest + uVar1 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *plVar2 = lVar5;
        *(long **)(this + 0x70) = plVar2 + 1;
      }
      uVar6 = uVar6 + 1;
      bVar3 = uVar6 < param_3;
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
    } while (param_3 != uVar6);
  }
                    /* try { // try from 00b0e55c to 00b0e563 has its CatchHandler @ 00b0e5fc */
  Mutex::leaveCriticalSection();
  return ~bVar3 & 1;
}


