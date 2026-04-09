// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ENetNetworkManager
// Entry Point: 00b460fc
// Size: 512 bytes
// Signature: undefined __thiscall ENetNetworkManager(ENetNetworkManager * this)


/* ENetNetworkManager::ENetNetworkManager() */

void __thiscall ENetNetworkManager::ENetNetworkManager(ENetNetworkManager *this)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uchar local_78 [4];
  undefined local_74;
  undefined local_70;
  undefined local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  *(ENetNetworkManager **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__ENetNetworkManager_00fe9c60;
  *(ENetNetworkManager **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(ENetNetworkManager **)(this + 0x48) = this + 0x50;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00b4617c to 00b46187 has its CatchHandler @ 00b46318 */
  Mutex::Mutex((Mutex *)(this + 0x78),true);
                    /* try { // try from 00b4618c to 00b4619b has its CatchHandler @ 00b46310 */
  Event::Event((Event *)(this + 0xa0),false,false);
  bVar2 = DAT_0211a720;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  if ((bVar2 & 1) == 0) {
    DAT_0211a720 = 1;
                    /* try { // try from 00b461bc to 00b46223 has its CatchHandler @ 00b46320 */
    enet_initialize();
    FUN_006c76e4(enet_deinitialize);
    enet_time_set(0);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x68) = 10;
  if (((SecureRandomGeneratorManager::getInstance()::instance & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&SecureRandomGeneratorManager::getInstance()::instance),
     iVar3 != 0)) {
                    /* try { // try from 00b462c0 to 00b462cb has its CatchHandler @ 00b462fc */
    SecureRandomGeneratorManager::SecureRandomGeneratorManager
              ((SecureRandomGeneratorManager *)SecureRandomGeneratorManager::getInstance()::instance
              );
    __cxa_atexit(SecureRandomGeneratorManager::~SecureRandomGeneratorManager,
                 SecureRandomGeneratorManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&SecureRandomGeneratorManager::getInstance()::instance);
  }
  SecureRandomGeneratorManager::initialize();
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x1b0] = (ENetNetworkManager)0x1;
  *(undefined4 *)(this + 100) = 0;
  MD5Hash::getMD5Hash((uchar *)0x0,0,local_78);
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(uint *)(this + 0x60) = CONCAT13(local_6c,CONCAT12(local_70,CONCAT11(local_74,local_78[0])));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined2 *)(this + 0x134) = 0xffff;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined2 *)(this + 0x13c) = 0xffff;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined2 *)(this + 0x144) = 0xffff;
  *(undefined2 *)(this + 0x14c) = 0xffff;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


