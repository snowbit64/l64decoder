// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStateColor
// Entry Point: 00870d3c
// Size: 956 bytes
// Signature: undefined __thiscall setStateColor(DensityMapVisualizationOverlay * this, DensityMap * param_1, DensityMap * param_2, uint param_3, uint param_4, uint param_5, uint param_6, float param_7, float param_8, float param_9)


/* DensityMapVisualizationOverlay::setStateColor(DensityMap*, DensityMap*, unsigned int, unsigned
   int, unsigned int, unsigned int, float, float, float) */

void __thiscall
DensityMapVisualizationOverlay::setStateColor
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,DensityMap *param_2,uint param_3
          ,uint param_4,uint param_5,uint param_6,float param_7,float param_8,float param_9)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  DensityMap *pDVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  DensityMap **ppDVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pDVar4 = param_1;
  if (param_2 != (DensityMap *)0x0) {
    pDVar4 = param_2;
  }
  if (0xff < param_6) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00871030 to 0087103b has its CatchHandler @ 00871100 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Setting state color with invalid state \'%u\'. Maximum allowed is %u.\n"
                       ,(ulong)param_6,0xff);
    return;
  }
  uVar9 = *(uint *)(this + 0x29390);
  uVar10 = (ulong)uVar9;
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar14 = 0;
    ppDVar13 = (DensityMap **)(this + 0x8cd0);
    puVar12 = (uint *)(this + 0xcda0);
    do {
      if ((*ppDVar13 == param_1) && (ppDVar13[1] == pDVar4)) {
        if ((uVar14 & 0xfffffff8) != 0) goto LAB_00870eb0;
        uVar9 = *puVar12;
        uVar11 = ~(-1 << (ulong)(param_5 & 0x1f));
        uVar10 = uVar14;
        if (uVar9 == 0) goto LAB_00870f4c;
        uVar14 = 0;
        puVar12 = (uint *)((long)ppDVar13 + 0x14);
        goto LAB_00870e4c;
      }
      uVar14 = uVar14 + 1;
      ppDVar13 = ppDVar13 + 0x81b;
      puVar12 = puVar12 + 0x1036;
    } while (uVar10 != uVar14);
    if (7 < uVar9) {
LAB_00870eb0:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00871078 to 00871083 has its CatchHandler @ 008710fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar7 = "Error: Setting too many state color density maps. Maximum allowed is %u\'.\n";
      uVar8 = 8;
      goto LAB_00870ed0;
    }
  }
  *(uint *)(this + 0x29390) = uVar9 + 1;
  *(DensityMap **)(this + uVar10 * 0x40d8 + 0x8cd0) = param_1;
  *(DensityMap **)(this + uVar10 * 0x40d8 + 0x8cd8) = pDVar4;
  DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x78),false,0,0);
  uVar9 = 0;
  uVar11 = ~(-1 << (ulong)(param_5 & 0x1f));
  *(undefined4 *)(this + uVar10 * 0x40d8 + 0xcda0) = 0;
  goto LAB_00870f4c;
  while( true ) {
    uVar14 = uVar14 + 1;
    puVar12 = puVar12 + 0x103;
    if (uVar9 == uVar14) break;
LAB_00870e4c:
    if (((puVar12[-1] == param_3) && (*puVar12 == param_4)) && (puVar12[1] == uVar11)) {
      if (uVar9 != (uint)uVar14) goto LAB_00870f98;
      break;
    }
  }
  if (0xf < uVar9) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 008710c0 to 008710cb has its CatchHandler @ 008710f8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar7 = "Error: Trying to set too many state color sets. Maximum allowed is %u\'.\n";
    uVar8 = 0x10;
LAB_00870ed0:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar7,uVar8);
    return;
  }
LAB_00870f4c:
  lVar5 = (ulong)uVar9 * 0x40c + uVar10 * 0x40d8;
  uVar14 = (ulong)uVar9;
  *(uint *)(this + uVar10 * 0x40d8 + 0xcda0) = uVar9 + 1;
  *(uint *)(this + lVar5 + 0x8ce0) = param_3;
  *(uint *)(this + lVar5 + 0x8ce4) = param_4;
  *(uint *)(this + lVar5 + 0x8ce8) = uVar11;
  memset(this + lVar5 + 0x8cec,0,0x400);
LAB_00870f98:
  fVar16 = (float)NEON_fmin(param_7 * 255.0,0x437f0000);
  fVar17 = (float)NEON_fmin(param_8 * 255.0,0x437f0000);
  fVar15 = (float)NEON_fmin(param_9 * 255.0,0x437f0000);
  uVar1 = '\0';
  if (0.0 <= param_7 * 255.0) {
    uVar1 = (uchar)(int)fVar16;
  }
  uVar2 = '\0';
  if (0.0 <= param_8 * 255.0) {
    uVar2 = (uchar)(int)fVar17;
  }
  uVar3 = '\0';
  if (0.0 <= param_9 * 255.0) {
    uVar3 = (uchar)(int)fVar15;
  }
  PixelFormatUtil::packColor
            (uVar1,uVar2,uVar3,0xff,5,
             this + (ulong)param_6 * 4 + uVar14 * 0x40c + uVar10 * 0x40d8 + 0x8cec);
  return;
}


