// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FirstPut
// Entry Point: 00cdaa28
// Size: 208 bytes
// Signature: undefined __thiscall FirstPut(HashVerificationFilter * this, uchar * param_1)


/* CryptoPP::HashVerificationFilter::FirstPut(unsigned char const*) */

void __thiscall
CryptoPP::HashVerificationFilter::FirstPut(HashVerificationFilter *this,uchar *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *__dest;
  long *plVar3;
  ulong __n;
  
  if (((byte)this[0x98] & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)(this + 0x9c);
  __n = (ulong)uVar2;
  uVar1 = *(ulong *)(this + 0xb8);
  __dest = *(void **)(this + 0xc0);
  if (uVar1 != __n) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)__dest + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (uVar2 == 0) {
      __dest = (void *)0x0;
      *(ulong *)(this + 0xb8) = __n;
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
      goto joined_r0x00cdaa8c;
    }
    __dest = (void *)UnalignedAllocate(__n);
  }
  *(ulong *)(this + 0xb8) = __n;
  *(void **)(this + 0xc0) = __dest;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
joined_r0x00cdaa8c:
  if (param_1 != (uchar *)0x0) {
    memcpy(__dest,param_1,__n);
  }
  if (((byte)this[0x98] >> 2 & 1) != 0) {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1,*(undefined8 *)(this + 0xb8),0,1);
  }
  return;
}


