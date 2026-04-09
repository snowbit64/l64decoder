// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Ref
// Entry Point: 00d129bc
// Size: 212 bytes
// Signature: undefined Ref(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Singleton<CryptoPP::Integer, CryptoPP::NewLastSmallPrimeSquared, 0>::Ref() const */

long CryptoPP::Singleton<CryptoPP::Integer,CryptoPP::NewLastSmallPrimeSquared,0>::Ref(void)

{
  long lVar1;
  int iVar2;
  NewLastSmallPrimeSquared *in_x0;
  
  if (((Ref()::s_mutex & 1) == 0) && (iVar2 = __cxa_guard_acquire(&Ref()::s_mutex), iVar2 != 0)) {
    __cxa_atexit(std::__ndk1::mutex::~mutex,Ref()::s_mutex,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&Ref()::s_mutex);
  }
  DataMemoryBarrier(2,1);
  if (Ref()::s_pObject != 0) {
    return Ref()::s_pObject;
  }
  std::__ndk1::mutex::lock();
  DataMemoryBarrier(2,1);
  if (Ref()::s_pObject == 0) {
                    /* try { // try from 00d12a20 to 00d12a27 has its CatchHandler @ 00d12a90 */
    Ref()::s_pObject = NewLastSmallPrimeSquared::operator()(in_x0);
    DataMemoryBarrier(2,3);
  }
  lVar1 = Ref()::s_pObject;
  std::__ndk1::mutex::unlock();
  return lVar1;
}


