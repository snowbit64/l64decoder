// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaders
// Entry Point: 009ef9c8
// Size: 600 bytes
// Signature: undefined __thiscall compileShaders(AtmosphereRenderControllerShared * this, IRenderDevice * param_1)


/* AtmosphereRenderControllerShared::compileShaders(IRenderDevice*) */

uint __thiscall
AtmosphereRenderControllerShared::compileShaders
          (AtmosphereRenderControllerShared *this,IRenderDevice *param_1)

{
  AtmosphereRenderControllerShared AVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ShaderStructLayout *pSVar9;
  long lVar10;
  undefined8 local_f0;
  char *pcStack_e8;
  char acStack_d8 [128];
  long local_58;
  
  puVar7 = &local_f0;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pSVar9 = *(ShaderStructLayout **)(this + 0x290);
  lVar10 = *(long *)(this + 0x298);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar4 != 0)) {
                    /* try { // try from 009efb9c to 009efba7 has its CatchHandler @ 009efc24 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar3 = (uint)((ulong)(lVar10 - (long)pSVar9) >> 6);
  *(undefined8 *)(this + 0x178) = 0;
  uVar5 = AdhocShader::load((AdhocShader *)(this + 0x170),param_1,"postfx/precomputeatmdensity.cg",
                            (char *)0x0,0,pSVar9,uVar3);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar4 != 0)) {
                    /* try { // try from 009efbe4 to 009efbef has its CatchHandler @ 009efc20 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  *(undefined8 *)(this + 0x78) = 0;
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = AdhocShader::load((AdhocShader *)(this + 0x70),param_1,
                              "postfx/computecloudcoverage_cs.cg",(char *)0x0,0,pSVar9,uVar3);
    uVar5 = uVar5 & 0xffffffff;
  }
  AdhocShader::ShaderVariants::unload();
  FUN_009efc3c(acStack_d8);
  lVar10 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
  if (lVar10 == 0) {
    lVar10 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
    AVar1 = *(AtmosphereRenderControllerShared *)(lVar10 + 0xcd);
    this[0x288] = AVar1;
    if (AVar1 == (AtmosphereRenderControllerShared)0x0) goto LAB_009efb28;
LAB_009efadc:
    pcStack_e8 = "\n#define COMPUTE_ALIAS_TABLE\n";
    local_f0 = 1;
    if ((uVar5 & 1) == 0) {
LAB_009efb58:
      uVar3 = 0;
      goto LAB_009efb5c;
    }
    uVar8 = 1;
  }
  else {
    plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x88))(param_1);
    lVar10 = (**(code **)(*plVar6 + 0x10))();
    uVar8 = *(uint *)(lVar10 + 0x14) & 1;
    this[0x288] = SUB41(uVar8,0);
    if (uVar8 != 0) goto LAB_009efadc;
LAB_009efb28:
    if ((uVar5 & 1) == 0) goto LAB_009efb58;
    puVar7 = (undefined8 *)0x0;
    uVar8 = 0;
  }
  uVar3 = AdhocShader::ShaderVariants::load
                    ((ShaderVariants *)(this + 0x270),(FlagMacro *)puVar7,uVar8,param_1,
                     "postfx/computecloudtype_cs.cg",acStack_d8,pSVar9,uVar3);
LAB_009efb5c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


