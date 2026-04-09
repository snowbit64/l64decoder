// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator[]
// Entry Point: 00d1f240
// Size: 80 bytes
// Signature: undefined __thiscall operator[](ByteQueue * this, ulong param_1)


/* CryptoPP::ByteQueue::operator[](unsigned long) const */

undefined __thiscall CryptoPP::ByteQueue::operator[](ByteQueue *this,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x20);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return *(undefined *)(*(long *)(this + 0x30) + param_1);
    }
    uVar2 = plVar1[6] - plVar1[5];
    if (param_1 < uVar2) break;
    plVar1 = (long *)*plVar1;
    param_1 = param_1 - uVar2;
  }
  return *(undefined *)(plVar1[4] + plVar1[5] + param_1);
}


