// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Ref
// Entry Point: 00d10288
// Size: 212 bytes
// Signature: undefined Ref(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Singleton<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >,
   CryptoPP::NewPrimeTable, 0>::Ref() const */

long CryptoPP::
     Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
     ::Ref(void)

{
  long lVar1;
  int iVar2;
  NewPrimeTable *in_x0;
  
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
                    /* try { // try from 00d102ec to 00d102f3 has its CatchHandler @ 00d1035c */
    Ref()::s_pObject = NewPrimeTable::operator()(in_x0);
    DataMemoryBarrier(2,3);
  }
  lVar1 = Ref()::s_pObject;
  std::__ndk1::mutex::unlock();
  return lVar1;
}


