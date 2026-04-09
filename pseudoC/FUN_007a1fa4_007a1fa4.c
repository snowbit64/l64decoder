// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a1fa4
// Entry Point: 007a1fa4
// Size: 2024 bytes
// Signature: undefined FUN_007a1fa4(void)


/* WARNING: Removing unreachable block (ram,0x007a2698) */
/* WARNING: Removing unreachable block (ram,0x007a2648) */
/* WARNING: Removing unreachable block (ram,0x007a26e8) */

void FUN_007a1fa4(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  LuauScriptSystem *pLVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float local_4d0;
  float fStack_4cc;
  undefined8 local_4c8;
  uint local_4c0;
  undefined8 local_4b8;
  float local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  float local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  float local_450;
  undefined4 local_44c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (param_2[6] != 4) {
    FUN_0079f4f0(&local_488,param_2,param_3,"TransformGroup_localRotationToLocal");
    DebugUtil::message((char *)&local_488,"","pArgs->arg[1].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a7);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[4]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_488);
    DebugUtil::message((char *)&local_488,"","MathUtil::isFinite(pArgs->arg[1].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a7);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[10] != 4) {
    FUN_0079f4f0(&local_488);
    DebugUtil::message((char *)&local_488,"","pArgs->arg[2].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a8);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[8]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_488);
    DebugUtil::message((char *)&local_488,"","MathUtil::isFinite(pArgs->arg[2].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a8);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  if (param_2[0xe] != 4) {
    FUN_0079f4f0(&local_488);
    DebugUtil::message((char *)&local_488,"","pArgs->arg[3].m_type == Value::FloatType",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a9);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  iVar2 = finite((double)(float)param_2[0xc]);
  if (iVar2 == 0) {
    FUN_0079f4f0(&local_488);
    DebugUtil::message((char *)&local_488,"","MathUtil::isFinite(pArgs->arg[3].f)",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x21a9);
    ScriptSystemManager::getInstance();
    pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(pLVar3,"handleInternalError");
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,*param_2);
  sincosf((float)param_2[0xc],&fStack_4cc,&local_4d0);
  fVar18 = fStack_4cc * -0.0;
  uVar20 = NEON_fmadd(fStack_4cc,0,local_4d0);
  fVar9 = (float)NEON_fnmsub(local_4d0,0,fStack_4cc);
  fVar21 = fStack_4cc + local_4d0 * 0.0;
  uVar19 = NEON_fmadd(fStack_4cc,0,local_4d0 * 0.0);
  fVar5 = (float)NEON_fmadd(local_4d0,0,fVar18);
  sincosf((float)param_2[8],&fStack_4d4,&local_4d8);
  uVar17 = NEON_fmadd(uVar20,fStack_4d4,local_4d8 * 0.0);
  fVar13 = (float)NEON_fmadd(uVar20,local_4d8,fStack_4d4 * -0.0);
  uVar20 = NEON_fmadd(fVar21,fStack_4d4,local_4d8 * 0.0);
  fVar10 = (float)NEON_fmadd(fVar21,local_4d8,fStack_4d4 * -0.0);
  uVar22 = NEON_fmadd(uVar19,fStack_4d4,local_4d8);
  fVar21 = (float)NEON_fnmsub(uVar19,local_4d8,fStack_4d4);
  sincosf((float)param_2[4],&fStack_4dc,&local_4e0);
  fVar11 = (float)NEON_fnmadd(local_4d0,0,-fVar18);
  fVar7 = (float)NEON_fnmadd(local_4d0,0,--fStack_4cc);
  fVar34 = (float)NEON_fmadd(uVar17,fStack_4dc,fVar9 * local_4e0);
  fVar9 = (float)NEON_fmadd(uVar20,fStack_4dc,local_4e0 * (local_4d0 + fVar18));
  fVar18 = (float)NEON_fmadd(uVar20,local_4e0,fStack_4dc * -(local_4d0 + fVar18));
  fVar31 = (float)NEON_fmadd(uVar22,fStack_4dc,local_4e0 * fVar5);
  fVar7 = (float)NEON_fmadd(uVar17,local_4e0,fStack_4dc * fVar7);
  fVar5 = (float)NEON_fmadd(uVar22,local_4e0,fStack_4dc * fVar11);
  if (lVar4 == *(long *)(param_1 + 0x20)) {
    fVar8 = *(float *)(param_1 + 0x90);
    fVar11 = (float)*(undefined8 *)(param_1 + 0x88);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
    uVar17 = *(undefined4 *)(param_1 + 0x80);
    fVar27 = (float)*(undefined8 *)(param_1 + 0x78);
    fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    uVar19 = NEON_fmadd(fVar13,uVar17,fVar10 * fVar8);
    uVar20 = NEON_fmadd(fVar34,uVar17,fVar9 * fVar8);
    uVar30 = NEON_fmadd(fVar7,uVar17,fVar18 * fVar8);
    uVar22 = *(undefined4 *)(param_1 + 0xa0);
    uVar17 = NEON_fmadd(uVar17,0,fVar8 * 0.0);
    fVar8 = (float)*(undefined8 *)(param_1 + 0x98);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    local_478 = CONCAT44(fVar6 * fVar9 + fVar23 * fVar34 + fVar12 * fVar31,
                         fVar11 * fVar9 + fVar27 * fVar34 + fVar8 * fVar31);
    local_488 = CONCAT44(fVar6 * fVar10 + fVar23 * fVar13 + fVar12 * fVar21,
                         fVar11 * fVar10 + fVar27 * fVar13 + fVar8 * fVar21);
    local_480 = NEON_fmadd(fVar21,uVar22,uVar19);
    local_470 = NEON_fmadd(fVar31,uVar22,uVar20);
    local_450 = (float)NEON_fmadd(uVar22,0,uVar17);
    local_460 = NEON_fmadd(fVar5,uVar22,uVar30);
    local_458 = CONCAT44(fVar6 * 0.0 + fVar23 * 0.0 + fVar12 * 0.0 +
                         (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20),
                         fVar11 * 0.0 + fVar27 * 0.0 + fVar8 * 0.0 +
                         (float)*(undefined8 *)(param_1 + 0xa8));
    local_468 = CONCAT44(fVar6 * fVar18 + fVar23 * fVar7 + fVar12 * fVar5,
                         fVar11 * fVar18 + fVar27 * fVar7 + fVar8 * fVar5);
    local_450 = local_450 + *(float *)(param_1 + 0xb0);
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 007a2748 to 007a274f has its CatchHandler @ 007a279c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007a2754 to 007a2757 has its CatchHandler @ 007a278c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: localRotationToLocal invalid transform group id %d.\n",
                         (ulong)*param_2);
      local_4c0 = 0;
      local_4a8 = 0;
      local_498 = 0;
      local_4c8 = 0x3f800000;
      local_4b8 = 0x3f80000000000000;
      local_4b0 = 0.0;
      local_4a0 = 0x3f800000;
      local_490 = 0.0;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      Matrix4x4::invert3x4((Matrix4x4 *)&local_4c8,(Matrix4x4 *)(lVar4 + 0xb8));
    }
    fVar27 = *(float *)(param_1 + 200);
    fVar29 = *(float *)(param_1 + 0xcc);
    fVar26 = *(float *)(param_1 + 0xb8);
    fVar23 = *(float *)(param_1 + 0xbc);
    fVar32 = *(float *)(param_1 + 0xd8);
    fVar33 = *(float *)(param_1 + 0xdc);
    fVar35 = *(float *)(param_1 + 0xe8);
    fVar36 = *(float *)(param_1 + 0xec);
    fVar15 = (float)local_4b8;
    fVar16 = (float)((ulong)local_4b8 >> 0x20);
    fVar8 = (float)local_4c8;
    fVar12 = (float)((ulong)local_4c8 >> 0x20);
    uVar20 = NEON_fmadd(fVar27,local_4c0,local_4b0 * fVar29);
    fVar37 = *(float *)(param_1 + 0xd0);
    uVar19 = NEON_fmadd(fVar26,local_4c0,local_4b0 * fVar23);
    uVar30 = NEON_fmadd(fVar32,local_4c0,local_4b0 * fVar33);
    uVar17 = NEON_fmadd(fVar35,local_4c0,local_4b0 * fVar36);
    fVar11 = (float)local_4a8;
    fVar6 = (float)((ulong)local_4a8 >> 0x20);
    fVar14 = fVar15 * fVar29 + fVar8 * fVar27 + fVar11 * fVar37;
    fVar29 = fVar16 * fVar29 + fVar12 * fVar27 + fVar6 * fVar37;
    fVar28 = (float)NEON_fmadd(fVar37,local_4a0,uVar20);
    fVar37 = *(float *)(param_1 + 0xc0);
    fVar27 = *(float *)(param_1 + 0xf0);
    fVar24 = fVar15 * fVar23 + fVar8 * fVar26 + fVar11 * fVar37;
    fVar25 = fVar16 * fVar23 + fVar12 * fVar26 + fVar6 * fVar37;
    uVar22 = NEON_fmadd(fVar37,local_4a0,uVar19);
    fVar23 = (float)NEON_fmadd(fVar27,local_4a0,uVar17);
    fVar26 = *(float *)(param_1 + 0xe0);
    fVar37 = fVar15 * fVar33 + fVar8 * fVar32 + fVar11 * fVar26;
    fVar32 = fVar16 * fVar33 + fVar12 * fVar32 + fVar6 * fVar26;
    uVar17 = NEON_fmadd(fVar26,local_4a0,uVar30);
    uVar19 = NEON_fmadd(fVar13,uVar22,fVar10 * fVar28);
    local_480 = NEON_fmadd(fVar21,uVar17,uVar19);
    uVar19 = NEON_fmadd(fVar34,uVar22,fVar9 * fVar28);
    uVar20 = NEON_fmadd(uVar22,0,fVar28 * 0.0);
    uVar22 = NEON_fmadd(fVar7,uVar22,fVar18 * fVar28);
    local_488 = CONCAT44(fVar29 * fVar10 + fVar25 * fVar13 + fVar32 * fVar21,
                         fVar14 * fVar10 + fVar24 * fVar13 + fVar37 * fVar21);
    local_450 = (float)NEON_fmadd(uVar17,0,uVar20);
    local_478 = CONCAT44(fVar29 * fVar9 + fVar25 * fVar34 + fVar32 * fVar31,
                         fVar14 * fVar9 + fVar24 * fVar34 + fVar37 * fVar31);
    local_470 = NEON_fmadd(fVar31,uVar17,uVar19);
    local_460 = NEON_fmadd(fVar5,uVar17,uVar22);
    local_458 = CONCAT44(fVar29 * 0.0 + fVar25 * 0.0 + fVar32 * 0.0 +
                         (float)((ulong)local_498 >> 0x20) +
                         fVar16 * fVar36 + fVar12 * fVar35 + fVar6 * fVar27,
                         fVar14 * 0.0 + fVar24 * 0.0 + fVar37 * 0.0 +
                         (float)local_498 + fVar15 * fVar36 + fVar8 * fVar35 + fVar11 * fVar27);
    local_450 = local_450 + local_490 + fVar23;
    local_468 = CONCAT44(fVar29 * fVar18 + fVar25 * fVar7 + fVar32 * fVar5,
                         fVar14 * fVar18 + fVar24 * fVar7 + fVar37 * fVar5);
  }
  local_45c = 0;
  local_46c = 0;
  local_47c = 0;
  local_44c = 0x3f800000;
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_488,(Vector3 *)&local_4c8,(Vector3 *)0x0);
  param_2[0x40] = (uint)local_4c8;
  param_2[0x42] = 4;
  param_2[0x44] = local_4c8._4_4_;
  param_2[0x46] = 4;
  param_2[0x48] = local_4c0;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


