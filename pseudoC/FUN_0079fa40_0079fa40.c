// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079fa40
// Entry Point: 0079fa40
// Size: 988 bytes
// Signature: undefined FUN_0079fa40(void)


/* WARNING: Removing unreachable block (ram,0x0079fd78) */
/* WARNING: Removing unreachable block (ram,0x0079fd28) */
/* WARNING: Removing unreachable block (ram,0x0079fdc8) */

void FUN_0079fa40(long param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char acStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438,param_2,param_3,"TransformGroup_localToWorld");
    DebugUtil::message(acStack_438,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20ae);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20ae);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20af);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20af);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20b0);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(acStack_438);
    DebugUtil::message(acStack_438,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20b0);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  RawTransformGroup::updateWorldTransformation();
  fVar4 = param_2[4];
  fVar10 = *param_2;
  uVar5 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xc0),fVar4 * *(float *)(param_1 + 0xd0));
  uVar6 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xb8),fVar4 * *(float *)(param_1 + 200));
  uVar7 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xbc),fVar4 * *(float *)(param_1 + 0xcc));
  fVar4 = param_2[8];
  fVar10 = (float)NEON_fmadd(fVar4,*(undefined4 *)(param_1 + 0xd8),uVar6);
  fVar8 = (float)NEON_fmadd(fVar4,*(undefined4 *)(param_1 + 0xdc),uVar7);
  fVar9 = *(float *)(param_1 + 0xe8);
  fVar11 = *(float *)(param_1 + 0xec);
  fVar4 = (float)NEON_fmadd(fVar4,*(undefined4 *)(param_1 + 0xe0),uVar5);
  fVar12 = *(float *)(param_1 + 0xf0);
  param_2[0x42] = 5.605194e-45;
  param_2[0x46] = 5.605194e-45;
  param_2[0x4a] = 5.605194e-45;
  param_2[0x40] = fVar9 + fVar10;
  param_2[0x44] = fVar11 + fVar8;
  param_2[0x48] = fVar12 + fVar4;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


