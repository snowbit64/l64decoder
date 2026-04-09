// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079fe1c
// Entry Point: 0079fe1c
// Size: 968 bytes
// Signature: undefined FUN_0079fe1c(void)


/* WARNING: Removing unreachable block (ram,0x007a0140) */
/* WARNING: Removing unreachable block (ram,0x007a00f0) */
/* WARNING: Removing unreachable block (ram,0x007a0190) */

void FUN_0079fe1c(long param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char acStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438,param_2,param_3,"TransformGroup_localDirectionToWorld");
    DebugUtil::message(acStack_438,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20c9);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20c9);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20ca);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20ca);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20cb);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20cb);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  RawTransformGroup::updateWorldTransformation();
  fVar4 = param_2[4];
  fVar10 = *param_2;
  uVar5 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xc0),fVar4 * *(float *)(param_1 + 0xd0));
  uVar12 = *(undefined4 *)(param_1 + 0xe0);
  uVar6 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xb8),fVar4 * *(float *)(param_1 + 200));
  uVar7 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xbc),fVar4 * *(float *)(param_1 + 0xcc));
  uVar9 = *(undefined4 *)(param_1 + 0xd8);
  uVar11 = *(undefined4 *)(param_1 + 0xdc);
  fVar4 = param_2[8];
  param_2[0x42] = 5.605194e-45;
  param_2[0x46] = 5.605194e-45;
  param_2[0x4a] = 5.605194e-45;
  fVar10 = (float)NEON_fmadd(fVar4,uVar9,uVar6);
  fVar8 = (float)NEON_fmadd(fVar4,uVar11,uVar7);
  fVar4 = (float)NEON_fmadd(fVar4,uVar12,uVar5);
  param_2[0x40] = fVar10;
  param_2[0x44] = fVar8;
  param_2[0x48] = fVar4;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


