// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanUnusedVertexBuffers
// Entry Point: 008e402c
// Size: 324 bytes
// Signature: undefined __thiscall cleanUnusedVertexBuffers(VertexBufferPool * this, uint param_1)


/* VertexBufferPool::cleanUnusedVertexBuffers(unsigned int) */

bool __thiscall VertexBufferPool::cleanUnusedVertexBuffers(VertexBufferPool *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  Logger *this_00;
  int iVar4;
  long **pplVar5;
  long lVar6;
  
  lVar6 = 0xf;
  do {
    lVar6 = lVar6 + -1;
    iVar2 = *(int *)(this + lVar6 * 0x408 + 0x408);
    while (iVar4 = iVar2, iVar4 != 0) {
      pplVar5 = (long **)(this + (ulong)(iVar4 - 1) * 8 + lVar6 * 0x408 + 8);
      if (*pplVar5 == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 008e4110 to 008e4117 has its CatchHandler @ 008e4180 */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008e411c to 008e411f has its CatchHandler @ 008e4170 */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Invalid unused buffer.\n");
      }
      else {
        iVar2 = (**(code **)(**pplVar5 + 0x20))();
        plVar3 = *pplVar5;
        *(int *)(this + 0x3c80) = *(int *)(this + 0x3c80) - iVar2;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        *pplVar5 = (long *)0x0;
      }
      uVar1 = *(uint *)(this + 0x3c80);
      iVar2 = *(int *)(this + lVar6 * 0x408 + 0x408) + -1;
      *(int *)(this + lVar6 * 0x408 + 0x408) = iVar2;
      if (uVar1 <= param_1) goto LAB_008e414c;
    }
  } while (lVar6 != 0);
LAB_008e414c:
  return iVar4 != 0;
}


