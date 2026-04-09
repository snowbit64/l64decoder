// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetContigousBlocks
// Entry Point: 00cd7474
// Size: 88 bytes
// Signature: undefined __thiscall GetContigousBlocks(BlockQueue * this, ulong * param_1)


/* CryptoPP::FilterWithBufferedInput::BlockQueue::GetContigousBlocks(unsigned long&) */

long __thiscall
CryptoPP::FilterWithBufferedInput::BlockQueue::GetContigousBlocks(BlockQueue *this,ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x38);
  uVar4 = (lVar2 + *(long *)(this + 0x10)) - lVar3;
  uVar1 = *(ulong *)(this + 0x30);
  if (uVar4 <= *(ulong *)(this + 0x30)) {
    uVar1 = uVar4;
  }
  if (*param_1 <= uVar1) {
    uVar1 = *param_1;
  }
  *param_1 = uVar1;
  lVar5 = *(long *)(this + 0x30);
  *(ulong *)(this + 0x30) = lVar5 - uVar1;
  *(ulong *)(this + 0x38) = lVar3 + uVar1;
  if (lVar5 - uVar1 == 0 || lVar3 + uVar1 == lVar2 + *(long *)(this + 0x10)) {
    *(long *)(this + 0x38) = lVar2;
  }
  return lVar3;
}


