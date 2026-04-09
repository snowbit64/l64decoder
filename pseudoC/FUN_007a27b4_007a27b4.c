// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a27b4
// Entry Point: 007a27b4
// Size: 1588 bytes
// Signature: undefined FUN_007a27b4(void)


/* WARNING: Removing unreachable block (ram,0x007a2d44) */
/* WARNING: Removing unreachable block (ram,0x007a2ca4) */
/* WARNING: Removing unreachable block (ram,0x007a2cf4) */
/* WARNING: Removing unreachable block (ram,0x007a2d94) */

void FUN_007a27b4(RawTransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float local_470;
  float fStack_46c;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  float local_430;
  undefined4 local_42c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_468,param_2,param_3,"TransformGroup_rotateAboutLocalAxis");
    DebugUtil::message((char *)&local_468,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21de);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21de);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21df);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21df);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21e0);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21e0);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0xe] != 5.605194e-45) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","pArgs->arg[3].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21e1);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar10 = param_2[0xc];
  iVar2 = finite((double)fVar10);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_468);
    DebugUtil::message((char *)&local_468,"","MathUtil::isFinite(pArgs->arg[3].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21e1);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar10 = param_2[0xc];
  }
  fVar11 = param_2[8];
  fVar12 = param_2[4];
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar21 = 0.0;
  fVar20 = 0.0;
  fVar18 = 0.0;
  fVar6 = 1.0;
  fVar5 = 1.0;
  fVar8 = 1.0;
  uVar4 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
  fVar13 = (float)NEON_fmadd(fVar10,fVar10,uVar4);
  fVar23 = 0.0;
  if (fVar13 != 0.0) {
    sincosf(*param_2 * 0.5,&fStack_46c,&local_470);
    fStack_46c = fStack_46c / SQRT(fVar13);
    fVar12 = fVar12 * fStack_46c;
    fVar11 = fVar11 * fStack_46c;
    fVar10 = fVar10 * fStack_46c;
    fVar18 = fVar12 * fVar11 + local_470 * fVar10;
    fVar21 = fVar12 * fVar11 - local_470 * fVar10;
    fVar20 = fVar12 * fVar10 - local_470 * fVar11;
    fVar15 = fVar12 * fVar10 + local_470 * fVar11;
    fVar23 = fVar11 * fVar10 + local_470 * fVar12;
    fVar16 = fVar11 * fVar10 - local_470 * fVar12;
    fVar18 = fVar18 + fVar18;
    fVar21 = fVar21 + fVar21;
    fVar15 = fVar15 + fVar15;
    fVar8 = (float)NEON_fmadd(fVar11 * fVar11 + fVar10 * fVar10,0xc0000000,0x3f800000);
    fVar20 = fVar20 + fVar20;
    fVar6 = (float)NEON_fmadd(fVar12 * fVar12 + fVar10 * fVar10,0xc0000000,0x3f800000);
    fVar23 = fVar23 + fVar23;
    fVar16 = fVar16 + fVar16;
    fVar5 = (float)NEON_fmadd(fVar12 * fVar12 + fVar11 * fVar11,0xc0000000,0x3f800000);
  }
  fVar11 = *(float *)(param_1 + 0x90);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x88);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  uVar22 = *(undefined4 *)(param_1 + 0x80);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  uVar7 = NEON_fmadd(fVar21,uVar22,fVar6 * fVar11);
  uVar9 = NEON_fmadd(fVar8,uVar22,fVar18 * fVar11);
  uVar14 = *(undefined4 *)(param_1 + 0xa0);
  uVar4 = NEON_fmadd(fVar15,uVar22,fVar16 * fVar11);
  uVar22 = NEON_fmadd(uVar22,0,fVar11 * 0.0);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  local_460 = NEON_fmadd(fVar20,uVar14,uVar9);
  local_450 = NEON_fmadd(fVar23,uVar14,uVar7);
  local_440 = NEON_fmadd(fVar5,uVar14,uVar4);
  local_430 = (float)NEON_fmadd(uVar14,0,uVar22);
  local_45c = 0;
  local_438 = CONCAT44(fVar12 * 0.0 + fVar17 * 0.0 + fVar19 * 0.0 +
                       (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20),
                       fVar10 * 0.0 + fVar13 * 0.0 + fVar11 * 0.0 +
                       (float)*(undefined8 *)(param_1 + 0xa8));
  local_430 = local_430 + *(float *)(param_1 + 0xb0);
  local_468 = CONCAT44(fVar12 * fVar18 + fVar17 * fVar8 + fVar19 * fVar20,
                       fVar10 * fVar18 + fVar13 * fVar8 + fVar11 * fVar20);
  local_458 = CONCAT44(fVar12 * fVar6 + fVar17 * fVar21 + fVar19 * fVar23,
                       fVar10 * fVar6 + fVar13 * fVar21 + fVar11 * fVar23);
  local_44c = 0;
  local_448 = CONCAT44(fVar12 * fVar16 + fVar17 * fVar15 + fVar19 * fVar5,
                       fVar10 * fVar16 + fVar13 * fVar15 + fVar11 * fVar5);
  local_43c = 0;
  local_42c = 0x3f800000;
  RawTransformGroup::setTransformation(param_1,(Matrix4x4 *)&local_468,0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


