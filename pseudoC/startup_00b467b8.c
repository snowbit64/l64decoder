// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startup
// Entry Point: 00b467b8
// Size: 908 bytes
// Signature: undefined __thiscall startup(ENetNetworkManager * this, ushort param_1, int param_2, ushort param_3, char * param_4, uchar * param_5, uint param_6, uchar * param_7, uint param_8)


/* ENetNetworkManager::startup(unsigned short, int, unsigned short, char const*, unsigned char
   const*, unsigned int, unsigned char const*, unsigned int) */

void __thiscall
ENetNetworkManager::startup
          (ENetNetworkManager *this,ushort param_1,int param_2,ushort param_3,char *param_4,
          uchar *param_5,uint param_6,uchar *param_7,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  Thread *this_00;
  ulong uVar8;
  uint *puVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_78;
  ushort local_74;
  socklen_t local_6c;
  sockaddr local_68;
  uint local_58 [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_6 == 0x40) && (param_8 == 0x20)) {
    if (*(long *)(this + 8) == 0) {
      if (param_1 < 0x1fff) {
        uVar15 = *(undefined8 *)(param_5 + 0x20);
        uVar14 = *(undefined8 *)(param_5 + 0x38);
        uVar13 = *(undefined8 *)(param_5 + 0x30);
        uVar19 = *(undefined8 *)(param_5 + 8);
        uVar18 = *(undefined8 *)param_5;
        uVar17 = *(undefined8 *)(param_5 + 0x18);
        uVar16 = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(this + 0x178) = *(undefined8 *)(param_5 + 0x28);
        *(undefined8 *)(this + 0x170) = uVar15;
        *(undefined8 *)(this + 0x188) = uVar14;
        *(undefined8 *)(this + 0x180) = uVar13;
        *(undefined8 *)(this + 0x158) = uVar19;
        *(undefined8 *)(this + 0x150) = uVar18;
        *(undefined8 *)(this + 0x168) = uVar17;
        *(undefined8 *)(this + 0x160) = uVar16;
        uVar16 = *(undefined8 *)(param_7 + 8);
        uVar15 = *(undefined8 *)param_7;
        uVar14 = *(undefined8 *)(param_7 + 0x18);
        uVar13 = *(undefined8 *)(param_7 + 0x10);
        *(int *)(this + 0x68) = param_2;
        *(undefined8 *)(this + 0x198) = uVar16;
        *(undefined8 *)(this + 400) = uVar15;
        *(undefined8 *)(this + 0x1a8) = uVar14;
        *(undefined8 *)(this + 0x1a0) = uVar13;
        Mutex::enterCriticalSection();
        if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
          local_78 = 0;
        }
        else {
          NetworkAddress::NetworkAddress((NetworkAddress *)local_58,param_4,param_3);
          local_78 = local_58[0];
        }
        local_74 = param_3;
        lVar7 = enet_host_create(&local_78,param_1,0,0,0);
        *(long *)(this + 8) = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x2b18) = 0x8000000;
          *(undefined8 *)(lVar7 + 0x2b10) = 0x8000000;
          *(code **)(lVar7 + 0x2af0) = eNetInterceptCallack;
          uVar5 = Network::getLocalAddresses(local_58,4);
          if (uVar5 != 0) {
            local_68.sa_family = 0;
            local_68.sa_data[0] = '\0';
            local_68.sa_data[1] = '\0';
            local_68.sa_data[2] = '\0';
            local_68.sa_data[3] = '\0';
            local_68.sa_data[4] = '\0';
            local_68.sa_data[5] = '\0';
            local_68.sa_data[6] = '\0';
            local_68.sa_data[7] = '\0';
            local_68.sa_data[8] = '\0';
            local_68.sa_data[9] = '\0';
            local_68.sa_data[10] = '\0';
            local_68.sa_data[11] = '\0';
            local_68.sa_data[12] = '\0';
            local_68.sa_data[13] = '\0';
            uVar12 = (ulong)uVar5;
            local_6c = 0x10;
            iVar6 = getsockname(**(int **)(this + 8),&local_68,&local_6c);
            uVar8 = 0;
            uVar2 = (ushort)local_68.sa_data._0_2_ >> 8 |
                    (ushort)(((ushort)local_68.sa_data._0_2_ & 0xff00ff) << 8);
            if (iVar6 != 0) {
              uVar2 = 0;
            }
            if (uVar5 != 1) {
              uVar8 = uVar12 & 0xfffffffe;
              puVar10 = (ushort *)(this + 0x13c);
              puVar9 = local_58 + 1;
              uVar11 = uVar8;
              do {
                uVar5 = puVar9[-1];
                uVar1 = *puVar9;
                puVar10[-4] = uVar2;
                uVar11 = uVar11 - 2;
                *puVar10 = uVar2;
                puVar9 = puVar9 + 2;
                *(uint *)(puVar10 + -6) = uVar5;
                *(uint *)(puVar10 + -2) = uVar1;
                puVar10 = puVar10 + 8;
              } while (uVar11 != 0);
              if (uVar8 == uVar12) goto LAB_00b46a0c;
            }
            lVar7 = uVar12 - uVar8;
            puVar10 = (ushort *)(this + uVar8 * 8 + 0x134);
            puVar9 = local_58 + uVar8;
            do {
              uVar5 = *puVar9;
              *puVar10 = uVar2;
              lVar7 = lVar7 + -1;
              *(uint *)(puVar10 + -2) = uVar5;
              puVar10 = puVar10 + 4;
              puVar9 = puVar9 + 1;
            } while (lVar7 != 0);
          }
        }
LAB_00b46a0c:
        Mutex::leaveCriticalSection();
        if (*(long *)(this + 8) != 0) {
          this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00b46a28 to 00b46a2b has its CatchHandler @ 00b46b64 */
          Thread::Thread(this_00);
          *(Thread **)(this + 0x70) = this_00;
          Thread::start(this_00,updateThreadCallback,this,0xffffffff,"GIANTS NetworkManager",2,
                        0x80000);
          bVar4 = *(long *)(this + 8) != 0;
          goto LAB_00b4684c;
        }
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00b46b08 to 00b46b13 has its CatchHandler @ 00b46b44 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: maxConnections is too big. Maximal number of connections allowed: %u.\n"
                          ,0x1ffe);
      }
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00b46ac0 to 00b46acb has its CatchHandler @ 00b46b48 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Startup called multiple times without calling shutdown.\n");
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00b46a78 to 00b46a83 has its CatchHandler @ 00b46b4c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid network key sizes.\n");
  }
  bVar4 = false;
LAB_00b4684c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


