// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a1a38
// Entry Point: 007a1a38
// Size: 1348 bytes
// Signature: undefined FUN_007a1a38(void)


/* WARNING: Removing unreachable block (ram,0x007a1e88) */
/* WARNING: Removing unreachable block (ram,0x007a1e38) */
/* WARNING: Removing unreachable block (ram,0x007a1ed8) */

void FUN_007a1a38(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *this_00;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_438;
  float local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined4 local_410;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[6] != 4) {
    FUN_0079f4f0(&local_448,param_2,param_3,"TransformGroup_localDirectionToLocal");
    DebugUtil::message((char *)&local_448,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2182);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2182);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 4) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2183);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2183);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0xe] != 4) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[3].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2184);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[0xc]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[3].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2184);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,*param_2);
  fVar9 = (float)param_2[4];
  fVar6 = (float)param_2[8];
  fVar8 = (float)param_2[0xc];
  if (lVar4 == *(long *)(param_1 + 0x20)) {
    uVar10 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0x80),fVar6 * *(float *)(param_1 + 0x90));
    fVar7 = (float)*(undefined8 *)(param_1 + 0x88) * fVar6 +
            (float)*(undefined8 *)(param_1 + 0x78) * fVar9 +
            (float)*(undefined8 *)(param_1 + 0x98) * fVar8;
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar6 +
            (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar9 +
            (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar8;
    uVar5 = NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0xa0),uVar10);
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 007a1f38 to 007a1f3f has its CatchHandler @ 007a1f8c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007a1f44 to 007a1f47 has its CatchHandler @ 007a1f7c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: localDirectionToLocal invalid transform group id %d.\n",
                         (ulong)*param_2);
      local_440 = 0;
      local_430 = 0.0;
      local_428 = 0;
      local_418 = 0;
      local_448 = 0x3f800000;
      local_438 = 0x3f80000000000000;
      local_420 = 0x3f800000;
      local_410 = 0;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      Matrix4x4::invert3x4((Matrix4x4 *)&local_448,(Matrix4x4 *)(lVar4 + 0xb8));
    }
    uVar10 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xbc),fVar6 * *(float *)(param_1 + 0xcc));
    uVar12 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xb8),fVar6 * *(float *)(param_1 + 200));
    fVar11 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0xdc),uVar10);
    fVar13 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0xd8),uVar12);
    uVar10 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xc0),fVar6 * *(float *)(param_1 + 0xd0));
    fVar8 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_1 + 0xe0),uVar10);
    uVar10 = NEON_fmadd(fVar13,local_440,local_430 * fVar11);
    fVar7 = (float)local_438 * fVar11 + (float)local_448 * fVar13 + (float)local_428 * fVar8;
    fVar6 = (float)((ulong)local_438 >> 0x20) * fVar11 + (float)((ulong)local_448 >> 0x20) * fVar13
            + (float)((ulong)local_428 >> 0x20) * fVar8;
    uVar5 = NEON_fmadd(fVar8,local_420,uVar10);
  }
  param_2[0x40] = (uint)fVar7;
  param_2[0x48] = uVar5;
  param_2[0x42] = 4;
  param_2[0x44] = (uint)fVar6;
  param_2[0x46] = 4;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


