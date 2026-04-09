// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: modularDivide
// Entry Point: 00b5b418
// Size: 60 bytes
// Signature: undefined __cdecl modularDivide(ulonglong param_1, ulonglong param_2)


/* MathUtil::modularDivide(unsigned long long, unsigned long long) */

long MathUtil::modularDivide(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_2 & 1) == 0) {
    return 0;
  }
  lVar4 = 0;
  uVar5 = 1;
  do {
    bVar3 = (param_1 & uVar5) != 0;
    uVar1 = 0;
    if (bVar3) {
      uVar1 = param_2;
    }
    uVar2 = 0;
    if (bVar3) {
      uVar2 = uVar5;
    }
    uVar5 = uVar5 << 1;
    param_1 = param_1 - uVar1;
    lVar4 = uVar2 + lVar4;
    param_2 = param_2 << 1;
  } while (uVar5 != 0);
  return lVar4;
}


