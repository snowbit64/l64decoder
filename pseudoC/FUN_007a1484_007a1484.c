// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a1484
// Entry Point: 007a1484
// Size: 1420 bytes
// Signature: undefined FUN_007a1484(void)


/* WARNING: Removing unreachable block (ram,0x007a191c) */
/* WARNING: Removing unreachable block (ram,0x007a18cc) */
/* WARNING: Removing unreachable block (ram,0x007a196c) */

void FUN_007a1484(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  EntityRegistryManager *pEVar4;
  long lVar5;
  Logger *this;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_438;
  float local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  float local_410;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[6] != 4) {
    FUN_0079f4f0(&local_448,param_2,param_3,"TransformGroup_localToLocal");
    DebugUtil::message((char *)&local_448,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2152);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2152);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 4) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2153);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2153);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0xe] != 4) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","pArgs->arg[3].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2154);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[0xc]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_448);
    DebugUtil::message((char *)&local_448,"","MathUtil::isFinite(pArgs->arg[3].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2154);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  pEVar4 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar5 = EntityRegistryManager::getEntityById(pEVar4,*param_2);
  fVar10 = (float)param_2[4];
  fVar8 = (float)param_2[8];
  fVar9 = (float)param_2[0xc];
  if (lVar5 == *(long *)(param_1 + 0x20)) {
    uVar11 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0x80),fVar8 * *(float *)(param_1 + 0x90));
    fVar6 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xa0),uVar11);
    fVar7 = (float)*(undefined8 *)(param_1 + 0xa8) +
            (float)*(undefined8 *)(param_1 + 0x88) * fVar8 +
            (float)*(undefined8 *)(param_1 + 0x78) * fVar10 +
            (float)*(undefined8 *)(param_1 + 0x98) * fVar9;
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar8 +
            (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar10 +
            (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar9;
    fVar6 = *(float *)(param_1 + 0xb0) + fVar6;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    pEVar4 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar5 = EntityRegistryManager::getEntityById(pEVar4,*param_2);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 007a19cc to 007a19d3 has its CatchHandler @ 007a1a20 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007a19d8 to 007a19db has its CatchHandler @ 007a1a10 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: localToLocal invalid transform group id %d.\n",(ulong)*param_2);
      local_440 = 0;
      local_428 = 0;
      local_418 = 0;
      local_448 = 0x3f800000;
      local_438 = 0x3f80000000000000;
      local_430 = 0.0;
      local_420 = 0x3f800000;
      local_410 = 0.0;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      Matrix4x4::invert3x4((Matrix4x4 *)&local_448,(Matrix4x4 *)(lVar5 + 0xb8));
    }
    uVar11 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xbc),fVar8 * *(float *)(param_1 + 0xcc));
    uVar13 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xb8),fVar8 * *(float *)(param_1 + 200));
    fVar12 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xdc),uVar11);
    fVar14 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xd8),uVar13);
    uVar11 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xc0),fVar8 * *(float *)(param_1 + 0xd0));
    fVar12 = *(float *)(param_1 + 0xec) + fVar12;
    fVar14 = *(float *)(param_1 + 0xe8) + fVar14;
    fVar8 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xe0),uVar11);
    fVar8 = *(float *)(param_1 + 0xf0) + fVar8;
    uVar11 = NEON_fmadd(fVar14,local_440,local_430 * fVar12);
    fVar6 = (float)NEON_fmadd(fVar8,local_420,uVar11);
    fVar7 = (float)local_418 +
            (float)local_438 * fVar12 + (float)local_448 * fVar14 + (float)local_428 * fVar8;
    fVar8 = (float)((ulong)local_418 >> 0x20) +
            (float)((ulong)local_438 >> 0x20) * fVar12 + (float)((ulong)local_448 >> 0x20) * fVar14
            + (float)((ulong)local_428 >> 0x20) * fVar8;
    fVar6 = local_410 + fVar6;
  }
  param_2[0x40] = (uint)fVar7;
  param_2[0x48] = (uint)fVar6;
  param_2[0x42] = 4;
  param_2[0x44] = (uint)fVar8;
  param_2[0x46] = 4;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


