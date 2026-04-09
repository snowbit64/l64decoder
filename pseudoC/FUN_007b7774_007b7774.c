// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7774
// Entry Point: 007b7774
// Size: 176 bytes
// Signature: undefined FUN_007b7774(void)


void FUN_007b7774(void)

{
  int iVar1;
  ENetNetworkManager *this;
  GsBitStream *pGVar2;
  ulong uVar3;
  Logger *this_00;
  
  this = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
  uVar3 = ENetNetworkManager::streamWriteTimestamp(this,pGVar2);
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007b77e4 to 007b77eb has its CatchHandler @ 007b7834 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b77f0 to 007b77f3 has its CatchHandler @ 007b7824 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: StreamWriteTimestamp only is allowed to be called before any other write calls.\n"
                     );
  }
  return;
}


