// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00790c88
// Entry Point: 00790c88
// Size: 972 bytes
// Signature: undefined FUN_00790c88(void)


void FUN_00790c88(undefined4 *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ASYNC_CALLBACK_MODE AVar10;
  undefined8 uVar11;
  float fVar12;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[0x16] == 8) {
    uVar11 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    uVar11 = 0;
  }
  uVar9 = 0xffffffff;
  switch(param_1[0x1a]) {
  case 1:
  case 2:
    uVar9 = param_1[0x18];
    break;
  case 4:
    uVar9 = (uint)(float)param_1[0x18];
    break;
  case 5:
    uVar9 = (uint)*(double *)(param_1 + 0x18);
  }
  bVar2 = true;
  switch(param_1[0x1e]) {
  case 1:
  case 2:
    bVar2 = param_1[0x1c] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x1c) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x1c] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x1c) == 0.0;
    break;
  default:
    goto switchD_00790d40_caseD_6;
  case 7:
  case 8:
    lVar8 = *(long *)(param_1 + 0x1c);
LAB_00790d7c:
    bVar2 = lVar8 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x1c) != (long *)0x0) {
      lVar8 = **(long **)(param_1 + 0x1c);
      goto LAB_00790d7c;
    }
    bVar2 = false;
    goto switchD_00790d40_caseD_6;
  }
  bVar2 = !bVar2;
switchD_00790d40_caseD_6:
  bVar3 = true;
  switch(param_1[0x22]) {
  case 1:
  case 2:
    bVar3 = param_1[0x20] == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x20) == '\0';
    break;
  case 4:
    bVar3 = (float)param_1[0x20] == 0.0;
    break;
  case 5:
    bVar3 = *(double *)(param_1 + 0x20) == 0.0;
    break;
  default:
    goto switchD_00790db8_caseD_6;
  case 7:
  case 8:
    lVar8 = *(long *)(param_1 + 0x20);
LAB_00790df4:
    bVar3 = lVar8 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      lVar8 = **(long **)(param_1 + 0x20);
      goto LAB_00790df4;
    }
    bVar3 = false;
    goto switchD_00790db8_caseD_6;
  }
  bVar3 = !bVar3;
switchD_00790db8_caseD_6:
  bVar4 = false;
  switch(param_1[0x26]) {
  case 1:
  case 2:
    bVar4 = param_1[0x24] == 0;
    break;
  case 3:
    bVar4 = *(char *)(param_1 + 0x24) == '\0';
    break;
  case 4:
    bVar4 = (float)param_1[0x24] == 0.0;
    break;
  case 5:
    bVar4 = *(double *)(param_1 + 0x24) == 0.0;
    break;
  default:
    goto switchD_00790e30_caseD_6;
  case 7:
  case 8:
    lVar8 = *(long *)(param_1 + 0x24);
LAB_00790e6c:
    bVar4 = lVar8 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x24) != (long *)0x0) {
      lVar8 = **(long **)(param_1 + 0x24);
      goto LAB_00790e6c;
    }
    bVar4 = false;
    goto switchD_00790e30_caseD_6;
  }
  bVar4 = !bVar4;
switchD_00790e30_caseD_6:
  AVar10 = 0;
  switch(param_1[0x2a]) {
  case 1:
  case 2:
    bVar5 = param_1[0x28] == 0;
    break;
  case 3:
    bVar5 = *(char *)(param_1 + 0x28) == '\0';
    break;
  case 4:
    bVar5 = (float)param_1[0x28] == 0.0;
    break;
  case 5:
    bVar5 = *(double *)(param_1 + 0x28) == 0.0;
    break;
  default:
    goto switchD_00790ea8_caseD_6;
  case 7:
  case 8:
    lVar8 = *(long *)(param_1 + 0x28);
    goto LAB_00790ee4;
  case 0xd:
    if (*(long **)(param_1 + 0x28) == (long *)0x0) {
      AVar10 = 0;
      goto switchD_00790ea8_caseD_6;
    }
    lVar8 = **(long **)(param_1 + 0x28);
LAB_00790ee4:
    bVar5 = lVar8 == 0;
  }
  AVar10 = (ASYNC_CALLBACK_MODE)!bVar5;
switchD_00790ea8_caseD_6:
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  local_78 = *param_1;
  uStack_74 = param_1[4];
  local_70 = param_1[8];
  if (AVar10 == 0) {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
    uStack_a0 = 0;
                    /* try { // try from 00790fb4 to 00790fb7 has its CatchHandler @ 00791068 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&uStack_a0);
    local_80 = 0;
                    /* try { // try from 00790fc4 to 00790fe7 has its CatchHandler @ 00791054 */
    local_88 = uVar11;
    uVar6 = Bt2ScenegraphPhysicsContext::overlapSphereShapes
                      (this,(Vector3 *)&local_78,(float)param_1[0xc],
                       (IPhysicsEntityReport *)&local_a8,uVar9,bVar2,bVar3,bVar4,0);
    ScriptingPhysicsEntityReport::~ScriptingPhysicsEntityReport
              ((ScriptingPhysicsEntityReport *)&local_a8);
  }
  else {
    puVar7 = (undefined8 *)operator_new(0x30);
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[1] = 0;
    *puVar7 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
                    /* try { // try from 00790f4c to 00790f53 has its CatchHandler @ 0079107c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar7 + 1));
    fVar12 = (float)param_1[0xc];
    puVar7[4] = uVar11;
    *(undefined *)(puVar7 + 5) = 1;
    uVar6 = Bt2ScenegraphPhysicsContext::overlapSphereShapes
                      (this,(Vector3 *)&local_78,fVar12,(IPhysicsEntityReport *)puVar7,uVar9,bVar2,
                       bVar3,bVar4,AVar10);
  }
  param_1[0x40] = uVar6;
  param_1[0x42] = 1;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


