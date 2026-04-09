// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078b438
// Entry Point: 0078b438
// Size: 904 bytes
// Signature: undefined FUN_0078b438(void)


void FUN_0078b438(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_23c;
  char acStack_238 [256];
  char *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  char *pcStack_110;
  uint local_108;
  uint uStack_104;
  undefined8 local_100;
  long local_f8;
  ulong uStack_f0;
  uint local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  uchar *local_b0 [7];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar6 = StringUtil::stristr(*(char **)(param_1 + 0x20),"raw");
  lVar7 = StringUtil::stristr(*(char **)(param_1 + 0x20),"hdr");
  lVar8 = StringUtil::stristr(*(char **)(param_1 + 0x20),"alpha");
  uVar14 = *(uint *)(param_1 + 0x30);
  uVar12 = *(uint *)(param_1 + 0x80);
  bVar3 = *(bool *)(param_1 + 0x90);
  uVar13 = *(uint *)(param_1 + 0xa0);
  uVar2 = *(uint *)(param_1 + 0xb0);
  local_b0[5] = (uchar *)0x0;
  local_b0[4] = (uchar *)0x0;
  local_b0[3] = (uchar *)0x0;
  local_b0[2] = (uchar *)0x0;
  local_b0[1] = (uchar *)0x0;
  local_b0[0] = (uchar *)0x0;
  local_23c = 0;
  lVar9 = EngineManager::getInstance();
  uVar10 = RenderQueueUtil::render360ScreenShot
                     (*(Renderer **)(lVar9 + 0xb8),uVar1,lVar6 != 0,lVar7 != 0,lVar8 != 0,uVar14,
                      uVar12,bVar3,uVar13,uVar2,false,false,0.5,local_b0,&local_23c);
  uVar11 = 0;
  if ((uVar10 & 1) != 0) {
    RenderDeviceManager::getInstance();
    iVar5 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar5 == 0) {
      uVar14 = 0;
    }
    else {
      RenderDeviceManager::getInstance();
      iVar5 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar5 == 4) {
        uVar14 = 0;
      }
      else {
        RenderDeviceManager::getInstance();
        iVar5 = RenderDeviceManager::getCurrentRenderDeviceType();
        uVar14 = (uint)(iVar5 != 5);
      }
    }
    local_100 = 0x100000001;
    uVar12 = 3;
    if (lVar8 != 0) {
      uVar12 = 4;
    }
    uVar13 = 8;
    if (lVar7 == 0) {
      uVar13 = 1;
    }
    local_d0 = 0;
    uStack_c8 = 3;
    local_f8 = (ulong)uVar12 << 0x20;
    uStack_f0 = (ulong)uVar13;
    local_138 = "right";
    local_130 = &DAT_004fbeb3;
    local_128 = &DAT_00512607;
    puStack_120 = &DAT_004e7e57;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    uStack_d8 = 0;
    lVar6 = 0;
    local_e8 = local_23c;
    local_118 = &DAT_0050ae26;
    pcStack_110 = "front";
    uVar11 = 1;
    local_108 = uVar1;
    uStack_104 = uVar1;
    while( true ) {
      local_e0 = (void *)0x0;
      FUN_0076dd94(acStack_238);
      local_e0 = *(void **)((long)local_b0 + lVar6);
      uVar10 = ImageSaveUtil::saveImage(acStack_238,(ImageDesc *)&local_108,true);
      if ((uVar10 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 0078b748 to 0078b74f has its CatchHandler @ 0078b7c0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: could not write file \'%s\'\n",acStack_238);
        uVar11 = 0;
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 0078b710 to 0078b717 has its CatchHandler @ 0078b7c4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Info: Wrote file \'%s\'\n",acStack_238);
      }
      uStack_c8 = CONCAT44(uVar14,(undefined4)uStack_c8);
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
      }
      local_e0 = (void *)0x0;
      local_e8 = 0;
      if (lVar6 == 0x28) break;
      lVar6 = lVar6 + 8;
    }
  }
  *(undefined *)(param_1 + 0x100) = uVar11;
  *(undefined4 *)(param_1 + 0x108) = 3;
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


