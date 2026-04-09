// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNormalmap
// Entry Point: 009088e8
// Size: 388 bytes
// Signature: undefined __cdecl startNormalmap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startNormalmap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startNormalmap(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *__nptr;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  Logger *this;
  long lVar7;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)((long)param_1 + 0x268);
  __nptr = (char *)ExpatUtil::getAttr("fileId",param_3);
  local_4c = 2;
  if (__nptr == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    uVar2 = atoi(__nptr);
    pcVar4 = (char *)I3DLoad::findTextureFilePath
                               ((I3DLoad *)param_1,uVar2,(COLOR_PROFILE *)&local_4c);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("bumpDepth",param_3);
  if (pcVar5 != (char *)0x0) {
    StringUtil::atof(pcVar5,(float *)(lVar7 + 0xb8));
    *(float *)(lVar7 + 0xb8) = *(float *)(lVar7 + 0xb8) * 0.035;
  }
  if (pcVar4 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00908a28 to 00908a2f has its CatchHandler @ 00908a7c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00908a34 to 00908a37 has its CatchHandler @ 00908a6c */
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
                      "Warning: Normalmap file reference %s not found in i3d files section.\n",
                      pcVar4);
  }
  else if (*(long *)(lVar7 + 0x78) == 0) {
    uVar6 = TextureUtil::loadMaterialTexture
                      (pcVar4,local_4c == 1,*(STREAM_QUEUE *)((long)param_1 + 0x254));
    *(undefined8 *)(lVar7 + 0x78) = uVar6;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


