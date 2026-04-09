// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Ref
// Entry Point: 00cc1a88
// Size: 212 bytes
// Signature: undefined Ref(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Singleton<CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::NewObject<CryptoPP::DL_SignatureMessageEncodingMethod_DSA>, 0>::Ref() const */

undefined8 *
CryptoPP::
Singleton<CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::NewObject<CryptoPP::DL_SignatureMessageEncodingMethod_DSA>,0>
::Ref(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (((Ref()::s_mutex & 1) == 0) && (iVar2 = __cxa_guard_acquire(&Ref()::s_mutex), iVar2 != 0)) {
    __cxa_atexit(std::__ndk1::mutex::~mutex,Ref()::s_mutex,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&Ref()::s_mutex);
  }
  DataMemoryBarrier(2,1);
  if (Ref()::s_pObject != (undefined8 *)0x0) {
    return Ref()::s_pObject;
  }
  std::__ndk1::mutex::lock();
  DataMemoryBarrier(2,1);
  if (Ref()::s_pObject == (undefined8 *)0x0) {
                    /* try { // try from 00cc1ae0 to 00cc1ae7 has its CatchHandler @ 00cc1b5c */
    Ref()::s_pObject = (undefined8 *)operator_new(8);
    *Ref()::s_pObject = &PTR__PK_SignatureMessageEncodingMethod_0100c088;
    DataMemoryBarrier(2,3);
  }
  puVar1 = Ref()::s_pObject;
  std::__ndk1::mutex::unlock();
  return puVar1;
}


