// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: offsetAllKeyPointers
// Entry Point: 00749ad0
// Size: 124 bytes
// Signature: undefined __thiscall offsetAllKeyPointers(KeyframedTransformation * this, uchar * param_1, uchar * param_2)


/* KeyframedTransformation::offsetAllKeyPointers(unsigned char*, unsigned char*) */

void __thiscall
KeyframedTransformation::offsetAllKeyPointers
          (KeyframedTransformation *this,uchar *param_1,uchar *param_2)

{
  uchar **ppuVar1;
  uchar **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  uchar **ppuVar5;
  ulong uVar6;
  
  ppuVar2 = *(uchar ***)(this + 8);
  ppuVar1 = *(uchar ***)(this + 0x10);
  if (ppuVar2 != ppuVar1) {
    uVar3 = (long)ppuVar1 + (-8 - (long)ppuVar2);
    if (0x17 < uVar3) {
      uVar3 = (uVar3 >> 3) + 1;
      uVar4 = uVar3 & 0x3ffffffffffffffc;
      ppuVar5 = ppuVar2 + 2;
      uVar6 = uVar4;
      do {
        uVar6 = uVar6 - 4;
        ppuVar5[-1] = param_1 + ((long)ppuVar5[-1] - (long)param_2);
        ppuVar5[-2] = param_1 + ((long)ppuVar5[-2] - (long)param_2);
        ppuVar5[1] = param_1 + ((long)ppuVar5[1] - (long)param_2);
        *ppuVar5 = param_1 + ((long)*ppuVar5 - (long)param_2);
        ppuVar5 = ppuVar5 + 4;
      } while (uVar6 != 0);
      ppuVar2 = ppuVar2 + uVar4;
      if (uVar3 == uVar4) {
        return;
      }
    }
    do {
      ppuVar5 = ppuVar2 + 1;
      *ppuVar2 = param_1 + ((long)*ppuVar2 - (long)param_2);
      ppuVar2 = ppuVar5;
    } while (ppuVar5 != ppuVar1);
  }
  return;
}


