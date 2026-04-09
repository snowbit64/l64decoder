// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791318
// Entry Point: 00791318
// Size: 1316 bytes
// Signature: undefined FUN_00791318(void)


void FUN_00791318(undefined4 *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  ASYNC_CALLBACK_MODE AVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined **local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  if (param_1[0x2a] == 8) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar9 = 0;
  }
  local_c0 = param_1[0x18];
  uStack_bc = param_1[0x1c];
  local_d0 = *param_1;
  local_b8 = param_1[0x20];
  local_c4 = 0x3f800000;
  fVar11 = (float)param_1[0xc];
  uStack_cc = param_1[4];
  local_c8 = param_1[8];
  fVar15 = (float)param_1[0x10];
  sincosf((float)param_1[0x14],&fStack_134,&local_138);
  fVar18 = fStack_134 * -0.0;
  uVar20 = NEON_fmadd(fStack_134,0,local_138);
  fVar13 = (float)NEON_fnmsub(local_138,0,fStack_134);
  fVar19 = fStack_134 + local_138 * 0.0;
  uVar17 = NEON_fmadd(fStack_134,0,local_138 * 0.0);
  fVar12 = (float)NEON_fmadd(local_138,0,fVar18);
  sincosf(fVar15,&fStack_13c,&local_140);
  fVar14 = local_140 * 0.0;
  uVar16 = NEON_fmadd(uVar17,fStack_13c,local_140);
  fVar15 = fStack_13c * -0.0;
  local_100 = NEON_fmadd(uVar20,local_140,fVar15);
  uStack_fc = NEON_fmadd(fVar19,local_140,fVar15);
  uStack_f4 = NEON_fmadd(uVar17,local_140,fVar15);
  local_f8 = NEON_fnmsub(uVar17,local_140,fStack_13c);
  uVar21 = NEON_fmadd(uVar20,fStack_13c,fVar14);
  uVar20 = NEON_fmadd(fVar19,fStack_13c,fVar14);
  uVar17 = NEON_fmadd(uVar17,fStack_13c,fVar14);
  sincosf(fVar11,&fStack_144,&local_148);
  fVar15 = (float)NEON_fnmadd(local_138,0,-fVar18);
  uVar8 = 0xffffffff;
  fVar11 = (float)NEON_fnmadd(local_138,0,--fStack_134);
  uStack_ec = NEON_fmadd(uVar20,fStack_144,local_148 * (local_138 + fVar18));
  local_f0 = NEON_fmadd(uVar21,fStack_144,local_148 * fVar13);
  local_e8 = NEON_fmadd(uVar16,fStack_144,local_148 * fVar12);
  uStack_e4 = NEON_fmadd(uVar17,fStack_144,local_148 * fVar12);
  local_e0 = NEON_fmadd(uVar21,local_148,fStack_144 * fVar11);
  uStack_dc = NEON_fmadd(uVar20,local_148,fStack_144 * -(local_138 + fVar18));
  local_d8 = NEON_fmadd(uVar16,local_148,fStack_144 * fVar15);
  uStack_d4 = NEON_fmadd(uVar17,local_148,fStack_144 * fVar15);
  switch(param_1[0x2e]) {
  case 1:
  case 2:
    uVar8 = param_1[0x2c];
    break;
  case 4:
    uVar8 = (uint)(float)param_1[0x2c];
    break;
  case 5:
    uVar8 = (uint)*(double *)(param_1 + 0x2c);
  }
  bVar2 = true;
  switch(param_1[0x32]) {
  case 1:
  case 2:
    bVar2 = param_1[0x30] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x30) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x30] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x30) == 0.0;
    break;
  default:
    goto switchD_0079151c_caseD_6;
  case 7:
  case 8:
    lVar7 = *(long *)(param_1 + 0x30);
LAB_00791558:
    bVar2 = lVar7 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      lVar7 = **(long **)(param_1 + 0x30);
      goto LAB_00791558;
    }
    bVar2 = false;
    goto switchD_0079151c_caseD_6;
  }
  bVar2 = !bVar2;
switchD_0079151c_caseD_6:
  bVar3 = true;
  switch(param_1[0x36]) {
  case 1:
  case 2:
    bVar3 = param_1[0x34] == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x34) == '\0';
    break;
  case 4:
    bVar3 = (float)param_1[0x34] == 0.0;
    break;
  case 5:
    bVar3 = *(double *)(param_1 + 0x34) == 0.0;
    break;
  default:
    goto switchD_00791594_caseD_6;
  case 7:
  case 8:
    lVar7 = *(long *)(param_1 + 0x34);
LAB_007915d0:
    bVar3 = lVar7 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x34) != (long *)0x0) {
      lVar7 = **(long **)(param_1 + 0x34);
      goto LAB_007915d0;
    }
    bVar3 = false;
    goto switchD_00791594_caseD_6;
  }
  bVar3 = !bVar3;
switchD_00791594_caseD_6:
  bVar4 = false;
  switch(param_1[0x3a]) {
  case 1:
  case 2:
    bVar4 = param_1[0x38] == 0;
    break;
  case 3:
    bVar4 = *(char *)(param_1 + 0x38) == '\0';
    break;
  case 4:
    bVar4 = (float)param_1[0x38] == 0.0;
    break;
  case 5:
    bVar4 = *(double *)(param_1 + 0x38) == 0.0;
    break;
  default:
    goto switchD_0079160c_caseD_6;
  case 7:
  case 8:
    lVar7 = *(long *)(param_1 + 0x38);
LAB_00791648:
    bVar4 = lVar7 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      lVar7 = **(long **)(param_1 + 0x38);
      goto LAB_00791648;
    }
    bVar4 = false;
    goto switchD_0079160c_caseD_6;
  }
  bVar4 = !bVar4;
switchD_0079160c_caseD_6:
  AVar10 = 0;
  switch(param_1[0x3e]) {
  case 1:
  case 2:
    bVar5 = param_1[0x3c] == 0;
    break;
  case 3:
    bVar5 = *(char *)(param_1 + 0x3c) == '\0';
    break;
  case 4:
    bVar5 = (float)param_1[0x3c] == 0.0;
    break;
  case 5:
    bVar5 = *(double *)(param_1 + 0x3c) == 0.0;
    break;
  default:
    goto switchD_00791684_caseD_6;
  case 7:
  case 8:
    lVar7 = *(long *)(param_1 + 0x3c);
    goto LAB_007916c0;
  case 0xd:
    if (*(long **)(param_1 + 0x3c) == (long *)0x0) {
      AVar10 = 0;
      goto switchD_00791684_caseD_6;
    }
    lVar7 = **(long **)(param_1 + 0x3c);
LAB_007916c0:
    bVar5 = lVar7 == 0;
  }
  AVar10 = (ASYNC_CALLBACK_MODE)!bVar5;
switchD_00791684_caseD_6:
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  if (AVar10 == 0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
    uStack_128 = 0;
                    /* try { // try from 00791784 to 00791787 has its CatchHandler @ 00791850 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&uStack_128);
    local_108 = 0;
                    /* try { // try from 00791790 to 007917bf has its CatchHandler @ 0079183c */
    local_110 = uVar9;
    uVar16 = Bt2ScenegraphPhysicsContext::overlapBoxShapes
                       (this,(Matrix4x4 *)&local_100,(Vector3 *)&local_c0,
                        (IPhysicsEntityReport *)&local_130,uVar8,bVar2,bVar3,bVar4,0,
                        (TransformGroup **)0x0,0);
    ScriptingPhysicsEntityReport::~ScriptingPhysicsEntityReport
              ((ScriptingPhysicsEntityReport *)&local_130);
  }
  else {
    puVar6 = (undefined8 *)operator_new(0x30);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
                    /* try { // try from 00791714 to 0079171b has its CatchHandler @ 00791864 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar6 + 1));
    puVar6[4] = uVar9;
    *(undefined *)(puVar6 + 5) = 1;
    uVar16 = Bt2ScenegraphPhysicsContext::overlapBoxShapes
                       (this,(Matrix4x4 *)&local_100,(Vector3 *)&local_c0,
                        (IPhysicsEntityReport *)puVar6,uVar8,bVar2,bVar3,bVar4,0,
                        (TransformGroup **)0x0,AVar10);
  }
  param_1[0x40] = uVar16;
  param_1[0x42] = 1;
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


