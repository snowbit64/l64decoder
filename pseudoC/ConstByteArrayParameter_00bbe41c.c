// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConstByteArrayParameter
// Entry Point: 00bbe41c
// Size: 60 bytes
// Signature: undefined __thiscall ~ConstByteArrayParameter(ConstByteArrayParameter * this)


/* CryptoPP::ConstByteArrayParameter::~ConstByteArrayParameter() */

void __thiscall
CryptoPP::ConstByteArrayParameter::~ConstByteArrayParameter(ConstByteArrayParameter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbe44c to 00bbe44f has its CatchHandler @ 00bbe458 */
  UnalignedDeallocate(pvVar2);
  return;
}


