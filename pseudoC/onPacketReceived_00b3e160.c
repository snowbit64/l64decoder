// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onPacketReceived
// Entry Point: 00b3e160
// Size: 1832 bytes
// Signature: undefined __thiscall onPacketReceived(MasterServerManager * this, PacketReceivedData * param_1)


/* MasterServerManager::onPacketReceived(ENetNetworkManager::PacketReceivedData*) */

undefined4 __thiscall
MasterServerManager::onPacketReceived(MasterServerManager *this,PacketReceivedData *param_1)

{
  MasterServerManager *pMVar1;
  int *piVar2;
  undefined2 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  LuauScriptSystem *this_00;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined auVar12 [12];
  uchar local_1b4 [4];
  ushort local_1b0 [2];
  byte local_1ac [4];
  uint local_1a8 [2];
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
  if ((*(int *)(this + 0x188) != *(int *)(param_1 + 8)) &&
     ((*(uint *)(param_1 + 0x14) & 0xfffffffe) != 0x1a)) {
    uVar11 = 0;
    goto switchD_00b3e1dc_caseD_3;
  }
  uVar11 = 1;
  switch(*(uint *)(param_1 + 0x14)) {
  case 0:
    uVar9 = 8;
    auVar12 = GsBitStream::readBits(*(GsBitStream **)param_1,(uchar *)local_1a8,8,true);
    if ((auVar12 & (undefined  [12])0x1) != (undefined  [12])0x0) {
      switch(local_1a8[0] & 0xff) {
      case 1:
        onConnectionFailed((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 2:
        onConnectionReady((GsBitStream *)this,auVar12._8_4_);
        break;
      case 4:
        onServerInfo((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 6:
        onServerInfoDetails((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 7:
        onServerInfoDetailsFailed((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 10:
      case 0xc:
        initiateSendAddServer();
        break;
      case 0xd:
        onMasterServerList((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 0x14:
        onRequestConnectionToServerFailed((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 0x15:
        onNatRequestConnection(this,*(GsBitStream **)param_1,uVar9,*(uint *)(param_1 + 0x18));
        break;
      case 0x17:
        onNatGetMostRecentExternalPort((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 0x18:
        finishPendingServerRequests(this,true);
        break;
      case 0x19:
        onServerId((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 0x1a:
        onRelayResponse((GsBitStream *)this,(uint)*(undefined8 *)param_1);
        break;
      case 0x1b:
        onRelayServerPing(this,*(GsBitStream **)param_1,*(uint *)(param_1 + 8));
      }
    }
    break;
  case 1:
    iVar6 = *(int *)(this + 0x178);
    if (iVar6 == 1) {
      uVar11 = 2;
    }
    else if (iVar6 == 8) {
      uVar11 = 9;
    }
    else {
      if (iVar6 != 5) break;
      uVar11 = 6;
    }
    *(undefined4 *)(this + 0x178) = uVar11;
    if (*(long *)(this + 0x4b8) == 0) {
      sendConnectionRequest();
    }
    break;
  case 2:
  case 5:
  case 8:
  case 9:
  case 10:
    this[0x17c] = (MasterServerManager)0x0;
    uVar11 = 1;
    finishPendingServerRequests(this,true);
    iVar6 = *(int *)(this + 0x178);
    if (iVar6 != 1) {
      if (iVar6 == 8) {
LAB_00b3e674:
        retryConnection();
        break;
      }
      if (iVar6 != 5) goto switchD_00b3e1dc_caseD_3;
    }
    *(undefined4 *)(this + 0x178) = 0;
    if (this[0x38] != (MasterServerManager)0x0) {
      bVar5 = (bool)GenericMpManager::getInstance();
      GenericMpManager::cleanUpGameSessions(bVar5);
    }
    this[0x38] = (MasterServerManager)0x0;
    local_1a8[0] = 1;
    goto LAB_00b3e49c;
  default:
    goto switchD_00b3e1dc_caseD_3;
  case 6:
  case 7:
    this[0x17c] = (MasterServerManager)0x0;
    uVar7 = finishPendingServerRequests(this,true);
    if ((uVar7 & 1) == 0) {
      uVar9 = *(uint *)(this + 0x178);
      uVar11 = 1;
      if (9 < uVar9) goto switchD_00b3e1dc_caseD_3;
      if ((1 << (ulong)(uVar9 & 0x1f) & 0x16eU) == 0) {
        if ((1 << (ulong)(uVar9 & 0x1f) & 0x280U) == 0) goto switchD_00b3e1dc_caseD_3;
        goto LAB_00b3e674;
      }
    }
    *(undefined4 *)(this + 0x178) = 0;
    if (this[0x38] != (MasterServerManager)0x0) {
      bVar5 = (bool)GenericMpManager::getInstance();
      GenericMpManager::cleanUpGameSessions(bVar5);
    }
    this[0x38] = (MasterServerManager)0x0;
    local_1a8[0] = 6;
LAB_00b3e49c:
    local_4a = 0;
    local_4c = 0;
    local_50 = 0;
    local_5a = 0;
    local_5c = 0;
    local_60 = 0;
    local_6a = 0;
    local_6c = 0;
    local_70 = 0;
    local_7a = 0;
    local_7c = 0;
    local_80 = 0;
    local_8a = 0;
    local_8c = 0;
    local_90 = 0;
    local_9a = 0;
    local_9c = 0;
    local_a0 = 0;
    local_aa = 0;
    local_ac = 0;
    local_b0 = 0;
    local_ba = 0;
    local_bc = 0;
    local_c0 = 0;
    local_ca = 0;
    local_cc = 0;
    local_d0 = 0;
    local_da = 0;
    local_dc = 0;
    local_e0 = 0;
    local_ea = 0;
    local_ec = 0;
    local_f0 = 0;
    local_fa = 0;
    local_fc = 0;
    local_100 = 0;
    local_10a = 0;
    local_10c = 0;
    local_110 = 0;
    local_11a = 0;
    local_11c = 0;
    local_120 = 0;
    local_12a = 0;
    local_12c = 0;
    local_130 = 0;
    local_13a = 0;
    local_13c = 0;
    local_140 = 0;
    local_14a = 0;
    local_14c = 0;
    local_150 = 0;
    local_15a = 0;
    local_15c = 0;
    local_160 = 0;
    local_16a = 0;
    local_16c = 0;
    local_170 = 0;
    local_17a = 0;
    local_17c = 0;
    local_180 = 0;
    local_18a = 0;
    local_18c = 0;
    local_190 = 0;
    local_19a = 0;
    local_19c = 0;
    uVar11 = 1;
    local_1a0 = 1;
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pMVar1 = this + 0x299;
    if (((byte)this[0x298] & 1) != 0) {
      pMVar1 = *(MasterServerManager **)(this + 0x2a8);
    }
    LuauScriptSystem::invokeScriptMethod
              (this_00,(char *)pMVar1,(MethodInvocation *)local_1a8,1,0,*(void **)(this + 0x328));
    goto switchD_00b3e1dc_caseD_3;
  case 0x1a:
    uVar7 = GsBitStream::readBits(*(GsBitStream **)param_1,local_1ac,8,true);
    if (((((uVar7 & 1) != 0) && (local_1ac[0] < 2)) && (*(int *)(this + 400) != 0)) &&
       (GsBitStream::readBits(*(GsBitStream **)param_1,(uchar *)local_1a8,0x10,true),
       (local_1a8[0] & 0xffff) == (uint)*(ushort *)(this + 0x194))) {
      if (local_1ac[0] == 1) {
        local_1b0[0] = 0;
        GsBitStream::readBits(*(GsBitStream **)param_1,(uchar *)local_1b0,0x10,true);
        local_1b4[0] = '\0';
        GsBitStream::readBits(*(GsBitStream **)param_1,local_1b4,1,true);
        if (local_1b4[0] == '\0') {
          *(ushort *)(this + 0x1d4) = local_1b0[0];
        }
        puVar8 = (undefined8 *)(param_1 + 0xc);
        sendNatPunch(this,1,(NetworkAddress)*puVar8,local_1b4[0] != '\0');
        uVar11 = *(undefined4 *)puVar8;
        *(undefined2 *)(this + 0x19c) = *(undefined2 *)(param_1 + 0x10);
        *(undefined4 *)(this + 0x198) = uVar11;
        if (*(int *)(this + 0x330) == 1) {
          *(undefined4 *)(this + 0x330) = 0;
          uVar3 = *(undefined2 *)(param_1 + 0x10);
          uVar11 = *(undefined4 *)puVar8;
          this[0x390] = (MasterServerManager)0x0;
          *(undefined2 *)(this + 0x398) = uVar3;
          *(undefined4 *)(this + 0x394) = uVar11;
          invokeConnectionRequestSucceededCallback();
        }
        setNatPunchFinished(this,true);
      }
      else if (local_1ac[0] == 0) {
        local_1b0[0] = local_1b0[0] & 0xff00;
        GsBitStream::readBits(*(GsBitStream **)param_1,(uchar *)local_1b0,1,true);
        if (*(int *)(this + 0x1d0) != 4) {
          uVar11 = *(undefined4 *)(param_1 + 0xc);
          *(undefined2 *)(this + 0x19c) = *(undefined2 *)(param_1 + 0x10);
          *(undefined4 *)(this + 0x198) = uVar11;
          this[0x1c0] = local_1b0[0]._0_1_;
          *(undefined4 *)(this + 0x1d0) = 4;
        }
        sendNatPunch(this,1,(NetworkAddress)*(undefined8 *)(this + 0x198),
                     local_1b0[0]._0_1_ != (MasterServerManager)0x0);
      }
    }
    break;
  case 0x1b:
    iVar6 = GsBitStream::getNumBytesUsed();
    if (iVar6 == 8) {
      puVar8 = (undefined8 *)GsBitStream::getData();
      lVar10 = *(long *)(this + 0x1f0);
      if (lVar10 != *(long *)(this + 0x1f8)) {
        do {
          for (piVar2 = *(int **)(lVar10 + 8); piVar2 != *(int **)(lVar10 + 0x10);
              piVar2 = piVar2 + 9) {
            if (*piVar2 == (int)*puVar8) {
              iVar6 = *(int *)(param_1 + 0x18);
              *(short *)((long)piVar2 + 0x16) = (short)((ulong)*puVar8 >> 0x20);
              piVar2[7] = (iVar6 - piVar2[6]) + piVar2[7];
              *(short *)(piVar2 + 8) = *(short *)(piVar2 + 8) + 1;
              goto LAB_00b3e654;
            }
          }
          lVar10 = lVar10 + 0x28;
        } while (lVar10 != *(long *)(this + 0x1f8));
      }
LAB_00b3e654:
      checkAllRelayServerPingRequests();
    }
  }
  uVar11 = 1;
switchD_00b3e1dc_caseD_3:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


