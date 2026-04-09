// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypedStateColor
// Entry Point: 00870a20
// Size: 764 bytes
// Signature: undefined __thiscall setTypedStateColor(DensityMapVisualizationOverlay * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float param_6, float param_7, float param_8)


/* DensityMapVisualizationOverlay::setTypedStateColor(DensityMap*, unsigned int, unsigned int,
   unsigned int, unsigned int, float, float, float) */

void __thiscall
DensityMapVisualizationOverlay::setTypedStateColor
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,float param_6,float param_7,float param_8)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  DensityMap **ppDVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar9 = (ulong)param_5;
  if (param_2 < 0x40) {
    if (param_5 < 0x20) {
      uVar4 = *(uint *)(this + 0x8cc8);
      uVar10 = (ulong)uVar4;
      if (uVar4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar12 = 0;
        ppDVar11 = (DensityMap **)(this + 0x4a8);
        do {
          if (*ppDVar11 == param_1) {
            if ((uVar12 & 0xfffffffc) != 0) goto LAB_00870c18;
            goto LAB_00870b70;
          }
          uVar12 = uVar12 + 1;
          ppDVar11 = ppDVar11 + 0x441;
        } while (uVar10 != uVar12);
        if (3 < uVar4) {
LAB_00870c18:
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 00870ce4 to 00870cef has its CatchHandler @ 00870d1c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Setting too many typed state color density maps. Maximum allowed is %u\'.\n"
                             ,4);
          return;
        }
      }
      *(uint *)(this + 0x8cc8) = uVar4 + 1;
      *(DensityMap **)(this + uVar10 * 0x2208 + 0x4a8) = param_1;
      DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x78),false,0,0);
      memset(this + uVar10 * 0x2208 + 0x4b0,0,0x2200);
      uVar12 = uVar10;
LAB_00870b70:
      lVar5 = (ulong)param_2 * 0x88 + uVar12 * 0x2208;
      fVar14 = (float)NEON_fmin(param_6 * 255.0,0x437f0000);
      fVar15 = (float)NEON_fmin(param_7 * 255.0,0x437f0000);
      fVar13 = (float)NEON_fmin(param_8 * 255.0,0x437f0000);
      *(uint *)(this + lVar5 + 0x4b0) = param_3;
      uVar1 = '\0';
      if (0.0 <= param_6 * 255.0) {
        uVar1 = (uchar)(int)fVar14;
      }
      uVar2 = '\0';
      if (0.0 <= param_7 * 255.0) {
        uVar2 = (uchar)(int)fVar15;
      }
      uVar3 = '\0';
      if (0.0 <= param_8 * 255.0) {
        uVar3 = (uchar)(int)fVar13;
      }
      *(int *)(this + lVar5 + 0x4b4) = ~(-1 << (ulong)(param_4 & 0x1f));
      PixelFormatUtil::packColor(uVar1,uVar2,uVar3,0xff,5,this + uVar9 * 4 + lVar5 + 0x4b8);
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00870c9c to 00870ca7 has its CatchHandler @ 00870d20 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar7 = 
    "Error: Setting typed state color with invalid state \'%u\'. Maximum allowed is %u\'.\n";
    uVar8 = 0x1f;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00870c54 to 00870c5f has its CatchHandler @ 00870d24 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar7 = "Error: Setting typed state color with invalid type \'%u\'. Maximum allowed is %u\'.\n"
    ;
    uVar8 = 0x3f;
    uVar9 = (ulong)param_2;
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar7,uVar9,uVar8);
  return;
}


