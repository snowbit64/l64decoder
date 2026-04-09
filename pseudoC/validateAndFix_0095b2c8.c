// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateAndFix
// Entry Point: 0095b2c8
// Size: 324 bytes
// Signature: undefined validateAndFix(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MultiresTextureDesc::validateAndFix() */

void MultiresTextureDesc::validateAndFix(void)

{
  int iVar1;
  long in_x0;
  Logger *pLVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = *(uint *)(in_x0 + 0x30);
  if (uVar3 < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0095b37c to 0095b383 has its CatchHandler @ 0095b424 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095b388 to 0095b38b has its CatchHandler @ 0095b414 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "WARNING: MultiresTextureDesc must have border size at least 2 (not %u)\n",
                      (ulong)*(uint *)(in_x0 + 0x30));
    uVar3 = 2;
    *(undefined4 *)(in_x0 + 0x30) = 2;
  }
  if ((float)(ulong)uVar3 < *(float *)(in_x0 + 0x18)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0095b3cc to 0095b3d3 has its CatchHandler @ 0095b410 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095b3d8 to 0095b3db has its CatchHandler @ 0095b40c */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       (double)*(float *)(in_x0 + 0x18),
                       "WARNING: MultiresTextureDesc must have max anisotropy <= border size (%f <= %u)\n"
                       ,(ulong)*(uint *)(in_x0 + 0x30));
    uVar4 = NEON_ucvtf(*(undefined4 *)(in_x0 + 0x30));
    *(undefined4 *)(in_x0 + 0x18) = uVar4;
  }
  return;
}


