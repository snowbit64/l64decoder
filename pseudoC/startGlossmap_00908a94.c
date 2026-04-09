// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startGlossmap
// Entry Point: 00908a94
// Size: 308 bytes
// Signature: undefined __cdecl startGlossmap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startGlossmap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startGlossmap(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *__nptr;
  char *pcVar4;
  undefined8 uVar5;
  Logger *this;
  long lVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)((long)param_1 + 0x268);
  __nptr = (char *)ExpatUtil::getAttr("fileId",param_3);
  local_3c = 2;
  if (__nptr != (char *)0x0) {
    uVar2 = atoi(__nptr);
    pcVar4 = (char *)I3DLoad::findTextureFilePath
                               ((I3DLoad *)param_1,uVar2,(COLOR_PROFILE *)&local_3c);
    if (pcVar4 != (char *)0x0) {
      if (*(long *)(lVar6 + 0x80) == 0) {
        uVar5 = TextureUtil::loadMaterialTexture
                          (pcVar4,local_3c == 1,*(STREAM_QUEUE *)((long)param_1 + 0x254));
        *(undefined8 *)(lVar6 + 0x80) = uVar5;
      }
      goto LAB_00908b50;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00908b84 to 00908b8b has its CatchHandler @ 00908bd8 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00908b90 to 00908b93 has its CatchHandler @ 00908bc8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pcVar4 = "";
  if (__nptr != (char *)0x0) {
    pcVar4 = __nptr;
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Glossmap file reference %s not found in i3d files section.\n",pcVar4);
LAB_00908b50:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


