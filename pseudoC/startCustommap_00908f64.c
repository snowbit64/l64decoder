// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startCustommap
// Entry Point: 00908f64
// Size: 848 bytes
// Signature: undefined __cdecl startCustommap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startCustommap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startCustommap(void *param_1,char *param_2,char **param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ResourceManager *this;
  undefined *puVar9;
  long lVar10;
  undefined auVar11 [16];
  int local_50;
  uint local_4c;
  long local_48;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)((long)param_1 + 0x268);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    pcVar5 = (char *)ExpatUtil::getAttr("name",param_3);
    if (pcVar5 == (char *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 009091a0 to 009091ab has its CatchHandler @ 009092c0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      auVar11 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error: In material \"%s\" custommap needs a name.\n",
                                   *(undefined8 *)(lVar10 + 0x60));
    }
    else {
      uVar6 = CustomShader::getTextureIndex
                        (*(CustomShader **)(lVar10 + 0xc0),*(uint *)(lVar10 + 200),pcVar5,&local_4c)
      ;
      if ((uVar6 & 1) == 0) {
        puVar9 = *(undefined **)
                  (*(long *)(*(long *)(lVar10 + 0xc0) + 0x110) +
                  (ulong)*(uint *)(lVar10 + 200) * 0xe0);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 009091e8 to 009091f3 has its CatchHandler @ 009092bc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        puVar1 = &DAT_004f2676;
        if (puVar9 != (undefined *)0x0) {
          puVar1 = puVar9;
        }
        auVar11 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                     "Error: In material \"%s\" custommap \"%s\" is not referenced in variation \"%s\".\n"
                                     ,*(undefined8 *)(lVar10 + 0x60),pcVar5,puVar1);
      }
      else if (local_4c < 0x10) {
        pcVar5 = (char *)ExpatUtil::getAttr("fileId",param_3);
        local_50 = 1;
        if (*(char *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x110) +
                                          (ulong)*(uint *)(lVar10 + 200) * 0xe0 + 0x58) +
                               (ulong)local_4c * 8) + 0x30) == '\0') {
          local_50 = 2;
        }
        if (pcVar5 != (char *)0x0) {
          uVar3 = atoi(pcVar5);
          pcVar7 = (char *)I3DLoad::findTextureFilePath
                                     ((I3DLoad *)param_1,uVar3,(COLOR_PROFILE *)&local_50);
          if (pcVar7 != (char *)0x0) {
            auVar11 = TextureUtil::loadMaterialTexture
                                (pcVar7,local_50 == 1,*(STREAM_QUEUE *)((long)param_1 + 0x254));
            lVar8 = auVar11._0_8_;
            if (lVar8 != 0) {
              this = (ResourceManager *)ResourceManager::getInstance();
              auVar11 = ResourceManager::release
                                  (this,*(Resource **)(lVar10 + 0xd8 + (ulong)local_4c * 8));
              *(long *)(lVar10 + 0xd8 + (ulong)local_4c * 8) = lVar8;
            }
            goto LAB_00909168;
          }
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00909278 to 00909283 has its CatchHandler @ 009092b4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar7 = "";
        if (pcVar5 != (char *)0x0) {
          pcVar7 = pcVar5;
        }
        auVar11 = LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                    "Warning: Custommap file reference %s not found in i3d files section.\n"
                                    ,pcVar7);
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00909230 to 0090923b has its CatchHandler @ 009092b8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        auVar11 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                     "Error: Too many custom maps. Maximal %u allowed.\n",0x10);
      }
    }
  }
LAB_00909168:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar11._0_8_,auVar11._8_8_);
}


