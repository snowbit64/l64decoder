// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initEncoder
// Entry Point: 00b1a548
// Size: 248 bytes
// Signature: undefined initEncoder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OpusVoiceCodec::initEncoder() */

uint OpusVoiceCodec::initEncoder(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *in_x0;
  undefined8 uVar4;
  Logger *this;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = opus_encoder_create(24000,1,0x800,&local_3c);
  uVar2 = local_3c;
  *in_x0 = uVar4;
  if ((int)local_3c < 0) {
    *in_x0 = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b1a5fc to 00b1a603 has its CatchHandler @ 00b1a650 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b1a608 to 00b1a60b has its CatchHandler @ 00b1a640 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar4 = opus_strerror(local_3c);
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Failed to create voice chat encoder: %s",uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


