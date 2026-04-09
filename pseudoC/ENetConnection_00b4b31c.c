// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ENetConnection
// Entry Point: 00b4b31c
// Size: 272 bytes
// Signature: undefined __thiscall ENetConnection(ENetConnection * this)


/* ENetConnection::ENetConnection() */

void __thiscall ENetConnection::ENetConnection(ENetConnection *this)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  AuthenticatedEncryption::AuthenticatedEncryption((AuthenticatedEncryption *)(this + 0x20));
  *(undefined8 *)this = 0;
  this[0x458] = (ENetConnection)0x0;
  *(undefined8 *)(this + 0x480) = 0xffffffff;
  *(undefined8 *)(this + 0x478) = 0xffffffff;
  *(undefined8 *)(this + 0x490) = 0xffffffff;
  *(undefined8 *)(this + 0x488) = 0xffffffff;
  *(undefined8 *)(this + 0x4a0) = 0xffffffff;
  *(undefined8 *)(this + 0x498) = 0xffffffff;
  *(undefined8 *)(this + 0x4b0) = 0xffffffff;
  *(undefined8 *)(this + 0x4a8) = 0xffffffff;
  this[0xc] = (ENetConnection)0x1;
  *(undefined4 *)(this + 0x468) = 0x10000;
                    /* try { // try from 00b4b374 to 00b4b3c7 has its CatchHandler @ 00b4b440 */
  pvVar2 = operator_new__(0x10000);
  *(void **)(this + 0x460) = pvVar2;
  *(undefined4 *)(this + 0x474) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x46c) = 0;
  iVar1 = enet_time_get();
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(int *)(this + 0x4bc) = iVar1 + 6000;
  if (((SecureRandomGeneratorManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SecureRandomGeneratorManager::getInstance()::instance),
     iVar1 != 0)) {
                    /* try { // try from 00b4b3f4 to 00b4b3ff has its CatchHandler @ 00b4b42c */
    SecureRandomGeneratorManager::SecureRandomGeneratorManager
              ((SecureRandomGeneratorManager *)SecureRandomGeneratorManager::getInstance()::instance
              );
    __cxa_atexit(SecureRandomGeneratorManager::~SecureRandomGeneratorManager,
                 SecureRandomGeneratorManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&SecureRandomGeneratorManager::getInstance()::instance);
  }
  uVar3 = SecureRandomGeneratorManager::createRandomGenerator
                    ((SecureRandomGeneratorManager *)
                     SecureRandomGeneratorManager::getInstance()::instance,true);
  *(undefined8 *)(this + 0x450) = uVar3;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x4c4) = 0xffffffff;
  return;
}


