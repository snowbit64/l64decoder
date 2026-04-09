// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addKey
// Entry Point: 0074986c
// Size: 564 bytes
// Signature: undefined __thiscall addKey(KeyframedTransformation * this, CompressedTransformationKeyFrame * param_1, bool * param_2)


/* KeyframedTransformation::addKey(CompressedTransformationKeyFrame*, bool&) */

void __thiscall
KeyframedTransformation::addKey
          (KeyframedTransformation *this,CompressedTransformationKeyFrame *param_1,bool *param_2)

{
  ulong uVar1;
  void *__src;
  CompressedTransformationKeyFrame **ppCVar2;
  int iVar3;
  void *__dest;
  Logger *pLVar4;
  char *pcVar5;
  bool bVar6;
  float *pfVar7;
  ulong __n;
  long lVar8;
  float fVar9;
  
  __src = *(void **)(this + 8);
  ppCVar2 = *(CompressedTransformationKeyFrame ***)(this + 0x10);
  fVar9 = *(float *)param_1;
  __n = (long)ppCVar2 - (long)__src;
  lVar8 = (long)__n >> 3;
  if ((int)lVar8 == 0) {
    *(ushort *)(this + 2) = *(ushort *)(param_1 + 4) & 0xf;
LAB_00749900:
    if (ppCVar2 == *(CompressedTransformationKeyFrame ***)(this + 0x18)) {
      uVar1 = lVar8 + 1;
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
      ppCVar2 = (CompressedTransformationKeyFrame **)((long)__dest + lVar8 * 8);
      *ppCVar2 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 8) = __dest;
      *(CompressedTransformationKeyFrame ***)(this + 0x10) = ppCVar2 + 1;
      *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppCVar2 = param_1;
      *(CompressedTransformationKeyFrame ***)(this + 0x10) = ppCVar2 + 1;
    }
    bVar6 = true;
    *(float *)(this + 0xa4) = fVar9;
  }
  else {
    pfVar7 = *(float **)((long)__src + (ulong)((int)lVar8 - 1) * 8);
    if (fVar9 <= *pfVar7) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00749a00 to 00749a07 has its CatchHandler @ 00749ab8 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 00749a0c to 00749a0f has its CatchHandler @ 00749aa8 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Error: Can\'t add keyframe. Time is not strictly monotonic increasing.\n";
    }
    else {
      if (((*(ushort *)(param_1 + 4) ^ *(ushort *)(pfVar7 + 1)) & 0xf) == 0) goto LAB_00749900;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00749a50 to 00749a57 has its CatchHandler @ 00749aa4 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 00749a5c to 00749a5f has its CatchHandler @ 00749aa0 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Error: Can\'t add keyframe. Keyframe controls not the same attributes.\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5);
    bVar6 = false;
  }
  *param_2 = bVar6;
  return;
}


