// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeChar
// Entry Point: 00a98ee4
// Size: 300 bytes
// Signature: undefined __thiscall writeChar(CompressedFileOutput<unsigned_char> * this, uchar param_1)


/* CompressedIoUtil::CompressedFileOutput<unsigned char>::writeChar(unsigned char) */

void __thiscall
CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
          (CompressedFileOutput<unsigned_char> *this,uchar param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uchar local_2c [4];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(int *)this = *(int *)this + 1;
  local_2c[0] = param_1;
  if (*(long *)(this + 0x10) == 0) {
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_2c,1);
  }
  else {
    uVar1 = *(uint *)(this + 0x18);
    *(uint *)(this + 0x18) = uVar1 + 1;
    *(uchar *)(*(long *)(this + 0x10) + (ulong)uVar1) = param_1;
    if (0x1ffff < *(uint *)(this + 0x18)) {
      iVar3 = (**(code **)(**(long **)(this + 8) + 0x30))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x10));
      if ((long)iVar3 != (ulong)*(uint *)(this + 0x18)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00a98fd4 to 00a98fdf has its CatchHandler @ 00a99010 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "ERROR: CompressedFileOutput::writeChar failed\n");
        this[0x1c] = (CompressedFileOutput<unsigned_char>)0x1;
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


