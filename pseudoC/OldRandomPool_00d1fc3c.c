// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OldRandomPool
// Entry Point: 00d1fc3c
// Size: 156 bytes
// Signature: undefined __thiscall OldRandomPool(OldRandomPool * this, uint param_1)


/* CryptoPP::OldRandomPool::OldRandomPool(unsigned int) */

void __thiscall CryptoPP::OldRandomPool::OldRandomPool(OldRandomPool *this,uint param_1)

{
  undefined8 uVar1;
  ulong __n;
  
  __n = (ulong)param_1;
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(ulong *)(this + 0x18) = __n;
  *(undefined ***)this = &PTR__OldRandomPool_0100f748;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UnalignedAllocate(__n);
  }
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x38) = 0x40;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
                    /* try { // try from 00d1fc9c to 00d1fca3 has its CatchHandler @ 00d1fcd8 */
  uVar1 = UnalignedAllocate(0x40);
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = 0;
  *(ulong *)(this + 0x50) = __n;
  memset(*(void **)(this + 0x20),0,__n);
  memset(*(void **)(this + 0x40),0,*(size_t *)(this + 0x38));
  return;
}


