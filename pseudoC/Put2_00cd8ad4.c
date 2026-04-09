// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cd8ad4
// Size: 104 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::ArrayXorSink::Put2(unsigned char const*, unsigned long, int, bool) */

long CryptoPP::ArrayXorSink::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)(uint)param_3;
  uVar3 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar3 = 0;
    if (uVar1 <= *(ulong *)(param_1 + 0x20)) {
      uVar3 = *(ulong *)(param_1 + 0x20) - uVar1;
    }
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    xorbuf((uchar *)(*(long *)(param_1 + 0x18) + uVar1),(uchar *)param_2,uVar3);
  }
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar3;
  return uVar2 - uVar3;
}


