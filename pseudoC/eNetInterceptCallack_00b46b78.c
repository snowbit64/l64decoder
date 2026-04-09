// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eNetInterceptCallack
// Entry Point: 00b46b78
// Size: 580 bytes
// Signature: undefined __cdecl eNetInterceptCallack(_ENetHost * param_1, _ENetEvent * param_2)


/* ENetNetworkManager::eNetInterceptCallack(_ENetHost*, _ENetEvent*) */

void ENetNetworkManager::eNetInterceptCallack(_ENetHost *param_1,_ENetEvent *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  GsBitStream *this;
  ulong uVar10;
  undefined auVar11 [16];
  int local_90 [2];
  GsBitStream *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  int local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x2ad8);
  if (1 < uVar10) {
    uVar2 = **(ushort **)(param_1 + 0x2ad0);
    uVar4 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
    if (((uVar4 ^ 0xffffffff) & 0x1fff) == 0) {
      uVar4 = (uint)(short)uVar4;
      uVar9 = 0;
      if (((int)uVar4 < 0) ||
         (uVar4 = uVar4 >> 0xd & 3, uVar4 == 3 || uVar10 - 0x10001 < 0xffffffffffff0002))
      goto LAB_00b46c2c;
      uVar5 = *(byte *)(*(ushort **)(param_1 + 0x2ad0) + 1) - 0x5b;
      if (uVar5 < 4) {
        if ((DAT_0211a8f8 & 1) == 0) {
          auVar11 = __cxa_guard_acquire(&DAT_0211a8f8);
          param_2 = auVar11._8_8_;
          uVar9 = auVar11._0_8_;
          if (auVar11._0_4_ != 0) {
                    /* try { // try from 00b46d38 to 00b46d43 has its CatchHandler @ 00b46dc0 */
            ENetNetworkManager((ENetNetworkManager *)&DAT_0211a728);
            __cxa_atexit(~ENetNetworkManager,&DAT_0211a728,&PTR_LOOP_00fd8de0);
            auVar11 = __cxa_guard_release(&DAT_0211a8f8);
            param_2 = auVar11._8_8_;
            uVar9 = auVar11._0_8_;
          }
        }
        uVar7 = enet_time_get(uVar9,param_2);
        uVar1 = *(undefined4 *)(param_1 + 0x2ac8);
        uVar3 = *(undefined2 *)(param_1 + 0x2acc);
        this = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 00b46c98 to 00b46c9f has its CatchHandler @ 00b46de8 */
        GsBitStream::GsBitStream
                  (this,(uchar *)(*(long *)(param_1 + 0x2ad0) + 3),(int)uVar10 - 3,true);
        if (((DAT_0211a8f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0211a8f8), iVar8 != 0)) {
                    /* try { // try from 00b46d80 to 00b46d8b has its CatchHandler @ 00b46dbc */
          ENetNetworkManager((ENetNetworkManager *)&DAT_0211a728);
          __cxa_atexit(~ENetNetworkManager,&DAT_0211a728,&PTR_LOOP_00fd8de0);
          __cxa_guard_release(&DAT_0211a8f8);
        }
        local_74 = uVar4 + 0x1a;
        local_80 = 0xffffffff;
        local_90[0] = (int)(char)uVar5;
        local_88 = this;
        uStack_7c = uVar1;
        local_78 = uVar3;
        uStack_70 = uVar7;
        FUN_00b4b154(&DAT_0211a840,local_90);
        uVar9 = 1;
        goto LAB_00b46c2c;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00b46cf0 to 00b46cfb has its CatchHandler @ 00b46dd0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Received unconnected packet with invalid app id.\n");
    }
  }
  uVar9 = 0;
LAB_00b46c2c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


