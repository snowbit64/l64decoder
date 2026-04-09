// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeASTCBlock
// Entry Point: 00aa41f8
// Size: 328 bytes
// Signature: undefined __cdecl decodeASTCBlock(uchar * param_1, uint param_2, uint param_3, uchar * param_4)


/* ASTCUtil::decodeASTCBlock(unsigned char const*, unsigned int, unsigned int, unsigned char*) */

void ASTCUtil::decodeASTCBlock(uchar *param_1,uint param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  ulong uVar2;
  Logger *pLVar3;
  
  if ((param_2 < 0xd) && (param_3 < 0xd)) {
    uVar2 = basisu::astc::decompress(param_4,param_1,false,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00aa4300 to 00aa4307 has its CatchHandler @ 00aa4350 */
        pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa430c to 00aa430f has its CatchHandler @ 00aa4340 */
        Logger::Logger(pLVar3);
        LogManager::getInstance()::singletonLogManager = pLVar3;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to decompress ASTC texture (astc-codec returned error)");
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aa42b0 to 00aa42b7 has its CatchHandler @ 00aa4364 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa42bc to 00aa42bf has its CatchHandler @ 00aa4354 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to decompress ASTC block with invalid block size %ux%u\n",
                       (ulong)param_2,(ulong)param_3);
  }
  return;
}


