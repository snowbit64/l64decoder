// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a4014
// Entry Point: 007a4014
// Size: 1100 bytes
// Signature: undefined FUN_007a4014(void)


/* WARNING: Removing unreachable block (ram,0x007a43bc) */
/* WARNING: Removing unreachable block (ram,0x007a436c) */
/* WARNING: Removing unreachable block (ram,0x007a440c) */

void FUN_007a4014(TransformGroup *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  float *this;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  Vector3 aVStack_470 [16];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long local_58;
  
  this = &local_4a0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2[2] != 5.605194e-45) {
    FUN_0079f4f0(&local_460,param_2,param_3,"TransformGroup_setWorldQuaternion");
    DebugUtil::message((char *)&local_460,"","pArgs->arg[0].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x228e);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)*param_2);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_460);
    DebugUtil::message((char *)&local_460,"","MathUtil::isFinite(pArgs->arg[0].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x228e);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[6] != 5.605194e-45) {
    FUN_0079f4f0(&local_460);
    DebugUtil::message((char *)&local_460,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x228f);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_460);
    DebugUtil::message((char *)&local_460,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x228f);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 5.605194e-45) {
    FUN_0079f4f0(&local_460);
    DebugUtil::message((char *)&local_460,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2290);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  fVar10 = param_2[8];
  iVar2 = finite((double)fVar10);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_460);
    DebugUtil::message((char *)&local_460,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2290);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
    fVar10 = param_2[8];
  }
  fVar11 = param_2[4];
  fVar12 = *param_2;
  fVar13 = param_2[0xc];
  lVar4 = *(long *)(param_1 + 0x20);
  local_480 = fVar13;
  fStack_47c = fVar12;
  local_478 = fVar11;
  fStack_474 = fVar10;
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0)) {
    this = &local_480;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    uStack_458 = *(undefined8 *)(lVar4 + 0xc0);
    local_460 = *(undefined8 *)(lVar4 + 0xb8);
    uStack_448 = *(undefined8 *)(lVar4 + 0xd0);
    uStack_450 = *(undefined8 *)(lVar4 + 200);
    uStack_438 = *(undefined8 *)(lVar4 + 0xe0);
    local_440 = *(undefined8 *)(lVar4 + 0xd8);
    uStack_428 = *(undefined8 *)(lVar4 + 0xf0);
    uStack_430 = *(undefined8 *)(lVar4 + 0xe8);
    Matrix4x4::orthonormalize3x3();
    GsQuaternion::set((GsQuaternion *)&local_490,(Matrix4x4 *)&local_460);
    fVar6 = -local_48c;
    uVar7 = NEON_fmadd(local_490,fVar11,fVar10 * local_48c);
    uVar5 = NEON_fmadd(local_490,fVar13,fVar12 * local_48c);
    uVar8 = NEON_fmadd(local_490,fVar10,fVar11 * fVar6);
    uVar9 = NEON_fmadd(local_490,fVar12,fVar13 * fVar6);
    uVar7 = NEON_fmsub(local_488,fVar13,uVar7);
    uVar8 = NEON_fmadd(local_488,fVar12,uVar8);
    uVar9 = NEON_fmsub(local_488,fVar10,uVar9);
    uVar5 = NEON_fmadd(local_488,fVar11,uVar5);
    local_498 = NEON_fmsub(local_484,fVar12,uVar7);
    uStack_494 = NEON_fmsub(local_484,fVar13,uVar8);
    uStack_49c = NEON_fmadd(local_484,fVar11,uVar9);
    local_4a0 = (float)NEON_fmadd(local_484,fVar10,uVar5);
    local_48c = fVar6;
    local_488 = -local_488;
    local_484 = -local_484;
  }
  GsQuaternion::getEulerAngles((GsQuaternion *)this,aVStack_470);
  TransformGroup::setRotation(param_1,aVStack_470);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


