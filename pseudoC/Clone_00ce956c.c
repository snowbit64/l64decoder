// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00ce956c
// Size: 168 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GF2NT::Clone() const */

undefined8 * CryptoPP::GF2NT::Clone(void)

{
  GF2NP *in_x0;
  undefined8 *this;
  void *__dest;
  void *__src;
  ulong uVar1;
  
  this = (undefined8 *)operator_new(0xc0);
                    /* try { // try from 00ce958c to 00ce9593 has its CatchHandler @ 00ce9614 */
  GF2NP::GF2NP((GF2NP *)this,in_x0);
  uVar1 = *(ulong *)(in_x0 + 0xb0);
  *(undefined8 *)((long)this + 0x94) = *(undefined8 *)(in_x0 + 0x94);
  this[0x15] = 0x3fffffffffffffff;
  this[0x16] = uVar1;
  *this = &PTR__GF2NT_01009488;
                    /* try { // try from 00ce95b8 to 00ce95cb has its CatchHandler @ 00ce961c */
  AllocatorBase<unsigned_int>::CheckSize(uVar1);
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    __src = *(void **)(in_x0 + 0xb8);
    this[0x17] = 0;
    if (__src == (void *)0x0) {
      return this;
    }
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar1 << 2);
    __src = *(void **)(in_x0 + 0xb8);
    this[0x17] = __dest;
    if (__dest == __src) {
      return this;
    }
  }
  memcpy(__dest,__src,this[0x16] << 2);
  return this;
}


