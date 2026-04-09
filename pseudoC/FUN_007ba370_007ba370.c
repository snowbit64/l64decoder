// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba370
// Entry Point: 007ba370
// Size: 736 bytes
// Signature: undefined FUN_007ba370(void)


void FUN_007ba370(undefined param_1 [16],float param_2,VehicleNavigationAgentEntity *param_3,
                 void **param_4)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  Logger *this;
  ulong uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 local_b4;
  undefined8 local_b0;
  Vector2 aVStack_a8 [40];
  Vector2 aVStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(int *)(param_3 + 0x50) + 1;
  if (uVar1 * 6 != (uint)(*(uint3 *)((long)param_4 + 0xc) >> 1)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 007ba60c to 007ba613 has its CatchHandler @ 007ba660 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007ba618 to 007ba61b has its CatchHandler @ 007ba650 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: getVehicleNavigationAgentNextCurvature with invalid number of poses %u. Expected %u.\n"
                       ,(ulong)(*(uint3 *)((long)param_4 + 0xc) >> 1),(ulong)(uVar1 * 6));
    if (*param_4 != (void *)0x0) {
      operator_delete__(*param_4);
    }
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x22) = 0;
    local_b4 = 3;
    *(undefined4 *)(param_4 + 0x21) = 4;
    goto LAB_007ba5c4;
  }
  lVar10 = *(long *)(*(long *)(param_3 + 0x30) + 0x110);
  RawTransformGroup::updateWorldTransformation();
  pvVar6 = *param_4;
  if (uVar1 == 0) {
    fVar11 = NAN;
    fVar12 = NAN;
    if (pvVar6 != (void *)0x0) goto LAB_007ba560;
  }
  else {
    uVar7 = 0;
    puVar9 = (undefined4 *)((ulong)aVStack_80 | 4);
    pfVar8 = (float *)((ulong)aVStack_a8 | 4);
    do {
      pfVar2 = (float *)((long)pvVar6 + (uVar7 & 0xfffffffe) * 4);
      fVar12 = pfVar2[1] - *(float *)(lVar10 + 0xec);
      uVar13 = NEON_fmadd(pfVar2[3],*(undefined4 *)(lVar10 + 0xd8),
                          pfVar2[4] * *(float *)(lVar10 + 0xdc));
      uVar20 = NEON_fmadd(pfVar2[3],*(undefined4 *)(lVar10 + 0xb8),
                          pfVar2[4] * *(float *)(lVar10 + 0xbc));
      fVar11 = (float)NEON_fmadd(pfVar2[5],*(undefined4 *)(lVar10 + 0xe0),uVar13);
      fVar14 = *pfVar2 - *(float *)(lVar10 + 0xe8);
      fVar15 = (float)NEON_fmadd(pfVar2[5],*(undefined4 *)(lVar10 + 0xc0),uVar20);
      fVar16 = pfVar2[2] - *(float *)(lVar10 + 0xf0);
      uVar20 = NEON_fmadd(fVar14,*(undefined4 *)(lVar10 + 0xb8),fVar12 * *(float *)(lVar10 + 0xbc));
      uVar13 = NEON_fmadd(fVar14,*(undefined4 *)(lVar10 + 0xd8),fVar12 * *(float *)(lVar10 + 0xdc));
      fVar17 = (float)NEON_fmadd(fVar15,fVar15,fVar11 * fVar11);
      uVar21 = NEON_fmadd(fVar16,*(undefined4 *)(lVar10 + 0xc0),uVar20);
      uVar22 = NEON_fmadd(fVar16,*(undefined4 *)(lVar10 + 0xe0),uVar13);
      uVar20 = *(undefined4 *)(lVar10 + 200);
      fVar18 = *(float *)(lVar10 + 0xcc);
      uVar13 = *(undefined4 *)(lVar10 + 0xd0);
      fVar19 = 1.0;
      puVar9[-1] = uVar21;
      *puVar9 = uVar22;
      if (1e-06 < fVar17) {
        fVar19 = 1.0 / SQRT(fVar17);
      }
      bVar4 = uVar7 != 0;
      uVar7 = uVar7 + 6;
      puVar9 = puVar9 + 2;
      uVar20 = NEON_fmadd(fVar14,uVar20,fVar12 * fVar18);
      fVar12 = (float)NEON_fmadd(fVar16,uVar13,uVar20);
      pfVar8[-1] = fVar15 * fVar19;
      *pfVar8 = fVar11 * fVar19;
      if (bVar4) {
        fVar12 = param_2;
      }
      pfVar8 = pfVar8 + 2;
      param_2 = fVar12;
    } while ((ulong)uVar1 * 6 - uVar7 != 0);
    fVar12 = fVar12 + 0.3;
LAB_007ba560:
    operator_delete__(pvVar6);
    fVar11 = fVar12;
  }
  fVar12 = *(float *)(param_4 + 2);
  local_b0 = 0;
  ScenegraphPhysicsContextManager::getInstance();
  lVar10 = ScenegraphPhysicsContextManager::getContext();
  VehicleNavigationAgentEntity::getNextCurvature
            (param_3,(float *)((long)&local_b0 + 4),(float *)&local_b0,(AGENT_STATE *)&local_b4,
             aVStack_80,aVStack_a8,fVar11,fVar12,*(float *)(lVar10 + 0x6c) / 1000.0);
  *(undefined4 *)(param_4 + 0x20) = local_b0._4_4_;
  *(undefined4 *)(param_4 + 0x21) = 4;
  *(undefined4 *)(param_4 + 0x22) = (undefined4)local_b0;
LAB_007ba5c4:
  *(undefined4 *)(param_4 + 0x23) = 4;
  *(undefined4 *)(param_4 + 0x24) = local_b4;
  *(undefined4 *)(param_4 + 0x25) = 1;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


