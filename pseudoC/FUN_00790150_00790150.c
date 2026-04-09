// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00790150
// Entry Point: 00790150
// Size: 1020 bytes
// Signature: undefined FUN_00790150(void)


void FUN_00790150(undefined4 *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 *puVar4;
  size_t sVar5;
  long lVar6;
  uint uVar7;
  void *pvVar8;
  char *pcVar9;
  ulong uVar10;
  ASYNC_CALLBACK_MODE AVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  size_t local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[0x22] == 8) {
    local_c0 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    local_c0 = 0;
  }
  uVar7 = 0xffffffff;
  switch(param_1[0x26]) {
  case 1:
  case 2:
    uVar7 = param_1[0x24];
    break;
  case 4:
    uVar7 = (uint)(float)param_1[0x24];
    break;
  case 5:
    uVar7 = (uint)*(double *)(param_1 + 0x24);
  }
  bVar2 = false;
  switch(param_1[0x2a]) {
  case 1:
  case 2:
    bVar2 = param_1[0x28] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x28) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x28] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x28) == 0.0;
    break;
  default:
    goto switchD_0079020c_caseD_6;
  case 7:
  case 8:
    lVar6 = *(long *)(param_1 + 0x28);
LAB_00790230:
    bVar2 = lVar6 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      lVar6 = **(long **)(param_1 + 0x28);
      goto LAB_00790230;
    }
    bVar2 = false;
    goto switchD_0079020c_caseD_6;
  }
  bVar2 = !bVar2;
switchD_0079020c_caseD_6:
  AVar11 = 0;
  switch(param_1[0x2e]) {
  case 1:
  case 2:
    bVar3 = param_1[0x2c] == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x2c) == '\0';
    break;
  case 4:
    bVar3 = (float)param_1[0x2c] == 0.0;
    break;
  case 5:
    bVar3 = *(double *)(param_1 + 0x2c) == 0.0;
    break;
  default:
    goto switchD_00790284_caseD_6;
  case 7:
  case 8:
    lVar6 = *(long *)(param_1 + 0x2c);
LAB_007902a8:
    bVar3 = lVar6 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x2c) != (long *)0x0) {
      lVar6 = **(long **)(param_1 + 0x2c);
      goto LAB_007902a8;
    }
    AVar11 = 0;
    goto switchD_00790284_caseD_6;
  }
  AVar11 = (ASYNC_CALLBACK_MODE)!bVar3;
switchD_00790284_caseD_6:
  fStack_84 = (float)param_1[0x10];
  local_88 = (float)param_1[0xc];
  local_78 = *param_1;
  uStack_74 = param_1[4];
  local_70 = param_1[8];
  uVar12 = NEON_fmadd(local_88,local_88,fStack_84 * fStack_84);
  local_80 = (float)param_1[0x14];
  fVar14 = (float)NEON_fmadd(local_80,local_80,uVar12);
  fVar13 = 1.0;
  if (1e-06 < fVar14) {
    fVar13 = 1.0 / SQRT(fVar14);
  }
  local_88 = local_88 * fVar13;
  fStack_84 = fStack_84 * fVar13;
  local_80 = local_80 * fVar13;
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  if (AVar11 == 0) {
    pcVar9 = *(char **)(param_1 + 0x18);
    local_b8 = &PTR__ScriptingRaycastReport_00fdb748;
    sVar5 = strlen(pcVar9);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      pvVar8 = (void *)((long)&local_b0 + 1);
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 != 0) goto LAB_00790494;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar10);
      local_b0 = uVar10 | 1;
      local_a8 = sVar5;
      pvStack_a0 = pvVar8;
LAB_00790494:
      memcpy(pvVar8,pcVar9,sVar5);
    }
    *(undefined *)((long)pvVar8 + sVar5) = 0;
    local_90 = 0;
    local_98 = local_c0;
                    /* try { // try from 007904b8 to 007904df has its CatchHandler @ 0079054c */
    uVar12 = Bt2ScenegraphPhysicsContext::raycastShapes
                       (this,(Vector3 *)&local_78,(Vector3 *)&local_88,(IRaycastReport *)&local_b8,
                        (float)param_1[0x1c],false,uVar7,bVar2,true,0);
    ScriptingRaycastReport::~ScriptingRaycastReport((ScriptingRaycastReport *)&local_b8);
    goto LAB_007904ec;
  }
  puVar4 = (undefined8 *)operator_new(0x30);
  pcVar9 = *(char **)(param_1 + 0x18);
  *puVar4 = &PTR__ScriptingRaycastReport_00fdb748;
  sVar5 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 00790538 to 0079053f has its CatchHandler @ 00790560 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar8 = (void *)((long)puVar4 + 9);
    *(char *)(puVar4 + 1) = (char)((int)sVar5 << 1);
    if (sVar5 != 0) goto LAB_00790420;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007903fc to 00790403 has its CatchHandler @ 00790560 */
    pvVar8 = operator_new(uVar10);
    puVar4[2] = sVar5;
    puVar4[3] = pvVar8;
    puVar4[1] = uVar10 | 1;
LAB_00790420:
    memcpy(pvVar8,pcVar9,sVar5);
  }
  *(undefined *)((long)pvVar8 + sVar5) = 0;
  fVar13 = (float)param_1[0x1c];
  puVar4[4] = local_c0;
  *(undefined *)(puVar4 + 5) = 1;
  uVar12 = Bt2ScenegraphPhysicsContext::raycastShapes
                     (this,(Vector3 *)&local_78,(Vector3 *)&local_88,(IRaycastReport *)puVar4,fVar13
                      ,false,uVar7,bVar2,true,AVar11);
LAB_007904ec:
  param_1[0x40] = uVar12;
  param_1[0x42] = 1;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


