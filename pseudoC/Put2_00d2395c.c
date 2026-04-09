// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00d2395c
// Size: 140 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::MaurerRandomnessTest::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8
CryptoPP::MaurerRandomnessTest::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  
  uVar2 = (ulong)(uint)param_3;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    do {
      uVar2 = uVar2 - 1;
      bVar1 = *(byte *)param_2;
      if (1999 < uVar3) {
        dVar4 = log((double)(ulong)(uVar3 - *(int *)(param_1 + (ulong)bVar1 * 4 + 0x24)));
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + dVar4;
      }
      *(uint *)(param_1 + (ulong)bVar1 * 4 + 0x24) = uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x20) = uVar3;
      param_2 = (ulong)(param_2 + 1);
    } while (uVar2 != 0);
  }
  return 0;
}


