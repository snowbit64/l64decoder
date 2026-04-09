// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007beb94
// Entry Point: 007beb94
// Size: 948 bytes
// Signature: undefined FUN_007beb94(void)


void FUN_007beb94(void **param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (*(uint3 *)((long)param_1 + 0xc) < 0xc) {
LAB_007bec04:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007bef10 to 007bef1b has its CatchHandler @ 007bef48 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "getVehicleCollisionDistance: invalid array size for \'positions\' parameter.\n"
                      );
    pvVar10 = *param_1;
    goto joined_r0x007bec2c;
  }
  uVar2 = (uint)(*(uint3 *)((long)param_1 + 0xc) >> 1);
  if (uVar2 != uVar2 / 3 + ((uint)((ulong)uVar2 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
  goto LAB_007bec04;
  if (*(int *)(param_1 + 0xf) == 8) {
    pvVar10 = param_1[0xe];
  }
  else {
    pvVar10 = (void *)0x0;
  }
  if (*(int *)(param_1 + 0x11) == 8) {
    pvVar11 = param_1[0x10];
  }
  else {
    pvVar11 = (void *)0x0;
  }
  pvVar9 = *param_1;
  uVar12 = *(undefined4 *)(param_1 + 2);
  uVar13 = *(undefined4 *)(param_1 + 4);
  uVar14 = *(undefined4 *)(param_1 + 6);
  uVar15 = *(undefined4 *)(param_1 + 8);
  uVar16 = *(undefined4 *)(param_1 + 10);
  puVar7 = (undefined8 *)operator_new(0x128);
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x23] = 0;
  puVar7[0x24] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x22] = 0;
  *puVar7 = &PTR__ScriptingPhysicsReport_00fdbb18;
                    /* try { // try from 007becc0 to 007becc7 has its CatchHandler @ 007bef60 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar7 + 0x1d));
  uVar1 = *(undefined4 *)(param_1 + 0x13);
  iVar6 = -1;
  puVar7[0x20] = pvVar10;
  puVar7[0x21] = pvVar11;
  switch(uVar1) {
  case 1:
  case 2:
    iVar6 = *(int *)(param_1 + 0x12);
    break;
  case 4:
    iVar6 = (int)*(float *)(param_1 + 0x12);
    break;
  case 5:
    iVar6 = (int)(double)param_1[0x12];
  }
  bVar3 = true;
  switch(*(undefined4 *)(param_1 + 0x15)) {
  case 1:
  case 2:
    bVar3 = *(int *)(param_1 + 0x14) == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x14) == '\0';
    break;
  case 4:
    bVar3 = *(float *)(param_1 + 0x14) == 0.0;
    break;
  case 5:
    bVar3 = (double)param_1[0x14] == 0.0;
    break;
  default:
    goto switchD_007bed3c_caseD_6;
  case 7:
  case 8:
    pvVar10 = param_1[0x14];
LAB_007bed60:
    bVar3 = pvVar10 == (void *)0x0;
    break;
  case 0xd:
    if ((void **)param_1[0x14] != (void **)0x0) {
                    /* WARNING: Load size is inaccurate */
      pvVar10 = *param_1[0x14];
      goto LAB_007bed60;
    }
    bVar3 = false;
    goto switchD_007bed3c_caseD_6;
  }
  bVar3 = !bVar3;
switchD_007bed3c_caseD_6:
  bVar4 = true;
  switch(*(undefined4 *)(param_1 + 0x17)) {
  case 1:
  case 2:
    bVar4 = *(int *)(param_1 + 0x16) == 0;
    break;
  case 3:
    bVar4 = *(char *)(param_1 + 0x16) == '\0';
    break;
  case 4:
    bVar4 = *(float *)(param_1 + 0x16) == 0.0;
    break;
  case 5:
    bVar4 = (double)param_1[0x16] == 0.0;
    break;
  default:
    goto switchD_007bedb4_caseD_6;
  case 7:
  case 8:
    pvVar10 = param_1[0x16];
LAB_007bedd8:
    bVar4 = pvVar10 == (void *)0x0;
    break;
  case 0xd:
    if ((void **)param_1[0x16] != (void **)0x0) {
                    /* WARNING: Load size is inaccurate */
      pvVar10 = *param_1[0x16];
      goto LAB_007bedd8;
    }
    bVar4 = false;
    goto switchD_007bedb4_caseD_6;
  }
  bVar4 = !bVar4;
switchD_007bedb4_caseD_6:
  bVar5 = false;
  switch(*(undefined4 *)(param_1 + 0x19)) {
  case 1:
  case 2:
    bVar5 = *(int *)(param_1 + 0x18) == 0;
    break;
  case 3:
    bVar5 = *(char *)(param_1 + 0x18) == '\0';
    break;
  case 4:
    bVar5 = *(float *)(param_1 + 0x18) == 0.0;
    break;
  case 5:
    bVar5 = (double)param_1[0x18] == 0.0;
    break;
  default:
    goto switchD_007bee2c_caseD_6;
  case 7:
  case 8:
    pvVar10 = param_1[0x18];
LAB_007bee50:
    bVar5 = pvVar10 == (void *)0x0;
    break;
  case 0xd:
    if ((void **)param_1[0x18] != (void **)0x0) {
                    /* WARNING: Load size is inaccurate */
      pvVar10 = *param_1[0x18];
      goto LAB_007bee50;
    }
    bVar5 = false;
    goto switchD_007bee2c_caseD_6;
  }
  bVar5 = !bVar5;
switchD_007bee2c_caseD_6:
  ScenegraphPhysicsContextManager::getInstance();
  uVar8 = ScenegraphPhysicsContextManager::getContext();
  VehicleCollisionDistanceUtil::getCollisionDistance
            (uVar12,uVar13,uVar14,uVar15,uVar16,(ulong)uVar2 / 3,pvVar9,uVar8,puVar7,iVar6,bVar3,
             bVar4,bVar5);
  pvVar10 = *param_1;
joined_r0x007bec2c:
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete__(pvVar10);
  return;
}


