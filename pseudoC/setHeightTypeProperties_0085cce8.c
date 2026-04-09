// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeightTypeProperties
// Entry Point: 0085cce8
// Size: 412 bytes
// Signature: undefined __thiscall setHeightTypeProperties(DensityMapHeightUpdater * this, uint param_1, uint param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* DensityMapHeightUpdater::setHeightTypeProperties(unsigned int, unsigned int, float, float, float,
   float, float) */

void __thiscall
DensityMapHeightUpdater::setHeightTypeProperties
          (DensityMapHeightUpdater *this,uint param_1,uint param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
  int iVar1;
  ulong uVar2;
  Logger *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 < 0x80) {
    fVar5 = (float)(ulong)(uint)~(-1 << (ulong)(*(uint *)(*(long *)(this + 0xa40) + 0x8c) & 0x1f)) /
            *(float *)(*(long *)(this + 0xa40) + 0x90);
    fVar3 = (float)NEON_fminnm(param_3,0x3fc6c8b4);
    fVar3 = tanf(fVar3);
    fVar4 = (float)BaseTerrain::getUnitsPerPixel();
    iVar1 = BaseTerrain::getHeightMapSize();
    uVar2 = DensityMap::getSquareSize();
    *(float *)(this + (ulong)param_1 * 0x14 + 0x38) = param_4;
    *(float *)(this + (ulong)param_1 * 0x14 + 0x3c) = fVar5 * param_5;
    *(float *)(this + (ulong)param_1 * 0x14 + 0x40) = fVar5 * param_6;
    *(float *)(this + (ulong)param_1 * 0x14 + 0x44) = fVar5 * param_7;
    *(float *)(this + (ulong)param_1 * 0x14 + 0x34) =
         (fVar3 * fVar5 * fVar4 * (float)(ulong)(iVar1 - 1)) / (float)(uVar2 & 0xffffffff);
    if (param_2 - 1 < 0x7f) {
      *(uint *)(this + (ulong)param_2 * 4 + 0xa54) = param_1;
    }
    if (param_1 != param_2) {
      this[0xa50] = (DensityMapHeightUpdater)0x1;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0085ce44 to 0085ce4b has its CatchHandler @ 0085ce94 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085ce50 to 0085ce53 has its CatchHandler @ 0085ce84 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Height type is too big. Maximum allowed is %u.\n",0x7f);
  }
  return;
}


