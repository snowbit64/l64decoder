// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePutSpace
// Entry Point: 00cd89b0
// Size: 32 bytes
// Signature: undefined __thiscall CreatePutSpace(ArraySink * this, ulong * param_1)


/* CryptoPP::ArraySink::CreatePutSpace(unsigned long&) */

long __thiscall CryptoPP::ArraySink::CreatePutSpace(ArraySink *this,ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  uVar1 = 0;
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x20) - *(ulong *)(this + 0x28);
  }
  *param_1 = uVar1;
  return lVar2 + *(long *)(this + 0x28);
}


