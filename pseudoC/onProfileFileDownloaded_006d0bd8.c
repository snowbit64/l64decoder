// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onProfileFileDownloaded
// Entry Point: 006d0bd8
// Size: 1180 bytes
// Signature: undefined __thiscall onProfileFileDownloaded(Application * this, char * param_1, char * param_2, uchar * param_3, uint param_4)


/* Application::onProfileFileDownloaded(char const*, char const*, unsigned char const*, unsigned
   int) */

void __thiscall
Application::onProfileFileDownloaded
          (Application *this,char *param_1,char *param_2,uchar *param_3,uint param_4)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte local_170 [16];
  char *local_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  DomXMLFile aDStack_140 [216];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_140);
  if (param_3 == (uchar *)0x0 || param_4 == 0) {
    local_158 = 0;
    uStack_150 = 0;
    local_148 = (void *)0x0;
                    /* try { // try from 006d0dec to 006d0df3 has its CatchHandler @ 006d10ac */
    PathUtil::getAppBasePath((basic_string *)&local_158);
                    /* try { // try from 006d0df4 to 006d0e0b has its CatchHandler @ 006d10a8 */
    FUN_006cadd8(local_170,&local_158,"game.xml");
    pcVar1 = (char *)((ulong)local_170 | 1);
    if ((local_170[0] & 1) != 0) {
      pcVar1 = local_160;
    }
                    /* try { // try from 006d0e20 to 006d0e47 has its CatchHandler @ 006d10c0 */
    uVar4 = FileManager::copyFile
                      ((FileManager *)FileManager::s_singletonFileManager,pcVar1,param_2,true);
    if ((uVar4 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006d0fa8 to 006d0fb3 has its CatchHandler @ 006d107c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 006d0ea8 to 006d0ef7 has its CatchHandler @ 006d10c0 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error : Failed to copy template game.xml to profile folder.\n");
    }
    else {
      uVar4 = DomXMLFile::loadFromFile(aDStack_140,param_2,true);
      if ((uVar4 & 1) != 0) {
        if ((local_170[0] & 1) != 0) {
          operator_delete(local_160);
        }
        if ((local_158 & 1) != 0) {
          operator_delete(local_148);
        }
        goto LAB_006d0c5c;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006d0ff0 to 006d0ffb has its CatchHandler @ 006d1078 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar1 = (char *)((ulong)local_170 | 1);
      if ((local_170[0] & 1) != 0) {
        pcVar1 = local_160;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error : Could not read %s file (duplicate of template %s).\n",param_2,
                         pcVar1);
    }
    if ((local_170[0] & 1) != 0) {
      operator_delete(local_160);
    }
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
  }
  else {
                    /* try { // try from 006d0c3c to 006d0c57 has its CatchHandler @ 006d10b8 */
    uVar4 = DomXMLFile::loadFromMemory(aDStack_140,(char *)param_3,param_4,param_1,true,false);
    if ((uVar4 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006d0f60 to 006d0f6b has its CatchHandler @ 006d1090 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 006d0e80 to 006d0e93 has its CatchHandler @ 006d10b8 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error : Could not read downloaded game.xml file.\n");
      goto LAB_006d0f18;
    }
LAB_006d0c5c:
                    /* try { // try from 006d0c5c to 006d0c6f has its CatchHandler @ 006d10bc */
    AudioDeviceManager::getInstance();
    plVar5 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    fVar7 = (float)(**(code **)(*plVar5 + 0x138))();
                    /* try { // try from 006d0c74 to 006d0cfb has its CatchHandler @ 006d10ec */
    fVar8 = (float)Properties::getFloat((Properties *)aDStack_140,"game.audio#volume",fVar7);
    fVar9 = 0.0;
    if (0.0 <= fVar8) {
      fVar8 = (float)Properties::getFloat((Properties *)aDStack_140,"game.audio#volume",fVar7);
      fVar9 = 1.0;
      if (fVar8 <= 1.0) {
        fVar9 = (float)Properties::getFloat((Properties *)aDStack_140,"game.audio#volume",fVar7);
      }
    }
    if (fVar7 != fVar9) {
      Properties::setFloat(*(Properties **)(this + 0x188),"game.audio#volume",fVar9);
      AudioDeviceManager::getInstance();
      plVar5 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      (**(code **)(*plVar5 + 0x130))(fVar9);
    }
                    /* try { // try from 006d0cfc to 006d0d07 has its CatchHandler @ 006d10b4 */
    EngineManager::getInstance();
    lVar6 = Renderer::getPostFxParams();
    fVar9 = *(float *)(lVar6 + 0x2e0);
                    /* try { // try from 006d0d0c to 006d0d93 has its CatchHandler @ 006d10e8 */
    fVar7 = (float)Properties::getFloat
                             ((Properties *)aDStack_140,"game.graphic.display.brightness",fVar9);
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar7 = (float)Properties::getFloat
                               ((Properties *)aDStack_140,"game.graphic.display.brightness",fVar9);
      fVar8 = 2.0;
      if (fVar7 <= 2.0) {
        fVar8 = (float)Properties::getFloat
                                 ((Properties *)aDStack_140,"game.graphic.display.brightness",fVar9)
        ;
      }
    }
    if (fVar9 != fVar8) {
      Properties::setFloat(*(Properties **)(this + 0x188),"game.graphic.display.brightness",fVar8);
      EngineManager::getInstance();
      lVar6 = Renderer::getPostFxParams();
      *(float *)(lVar6 + 0x2e0) = fVar8;
      lVar6 = EngineManager::getInstance();
      *(undefined *)(*(long *)(lVar6 + 0xb8) + 0xf06) = 1;
    }
                    /* try { // try from 006d0da4 to 006d0ddf has its CatchHandler @ 006d10a4 */
    if ((param_3 != (uchar *)0x0 && param_4 != 0) &&
       (uVar4 = NativeFileUtil::writeFile(param_2,param_3,param_4), (uVar4 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006d1038 to 006d1043 has its CatchHandler @ 006d1074 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error : Could not write downloaded game.xml file to: %s.\n",param_2);
    }
  }
LAB_006d0f18:
  DomXMLFile::~DomXMLFile(aDStack_140);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


