// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a4e6c
// Entry Point: 007a4e6c
// Size: 1080 bytes
// Signature: undefined FUN_007a4e6c(void)


/* WARNING: Removing unreachable block (ram,0x007a51b0) */
/* WARNING: Removing unreachable block (ram,0x007a5160) */
/* WARNING: Removing unreachable block (ram,0x007a5200) */

void FUN_007a4e6c(TransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  long lVar4;
  Logger *this;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_458;
  float fStack_454;
  float local_450;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_458,param_2,param_3,"TransformGroup_setScale");
    DebugUtil::message((char *)&local_458,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231a);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_458);
    DebugUtil::message((char *)&local_458,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231a);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_458);
    DebugUtil::message((char *)&local_458,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_458);
    DebugUtil::message((char *)&local_458,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231b);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_458);
    DebugUtil::message((char *)&local_458,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar5 = param_2[8];
  iVar2 = finite((double)fVar5);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_458);
    DebugUtil::message((char *)&local_458,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x231c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar5 = param_2[8];
  }
  fVar7 = *param_2;
  fVar6 = param_2[4];
  local_458 = fVar7;
  fStack_454 = fVar6;
  local_450 = fVar5;
  lVar4 = RawTransformGroup::getPhysicsObject();
  if ((((*(uint *)(lVar4 + 8) ^ 0xffffffff) & 0x88) == 0) &&
     (((fVar7 != 1.0 || (fVar6 != 1.0)) || (fVar5 != 1.0)))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007a5260 to 007a5267 has its CatchHandler @ 007a52b4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007a526c to 007a526f has its CatchHandler @ 007a52a4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: setScale, scale is not allowed for dynamic objects.\n");
  }
  TransformGroup::setScale(param_1,(Vector3 *)&local_458);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


