// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0089e6ac
// Size: 384 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::init() */

void TerrainDeformation::init(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  Logger *this;
  float fVar6;
  float fVar7;
  
  *(undefined4 *)(in_x0 + 0x2c) = 0;
  *(ulong *)(in_x0 + 0x10) = *(ulong *)(in_x0 + 0x10) | 0x200000000000000;
  uVar3 = BaseTerrain::getHeightMapSize();
  *(undefined4 *)(in_x0 + 0x40) = uVar3;
  uVar3 = BaseTerrain::getUnitsPerPixel();
  *(undefined4 *)(in_x0 + 0x44) = uVar3;
  uVar4 = BaseTerrain::getLodTextureSize();
  uVar1 = *(int *)(in_x0 + 0x40) - 1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar4 / uVar1;
  }
  *(uint *)(in_x0 + 0x4c) = uVar4;
  *(uint *)(in_x0 + 0x50) = uVar2;
  if (uVar4 != uVar1 * uVar2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0089e7ec to 0089e7f3 has its CatchHandler @ 0089e83c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0089e7f8 to 0089e7fb has its CatchHandler @ 0089e82c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: TerrainDeformation requires a terrain lod size that is a multiple of the terrain height map size\n"
                      );
    *(undefined4 *)(in_x0 + 0x50) = 0;
  }
  fVar6 = (float)BaseTerrain::getUnitsPerPixel();
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = 0;
  *(undefined8 *)(in_x0 + 0x90) = 0;
  *(undefined8 *)(in_x0 + 0x54) = 0x3cf5c28f000fffdf;
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  *(undefined2 *)(in_x0 + 0xd4) = 0;
  *(undefined4 *)(in_x0 + 0x11c) = 0;
  *(undefined4 *)(in_x0 + 0xb0) = 0x3a83126f;
  *(undefined4 *)(in_x0 + 0x128) = 0;
  *(undefined8 *)(in_x0 + 0xbc) = 0;
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x4c));
  *(undefined4 *)(in_x0 + 0xa0) = 0x3ec90fdb;
  *(undefined8 *)(in_x0 + 0xb4) = 0;
  *(undefined8 *)(in_x0 + 0xf0) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  *(undefined8 *)(in_x0 + 0x100) = 0;
  *(undefined8 *)(in_x0 + 0xf8) = 0;
  *(undefined8 *)(in_x0 + 0x110) = 0;
  *(undefined8 *)(in_x0 + 0x108) = 0;
  *(undefined *)(in_x0 + 0x118) = 0;
  *(undefined8 *)(in_x0 + 0x98) = 0x3f80000041000000;
  *(float *)(in_x0 + 0x48) = (fVar6 * (float)(ulong)(*(int *)(in_x0 + 0x40) - 1)) / fVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x130));
  return;
}


