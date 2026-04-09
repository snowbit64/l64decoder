// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onPacketReceived
// Entry Point: 0075f56c
// Size: 664 bytes
// Signature: undefined __thiscall onPacketReceived(ScriptingNetworkManager * this, PacketReceivedData * param_1)


/* ScriptingNetworkManager::onPacketReceived(ENetNetworkManager::PacketReceivedData*) */

undefined8 __thiscall
ScriptingNetworkManager::onPacketReceived(ScriptingNetworkManager *this,PacketReceivedData *param_1)

{
  ScriptingNetworkManager *pSVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  NetworkStream *this_00;
  ENetNetworkManager *this_01;
  GsBitStream *pGVar5;
  LuauScriptSystem *this_02;
  ulong uVar6;
  ScriptingNetworkManager **ppSVar7;
  ScriptingNetworkManager **ppSVar8;
  ScriptingNetworkManager **ppSVar9;
  undefined4 local_1b8 [2];
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_198;
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
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  ppSVar8 = (ScriptingNetworkManager **)(this + 0x10);
  ppSVar9 = (ScriptingNetworkManager **)*ppSVar8;
  uVar2 = *(uint *)(param_1 + 8);
  ppSVar7 = ppSVar8;
  if (ppSVar9 != (ScriptingNetworkManager **)0x0) {
    do {
      if (*(uint *)(ppSVar9 + 4) >= uVar2) {
        ppSVar7 = ppSVar9;
      }
      ppSVar9 = (ScriptingNetworkManager **)ppSVar9[*(uint *)(ppSVar9 + 4) < uVar2];
    } while (ppSVar9 != (ScriptingNetworkManager **)0x0);
    if ((ppSVar7 != ppSVar8) && (*(uint *)(ppSVar7 + 4) <= uVar2)) {
      this_00 = (NetworkStream *)ppSVar7[5];
      goto LAB_0075f618;
    }
  }
  this_00 = (NetworkStream *)operator_new(0x38);
                    /* try { // try from 0075f5e8 to 0075f5ef has its CatchHandler @ 0075f804 */
  NetworkStream::NetworkStream(this_00,uVar2);
  this_01 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  pGVar5 = (GsBitStream *)ENetNetworkManager::createWriteStream(this_01,2,false);
  NetworkStream::setWriteStream(this_00,pGVar5);
  addAddress(this,this_00);
LAB_0075f618:
  NetworkStream::setReadStream(this_00,*(GsBitStream **)param_1);
  local_1b8[0] = *(undefined4 *)(param_1 + 0x14);
  local_1a8 = *(undefined4 *)(param_1 + 0x18);
  local_19a = 0;
  local_19c = 0;
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
  local_1a0 = 1;
  local_198 = *(undefined4 *)(this_00 + 0x18);
  local_1aa = 0;
  local_1ac = 0;
  local_1b0 = 1;
  local_190 = 1;
  ScriptSystemManager::getInstance();
  this_02 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pSVar1 = this + 0x29;
  if (((byte)this[0x28] & 1) != 0) {
    pSVar1 = *(ScriptingNetworkManager **)(this + 0x38);
  }
  LuauScriptSystem::invokeScriptMethod
            (this_02,(char *)pSVar1,(MethodInvocation *)local_1b8,3,0,*(void **)(this + 0x20));
  NetworkStream::setReadStream(this_00,(GsBitStream *)0x0);
  if ((*(uint *)(param_1 + 0x14) < 0xb) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x14) & 0x1f) & 0x6c4U) != 0)) {
    MasterServerManager::getInstance();
    uVar6 = MasterServerManager::getHasServer();
    if ((uVar6 & 1) == 0) {
      bVar4 = (bool)GenericMpManager::getInstance();
      GenericMpManager::cleanUpGameSessions(bVar4);
    }
    deleteAddress(this,*(uint *)(param_1 + 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


