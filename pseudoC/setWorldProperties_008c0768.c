// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWorldProperties
// Entry Point: 008c0768
// Size: 772 bytes
// Signature: undefined __thiscall setWorldProperties(CullingGrid2D * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, uint param_8, float * param_9)


/* CullingGrid2D::setWorldProperties(float, float, float, float, float, float, unsigned int,
   unsigned int, float*) */

void __thiscall
CullingGrid2D::setWorldProperties
          (CullingGrid2D *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6,uint param_7,uint param_8,float *param_9)

{
  uint uVar1;
  int iVar2;
  Logger *pLVar3;
  uint uVar4;
  
  uVar1 = param_7 - 1 | param_7 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar4 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    uVar4 = 1;
  }
  if (0x80 < uVar4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008c098c to 008c0993 has its CatchHandler @ 008c0a98 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0998 to 008c099b has its CatchHandler @ 008c0a88 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Invalid culling grid size %u. Maximum allowed size is %u.\n ",
                      (ulong)uVar4,0x80);
    uVar4 = 0x80;
  }
  if (param_8 == 2) {
    *(float *)(this + 0x34) = *param_9;
    *(float *)(this + 0x38) = param_9[1];
    if (*param_9 < param_9[1]) goto LAB_008c0884;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008c0a2c to 008c0a33 has its CatchHandler @ 008c0a70 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0a38 to 008c0a3b has its CatchHandler @ 008c0a6c */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Culling clip distance thresholds must be passed in ascending order, reverting to default values."
                     );
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008c09dc to 008c09e3 has its CatchHandler @ 008c0a84 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c09e8 to 008c09eb has its CatchHandler @ 008c0a74 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: The number of passed culling clip distance thresholds must be %u, reverting to default values."
                      ,2);
  }
  *(undefined8 *)(this + 0x34) = 0x43c8000043160000;
LAB_008c0884:
  if (((((*(long *)this != 0) && (*(uint *)(this + 8) == uVar4)) &&
       (*(float *)(this + 0x14) == param_1)) &&
      ((*(float *)(this + 0x24) == param_2 && (*(float *)(this + 0x1c) == param_3)))) &&
     ((*(float *)(this + 0x18) == param_4 &&
      ((*(float *)(this + 0x28) == param_5 && (*(float *)(this + 0x20) == param_6)))))) {
    return;
  }
  *(float *)(this + 0x14) = param_1;
  *(float *)(this + 0x1c) = param_3;
  *(float *)(this + 0x18) = param_4;
  *(float *)(this + 0x20) = param_6;
  iVar2 = *(int *)(MathUtil::s_multiplyDeBruijnBitPositionPow2 +
                  (ulong)(uVar4 * 0x77cb531 >> 0x1b) * 4);
  *(float *)(this + 0x24) = param_2;
  *(float *)(this + 0x28) = param_5;
  *(uint *)(this + 8) = uVar4;
  *(int *)(this + 0xc) = iVar2 + 1;
  *(float *)(this + 0x2c) = (float)(ulong)uVar4 / (param_4 - param_1);
  *(float *)(this + 0x30) = (float)(ulong)uVar4 / (param_6 - param_3);
  setupGrid();
  return;
}


