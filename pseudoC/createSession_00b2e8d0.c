// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSession
// Entry Point: 00b2e8d0
// Size: 596 bytes
// Signature: undefined __thiscall createSession(AndroidCloudDevice * this, char * param_1, ICloudCallbacks * param_2)


/* AndroidCloudDevice::createSession(char const*, ICloudDevice::ICloudCallbacks*) */

ulong * __thiscall
AndroidCloudDevice::createSession(AndroidCloudDevice *this,char *param_1,ICloudCallbacks *param_2)

{
  ulong **ppuVar1;
  ulong **ppuVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong *puVar6;
  size_t __n;
  void *__dest;
  byte *pbVar7;
  byte *__s1;
  void *pvVar8;
  ulong __n_00;
  ulong uVar9;
  undefined *__dest_00;
  
  pvVar8 = *(void **)(this + 8);
  lVar3 = *(long *)(this + 0x10) - (long)pvVar8;
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      pbVar7 = *(byte **)((long)pvVar8 + uVar9 * 8);
      __s1 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        __s1 = pbVar7 + 1;
      }
      iVar4 = strcmp((char *)__s1,param_1);
      if (iVar4 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00b2ead8 to 00b2eae3 has its CatchHandler @ 00b2eb24 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: AndroidCloudDevice::createSession(): A session named \'%s\' already exists!\n"
                           ,param_1);
        return (ulong *)0x0;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(lVar3 >> 3));
  }
  uVar5 = AndroidJNICall::callIntFromString
                    (*(AndroidJNICall **)(this + 0x38),"createSession",param_1);
  puVar6 = (ulong *)operator_new(0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b2eac0 to 00b2eac7 has its CatchHandler @ 00b2eb3c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest_00 = (undefined *)((long)puVar6 + 1);
    *(char *)puVar6 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b2e9c0;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b2e998 to 00b2e99f has its CatchHandler @ 00b2eb3c */
    __dest_00 = (undefined *)operator_new(uVar9);
    puVar6[1] = __n;
    puVar6[2] = (ulong)__dest_00;
    *puVar6 = uVar9 | 1;
  }
  memcpy(__dest_00,param_1,__n);
LAB_00b2e9c0:
  __dest_00[__n] = 0;
  ppuVar1 = *(ulong ***)(this + 0x10);
  ppuVar2 = *(ulong ***)(this + 0x18);
  puVar6[3] = (ulong)param_2;
  *(undefined4 *)(puVar6 + 4) = uVar5;
  if (ppuVar1 == ppuVar2) {
    pvVar8 = *(void **)(this + 8);
    __n_00 = (long)ppuVar1 - (long)pvVar8;
    uVar9 = ((long)__n_00 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar9 <= (ulong)((long)__n_00 >> 2)) {
      uVar9 = (long)__n_00 >> 2;
    }
    if (0x7ffffffffffffff7 < __n_00) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar9 << 3);
    }
    ppuVar1 = (ulong **)((long)__dest + ((long)__n_00 >> 3) * 8);
    *ppuVar1 = puVar6;
    if (0 < (long)__n_00) {
      memcpy(__dest,pvVar8,__n_00);
    }
    *(void **)(this + 8) = __dest;
    *(ulong ***)(this + 0x10) = ppuVar1 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar9 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppuVar1 = puVar6;
    *(ulong ***)(this + 0x10) = ppuVar1 + 1;
  }
  return puVar6;
}


