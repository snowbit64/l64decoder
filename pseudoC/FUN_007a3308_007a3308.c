// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a3308
// Entry Point: 007a3308
// Size: 1508 bytes
// Signature: undefined FUN_007a3308(void)


/* WARNING: Removing unreachable block (ram,0x007a3848) */
/* WARNING: Removing unreachable block (ram,0x007a37f8) */
/* WARNING: Removing unreachable block (ram,0x007a3898) */

void FUN_007a3308(TransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  undefined8 *this;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float local_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float local_510;
  float fStack_50c;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  float local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  float local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  float local_490;
  Vector3 aVStack_488 [16];
  undefined8 local_478;
  float local_470;
  undefined4 local_46c;
  float local_468;
  float local_464;
  float local_460;
  undefined4 local_45c;
  float local_458;
  float local_454;
  float local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_478,param_2,param_3,"TransformGroup_setWorldRotation");
    DebugUtil::message((char *)&local_478,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2232);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2232);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2233);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2233);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2234);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar13 = param_2[8];
  iVar2 = finite((double)fVar13);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2234);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar13 = param_2[8];
  }
  uStack_440 = 0x3f80000000000000;
  local_448 = 0;
  sincosf(fVar13,&fStack_50c,&local_510);
  fVar15 = fStack_50c * -0.0;
  uVar16 = NEON_fmadd(fStack_50c,0,local_510);
  fVar5 = (float)NEON_fnmsub(local_510,0,fStack_50c);
  fVar18 = fStack_50c + local_510 * 0.0;
  uVar17 = NEON_fmadd(fStack_50c,0,local_510 * 0.0);
  fVar13 = (float)NEON_fmadd(local_510,0,fVar15);
  sincosf(param_2[4],&fStack_51c,&local_520);
  fVar6 = fStack_51c * -0.0;
  fVar7 = local_520 * 0.0;
  uVar14 = NEON_fmadd(uVar17,fStack_51c,local_520);
  fVar11 = (float)NEON_fnmsub(uVar17,local_520,fStack_51c);
  fVar9 = (float)NEON_fmadd(uVar16,local_520,fVar6);
  fVar12 = (float)NEON_fmadd(fVar18,local_520,fVar6);
  local_46c = NEON_fmadd(uVar17,local_520,fVar6);
  uVar16 = NEON_fmadd(uVar16,fStack_51c,fVar7);
  uVar19 = NEON_fmadd(fVar18,fStack_51c,fVar7);
  uVar17 = NEON_fmadd(uVar17,fStack_51c,fVar7);
  local_478._0_4_ = fVar9;
  local_478._4_4_ = fVar12;
  local_470 = fVar11;
  sincosf(*param_2,&fStack_514,&local_518);
  fVar18 = (float)NEON_fnmadd(local_510,0,-fVar15);
  fVar6 = (float)NEON_fnmadd(local_510,0,--fStack_50c);
  lVar4 = *(long *)(param_1 + 0x20);
  fVar21 = (float)NEON_fmadd(uVar19,fStack_514,(local_510 + fVar15) * local_518);
  fVar20 = (float)NEON_fmadd(uVar16,fStack_514,fVar5 * local_518);
  fVar7 = (float)NEON_fmadd(uVar14,fStack_514,fVar13 * local_518);
  local_45c = NEON_fmadd(uVar17,fStack_514,fVar13 * local_518);
  fVar6 = (float)NEON_fmadd(uVar16,local_518,fStack_514 * fVar6);
  fVar5 = (float)NEON_fmadd(uVar19,local_518,fStack_514 * -(local_510 + fVar15));
  fVar13 = (float)NEON_fmadd(uVar14,local_518,fStack_514 * fVar18);
  local_44c = NEON_fmadd(uVar17,local_518,fStack_514 * fVar18);
  local_468 = fVar20;
  local_464 = fVar21;
  local_460 = fVar7;
  local_458 = fVar6;
  local_454 = fVar5;
  local_450 = fVar13;
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0)) {
    this = &local_478;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_4c8,(Matrix4x4 *)(lVar4 + 0xb8));
    local_4fc = 0;
    local_4ec = 0;
    this = &local_508;
    local_4dc = 0;
    local_4cc = 0x3f800000;
    fVar18 = (float)local_4b8;
    fVar15 = (float)((ulong)local_4b8 >> 0x20);
    fVar21 = (float)local_4c8;
    fVar8 = (float)((ulong)local_4c8 >> 0x20);
    uVar14 = NEON_fmadd(fVar9,local_4c0,fVar12 * local_4b0);
    fVar5 = (float)local_4a8;
    fVar10 = (float)((ulong)local_4a8 >> 0x20);
    uVar17 = NEON_fmadd(fVar20,local_4c0,fVar21 * local_4b0);
    local_500 = NEON_fmadd(fVar11,local_4a0,uVar14);
    uVar14 = NEON_fmadd(local_4c0,0,local_4b0 * 0.0);
    local_508 = CONCAT44(fVar15 * fVar12 + fVar8 * fVar9 + fVar10 * fVar11,
                         fVar18 * fVar12 + fVar21 * fVar9 + fVar5 * fVar11);
    uVar16 = NEON_fmadd(fVar6,local_4c0,fVar5 * local_4b0);
    local_4d0 = (float)NEON_fmadd(local_4a0,0,uVar14);
    local_4f0 = NEON_fmadd(fVar7,local_4a0,uVar17);
    local_4e8 = CONCAT44(fVar15 * fVar5 + fVar8 * fVar6 + fVar10 * fVar13,
                         fVar18 * fVar5 + fVar21 * fVar6 + fVar5 * fVar13);
    local_4e0 = NEON_fmadd(fVar13,local_4a0,uVar16);
    local_4f8 = CONCAT44(fVar15 * fVar21 + fVar8 * fVar20 + fVar10 * fVar7,
                         fVar18 * fVar21 + fVar21 * fVar20 + fVar5 * fVar7);
    local_4d8 = CONCAT44((float)((ulong)local_498 >> 0x20) +
                         fVar15 * 0.0 + fVar8 * 0.0 + fVar10 * 0.0,
                         (float)local_498 + fVar18 * 0.0 + fVar21 * 0.0 + fVar5 * 0.0);
    local_4d0 = local_4d0 + local_490;
  }
  Matrix4x4::getEulerAngles((Matrix4x4 *)this,aVStack_488,(Vector3 *)0x0);
  TransformGroup::setRotation(param_1,aVStack_488);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


