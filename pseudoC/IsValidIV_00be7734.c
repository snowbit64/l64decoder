// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsValidIV
// Entry Point: 00be7734
// Size: 72 bytes
// Signature: undefined __thiscall IsValidIV(AuthenticatedEncryption * this, ulonglong param_1)


/* AuthenticatedEncryption::IsValidIV(unsigned long long) */

undefined4 __thiscall
AuthenticatedEncryption::IsValidIV(AuthenticatedEncryption *this,ulonglong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 0x3a0) - param_1;
  if (-1 < (int)(uint)uVar1) {
    if (this[1] == (AuthenticatedEncryption)0x0) {
      return 0;
    }
    if (0x3ff < (uint)uVar1) {
      return 0;
    }
    if ((*(ulong *)(this + (uVar1 >> 6 & 0x3ffffff) * 8 + 0x3b0) >> (uVar1 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


