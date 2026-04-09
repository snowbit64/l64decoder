// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Randomize
// Entry Point: 00cf62c4
// Size: 328 bytes
// Signature: undefined __thiscall Randomize(Integer * this, RandomNumberGenerator * param_1, Integer * param_2, Integer * param_3, RandomNumberType param_4, Integer * param_5, Integer * param_6)


/* CryptoPP::Integer::Randomize(CryptoPP::RandomNumberGenerator&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer::RandomNumberType, CryptoPP::Integer const&,
   CryptoPP::Integer const&) */

uint __thiscall
CryptoPP::Integer::Randomize
          (Integer *this,RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3,
          RandomNumberType param_4,Integer *param_5,Integer *param_6)

{
  undefined uVar1;
  long lVar2;
  uint uVar3;
  AlgorithmParameters *pAVar4;
  undefined8 *puVar5;
  undefined **local_70;
  long *local_68;
  undefined local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  MakeParameters<CryptoPP::Integer>
            ((CryptoPP *)&DAT_004ebf72,(char *)param_2,(Integer *)0x1,SUB81(param_3,0));
                    /* try { // try from 00cf6320 to 00cf63af has its CatchHandler @ 00cf6410 */
  pAVar4 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_70,"Max",param_3,(bool)local_60);
  uVar1 = *(undefined *)(pAVar4 + 4);
  puVar5 = (undefined8 *)operator_new(0x28);
  *(undefined *)(puVar5 + 2) = uVar1;
  *(undefined *)((long)puVar5 + 0x11) = 0;
  *(RandomNumberType *)(puVar5 + 4) = param_4;
  *puVar5 = &PTR__AlgorithmParametersBase_0100cd70;
  puVar5[1] = "RandomNumberType";
  puVar5[3] = *(undefined8 *)(pAVar4 + 2);
  *(undefined8 **)(pAVar4 + 2) = puVar5;
  pAVar4 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)pAVar4,"EquivalentTo",param_5,*(bool *)(pAVar4 + 4));
  pAVar4 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)pAVar4,"Mod",param_6,*(bool *)(pAVar4 + 4));
  uVar3 = GenerateRandomNoThrow(this,param_1,(NameValuePairs *)pAVar4);
  local_70 = &PTR__AlgorithmParameters_00feeb08;
  if (local_68 != (long *)0x0) {
                    /* try { // try from 00cf63d4 to 00cf63d7 has its CatchHandler @ 00cf640c */
    (**(code **)(*local_68 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


