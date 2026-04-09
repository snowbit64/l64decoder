// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0096609c
// Size: 568 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::init() */

void TextureStreamingManager::init(void)

{
  char cVar1;
  int iVar2;
  char *in_x0;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  Logger *this;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = EngineManager::getInstance();
  *in_x0 = *(char *)(lVar3 + 0x249);
  RenderDeviceManager::getInstance();
  plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  lVar3 = (**(code **)(*plVar4 + 0x28))();
  if (*(char *)(lVar3 + 0x53) == '\0' && *in_x0 != '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00966294 to 0096629b has its CatchHandler @ 009662e4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 009662a0 to 009662a3 has its CatchHandler @ 009662d4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    RenderDeviceManager::getInstance();
    uVar5 = RenderDeviceManager::getCurrentRenderDeviceTypeName();
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: The %s Render Backend does not support texture streaming.\n",uVar5);
  }
  lVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar7 = *plVar4;
  in_x0[0x840] = *(char *)(lVar3 + 0x55);
  lVar3 = (**(code **)(lVar7 + 0x28))(plVar4);
  cVar1 = *(char *)(lVar3 + 0x59);
  in_x0[0x841] = cVar1;
  if ((cVar1 != '\0') && (in_x0[0x840] != '\0')) {
    uVar5 = (**(code **)(*plVar4 + 0x130))(plVar4);
    *(undefined8 *)(in_x0 + 0x848) = uVar5;
  }
  lVar3 = EngineManager::getInstance();
  lVar7 = *(long *)(in_x0 + 0x218);
  lVar3 = *(long *)(lVar3 + 0x260);
  *(long *)(in_x0 + 0x218) = lVar3;
  if (lVar7 != lVar3) {
    *(long *)(in_x0 + 0x830) = *(long *)(in_x0 + 0x830) + 1;
    Semaphore::post();
  }
  DAT_0210ee70 = lVar3;
  lVar3 = EngineManager::getInstance();
  fVar10 = *(float *)(lVar3 + 0x26c);
  if (0.001 <= fVar10) {
    fVar8 = log2f(fVar10);
    fVar9 = *(float *)(in_x0 + 0x10);
    *(float *)(in_x0 + 0xc) = fVar10;
    *(float *)(in_x0 + 0x10) = fVar8;
    if (fVar9 != fVar8) {
      *(long *)(in_x0 + 0x830) = *(long *)(in_x0 + 0x830) + 1;
      Semaphore::post();
    }
  }
  lVar3 = EngineManager::getInstance();
  fVar10 = *(float *)(lVar3 + 0x268);
  uVar6 = MathUtil::isZero((double)(*(float *)(in_x0 + 0x1c4) - fVar10),1e-09);
  *(float *)(in_x0 + 0x1c4) = fVar10;
  if ((uVar6 & 1) == 0) {
    *(long *)(in_x0 + 0x830) = *(long *)(in_x0 + 0x830) + 1;
    Semaphore::post();
  }
  in_x0[1] = '\x01';
  if (*in_x0 != '\0') {
    Thread::start((Thread *)(in_x0 + 0x88),staticThreadEntry_async,in_x0,0xffffffff,
                  "GIANTS Texture Streaming Manager",3,0x100000);
    return;
  }
  return;
}


