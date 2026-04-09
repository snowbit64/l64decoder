// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f5ec
// Entry Point: 0079f5ec
// Size: 1036 bytes
// Signature: undefined FUN_0079f5ec(void)


/* WARNING: Removing unreachable block (ram,0x0079f954) */
/* WARNING: Removing unreachable block (ram,0x0079f904) */
/* WARNING: Removing unreachable block (ram,0x0079f9a4) */

void FUN_0079f5ec(TransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_458;
  float local_450;
  float local_448;
  float fStack_444;
  float local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  float local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_408;
  float local_400;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_438,param_2,param_3,"TransformGroup_setWorldTranslation");
    DebugUtil::message((char *)&local_438,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2069);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2069);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x206a);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x206a);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x206b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar6 = param_2[8];
  iVar2 = finite((double)fVar6);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_438);
    DebugUtil::message((char *)&local_438,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x206b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar6 = param_2[8];
  }
  fVar7 = *param_2;
  fVar9 = param_2[4];
  lVar5 = *(long *)(param_1 + 0x20);
  local_448 = fVar7;
  fStack_444 = fVar9;
  local_440 = fVar6;
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) == 0)) {
    puVar4 = (undefined8 *)&local_448;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_438,(Matrix4x4 *)(lVar5 + 0xb8));
    puVar4 = &local_458;
    uVar8 = NEON_fmadd(fVar7,local_430,fVar9 * local_420);
    local_450 = (float)NEON_fmadd(fVar6,local_410,uVar8);
    local_458 = CONCAT44((float)((ulong)local_408 >> 0x20) +
                         (float)((ulong)local_428 >> 0x20) * fVar9 +
                         (float)((ulong)local_438 >> 0x20) * fVar7 +
                         (float)((ulong)local_418 >> 0x20) * fVar6,
                         (float)local_408 +
                         (float)local_428 * fVar9 + (float)local_438 * fVar7 +
                         (float)local_418 * fVar6);
    local_450 = local_400 + local_450;
  }
  TransformGroup::setTranslation(param_1,(Vector3 *)puVar4);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


