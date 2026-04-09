// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00caf1e0
// Size: 52 bytes
// Signature: undefined __thiscall OptimalBlockSize(ECB_OneWay * this)


/* non-virtual thunk to CryptoPP::ECB_OneWay::OptimalBlockSize() const */

int __thiscall CryptoPP::ECB_OneWay::OptimalBlockSize(ECB_OneWay *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x20);
  iVar2 = (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x50))
                    ((long *)(*(long *)(this + 8) + 8));
  return iVar2 * iVar1;
}


