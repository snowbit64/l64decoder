// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishWriting
// Entry Point: 00b976d4
// Size: 220 bytes
// Signature: undefined finishWriting(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompressedIoUtil::CompressedFileOutput<unsigned short>::finishWriting() */

bool CompressedIoUtil::CompressedFileOutput<unsigned_short>::finishWriting(void)

{
  int iVar1;
  long in_x0;
  Logger *this;
  
  if ((*(long *)(in_x0 + 0x10) != 0) && (*(int *)(in_x0 + 0x18) != 0)) {
    iVar1 = (**(code **)(**(long **)(in_x0 + 8) + 0x30))
                      (*(long **)(in_x0 + 8),*(long *)(in_x0 + 0x10),*(int *)(in_x0 + 0x18) << 1);
    if ((long)iVar1 != (ulong)*(uint *)(in_x0 + 0x18) * 2) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00b97770 to 00b97777 has its CatchHandler @ 00b977c0 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b9777c to 00b9777f has its CatchHandler @ 00b977b0 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "ERROR: CompressedFileOutput::writeChar failed\n");
      *(undefined *)(in_x0 + 0x1c) = 1;
    }
    *(undefined4 *)(in_x0 + 0x18) = 0;
  }
  return *(char *)(in_x0 + 0x1c) == '\0';
}


