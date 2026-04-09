// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleNewConnection
// Entry Point: 00b48928
// Size: 884 bytes
// Signature: undefined __thiscall handleNewConnection(ENetNetworkManager * this, _ENetPeer * param_1, uint param_2)


/* ENetNetworkManager::handleNewConnection(_ENetPeer*, unsigned int) */

void __thiscall
ENetNetworkManager::handleNewConnection(ENetNetworkManager *this,_ENetPeer *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ENetConnection *this_00;
  undefined8 *puVar5;
  DisconnectType DVar6;
  long **pplVar7;
  ENetNetworkManager **ppEVar8;
  long *plVar9;
  long **pplVar10;
  ENetNetworkManager **ppEVar11;
  ENetNetworkManager **ppEVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pplVar13 = (long **)(this + 0x30);
  pplVar7 = (long **)*pplVar13;
  uVar1 = *(uint *)(param_1 + 0x24);
  pplVar10 = pplVar13;
  if (pplVar7 != (long **)0x0) {
    do {
      if (pplVar7[4] >= param_1) {
        pplVar10 = pplVar7;
      }
      pplVar7 = (long **)pplVar7[pplVar7[4] < param_1];
    } while (pplVar7 != (long **)0x0);
    if ((pplVar10 != pplVar13) && (pplVar10[4] <= param_1)) {
      if (((_ENetPeer *)*pplVar10[5] == param_1) &&
         ((uVar4 = ENetConnection::isIncomingConnection(), (uVar4 & 1) == 0 &&
          (uVar4 = ENetConnection::getAllowsHandshake(), (uVar4 & 1) != 0)))) {
        ENetConnection::startHandshake();
        Event::post();
        goto LAB_00b48c6c;
      }
      ENetConnection::disconnect((ENetConnection *)pplVar10[5],6);
      local_78 = 0;
      local_70 = *(undefined4 *)((long)pplVar10[5] + 0x4c4);
      local_64 = 0xffffffff00000007;
      local_80[0] = 3;
      FUN_00b4b154(this + 0x118,local_80);
      deletePeerByPeer(this,(__map_iterator)pplVar10);
    }
  }
  this_00 = (ENetConnection *)operator_new(0x4c8);
                    /* try { // try from 00b48a28 to 00b48a2b has its CatchHandler @ 00b48c9c */
  ENetConnection::ENetConnection(this_00);
  ENetConnection::setENetPeer(this_00,param_1);
  ppEVar8 = (ENetNetworkManager **)(this + 0x50);
  ppEVar11 = (ENetNetworkManager **)*ppEVar8;
  ppEVar12 = ppEVar8;
  if (ppEVar11 == (ENetNetworkManager **)0x0) {
LAB_00b48a74:
    uVar4 = ENetConnection::initAsResponder
                      (this_00,(uchar *)(this + 0x150),0x40,(uchar *)(this + 400),0x20);
    if ((uVar4 & 1) != 0) {
      if (*(uint *)(this + 0x60) == param_2) {
        if ((ulong)*(uint *)(this + 100) <= *(ulong *)(this + 0x20)) {
          DVar6 = 3;
          goto LAB_00b48ac4;
        }
      }
      else {
        DVar6 = 5;
LAB_00b48ac4:
        ENetConnection::disconnect(this_00,DVar6);
      }
      pplVar7 = (long **)(this + 0x18);
      pplVar14 = (long **)*pplVar7;
      uVar1 = *(int *)(this + 0x40) + 1;
      *(uint *)(this + 0x40) = uVar1;
      *(uint *)(this_00 + 0x4c4) = uVar1;
      pplVar10 = pplVar7;
      if (pplVar14 == (long **)0x0) {
LAB_00b48b4c:
        plVar9 = *pplVar7;
        pplVar15 = pplVar7;
      }
      else {
        pplVar7 = (long **)(this + 0x18);
        do {
          while (pplVar15 = pplVar14, pplVar10 = pplVar15, *(uint *)(pplVar15 + 4) <= uVar1) {
            if (uVar1 <= *(uint *)(pplVar15 + 4)) goto LAB_00b48b4c;
            pplVar7 = pplVar15 + 1;
            pplVar14 = (long **)*pplVar7;
            if ((long **)*pplVar7 == (long **)0x0) goto LAB_00b48b4c;
          }
          pplVar7 = pplVar15;
          pplVar14 = (long **)*pplVar15;
        } while ((long **)*pplVar15 != (long **)0x0);
        plVar9 = *pplVar15;
      }
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)operator_new(0x30);
        *(uint *)(plVar9 + 4) = uVar1;
        plVar9[5] = (long)this_00;
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar9[2] = (long)pplVar10;
        *pplVar15 = plVar9;
        if (**(long **)(this + 0x10) != 0) {
          *(long *)(this + 0x10) = **(long **)(this + 0x10);
          plVar9 = *pplVar15;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)plVar9);
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
        pplVar10 = (long **)*pplVar13;
      }
      else {
        pplVar10 = (long **)*pplVar13;
      }
      if (pplVar10 == (long **)0x0) {
        plVar9 = *pplVar13;
        pplVar7 = pplVar13;
      }
      else {
        pplVar7 = (long **)(this + 0x30);
LAB_00b48b68:
        do {
          pplVar13 = pplVar10;
          if (pplVar13[4] <= param_1) {
            if (pplVar13[4] < param_1) {
              pplVar7 = pplVar13 + 1;
              pplVar10 = (long **)*pplVar7;
              if ((long **)*pplVar7 != (long **)0x0) goto LAB_00b48b68;
            }
            plVar9 = *pplVar7;
            goto joined_r0x00b48bf0;
          }
          pplVar10 = (long **)*pplVar13;
          pplVar7 = pplVar13;
        } while ((long **)*pplVar13 != (long **)0x0);
        plVar9 = *pplVar13;
      }
joined_r0x00b48bf0:
      if (plVar9 == (long *)0x0) {
        puVar5 = (undefined8 *)operator_new(0x30);
        puVar5[4] = param_1;
        puVar5[5] = this_00;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = pplVar13;
        *pplVar7 = puVar5;
        if (**(long **)(this + 0x28) != 0) {
          *(long *)(this + 0x28) = **(long **)(this + 0x28);
          puVar5 = *pplVar7;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x30),(__tree_node_base *)puVar5);
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
      }
      goto LAB_00b48c6c;
    }
    DVar6 = 6;
  }
  else {
    do {
      bVar3 = *(uint *)((long)ppEVar11 + 0x1c) < uVar1;
      if (!bVar3) {
        ppEVar12 = ppEVar11;
      }
      ppEVar11 = (ENetNetworkManager **)ppEVar11[bVar3];
    } while (ppEVar11 != (ENetNetworkManager **)0x0);
    if ((ppEVar12 == ppEVar8) || (uVar1 < *(uint *)((long)ppEVar12 + 0x1c))) goto LAB_00b48a74;
    DVar6 = 4;
  }
  ENetConnection::disconnect(this_00,DVar6);
  ENetConnection::~ENetConnection(this_00);
  operator_delete(this_00);
LAB_00b48c6c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


