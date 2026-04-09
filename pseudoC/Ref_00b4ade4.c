// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Ref
// Entry Point: 00b4ade4
// Size: 196 bytes
// Signature: undefined Ref(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Singleton<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2> >,
   CryptoPP::NewObject<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2> > >, 0>::Ref() const */

undefined8 *
CryptoPP::
Singleton<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>,CryptoPP::NewObject<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>>,0>
::Ref(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((Ref()::s_mutex & 1) == 0) && (iVar1 = __cxa_guard_acquire(&Ref()::s_mutex), iVar1 != 0)) {
    __cxa_atexit(std::__ndk1::mutex::~mutex,Ref()::s_mutex,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&Ref()::s_mutex);
  }
  DataMemoryBarrier(2,1);
  puVar2 = Ref()::s_pObject;
  if (Ref()::s_pObject == (undefined8 *)0x0) {
    std::__ndk1::mutex::lock();
    DataMemoryBarrier(2,1);
    if (Ref()::s_pObject == (undefined8 *)0x0) {
                    /* try { // try from 00b4ae2c to 00b4ae33 has its CatchHandler @ 00b4aea8 */
      Ref()::s_pObject = (undefined8 *)operator_new(8);
      *Ref()::s_pObject = &PTR__DL_KeyAgreementAlgorithm_00fea078;
      DataMemoryBarrier(2,3);
    }
    puVar2 = Ref()::s_pObject;
    std::__ndk1::mutex::unlock();
  }
  return puVar2;
}


