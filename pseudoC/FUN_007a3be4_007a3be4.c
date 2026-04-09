// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a3be4
// Entry Point: 007a3be4
// Size: 916 bytes
// Signature: undefined FUN_007a3be4(void)


/* WARNING: Removing unreachable block (ram,0x007a3ed4) */
/* WARNING: Removing unreachable block (ram,0x007a3e84) */
/* WARNING: Removing unreachable block (ram,0x007a3f24) */

void FUN_007a3be4(TransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float fVar4;
  Vector3 aVStack_458 [16];
  float local_448;
  float fStack_444;
  float local_440;
  float fStack_43c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_448,param_2,param_3,"TransformGroup_setQuaternion");
    DebugUtil::message((char *)&local_448,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226d);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar4 = param_2[8];
  iVar2 = finite((double)fVar4);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x226d);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar4 = param_2[8];
  }
  local_440 = param_2[4];
  fStack_444 = *param_2;
  local_448 = param_2[0xc];
  fStack_43c = fVar4;
  GsQuaternion::getEulerAngles((GsQuaternion *)&local_448,aVStack_458);
  TransformGroup::setRotation(param_1,aVStack_458);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


