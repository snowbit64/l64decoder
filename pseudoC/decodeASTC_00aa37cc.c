// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeASTC
// Entry Point: 00aa37cc
// Size: 732 bytes
// Signature: undefined __cdecl decodeASTC(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* ASTCUtil::decodeASTC(unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned char*) */

void ASTCUtil::decodeASTC
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  Logger *pLVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uchar *__src;
  uint local_2f8;
  uint uStack_2f4;
  uint local_2e4;
  uchar auStack_2b0 [576];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if ((param_4 < 0xd) && (param_5 < 0xd)) {
    if (!CARRY4(param_3 - 1,param_5)) {
      uVar5 = 0;
      if (param_5 != 0) {
        uVar5 = ((param_3 - 1) + param_5) / param_5;
      }
      local_2e4 = 0;
      uVar4 = (param_2 + param_4) - 1;
      local_2f8 = 0;
      uStack_2f4 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        uVar6 = uVar4 / param_4;
      }
      uVar3 = uVar6;
      if (uVar6 < 2) {
        uVar3 = 1;
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      do {
        if (param_4 <= uVar4) {
          uVar13 = 0;
          uVar12 = uStack_2f4;
          do {
            uVar9 = basisu::astc::decompress
                              (auStack_2b0,param_1 + (local_2f8 * uVar6 + (int)uVar13) * 0x10,false,
                               param_4,param_5);
            if ((uVar9 & 1) == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar8 != 0)) {
                    /* try { // try from 00aa3a64 to 00aa3a6b has its CatchHandler @ 00aa3ab4 */
                pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa3a70 to 00aa3a73 has its CatchHandler @ 00aa3aa8 */
                Logger::Logger(pLVar10);
                LogManager::getInstance()::singletonLogManager = pLVar10;
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Failed to decompress ASTC texture (astc-codec returned error)"
                                );
              goto LAB_00aa39d4;
            }
            uVar11 = param_2 - (int)uVar13 * param_4;
            uVar2 = param_4;
            if (uVar11 <= param_4) {
              uVar2 = uVar11;
            }
            if (param_5 != 0) {
              __src = auStack_2b0;
              uVar9 = (ulong)param_5;
              uVar11 = local_2e4;
              uVar1 = uVar12;
              do {
                if (uVar11 < param_3) {
                  memcpy(param_6 + uVar1,__src,(ulong)(uVar2 << 2));
                }
                __src = __src + param_4 * 4;
                uVar1 = uVar1 + param_2 * 4;
                uVar11 = uVar11 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar13 = uVar13 + 1;
            uVar12 = uVar12 + param_4 * 4;
          } while (uVar13 != uVar3);
        }
        local_2f8 = local_2f8 + 1;
        uStack_2f4 = uStack_2f4 + param_5 * param_2 * 4;
        local_2e4 = local_2e4 + param_5;
      } while (local_2f8 != uVar5);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00aa3a14 to 00aa3a1b has its CatchHandler @ 00aa3ac8 */
      pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa3a20 to 00aa3a23 has its CatchHandler @ 00aa3ab8 */
      Logger::Logger(pLVar10);
      LogManager::getInstance()::singletonLogManager = pLVar10;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to decompress ASTC texture with invalid block size %ux%u\n",
                       (ulong)param_4,(ulong)param_5);
  }
LAB_00aa39d4:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


