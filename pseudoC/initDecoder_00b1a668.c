// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initDecoder
// Entry Point: 00b1a668
// Size: 244 bytes
// Signature: undefined initDecoder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OpusVoiceCodec::initDecoder() */

uint OpusVoiceCodec::initDecoder(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long in_x0;
  undefined8 uVar4;
  Logger *this;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = opus_decoder_create(24000,1,&local_3c);
  uVar2 = local_3c;
  *(undefined8 *)(in_x0 + 8) = uVar4;
  if ((int)local_3c < 0) {
    *(undefined8 *)(in_x0 + 8) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b1a718 to 00b1a71f has its CatchHandler @ 00b1a76c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b1a724 to 00b1a727 has its CatchHandler @ 00b1a75c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar4 = opus_strerror(local_3c);
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Failed to create voice chat decoder: %s",uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


