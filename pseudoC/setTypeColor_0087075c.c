// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypeColor
// Entry Point: 0087075c
// Size: 660 bytes
// Signature: undefined __thiscall setTypeColor(DensityMapVisualizationOverlay * this, DensityMap * param_1, uint param_2, float param_3, float param_4, float param_5)


/* DensityMapVisualizationOverlay::setTypeColor(DensityMap*, unsigned int, float, float, float) */

void __thiscall
DensityMapVisualizationOverlay::setTypeColor
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,uint param_2,float param_3,
          float param_4,float param_5)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  Logger *pLVar6;
  ulong uVar7;
  DensityMap **ppDVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0x3f < param_2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00870960 to 00870967 has its CatchHandler @ 00870a08 */
      pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 0087096c to 0087096f has its CatchHandler @ 008709f8 */
      Logger::Logger(pLVar6);
      LogManager::getInstance()::singletonLogManager = pLVar6;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Setting type color with invalid type \'%u\'. Maximum allowed is %u\'.\n"
                       ,(ulong)param_2,0x3f);
    return;
  }
  uVar4 = *(uint *)(this + 0x4a0);
  uVar7 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar9 = 0;
    ppDVar8 = (DensityMap **)(this + 0x80);
    do {
      if (*ppDVar8 == param_1) {
        if ((uVar9 & 0xfffffffc) != 0) goto LAB_00870910;
        goto LAB_00870894;
      }
      uVar9 = uVar9 + 1;
      ppDVar8 = ppDVar8 + 0x21;
    } while (uVar7 != uVar9);
    if (3 < uVar4) {
LAB_00870910:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 008709b0 to 008709b7 has its CatchHandler @ 008709f4 */
        pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 008709bc to 008709bf has its CatchHandler @ 008709f0 */
        Logger::Logger(pLVar6);
        LogManager::getInstance()::singletonLogManager = pLVar6;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Setting too many type color density maps. Maximum allowed is %u\'.\n"
                         ,4);
      return;
    }
  }
  *(uint *)(this + 0x4a0) = uVar4 + 1;
  *(DensityMap **)(this + uVar7 * 0x108 + 0x80) = param_1;
  DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x78),false,0,0);
  *(undefined8 *)(this + uVar7 * 0x108 + 0x180) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x178) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x170) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x168) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x160) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x158) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x150) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x148) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x140) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x138) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x130) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x128) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x120) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x118) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x110) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x108) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x100) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xf8) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xf0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xe8) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xe0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xd8) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xd0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 200) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xc0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xb8) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xb0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xa8) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0xa0) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x98) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x90) = 0;
  *(undefined8 *)(this + uVar7 * 0x108 + 0x88) = 0;
  uVar9 = uVar7;
LAB_00870894:
  fVar11 = (float)NEON_fmin(param_3 * 255.0,0x437f0000);
  fVar12 = (float)NEON_fmin(param_4 * 255.0,0x437f0000);
  fVar10 = (float)NEON_fmin(param_5 * 255.0,0x437f0000);
  uVar1 = '\0';
  if (0.0 <= param_3 * 255.0) {
    uVar1 = (uchar)(int)fVar11;
  }
  uVar2 = '\0';
  if (0.0 <= param_4 * 255.0) {
    uVar2 = (uchar)(int)fVar12;
  }
  uVar3 = '\0';
  if (0.0 <= param_5 * 255.0) {
    uVar3 = (uchar)(int)fVar10;
  }
  PixelFormatUtil::packColor
            (uVar1,uVar2,uVar3,0xff,5,this + (ulong)param_2 * 4 + uVar9 * 0x108 + 0x88);
  return;
}


