// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Multiply
// Entry Point: 00cfe6b0
// Size: 156 bytes
// Signature: undefined __cdecl Multiply(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::Multiply(CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::Multiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  PositiveMultiply(param_1,param_2,param_3);
  if ((*(int *)(param_2 + 0x28) != 1) != (*(int *)(param_3 + 0x28) != 1)) {
    if ((*(int *)(param_1 + 0x28) != 1) && (**(int **)(param_1 + 0x20) == 0)) {
      lVar2 = *(long *)(param_1 + 0x18);
      do {
        if (lVar2 == 0) {
          return;
        }
        lVar3 = lVar2 + -1;
        lVar1 = lVar2 + -1;
        lVar2 = lVar3;
      } while ((*(int **)(param_1 + 0x20))[lVar1] == 0);
      if ((int)lVar3 == -1) {
        return;
      }
    }
    *(int *)(param_1 + 0x28) = 1 - *(int *)(param_1 + 0x28);
  }
  return;
}


