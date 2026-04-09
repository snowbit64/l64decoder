// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStaticShaders
// Entry Point: 009ec728
// Size: 552 bytes
// Signature: undefined __thiscall createStaticShaders(AtmosphereRenderController * this, IRenderDevice * param_1)


/* AtmosphereRenderController::createStaticShaders(IRenderDevice*) */

undefined8 __thiscall
AtmosphereRenderController::createStaticShaders
          (AtmosphereRenderController *this,IRenderDevice *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ShaderStructLayout *pSVar5;
  long lVar6;
  
  pSVar5 = *(ShaderStructLayout **)(this + 0x900);
  lVar6 = *(long *)(this + 0x908);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 009ec840 to 009ec84b has its CatchHandler @ 009ec95c */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar1 = (uint)((ulong)(lVar6 - (long)pSVar5) >> 6);
  *(undefined8 *)(this + 0x608) = 0;
  uVar3 = AdhocShader::load((AdhocShader *)(this + 0x600),param_1,
                            "postfx/atmospherereprojection_cs.cg",(char *)0x0,0,pSVar5,uVar1);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 009ec888 to 009ec893 has its CatchHandler @ 009ec958 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  *(undefined8 *)(this + 0x108) = 0;
  if ((uVar3 & 1) == 0) {
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 009ec918 to 009ec923 has its CatchHandler @ 009ec950 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    uVar3 = AdhocShader::load((AdhocShader *)(this + 0x100),param_1,"cleartexture_cs.cg",(char *)0x0
                              ,0,pSVar5,uVar1);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 009ec8d0 to 009ec8db has its CatchHandler @ 009ec954 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    *(undefined8 *)(this + 8) = 0;
    if ((uVar3 & 1) != 0) {
      uVar4 = AdhocShader::load((AdhocShader *)this,param_1,"copytexture.cg",(char *)0x0,0,pSVar5,
                                uVar1);
      return uVar4;
    }
  }
  return 0;
}


