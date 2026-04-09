// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00d1eee0
// Size: 128 bytes
// Signature: undefined __thiscall operator=(ByteQueue * this, ByteQueue * param_1)


/* CryptoPP::ByteQueue::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::ByteQueue const&) */

ByteQueue * __thiscall CryptoPP::ByteQueue::operator=(ByteQueue *this,ByteQueue *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  ppvVar1 = (void **)*(void **)(this + 0x20);
  while (ppvVar1 != (void **)0x0) {
    pvVar4 = *ppvVar1;
    pvVar3 = ppvVar1[4];
    uVar2 = (ulong)ppvVar1[2];
    if (ppvVar1[3] <= ppvVar1[2]) {
      uVar2 = (ulong)ppvVar1[3];
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)pvVar3 + (uVar2 - 1)) = 0;
    }
                    /* try { // try from 00d1ef2c to 00d1ef2f has its CatchHandler @ 00d1ef60 */
    UnalignedDeallocate(pvVar3);
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar4;
  }
  CopyFrom(this,param_1);
  return this;
}


