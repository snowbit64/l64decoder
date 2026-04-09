// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a01e4
// Entry Point: 007a01e4
// Size: 1388 bytes
// Signature: undefined FUN_007a01e4(void)


/* WARNING: Removing unreachable block (ram,0x007a06ac) */
/* WARNING: Removing unreachable block (ram,0x007a065c) */
/* WARNING: Removing unreachable block (ram,0x007a06fc) */

void FUN_007a01e4(long param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float local_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float local_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined8 local_448;
  float local_440;
  undefined4 local_43c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_478,param_2,param_3,"TransformGroup_localRotationToWorld");
    DebugUtil::message((char *)&local_478,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20dc);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20dc);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20dd);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20dd);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20de);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x20de);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  RawTransformGroup::updateWorldTransformation();
  sincosf(param_2[8],&fStack_49c,&local_4a0);
  fVar18 = fStack_49c * -0.0;
  uVar17 = NEON_fmadd(fStack_49c,0,local_4a0);
  fVar5 = (float)NEON_fnmsub(local_4a0,0,fStack_49c);
  fVar20 = fStack_49c + local_4a0 * 0.0;
  uVar19 = NEON_fmadd(fStack_49c,0,local_4a0 * 0.0);
  fVar4 = (float)NEON_fmadd(local_4a0,0,fVar18);
  sincosf(param_2[4],&fStack_494,&local_498);
  uVar10 = NEON_fmadd(uVar17,fStack_494,local_498 * 0.0);
  uVar16 = NEON_fmadd(fVar20,fStack_494,local_498 * 0.0);
  fVar6 = (float)NEON_fmadd(fVar20,local_498,fStack_494 * -0.0);
  fVar11 = (float)NEON_fmadd(uVar17,local_498,fStack_494 * -0.0);
  uVar17 = NEON_fmadd(uVar19,fStack_494,local_498);
  fVar20 = (float)NEON_fnmsub(uVar19,local_498,fStack_494);
  sincosf(*param_2,&fStack_48c,&local_490);
  fVar21 = (float)NEON_fnmadd(local_4a0,0,-fVar18);
  fVar7 = (float)NEON_fnmadd(local_4a0,0,--fStack_49c);
  fVar15 = *(float *)(param_1 + 0xd0);
  uVar22 = *(undefined4 *)(param_1 + 0xc0);
  fVar8 = (float)*(undefined8 *)(param_1 + 200);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
  fVar14 = (float)NEON_fmadd(uVar16,fStack_48c,local_490 * (local_4a0 + fVar18));
  fVar18 = (float)NEON_fmadd(uVar16,local_490,fStack_48c * -(local_4a0 + fVar18));
  fVar12 = (float)*(undefined8 *)(param_1 + 0xb8);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
  uVar16 = NEON_fmadd(fVar11,uVar22,fVar6 * fVar15);
  fVar23 = (float)NEON_fmadd(uVar10,fStack_48c,fVar5 * local_490);
  fVar5 = (float)NEON_fmadd(uVar17,fStack_48c,local_490 * fVar4);
  fVar7 = (float)NEON_fmadd(uVar10,local_490,fStack_48c * fVar7);
  fVar4 = (float)NEON_fmadd(uVar17,local_490,fStack_48c * fVar21);
  uVar19 = *(undefined4 *)(param_1 + 0xe0);
  fVar21 = (float)*(undefined8 *)(param_1 + 0xd8);
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
  local_470 = NEON_fmadd(fVar20,uVar19,uVar16);
  uVar17 = NEON_fmadd(fVar23,uVar22,fVar14 * fVar15);
  uVar10 = NEON_fmadd(fVar7,uVar22,fVar18 * fVar15);
  uVar16 = NEON_fmadd(uVar22,0,fVar15 * 0.0);
  local_468 = CONCAT44(fVar9 * fVar14 + fVar13 * fVar23 + fVar24 * fVar5,
                       fVar8 * fVar14 + fVar12 * fVar23 + fVar21 * fVar5);
  local_460 = NEON_fmadd(fVar5,uVar19,uVar17);
  local_458 = CONCAT44(fVar9 * fVar18 + fVar13 * fVar7 + fVar24 * fVar4,
                       fVar8 * fVar18 + fVar12 * fVar7 + fVar21 * fVar4);
  local_450 = NEON_fmadd(fVar4,uVar19,uVar10);
  local_440 = (float)NEON_fmadd(uVar19,0,uVar16);
  local_478 = CONCAT44(fVar9 * fVar6 + fVar13 * fVar11 + fVar24 * fVar20,
                       fVar8 * fVar6 + fVar12 * fVar11 + fVar21 * fVar20);
  local_46c = 0;
  local_440 = local_440 + *(float *)(param_1 + 0xf0);
  local_45c = 0;
  local_44c = 0;
  local_448 = CONCAT44(fVar9 * 0.0 + fVar13 * 0.0 + fVar24 * 0.0 +
                       (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20),
                       fVar8 * 0.0 + fVar12 * 0.0 + fVar21 * 0.0 +
                       (float)*(undefined8 *)(param_1 + 0xe8));
  local_43c = 0x3f800000;
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_478,(Vector3 *)&local_488,(Vector3 *)0x0);
  param_2[0x40] = local_488;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = fStack_484;
  param_2[0x46] = 5.605194e-45;
  param_2[0x48] = local_480;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


