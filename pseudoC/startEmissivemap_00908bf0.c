// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startEmissivemap
// Entry Point: 00908bf0
// Size: 308 bytes
// Signature: undefined __cdecl startEmissivemap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startEmissivemap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startEmissivemap(void *param_1,char *param_2,char **param_3)

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
  local_3c = 1;
  if (__nptr != (char *)0x0) {
    uVar2 = atoi(__nptr);
    pcVar4 = (char *)I3DLoad::findTextureFilePath
                               ((I3DLoad *)param_1,uVar2,(COLOR_PROFILE *)&local_3c);
    if (pcVar4 != (char *)0x0) {
      if (*(long *)(lVar6 + 0x88) == 0) {
        uVar5 = TextureUtil::loadMaterialTexture
                          (pcVar4,local_3c == 1,*(STREAM_QUEUE *)((long)param_1 + 0x254));
        *(undefined8 *)(lVar6 + 0x88) = uVar5;
      }
      goto LAB_00908cac;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00908ce0 to 00908ce7 has its CatchHandler @ 00908d34 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00908cec to 00908cef has its CatchHandler @ 00908d24 */
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
                    "Warning: Emissivemap file reference %s not found in i3d files section.\n",
                    pcVar4);
LAB_00908cac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


