// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeChar
// Entry Point: 00b99cd0
// Size: 304 bytes
// Signature: undefined __thiscall writeChar(CompressedFileOutput<unsigned_short> * this, ushort param_1)


/* CompressedIoUtil::CompressedFileOutput<unsigned short>::writeChar(unsigned short) */

void __thiscall
CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
          (CompressedFileOutput<unsigned_short> *this,ushort param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ushort local_2c [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 0x10);
  *(int *)this = *(int *)this + 2;
  local_2c[0] = param_1;
  if (lVar4 == 0) {
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_2c,2);
  }
  else {
    uVar1 = *(uint *)(this + 0x18) + 1;
    *(ushort *)(lVar4 + (ulong)*(uint *)(this + 0x18) * 2) = param_1;
    *(uint *)(this + 0x18) = uVar1;
    if (0xffff < uVar1) {
      iVar3 = (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),lVar4,uVar1 * 2);
      if ((long)iVar3 != (ulong)*(uint *)(this + 0x18) * 2) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00b99dc4 to 00b99dcf has its CatchHandler @ 00b99e00 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "ERROR: CompressedFileOutput::writeChar failed\n");
        this[0x1c] = (CompressedFileOutput<unsigned_short>)0x1;
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


