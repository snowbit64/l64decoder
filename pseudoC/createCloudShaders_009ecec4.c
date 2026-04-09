// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCloudShaders
// Entry Point: 009ecec4
// Size: 960 bytes
// Signature: undefined __thiscall createCloudShaders(AtmosphereRenderController * this, IRenderDevice * param_1, uint param_2)


/* AtmosphereRenderController::createCloudShaders(IRenderDevice*, unsigned int) */

uint __thiscall
AtmosphereRenderController::createCloudShaders
          (AtmosphereRenderController *this,IRenderDevice *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  Logger *this_00;
  uint uVar7;
  long lVar8;
  ShaderStructLayout *pSVar9;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pSVar9 = *(ShaderStructLayout **)(this + 0x900);
  lVar8 = *(long *)(this + 0x908);
  FUN_009ed4fc(&local_f0,param_1,param_2,"#define CLOUD_QUALITY %u\n%s\n%s\n",param_2,&DAT_0050a39f,
               &DAT_0050a39f);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 009ed120 to 009ed173 has its CatchHandler @ 009ed2a8 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar4 = 1 << (ulong)(param_2 & 0x1f);
  uVar7 = (uint)((ulong)(lVar8 - (long)pSVar9) >> 6);
  *(undefined8 *)(this + 0x208) = 0;
  uVar3 = AdhocShader::load((AdhocShader *)(this + 0x200),param_1,"postfx/atmosphere_cs.cg",
                            (char *)&local_f0,uVar4,pSVar9,uVar7);
  FUN_009ed4fc(&local_f0);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  *(undefined8 *)(this + 0x308) = 0;
  uVar4 = AdhocShader::load((AdhocShader *)(this + 0x300),param_1,"postfx/atmosphere_cs.cg",
                            (char *)&local_f0,uVar4 | 0x20,pSVar9,uVar7);
  if (1 < param_2) {
    param_2 = 2;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  FUN_009ed4fc(&local_f0);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 009ed1b0 to 009ed1bb has its CatchHandler @ 009ed2a4 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  *(undefined8 *)(this + 0x408) = 0;
  uVar6 = AdhocShader::load((AdhocShader *)(this + 0x400),param_1,"postfx/atmosphere_cs.cg",
                            (char *)&local_f0,uVar1 | 0x80,pSVar9,uVar7);
  if ((uVar6 & 1) != 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_009ed4fc(&local_f0);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 009ed248 to 009ed253 has its CatchHandler @ 009ed2a4 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    *(undefined8 *)(this + 0x508) = 0;
    uVar6 = AdhocShader::load((AdhocShader *)(this + 0x500),param_1,"postfx/atmosphere_cs.cg",
                              (char *)&local_f0,uVar1 | 0xa0,pSVar9,uVar7);
    if ((uVar6 & 1) != 0) {
      uVar7 = 1;
      goto LAB_009ed0d8;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 009ed1f8 to 009ed1ff has its CatchHandler @ 009ed294 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009ed204 to 009ed207 has its CatchHandler @ 009ed284 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Cannot load postfx/atmosphere_cs.cg / COMPUTE_SH\n");
  uVar7 = 0;
LAB_009ed0d8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar7 & uVar3 & uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


