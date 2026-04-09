// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStateBorderColor
// Entry Point: 00871118
// Size: 444 bytes
// Signature: undefined __thiscall setStateBorderColor(DensityMapVisualizationOverlay * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, float param_5, float param_6, float param_7)


/* DensityMapVisualizationOverlay::setStateBorderColor(DensityMap*, unsigned int, unsigned int,
   unsigned int, float, float, float) */

void __thiscall
DensityMapVisualizationOverlay::setStateBorderColor
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,uint param_2,uint param_3,
          uint param_4,float param_5,float param_6,float param_7)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Logger *this_00;
  DensityMap *pDVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pDVar7 = *(DensityMap **)(this + 0x29398);
  if (pDVar7 == (DensityMap *)0x0 || pDVar7 == param_1) {
    if (pDVar7 == (DensityMap *)0x0) {
      DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x78),false,0,0);
    }
    lVar8 = *(long *)param_1;
    *(DensityMap **)(this + 0x29398) = param_1;
    *(uint *)(this + 0x293a0) = param_2;
    *(uint *)(this + 0x293a4) = param_3;
    *(uint *)(this + 0x293a8) = param_4;
    iVar6 = (**(code **)(lVar8 + 0x48))(param_1);
    uVar4 = *(uint *)(this + 0x293d0);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = (iVar6 * param_4) / uVar4;
    }
    fVar10 = (float)NEON_fmin(param_5 * 255.0,0x437f0000);
    fVar11 = (float)NEON_fmin(param_6 * 255.0,0x437f0000);
    fVar9 = (float)NEON_fmin(param_7 * 255.0,0x437f0000);
    if (iVar6 * param_4 < uVar4) {
      uVar5 = 1;
    }
    uVar1 = '\0';
    if (0.0 <= param_5 * 255.0) {
      uVar1 = (uchar)(int)fVar10;
    }
    uVar2 = '\0';
    if (0.0 <= param_6 * 255.0) {
      uVar2 = (uchar)(int)fVar11;
    }
    uVar3 = '\0';
    if (0.0 <= param_7 * 255.0) {
      uVar3 = (uchar)(int)fVar9;
    }
    *(uint *)(this + 0x293ac) = uVar5;
    *(uint *)(this + 0x293b0) = uVar5 + 1 >> 1;
    *(float *)(this + 0x293b4) = (float)(ulong)(uVar5 * uVar5) * 0.25;
    PixelFormatUtil::packColor(uVar1,uVar2,uVar3,0xff,5,this + 0x293b8);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00871294 to 0087129b has its CatchHandler @ 008712e4 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008712a0 to 008712a3 has its CatchHandler @ 008712d4 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Setting state border color with invalid density map. All state border colors need to share the same density map.\n"
                    );
  return;
}


