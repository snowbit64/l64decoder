// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FirstPut
// Entry Point: 00cdc330
// Size: 296 bytes
// Signature: undefined __thiscall FirstPut(SignatureVerificationFilter * this, uchar * param_1)


/* CryptoPP::SignatureVerificationFilter::FirstPut(unsigned char const*) */

void __thiscall
CryptoPP::SignatureVerificationFilter::FirstPut(SignatureVerificationFilter *this,uchar *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong __n;
  void *__dest;
  long *plVar4;
  
  if (((byte)this[0xa0] & 1) == 0) {
    return;
  }
  uVar2 = (**(code **)(**(long **)(this + 0x90) + 0x40))();
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(this + 0x90);
    uVar1 = *(undefined8 *)(this + 0x98);
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x58))(plVar4,uVar1,param_1,uVar3);
    goto LAB_00cdc3fc;
  }
  __n = (**(code **)(**(long **)(this + 0x90) + 0x10))();
  uVar2 = *(ulong *)(this + 0xb8);
  __dest = *(void **)(this + 0xc0);
  if (uVar2 == __n) {
LAB_00cdc3e0:
    *(ulong *)(this + 0xb8) = __n;
    *(void **)(this + 0xc0) = __dest;
    *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  }
  else {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)__dest + (uVar2 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (__n != 0) {
      __dest = (void *)UnalignedAllocate(__n);
      goto LAB_00cdc3e0;
    }
    __dest = (void *)0x0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  }
  if (param_1 != (uchar *)0x0) {
    memcpy(__dest,param_1,__n);
  }
LAB_00cdc3fc:
  if (((byte)this[0xa0] >> 2 & 1) != 0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1,*(undefined8 *)(this + 0xb8),0,1);
  }
  return;
}


