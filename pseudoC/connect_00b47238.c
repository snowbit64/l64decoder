// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connect
// Entry Point: 00b47238
// Size: 1320 bytes
// Signature: undefined __thiscall connect(ENetNetworkManager * this, NetworkAddress param_1, uchar * param_2, uint param_3, char * param_4, uint param_5, uchar * param_6, uint * param_7)


/* ENetNetworkManager::connect(NetworkAddress, unsigned char const*, unsigned int, char const*,
   unsigned int, unsigned char*, unsigned int&) */

void __thiscall
ENetNetworkManager::connect
          (ENetNetworkManager *this,undefined8 param_2,uchar *param_3,uint param_4,uchar *param_5,
          uint param_6,ulong *param_7,uint *param_8)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  undefined2 uVar4;
  bool bVar5;
  int iVar6;
  ENetConnection *this_00;
  ulong uVar7;
  _ENetPeer *p_Var8;
  long **pplVar9;
  long *plVar10;
  ulong *puVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  int local_78;
  short local_74;
  undefined local_70;
  undefined local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 8) == 0) {
    bVar5 = false;
  }
  else {
    Mutex::enterCriticalSection();
    pplVar12 = (long **)(this + 0x30);
    pplVar9 = *(long ***)(this + 0x28);
    while( true ) {
      sVar1 = (short)((ulong)param_2 >> 0x20);
      if (pplVar9 == pplVar12) break;
      plVar10 = pplVar9[4];
      if (((*(int *)((long)plVar10 + 0x24) == (int)param_2) && (*(short *)(plVar10 + 5) == sVar1))
         && ((puVar11 = (ulong *)plVar10[0x3b], ((ulong)param_7 | (ulong)puVar11) == 0 ||
             (((param_7 != (ulong *)0x0 && (puVar11 != (ulong *)0x0)) &&
              ((*puVar11 ^ *param_7 | puVar11[1] ^ param_7[1] |
                puVar11[2] ^ param_7[2] | puVar11[3] ^ param_7[3] |
               puVar11[4] ^ param_7[4] | puVar11[5] ^ param_7[5]) == 0)))))) {
        *param_8 = *(uint *)((long)pplVar9[5] + 0x4c4);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00b476dc to 00b476e7 has its CatchHandler @ 00b47764 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Already connected to host.\n");
        Mutex::leaveCriticalSection();
        bVar5 = false;
        goto LAB_00b47654;
      }
      pplVar13 = (long **)pplVar9[1];
      if ((long **)pplVar9[1] == (long **)0x0) {
        pplVar13 = pplVar9 + 2;
        bVar5 = (long **)**pplVar13 != pplVar9;
        pplVar9 = (long **)*pplVar13;
        if (bVar5) {
          do {
            plVar10 = *pplVar13;
            pplVar13 = (long **)(plVar10 + 2);
            pplVar9 = (long **)*pplVar13;
          } while (*pplVar9 != plVar10);
        }
      }
      else {
        do {
          pplVar9 = pplVar13;
          pplVar13 = (long **)*pplVar9;
        } while ((long **)*pplVar9 != (long **)0x0);
      }
    }
    this_00 = (ENetConnection *)operator_new(0x4c8);
                    /* try { // try from 00b47384 to 00b47387 has its CatchHandler @ 00b47780 */
    ENetConnection::ENetConnection(this_00);
    uVar7 = ENetConnection::initAsInitiator(this_00,param_3,param_4);
    if ((uVar7 & 1) == 0) {
      ENetConnection::~ENetConnection(this_00);
      operator_delete(this_00);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00b47694 to 00b4769f has its CatchHandler @ 00b47768 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Invalid connection data.\n");
      Mutex::leaveCriticalSection();
      bVar5 = false;
    }
    else {
      MD5Hash::getMD5Hash(param_5,param_6,(uchar *)&local_78);
      uVar4 = CONCAT11((undefined)local_74,(undefined)local_78);
      local_78 = (int)param_2;
      local_74 = sVar1;
      p_Var8 = (_ENetPeer *)
               enet_host_connect(*(undefined8 *)(this + 8),&local_78,0x20,
                                 CONCAT13(local_6c,CONCAT12(local_70,uVar4)),param_7);
      if (p_Var8 == (_ENetPeer *)0x0) {
        ENetConnection::~ENetConnection(this_00);
        operator_delete(this_00);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00b47724 to 00b4772f has its CatchHandler @ 00b47760 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Host connect failed\n");
      }
      else {
        ENetConnection::setENetPeer(this_00,p_Var8);
        pplVar13 = (long **)(this + 0x18);
        pplVar14 = (long **)*pplVar13;
        uVar2 = *(int *)(this + 0x40) + 1;
        *(uint *)(this + 0x40) = uVar2;
        *param_8 = uVar2;
        *(uint *)(this_00 + 0x4c4) = uVar2;
        pplVar9 = pplVar13;
        if (pplVar14 != (long **)0x0) {
          pplVar13 = (long **)(this + 0x18);
          do {
            while (pplVar15 = pplVar14, pplVar9 = pplVar15, uVar2 < *(uint *)(pplVar15 + 4)) {
              pplVar13 = pplVar15;
              pplVar14 = (long **)*pplVar15;
              if ((long **)*pplVar15 == (long **)0x0) {
                plVar10 = *pplVar15;
                goto joined_r0x00b47530;
              }
            }
            if (uVar2 <= *(uint *)(pplVar15 + 4)) break;
            pplVar13 = pplVar15 + 1;
            pplVar14 = (long **)*pplVar13;
          } while ((long **)*pplVar13 != (long **)0x0);
        }
        plVar10 = *pplVar13;
        pplVar15 = pplVar13;
joined_r0x00b47530:
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)operator_new(0x30);
          *(uint *)(plVar10 + 4) = uVar2;
          plVar10[5] = (long)this_00;
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[2] = (long)pplVar9;
          *pplVar15 = plVar10;
          if (**(long **)(this + 0x10) != 0) {
            *(long *)(this + 0x10) = **(long **)(this + 0x10);
            plVar10 = *pplVar15;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)plVar10);
          *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
          pplVar9 = (long **)*pplVar12;
        }
        else {
          pplVar9 = (long **)*pplVar12;
        }
        pplVar13 = pplVar12;
        if (pplVar9 != (long **)0x0) {
          pplVar13 = (long **)(this + 0x30);
          do {
            while (pplVar12 = pplVar9, (_ENetPeer *)pplVar12[4] <= p_Var8) {
              if (p_Var8 <= (_ENetPeer *)pplVar12[4]) goto LAB_00b475ec;
              pplVar13 = pplVar12 + 1;
              pplVar9 = (long **)*pplVar13;
              if ((long **)*pplVar13 == (long **)0x0) goto LAB_00b475ec;
            }
            pplVar9 = (long **)*pplVar12;
            pplVar13 = pplVar12;
          } while ((long **)*pplVar12 != (long **)0x0);
        }
LAB_00b475ec:
        if (*pplVar13 == (long *)0x0) {
          plVar10 = (long *)operator_new(0x30);
          plVar10[4] = (long)p_Var8;
          plVar10[5] = (long)this_00;
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[2] = (long)pplVar12;
          *pplVar13 = plVar10;
          if (**(long **)(this + 0x28) != 0) {
            *(long *)(this + 0x28) = **(long **)(this + 0x28);
            plVar10 = *pplVar13;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x30),(__tree_node_base *)plVar10);
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
        }
        Event::post();
      }
      Mutex::leaveCriticalSection();
      bVar5 = p_Var8 != (_ENetPeer *)0x0;
    }
  }
LAB_00b47654:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


