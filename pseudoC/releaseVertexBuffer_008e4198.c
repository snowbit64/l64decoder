// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseVertexBuffer
// Entry Point: 008e4198
// Size: 364 bytes
// Signature: undefined __thiscall releaseVertexBuffer(VertexBufferPool * this, IVertexBuffer * param_1)


/* VertexBufferPool::releaseVertexBuffer(IVertexBuffer*) */

void __thiscall VertexBufferPool::releaseVertexBuffer(VertexBufferPool *this,IVertexBuffer *param_1)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == (IVertexBuffer *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  if (uVar1 < 0x101) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = 0x100;
    do {
      uVar3 = uVar3 << 1;
      uVar5 = uVar5 + 1;
    } while (uVar3 < uVar1);
  }
  iVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  if (2 << (ulong)(uVar5 + 7 & 0x1f) == iVar2) {
    uVar1 = *(uint *)(this + (ulong)uVar5 * 0x408 + 0x408);
    if (uVar1 < 0x80) {
      *(IVertexBuffer **)(this + (ulong)uVar1 * 8 + (ulong)uVar5 * 0x408 + 8) = param_1;
      *(uint *)(this + (ulong)uVar5 * 0x408 + 0x408) = uVar1 + 1;
      return;
    }
    iVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    lVar4 = *(long *)param_1;
    *(int *)(this + 0x3c80) = *(int *)(this + 0x3c80) - iVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008e42cc to 008e42d7 has its CatchHandler @ 008e4304 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Releasing vertex buffer from pool with invalid size.\n");
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x008e42b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


