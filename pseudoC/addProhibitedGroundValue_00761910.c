// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addProhibitedGroundValue
// Entry Point: 00761910
// Size: 552 bytes
// Signature: undefined __thiscall addProhibitedGroundValue(FieldCropsQuery * this, MethodInvocation * param_1)


/* FieldCropsQuery::addProhibitedGroundValue(MethodInvocation*) */

void __thiscall
FieldCropsQuery::addProhibitedGroundValue(FieldCropsQuery *this,MethodInvocation *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  Logger *this_00;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *__src;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)param_1;
  if (0x3f < uVar1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00761ae8 to 00761aef has its CatchHandler @ 00761b48 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00761af4 to 00761af7 has its CatchHandler @ 00761b38 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: addProhibitedGroundValue maximum value %u is too big. Maximum supported is 63\n"
                      ,(ulong)uVar1);
  }
  if (uVar1 < uVar2) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar7 = (ulong)uVar2;
      uVar2 = uVar2 + 1;
      uVar8 = 1L << (uVar7 & 0x3f) | uVar8;
    } while (uVar2 <= uVar1);
  }
  __src = *(ulong **)(this + 0x28);
  puVar4 = *(ulong **)(this + 0x30);
  uVar2 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x30) & 0x1f));
  uVar7 = (long)puVar4 - (long)__src;
  lVar9 = (long)uVar7 >> 4;
  iVar3 = *(int *)(param_1 + 0x20) + *(int *)(*(long *)(this + 8) + 0x7c);
  if ((int)lVar9 != 0) {
    uVar6 = uVar7 >> 4 & 0xffffffff;
    puVar5 = __src;
    do {
      if (*(int *)(puVar5 + 1) == iVar3 && *(uint *)((long)puVar5 + 0xc) == uVar2) {
        *puVar5 = *puVar5 | uVar8;
        return;
      }
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (puVar4 == *(ulong **)(this + 0x38)) {
    uVar6 = lVar9 + 1;
    if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar6 <= (ulong)((long)uVar7 >> 3)) {
      uVar6 = (long)uVar7 >> 3;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar6 * 0x10);
    puVar4 = (ulong *)((long)__dest + lVar9 * 0x10);
    *puVar4 = uVar8;
    *(int *)(puVar4 + 1) = iVar3;
    *(uint *)((long)puVar4 + 0xc) = uVar2;
    if (0 < (long)uVar7) {
      memcpy(__dest,__src,uVar7);
    }
    *(void **)(this + 0x28) = __dest;
    *(ulong **)(this + 0x30) = puVar4 + 2;
    *(void **)(this + 0x38) = (void *)((long)__dest + uVar6 * 0x10);
    if (__src != (ulong *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar4 = uVar8;
    *(int *)(puVar4 + 1) = iVar3;
    *(uint *)((long)puVar4 + 0xc) = uVar2;
    *(ulong **)(this + 0x30) = puVar4 + 2;
  }
  return;
}


