// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b39ed8
// Size: 1692 bytes
// Signature: undefined __cdecl update(float param_1)


/* MasterServerManager::update(float) */

void MasterServerManager::update(float param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  MasterServerManager *in_x0;
  long *plVar8;
  long lVar9;
  ENetNetworkManager *pEVar10;
  MasterServerManager *pMVar11;
  GenericMpManager *this;
  ulong uVar12;
  LuauScriptSystem *pLVar13;
  undefined4 uVar14;
  MasterServerManager *pMVar15;
  char *pcVar16;
  undefined8 local_1b0;
  undefined4 local_1a8 [2];
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined4 local_100;
  undefined2 local_fc;
  undefined local_fa;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined local_ea;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined local_da;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined local_ca;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  undefined4 local_80;
  undefined2 local_7c;
  undefined local_7a;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  undefined4 local_50;
  undefined2 local_4c;
  undefined local_4a;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(int *)(in_x0 + 0x178) == 7) {
    ENetNetworkManager::getInstance();
    uVar6 = ENetNetworkManager::getTime();
    uVar1 = *(uint *)(in_x0 + 400);
    if ((uVar1 != 0) && (uVar1 < uVar6)) {
      iVar7 = *(int *)(in_x0 + 0x1d0);
      if (iVar7 == 1) {
        *(undefined4 *)(in_x0 + 0x1c4) = 0;
        *(undefined4 *)(in_x0 + 0x1d0) = 2;
LAB_00b3a1f8:
        sendNatPunch(in_x0,0,*(NetworkAddress *)(in_x0 + 0x198),false);
        iVar7 = *(int *)(in_x0 + 0x1c8);
        *(int *)(in_x0 + 0x1c8) = iVar7 + 1;
        if (iVar7 < 7) {
          *(uint *)(in_x0 + 400) = uVar1 + 0x32;
LAB_00b3a288:
          if (*(int *)(in_x0 + 0x1d0) == 4) {
            sendNatPunch(in_x0,1,(NetworkAddress)*(undefined8 *)(in_x0 + 0x198),(bool)in_x0[0x1c0]);
            *(uint *)(in_x0 + 400) = uVar1 + 0x32;
            if (*(uint *)(in_x0 + 0x1cc) <= uVar1 + 0x32) goto LAB_00b3a2bc;
          }
          goto LAB_00b3a2cc;
        }
        iVar7 = *(int *)(in_x0 + 0x1c4);
        *(undefined4 *)(in_x0 + 0x1c8) = 0;
        *(int *)(in_x0 + 0x1c4) = iVar7 + 1;
        if (iVar7 < 0x10) {
          *(uint *)(in_x0 + 400) = uVar1 + 100;
          goto LAB_00b3a288;
        }
LAB_00b3a2bc:
        uVar14 = 3;
        iVar7 = uVar1 + 100;
      }
      else {
        if (iVar7 != 0) {
LAB_00b3a1e4:
          if (iVar7 == 3) {
            setNatPunchFinished(in_x0,false);
          }
          else if (iVar7 == 2) goto LAB_00b3a1f8;
          goto LAB_00b3a288;
        }
        sendNatPunch(in_x0,0,(NetworkAddress)
                             *(undefined8 *)(in_x0 + (long)*(int *)(in_x0 + 0x1c4) * 8 + 0x1a0),true
                    );
        iVar2 = *(int *)(in_x0 + 0x1c8);
        iVar7 = *(int *)(in_x0 + 0x1c4);
        *(int *)(in_x0 + 0x1c8) = iVar2 + 1;
        if (0 < iVar2) {
          iVar7 = iVar7 + 1;
          *(undefined4 *)(in_x0 + 0x1c8) = 0;
          *(int *)(in_x0 + 0x1c4) = iVar7;
        }
        if (iVar7 < 4) {
          iVar7 = *(int *)(in_x0 + 0x1d0);
          *(uint *)(in_x0 + 400) = uVar1 + 0xf;
          goto LAB_00b3a1e4;
        }
        uVar14 = 1;
        iVar7 = uVar1 + 0x1e;
      }
      *(undefined4 *)(in_x0 + 0x1d0) = uVar14;
      *(int *)(in_x0 + 400) = iVar7;
    }
  }
  else if ((*(int *)(in_x0 + 0x178) == 4) && (in_x0[0x170] != (MasterServerManager)0x0)) {
    pcVar16 = *(char **)(in_x0 + (ulong)*(uint *)(in_x0 + 0x174) * 8 + 0x4a0);
    uVar3 = *(ushort *)(in_x0 + (ulong)*(uint *)(in_x0 + 0x174) * 2 + 0x4b0);
    RenderDeviceManager::getInstance();
    plVar8 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    (**(code **)(*plVar8 + 0xa8))();
    bVar5 = NetworkAddress::set((NetworkAddress *)&local_1b0,pcVar16,uVar3);
    RenderDeviceManager::getInstance();
    plVar8 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    (**(code **)(*plVar8 + 0xb0))();
    if ((bVar5 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00b3a538 to 00b3a543 has its CatchHandler @ 00b3a574 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Could not resolve master server host name.\n");
    }
    lVar9 = ENetNetworkManager::getInstance();
    *(MasterServerManager **)(lVar9 + 0x1b8) = in_x0;
    if ((in_x0[0x171] == (MasterServerManager)0x0 | (bVar5 ^ 0xff) & 1) == 0) {
      pEVar10 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
      uVar12 = ENetNetworkManager::connect(pEVar10,local_1b0,in_x0 + 0x128,0x40,0,0,0,in_x0 + 0x188)
      ;
      if ((uVar12 & 1) != 0) {
        in_x0[0x17c] = (MasterServerManager)0x1;
        *(undefined4 *)(in_x0 + 0x178) = 1;
        goto LAB_00b3a2cc;
      }
    }
    local_19a = 0;
    local_19c = 0;
    local_190 = 0;
    local_18a = 0;
    local_18c = 0;
    local_180 = 0;
    local_17a = 0;
    local_17c = 0;
    local_170 = 0;
    local_16a = 0;
    local_16c = 0;
    local_160 = 0;
    local_15a = 0;
    local_15c = 0;
    local_150 = 0;
    local_14a = 0;
    local_14c = 0;
    local_140 = 0;
    local_13a = 0;
    local_13c = 0;
    local_130 = 0;
    local_12a = 0;
    local_12c = 0;
    local_120 = 0;
    local_11a = 0;
    local_11c = 0;
    local_110 = 0;
    local_10a = 0;
    local_10c = 0;
    local_100 = 0;
    local_fa = 0;
    local_fc = 0;
    local_f0 = 0;
    local_ea = 0;
    local_ec = 0;
    local_e0 = 0;
    local_da = 0;
    local_dc = 0;
    local_d0 = 0;
    local_ca = 0;
    local_cc = 0;
    local_c0 = 0;
    local_ba = 0;
    local_bc = 0;
    local_b0 = 0;
    local_aa = 0;
    local_ac = 0;
    local_a0 = 0;
    local_9a = 0;
    local_9c = 0;
    local_90 = 0;
    local_8a = 0;
    local_8c = 0;
    local_80 = 0;
    local_7a = 0;
    local_7c = 0;
    local_70 = 0;
    local_6a = 0;
    local_6c = 0;
    local_60 = 0;
    local_5a = 0;
    local_5c = 0;
    local_50 = 0;
    local_4a = 0;
    local_4c = 0;
    local_1a8[0] = 1;
    local_1a0 = 1;
    ScriptSystemManager::getInstance();
    pLVar13 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pMVar11 = in_x0 + 0x299;
    if (((byte)in_x0[0x298] & 1) != 0) {
      pMVar11 = *(MasterServerManager **)(in_x0 + 0x2a8);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar13,(char *)pMVar11,(MethodInvocation *)local_1a8,1,0,*(void **)(in_x0 + 0x328));
    if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
      operator_delete(*(void **)(in_x0 + 0x4b8));
    }
    *(undefined8 *)(in_x0 + 0x4b8) = 0;
    in_x0[0x4c0] = (MasterServerManager)0x0;
  }
LAB_00b3a2cc:
  pMVar11 = *(MasterServerManager **)(in_x0 + 0x4b8);
  if (pMVar11 == (MasterServerManager *)0x0) goto LAB_00b3a344;
  in_x0[0x4c0] = *pMVar11;
  if (((byte)in_x0[0x4c8] & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x4c8) = 0;
    *pMVar11 = (MasterServerManager)0x0;
    pMVar15 = pMVar11;
LAB_00b3a30c:
    operator_delete(pMVar15);
  }
  else {
    **(undefined **)(in_x0 + 0x4d8) = 0;
    pMVar15 = *(MasterServerManager **)(in_x0 + 0x4b8);
    *(undefined8 *)(in_x0 + 0x4d0) = 0;
    *pMVar11 = (MasterServerManager)0x0;
    if (pMVar15 != (MasterServerManager *)0x0) goto LAB_00b3a30c;
  }
  *(undefined8 *)(in_x0 + 0x4b8) = 0;
  if ((*(uint *)(in_x0 + 0x178) == 9 || (*(uint *)(in_x0 + 0x178) & 0xfffffffb) == 2) &&
     (in_x0[0x4c0] != (MasterServerManager)0x0)) {
    sendConnectionRequest();
  }
LAB_00b3a344:
  if (in_x0[0x4e0] != (MasterServerManager)0x0) {
    this = (GenericMpManager *)GenericMpManager::getInstance();
    uVar12 = GenericMpManager::checkGetSessionData
                       (this,(bool *)(in_x0 + 0x4e1),(basic_string *)(in_x0 + 0x4e8));
    if ((uVar12 & 1) != 0) {
      in_x0[0x4e0] = (MasterServerManager)0x0;
      if (in_x0[0x38] == (MasterServerManager)0x0) {
        if (*(int *)(in_x0 + 0x330) == 2) {
          if (in_x0[0x4e1] == (MasterServerManager)0x0) {
            local_19a = 0;
            local_19c = 0;
            local_190 = 0;
            local_18a = 0;
            local_18c = 0;
            local_180 = 0;
            local_17a = 0;
            local_17c = 0;
            local_170 = 0;
            local_16a = 0;
            local_16c = 0;
            local_160 = 0;
            local_15a = 0;
            local_15c = 0;
            local_150 = 0;
            local_14a = 0;
            local_14c = 0;
            local_140 = 0;
            local_13a = 0;
            local_13c = 0;
            local_130 = 0;
            local_12a = 0;
            local_12c = 0;
            local_120 = 0;
            local_11a = 0;
            local_11c = 0;
            local_110 = 0;
            local_10a = 0;
            local_10c = 0;
            local_100 = 0;
            local_fa = 0;
            local_fc = 0;
            local_f0 = 0;
            local_ea = 0;
            local_ec = 0;
            local_e0 = 0;
            local_da = 0;
            local_dc = 0;
            local_d0 = 0;
            local_ca = 0;
            local_cc = 0;
            local_c0 = 0;
            local_ba = 0;
            local_bc = 0;
            local_b0 = 0;
            local_aa = 0;
            local_ac = 0;
            local_a0 = 0;
            local_9a = 0;
            local_9c = 0;
            local_90 = 0;
            local_8a = 0;
            local_8c = 0;
            local_80 = 0;
            local_7a = 0;
            local_7c = 0;
            local_70 = 0;
            local_6a = 0;
            local_6c = 0;
            local_5a = 0;
            local_5c = 0;
            local_4a = 0;
            local_4c = 0;
            local_60 = 0;
            local_50 = 0;
            local_1a8[0] = 1;
            local_1a0 = 1;
            ScriptSystemManager::getInstance();
            pLVar13 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
            pMVar11 = in_x0 + 0x371;
            if (((byte)in_x0[0x370] & 1) != 0) {
              pMVar11 = *(MasterServerManager **)(in_x0 + 0x380);
            }
            LuauScriptSystem::invokeScriptMethod
                      (pLVar13,(char *)pMVar11,(MethodInvocation *)local_1a8,1,0,
                       *(void **)(in_x0 + 0x388));
          }
          else {
            sendConnectionToServerRequest((uint)in_x0,*(uint *)(in_x0 + 0x350));
          }
        }
      }
      else {
        sendAddServer();
      }
    }
  }
  checkAllRelayServerPingRequests();
  if (*(int *)(in_x0 + 0x430) != *(int *)(in_x0 + 0x434)) {
    forwardServerOverview();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


