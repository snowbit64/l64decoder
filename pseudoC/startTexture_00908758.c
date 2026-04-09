// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTexture
// Entry Point: 00908758
// Size: 360 bytes
// Signature: undefined __cdecl startTexture(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startTexture(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startTexture(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *__nptr;
  char *pcVar4;
  undefined8 uVar5;
  MaterialManager *this;
  Logger *this_00;
  long lVar6;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)((long)param_1 + 0x268);
  __nptr = (char *)ExpatUtil::getAttr("fileId",param_3);
  local_64 = 1;
  if (__nptr == (char *)0x0) {
LAB_009087e0:
    if (*(long *)(lVar6 + 0x70) != 0) goto LAB_00908844;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0090887c to 00908883 has its CatchHandler @ 009088d0 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00908888 to 0090888b has its CatchHandler @ 009088c0 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "";
    if (__nptr != (char *)0x0) {
      pcVar4 = __nptr;
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Texture file reference %s not found in i3d files section. Using magenta single color texture.\n"
                      ,pcVar4);
    uStack_58 = 0x3f8000003f800000;
    local_60 = 0x3f800000;
    this = (MaterialManager *)MaterialManager::getInstance();
    uVar5 = MaterialManager::getSingleColorTexture
                      (this,(float *)&local_60,0,*(STREAM_QUEUE *)((long)param_1 + 0x254));
  }
  else {
    uVar2 = atoi(__nptr);
    pcVar4 = (char *)I3DLoad::findTextureFilePath
                               ((I3DLoad *)param_1,uVar2,(COLOR_PROFILE *)&local_64);
    if (pcVar4 == (char *)0x0) goto LAB_009087e0;
    if (*(long *)(lVar6 + 0x70) != 0) goto LAB_00908844;
    uVar5 = TextureUtil::loadMaterialTexture
                      (pcVar4,local_64 == 1,*(STREAM_QUEUE *)((long)param_1 + 0x254));
  }
  *(undefined8 *)(lVar6 + 0x70) = uVar5;
LAB_00908844:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


