// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StoreInitialize
// Entry Point: 00cdcb68
// Size: 144 bytes
// Signature: undefined __thiscall StoreInitialize(RandomNumberStore * this, NameValuePairs * param_1)


/* CryptoPP::RandomNumberStore::StoreInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::RandomNumberStore::StoreInitialize(RandomNumberStore *this,NameValuePairs *param_1)

{
  long lVar1;
  long lVar2;
  int local_3c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  NameValuePairs::GetRequiredParameter<CryptoPP::RandomNumberGenerator*>
            ((char *)param_1,"RandomNumberStore",
             (RandomNumberGenerator **)"RandomNumberGeneratorPointer");
  NameValuePairs::GetRequiredIntParameter
            ((char *)param_1,"RandomNumberStore",(int *)"RandomNumberStoreSize");
  *(long *)(this + 0x28) = (long)local_3c;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


