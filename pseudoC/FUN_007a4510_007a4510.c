// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a4510
// Entry Point: 007a4510
// Size: 2396 bytes
// Signature: undefined FUN_007a4510(void)


/* WARNING: Removing unreachable block (ram,0x007a4dc8) */
/* WARNING: Removing unreachable block (ram,0x007a4d28) */
/* WARNING: Removing unreachable block (ram,0x007a4c88) */
/* WARNING: Removing unreachable block (ram,0x007a4cd8) */
/* WARNING: Removing unreachable block (ram,0x007a4d78) */
/* WARNING: Removing unreachable block (ram,0x007a4e18) */

void FUN_007a4510(RawTransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_478;
  float fStack_474;
  float local_470;
  undefined4 local_46c;
  float local_468;
  float fStack_464;
  float local_460;
  undefined4 local_45c;
  float local_458;
  float fStack_454;
  float local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_478,param_2,param_3,"TransformGroup_setDirection");
    DebugUtil::message((char *)&local_478,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22ca);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22ca);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cb);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cb);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cc);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cc);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0xe] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[3].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cd);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[0xc]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[3].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cd);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0x12] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[4].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22ce);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[0x10]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[4].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22ce);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0x16] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[5].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cf);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar10 = param_2[0x14];
  iVar2 = finite((double)fVar10);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[5].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22cf);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar10 = param_2[0x14];
  }
  fVar7 = param_2[4];
  fVar9 = *param_2;
  fVar8 = param_2[8];
  fVar12 = param_2[0x10];
  fVar11 = param_2[0xc];
  uVar4 = NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
  fVar5 = (float)NEON_fmadd(fVar8,fVar8,uVar4);
  fVar5 = SQRT(fVar5);
  uVar4 = NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
  fVar6 = (float)NEON_fmadd(fVar10,fVar10,uVar4);
  if (fVar5 <= 0.0001) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"Direction is zero","dirLen > 0.0001f",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22d5);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (SQRT(fVar6) <= 0.0001) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"Up is zero","upLen > 0.0001f",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x22d6);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (0.0001 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar9 = fVar9 * fVar5;
    fVar7 = fVar7 * fVar5;
    fVar8 = fVar8 * fVar5;
  }
  fStack_474 = (float)NEON_fmadd(fVar10,fVar9,fVar8 * -fVar11);
  local_478 = (float)NEON_fmadd(fVar12,fVar8,fVar7 * -fVar10);
  local_470 = (float)NEON_fmadd(fVar11,fVar7,fVar9 * -fVar12);
  uVar4 = NEON_fmadd(local_478,local_478,fStack_474 * fStack_474);
  fVar10 = (float)NEON_fmadd(local_470,local_470,uVar4);
  fVar10 = SQRT(fVar10);
  if (fVar10 < 0.0001) {
    fStack_474 = (float)NEON_fmadd(*(float *)(param_1 + 0x90),fVar9,
                                   fVar8 * -*(float *)(param_1 + 0x88));
    local_478 = (float)NEON_fmadd(*(float *)(param_1 + 0x8c),fVar8,
                                  fVar7 * -*(float *)(param_1 + 0x90));
    local_470 = (float)NEON_fmadd(*(float *)(param_1 + 0x88),fVar7,
                                  fVar9 * -*(float *)(param_1 + 0x8c));
    uVar4 = NEON_fmadd(local_478,local_478,fStack_474 * fStack_474);
    fVar10 = (float)NEON_fmadd(local_470,local_470,uVar4);
    fVar10 = SQRT(fVar10);
    if (fVar10 < 0.0001) {
      fVar10 = (float)NEON_fmadd(fVar8,*(float *)(param_1 + 0x78),
                                 *(float *)(param_1 + 0x80) * -fVar9);
      fVar6 = (float)NEON_fmadd(fVar7,*(float *)(param_1 + 0x80),*(float *)(param_1 + 0x7c) * -fVar8
                               );
      fVar11 = (float)NEON_fmadd(fVar9,*(float *)(param_1 + 0x7c),
                                 *(float *)(param_1 + 0x78) * -fVar7);
      uVar4 = NEON_fmadd(fVar6,fVar6,fVar10 * fVar10);
      fVar5 = (float)NEON_fmadd(fVar11,fVar11,uVar4);
      fVar12 = 1.0;
      if (1e-06 < fVar5) {
        fVar12 = 1.0 / SQRT(fVar5);
      }
      local_468 = fVar6 * fVar12;
      fStack_464 = fVar10 * fVar12;
      local_460 = fVar11 * fVar12;
      local_478 = (float)NEON_fmadd(fStack_464,fVar8,fVar7 * -(fVar11 * fVar12));
      fStack_474 = (float)NEON_fmadd(local_460,fVar9,fVar8 * -(fVar6 * fVar12));
      local_470 = (float)NEON_fmadd(local_468,fVar7,fVar9 * -(fVar10 * fVar12));
      goto LAB_007a4bf8;
    }
  }
  fVar10 = 1.0 / fVar10;
  fStack_474 = fStack_474 * fVar10;
  local_478 = local_478 * fVar10;
  local_470 = local_470 * fVar10;
  local_468 = (float)NEON_fmadd(fVar7,local_470,fStack_474 * -fVar8);
  local_460 = (float)NEON_fmadd(fVar9,fStack_474,local_478 * -fVar7);
  fStack_464 = (float)NEON_fmadd(fVar8,local_478,local_470 * -fVar9);
LAB_007a4bf8:
  local_46c = 0;
  local_45c = 0;
  local_44c = 0;
  local_43c = 0x3f800000;
  local_458 = fVar9;
  fStack_454 = fVar7;
  local_450 = fVar8;
  if (((byte)param_1[0x41] >> 3 & 1) != 0) {
    TransformGroup::updateEulerFromMatrix();
  }
  local_448 = *(undefined8 *)(param_1 + 0x130);
  local_440 = *(undefined4 *)(param_1 + 0x138);
  RawTransformGroup::setTransformation(param_1,(Matrix4x4 *)&local_478,0);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


