// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cd8948
// Size: 104 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::ArraySink::Put2(unsigned char const*, unsigned long, int, bool) */

long CryptoPP::ArraySink::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  
  uVar2 = (ulong)(uint)param_3;
  __n = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    __n = 0;
    if (uVar1 <= *(ulong *)(param_1 + 0x20)) {
      __n = *(ulong *)(param_1 + 0x20) - uVar1;
    }
    if (uVar2 <= __n) {
      __n = uVar2;
    }
    memmove((void *)(*(long *)(param_1 + 0x18) + uVar1),(void *)param_2,__n);
  }
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
  return uVar2 - __n;
}


