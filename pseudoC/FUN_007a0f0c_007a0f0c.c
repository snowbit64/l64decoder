// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a0f0c
// Entry Point: 007a0f0c
// Size: 1400 bytes
// Signature: undefined FUN_007a0f0c(void)


/* WARNING: Removing unreachable block (ram,0x007a13e0) */
/* WARNING: Removing unreachable block (ram,0x007a1390) */
/* WARNING: Removing unreachable block (ram,0x007a1430) */

void FUN_007a0f0c(long param_1,float *param_2,undefined8 param_3)

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
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float local_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined8 local_488;
  float local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  float local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_448;
  float local_440;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_478,param_2,param_3,"TransformGroup_worldRotationToLocal");
    DebugUtil::message((char *)&local_478,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212c);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212d);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212d);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212e);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_478);
    DebugUtil::message((char *)&local_478,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x212e);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_478,(Matrix4x4 *)(param_1 + 0xb8));
  sincosf(param_2[8],&fStack_4cc,&local_4d0);
  fVar17 = fStack_4cc * -0.0;
  uVar16 = NEON_fmadd(fStack_4cc,0,local_4d0);
  fVar5 = (float)NEON_fnmsub(local_4d0,0,fStack_4cc);
  fVar19 = fStack_4cc + local_4d0 * 0.0;
  uVar18 = NEON_fmadd(fStack_4cc,0,local_4d0 * 0.0);
  fVar4 = (float)NEON_fmadd(local_4d0,0,fVar17);
  sincosf(param_2[4],&fStack_4d4,&local_4d8);
  uVar10 = NEON_fmadd(uVar16,fStack_4d4,local_4d8 * 0.0);
  uVar15 = NEON_fmadd(fVar19,fStack_4d4,local_4d8 * 0.0);
  fVar6 = (float)NEON_fmadd(fVar19,local_4d8,fStack_4d4 * -0.0);
  fVar11 = (float)NEON_fmadd(uVar16,local_4d8,fStack_4d4 * -0.0);
  uVar16 = NEON_fmadd(uVar18,fStack_4d4,local_4d8);
  fVar19 = (float)NEON_fnmsub(uVar18,local_4d8,fStack_4d4);
  sincosf(*param_2,&fStack_4dc,&local_4e0);
  fVar20 = (float)NEON_fnmadd(local_4d0,0,-fVar17);
  fVar7 = (float)NEON_fnmadd(local_4d0,0,--fStack_4cc);
  fVar8 = (float)local_468;
  fVar9 = (float)((ulong)local_468 >> 0x20);
  fVar14 = (float)NEON_fmadd(uVar15,fStack_4dc,local_4e0 * (local_4d0 + fVar17));
  fVar17 = (float)NEON_fmadd(uVar15,local_4e0,fStack_4dc * -(local_4d0 + fVar17));
  fVar12 = (float)local_478;
  fVar13 = (float)((ulong)local_478 >> 0x20);
  uVar15 = NEON_fmadd(fVar11,local_470,fVar6 * local_460);
  fVar21 = (float)NEON_fmadd(uVar10,fStack_4dc,fVar5 * local_4e0);
  fVar5 = (float)NEON_fmadd(uVar16,fStack_4dc,local_4e0 * fVar4);
  fVar7 = (float)NEON_fmadd(uVar10,local_4e0,fStack_4dc * fVar7);
  fVar4 = (float)NEON_fmadd(uVar16,local_4e0,fStack_4dc * fVar20);
  fVar20 = (float)local_458;
  fVar22 = (float)((ulong)local_458 >> 0x20);
  local_4b0 = NEON_fmadd(fVar19,local_450,uVar15);
  uVar16 = NEON_fmadd(fVar21,local_470,fVar14 * local_460);
  uVar10 = NEON_fmadd(fVar7,local_470,fVar17 * local_460);
  uVar15 = NEON_fmadd(local_470,0,local_460 * 0.0);
  local_4a8 = CONCAT44(fVar9 * fVar14 + fVar13 * fVar21 + fVar22 * fVar5,
                       fVar8 * fVar14 + fVar12 * fVar21 + fVar20 * fVar5);
  local_4a0 = NEON_fmadd(fVar5,local_450,uVar16);
  local_498 = CONCAT44(fVar9 * fVar17 + fVar13 * fVar7 + fVar22 * fVar4,
                       fVar8 * fVar17 + fVar12 * fVar7 + fVar20 * fVar4);
  local_490 = NEON_fmadd(fVar4,local_450,uVar10);
  local_480 = (float)NEON_fmadd(local_450,0,uVar15);
  local_4b8 = CONCAT44(fVar9 * fVar6 + fVar13 * fVar11 + fVar22 * fVar19,
                       fVar8 * fVar6 + fVar12 * fVar11 + fVar20 * fVar19);
  local_4ac = 0;
  local_480 = local_480 + local_440;
  local_49c = 0;
  local_48c = 0;
  local_488 = CONCAT44(fVar9 * 0.0 + fVar13 * 0.0 + fVar22 * 0.0 + (float)((ulong)local_448 >> 0x20)
                       ,fVar8 * 0.0 + fVar12 * 0.0 + fVar20 * 0.0 + (float)local_448);
  local_47c = 0x3f800000;
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_4b8,(Vector3 *)&local_4c8,(Vector3 *)0x0);
  param_2[0x40] = local_4c8;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = fStack_4c4;
  param_2[0x46] = 5.605194e-45;
  param_2[0x48] = local_4c0;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


