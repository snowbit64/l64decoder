// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00aaad68
// Size: 472 bytes
// Signature: undefined __thiscall init(NullRenderDevice * this, bool param_1)


/* NullRenderDevice::init(bool) */

undefined8 __thiscall NullRenderDevice::init(NullRenderDevice *this,bool param_1)

{
  int iVar1;
  Logger *pLVar2;
  
  this[8] = (NullRenderDevice)param_1;
  if (param_1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aaaeb4 to 00aaaebb has its CatchHandler @ 00aaaf64 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aaaec0 to 00aaaec3 has its CatchHandler @ 00aaaf54 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Render System\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aaaf04 to 00aaaf0b has its CatchHandler @ 00aaaf50 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aaaf10 to 00aaaf13 has its CatchHandler @ 00aaaf40 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Driver: NULL\n");
  }
  this[0xd9] = (NullRenderDevice)0x0;
  *(char **)(this + 0x78) = "Null Render Device";
  *(undefined8 *)(this + 0x80) = 0x101010101010101;
  *(undefined4 *)(this + 0x6c) = 4;
  *(undefined8 *)(this + 0x85) = 0x101010101010101;
  *(undefined4 *)(this + 0xa0) = 0x10000;
  *(undefined4 *)(this + 0x98) = 0x100;
  *(undefined4 *)(this + 0xa8) = 0x100;
  *(undefined4 *)(this + 0xb0) = 0x2000;
  *(undefined4 *)(this + 0xb8) = 0x100;
  this[0x68] = (NullRenderDevice)0x1;
  this[0x70] = (NullRenderDevice)0x1;
  *(undefined8 *)(this + 0xcf) = 0x100010001010101;
  this[0x9c] = (NullRenderDevice)0x1;
  this[0xa4] = (NullRenderDevice)0x1;
  this[0xac] = (NullRenderDevice)0x1;
  this[0xb4] = (NullRenderDevice)0x1;
  *(undefined8 *)(this + 0x8d) = 0x100010001000100;
  this[0xbc] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 0xc0) = 0x20;
  this[0xc4] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 200) = 0x20;
  *(undefined4 *)(this + 0xcc) = 0x1010101;
  *(undefined2 *)(this + 0xd7) = 0x101;
  this[0xdc] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 0xe8) = 0;
  this[0xec] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (NullRenderDevice)0x1;
  this[0xfc] = (NullRenderDevice)0x1;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x116) = 0x10001;
  return 1;
}


