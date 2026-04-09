// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextCharInfo
// Entry Point: 006efbdc
// Size: 812 bytes
// Signature: undefined __thiscall getNextCharInfo(FontOverlayRenderer * this, char * param_1, uint * param_2, CharInfo * * param_3, uint * param_4)


/* FontOverlayRenderer::getNextCharInfo(char const*, unsigned int&, FontOverlayRenderer::CharInfo
   const*&, unsigned int&) */

undefined8 __thiscall
FontOverlayRenderer::getNextCharInfo
          (FontOverlayRenderer *this,char *param_1,uint *param_2,CharInfo **param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  CharInfo *pCVar3;
  uint uVar4;
  uint uVar5;
  Logger *this_00;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  size_t sVar10;
  int iVar11;
  
  uVar8 = StringUtil::utf8ToUnicode(param_1 + *param_2,param_4);
  uVar6 = (uint)uVar8;
  if (uVar6 != 0) {
    uVar4 = *param_4;
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    else {
      iVar7 = *(int *)(this + 0x70) + -1;
      if (0 < *(int *)(this + 0x70)) {
        iVar11 = 0;
        do {
          while( true ) {
            uVar1 = iVar7 + iVar11;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 1;
            }
            iVar2 = (int)uVar1 >> 1;
            uVar5 = *(uint *)(*(long *)(this + 0x68) + (long)iVar2 * 0x1c);
            if (uVar5 < uVar4) break;
            if (uVar5 <= uVar4) {
              lVar9 = *(long *)(this + 0x68) + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x1c;
              pCVar3 = (CharInfo *)(lVar9 + 4);
              if (this[0x2c] != (FontOverlayRenderer)0x0) {
                pCVar3 = (CharInfo *)(lVar9 + 0x10);
              }
              *param_3 = pCVar3;
              goto LAB_006efd7c;
            }
            iVar7 = iVar2 + -1;
            if (iVar7 < iVar11) goto LAB_006efc80;
          }
          iVar11 = iVar2 + 1;
        } while (iVar11 <= iVar7);
      }
LAB_006efc80:
      lVar9 = addDummyCharInfos(this,uVar4);
      uVar4 = *param_4;
      *param_3 = (CharInfo *)(lVar9 + 4);
      if ((uVar4 != 10) && (uVar4 != 0xd)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 006efdb0 to 006efdbb has its CatchHandler @ 006eff18 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Character \'%u\' not found in texture font (",(ulong)*param_4);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 006efdf8 to 006efe03 has its CatchHandler @ 006eff14 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        Logger::warnMessage(LogManager::getInstance()::singletonLogManager,param_1 + *param_2,uVar6)
        ;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 006efe40 to 006efe4b has its CatchHandler @ 006eff10 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005119f6);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 006efe88 to 006efe93 has its CatchHandler @ 006eff0c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        this_00 = LogManager::getInstance()::singletonLogManager;
        sVar10 = strlen(param_1);
        Logger::warnMessage(this_00,param_1,(uint)sVar10);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 006efed0 to 006efedb has its CatchHandler @ 006eff08 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_00500a0f);
      }
LAB_006efd7c:
      uVar8 = 1;
      *param_2 = *param_2 + uVar6;
    }
  }
  return uVar8;
}


