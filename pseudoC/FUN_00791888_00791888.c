// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791888
// Entry Point: 00791888
// Size: 1180 bytes
// Signature: undefined FUN_00791888(void)


void FUN_00791888(uint *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  Vector3 *pVVar10;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  ASYNC_CALLBACK_MODE AVar14;
  long lVar15;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  lVar8 = ReflectionUtil::getEntity(*param_1,0x800,"overlapConvex","shape");
  if (lVar8 == 0) goto LAB_00791958;
  lVar15 = *(long *)(lVar8 + 0x170);
  if ((lVar15 == 0) || (lVar9 = Geometry::getCollisionProxyMesh(), lVar9 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00791ca0 to 00791cab has its CatchHandler @ 00791d28 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar13 = *(undefined8 *)(lVar8 + 8);
    pcVar12 = "Error: Overlap convex shape \'%s\' has no geometry data assigned\n";
LAB_00791950:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar12,uVar13);
    goto LAB_00791958;
  }
  lVar9 = Geometry::getCollisionProxyMesh();
  if ((*(byte *)(lVar9 + 0x8d) & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00791ce8 to 00791cf3 has its CatchHandler @ 00791d24 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar13 = *(undefined8 *)(lVar15 + 0x18);
    pcVar12 = "Error: Overlap convex mesh \'%s\' needs to be flagged as CPU mesh.\n";
    goto LAB_00791950;
  }
  if (param_1[10] == 8) {
    uVar13 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar13 = 0;
  }
  RawTransformGroup::updateWorldTransformation();
  Geometry::getCollisionProxyMesh();
  pVVar10 = (Vector3 *)TriangleSet::getPositions();
  Geometry::getCollisionProxyMesh();
  uVar5 = TriangleSet::getNumVertices();
  uVar6 = 0xffffffff;
  switch(param_1[0xe]) {
  case 1:
  case 2:
    uVar6 = param_1[0xc];
    break;
  case 4:
    uVar6 = (uint)(float)param_1[0xc];
    break;
  case 5:
    uVar6 = (uint)*(double *)(param_1 + 0xc);
  }
  bVar2 = true;
  switch(param_1[0x12]) {
  case 1:
  case 2:
    bVar2 = param_1[0x10] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x10) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x10] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x10) == 0.0;
    break;
  default:
    goto switchD_00791a38_caseD_6;
  case 7:
  case 8:
    lVar15 = *(long *)(param_1 + 0x10);
LAB_00791a5c:
    bVar2 = lVar15 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      lVar15 = **(long **)(param_1 + 0x10);
      goto LAB_00791a5c;
    }
    bVar2 = false;
    goto switchD_00791a38_caseD_6;
  }
  bVar2 = !bVar2;
switchD_00791a38_caseD_6:
  bVar3 = true;
  switch(param_1[0x16]) {
  case 1:
  case 2:
    bVar3 = param_1[0x14] == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x14) == '\0';
    break;
  case 4:
    bVar3 = (float)param_1[0x14] == 0.0;
    break;
  case 5:
    bVar3 = *(double *)(param_1 + 0x14) == 0.0;
    break;
  default:
    goto switchD_00791ab0_caseD_6;
  case 7:
  case 8:
    lVar15 = *(long *)(param_1 + 0x14);
LAB_00791ad4:
    bVar3 = lVar15 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x14) != (long *)0x0) {
      lVar15 = **(long **)(param_1 + 0x14);
      goto LAB_00791ad4;
    }
    bVar3 = false;
    goto switchD_00791ab0_caseD_6;
  }
  bVar3 = !bVar3;
switchD_00791ab0_caseD_6:
  AVar14 = 0;
  switch(param_1[0x1e]) {
  case 1:
  case 2:
    bVar4 = param_1[0x1c] == 0;
    break;
  case 3:
    bVar4 = *(char *)(param_1 + 0x1c) == '\0';
    break;
  case 4:
    bVar4 = (float)param_1[0x1c] == 0.0;
    break;
  case 5:
    bVar4 = *(double *)(param_1 + 0x1c) == 0.0;
    break;
  default:
    goto switchD_00791b2c_caseD_6;
  case 7:
  case 8:
    lVar15 = *(long *)(param_1 + 0x1c);
LAB_00791b50:
    bVar4 = lVar15 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x1c) != (long *)0x0) {
      lVar15 = **(long **)(param_1 + 0x1c);
      goto LAB_00791b50;
    }
    AVar14 = 0;
    goto switchD_00791b2c_caseD_6;
  }
  AVar14 = (ASYNC_CALLBACK_MODE)!bVar4;
switchD_00791b2c_caseD_6:
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  if (AVar14 == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
    uStack_90 = 0;
                    /* try { // try from 00791c2c to 00791c2f has its CatchHandler @ 00791d54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&uStack_90);
    local_70 = 0;
                    /* try { // try from 00791c38 to 00791c67 has its CatchHandler @ 00791d40 */
    local_78 = uVar13;
    uVar6 = Bt2ScenegraphPhysicsContext::overlapPointCloudShapes
                      (this,(Matrix4x4 *)(lVar8 + 0xb8),pVVar10,uVar5,
                       (IPhysicsEntityReport *)&local_98,uVar6,bVar2,bVar3,0,(TransformGroup **)0x0,
                       0);
    param_1[0x40] = uVar6;
    ScriptingPhysicsEntityReport::~ScriptingPhysicsEntityReport
              ((ScriptingPhysicsEntityReport *)&local_98);
  }
  else {
    puVar11 = (undefined8 *)operator_new(0x30);
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[1] = 0;
    *puVar11 = &PTR__ScriptingPhysicsEntityReport_00fdb798;
                    /* try { // try from 00791bc4 to 00791bcb has its CatchHandler @ 00791d68 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar11 + 1));
    puVar11[4] = uVar13;
    *(undefined *)(puVar11 + 5) = 1;
    uVar6 = Bt2ScenegraphPhysicsContext::overlapPointCloudShapes
                      (this,(Matrix4x4 *)(lVar8 + 0xb8),pVVar10,uVar5,
                       (IPhysicsEntityReport *)puVar11,uVar6,bVar2,bVar3,0,(TransformGroup **)0x0,
                       AVar14);
    param_1[0x40] = uVar6;
  }
LAB_00791958:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


