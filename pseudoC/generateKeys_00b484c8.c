// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateKeys
// Entry Point: 00b484c8
// Size: 260 bytes
// Signature: undefined generateKeys(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetNetworkManager::generateKeys() */

uint ENetNetworkManager::generateKeys(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long in_x0;
  SecureRandomGenerator *pSVar4;
  KeyAgreementCommon aKStack_1c0 [8];
  undefined **local_1b8;
  DL_GroupParameters_EC<CryptoPP::ECP> aDStack_1b0 [376];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  KeyAgreementCommon::KeyAgreementCommon(aKStack_1c0);
  if (((SecureRandomGeneratorManager::getInstance()::instance & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&SecureRandomGeneratorManager::getInstance()::instance),
     iVar3 != 0)) {
                    /* try { // try from 00b48590 to 00b4859b has its CatchHandler @ 00b485cc */
    SecureRandomGeneratorManager::SecureRandomGeneratorManager
              ((SecureRandomGeneratorManager *)SecureRandomGeneratorManager::getInstance()::instance
              );
    __cxa_atexit(SecureRandomGeneratorManager::~SecureRandomGeneratorManager,
                 SecureRandomGeneratorManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&SecureRandomGeneratorManager::getInstance()::instance);
  }
                    /* try { // try from 00b48504 to 00b48533 has its CatchHandler @ 00b485e0 */
  pSVar4 = (SecureRandomGenerator *)
           SecureRandomGeneratorManager::createRandomGenerator
                     ((SecureRandomGeneratorManager *)
                      SecureRandomGeneratorManager::getInstance()::instance,true);
  uVar2 = KeyMaker::GenerateKeyPair
                    ((KeyMaker *)aKStack_1c0,pSVar4,(uchar *)(in_x0 + 0x150),0x40,
                     (uchar *)(in_x0 + 400),0x20);
  local_1b8 = &PTR__DH_Domain_00fe9f08;
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC(aDStack_1b0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


