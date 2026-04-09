// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandomWithKeySize
// Entry Point: 00c7b3d8
// Size: 168 bytes
// Signature: undefined __cdecl GenerateRandomWithKeySize(RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::GeneratableCryptoMaterial::GenerateRandomWithKeySize(CryptoPP::RandomNumberGenerator&,
   unsigned int) */

void CryptoPP::GeneratableCryptoMaterial::GenerateRandomWithKeySize
               (RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  bool in_w3;
  char local_54 [4];
  undefined **local_50;
  long *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  MakeParameters<int>((CryptoPP *)"KeySize",local_54,(int *)0x1,in_w3);
                    /* try { // try from 00c7b424 to 00c7b433 has its CatchHandler @ 00c7b484 */
  (**(code **)(*(long *)param_1 + 0x60))(param_1,param_2,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00c7b454 to 00c7b457 has its CatchHandler @ 00c7b480 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


