// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a0750
// Entry Point: 007a0750
// Size: 1000 bytes
// Signature: undefined FUN_007a0750(void)


/* WARNING: Removing unreachable block (ram,0x007a0a94) */
/* WARNING: Removing unreachable block (ram,0x007a0a44) */
/* WARNING: Removing unreachable block (ram,0x007a0ae4) */

void FUN_007a0750(long param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 uStack_430;
  float local_428;
  float fStack_424;
  float local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  float local_408;
  float fStack_404;
  float local_400;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_438,param_2,param_3,"TransformGroup_worldToLocal");
    DebugUtil::message((char *)&local_438,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2100);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2100);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2101);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2101);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2102);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2102);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_438,(Matrix4x4 *)(param_1 + 0xb8));
  fVar4 = param_2[4];
  fVar9 = *param_2;
  param_2[0x42] = 5.605194e-45;
  uVar6 = NEON_fmadd(fVar9,local_438,fVar4 * local_428);
  fVar10 = param_2[8];
  param_2[0x46] = 5.605194e-45;
  uVar8 = NEON_fmadd(fVar9,local_434,fVar4 * fStack_424);
  uVar5 = NEON_fmadd(fVar9,uStack_430,fVar4 * local_420);
  param_2[0x4a] = 5.605194e-45;
  fVar9 = (float)NEON_fmadd(fVar10,local_418,uVar6);
  fVar7 = (float)NEON_fmadd(fVar10,uStack_414,uVar8);
  fVar4 = (float)NEON_fmadd(fVar10,local_410,uVar5);
  param_2[0x48] = local_400 + fVar4;
  param_2[0x40] = local_408 + fVar9;
  param_2[0x44] = fStack_404 + fVar7;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


