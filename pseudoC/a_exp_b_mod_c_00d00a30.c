// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: a_exp_b_mod_c
// Entry Point: 00d00a30
// Size: 224 bytes
// Signature: undefined __cdecl a_exp_b_mod_c(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::a_exp_b_mod_c(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer
   const&) */

void CryptoPP::a_exp_b_mod_c(Integer *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  long lVar2;
  DivideByZero *this;
  long lVar3;
  long lVar4;
  ModularArithmetic aMStack_e0 [168];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_3 + 0x28) != 1) && (**(int **)(param_3 + 0x20) == 0)) {
    lVar3 = *(long *)(param_3 + 0x18);
    do {
      if (lVar3 == 0) goto LAB_00d00ae4;
      lVar4 = lVar3 + -1;
      lVar2 = lVar3 + -1;
      lVar3 = lVar4;
    } while ((*(int **)(param_3 + 0x20))[lVar2] == 0);
    if ((int)lVar4 == -1) {
LAB_00d00ae4:
      this = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d00af0 to 00d00af3 has its CatchHandler @ 00d00b24 */
      Integer::DivideByZero::DivideByZero(this);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&Integer::DivideByZero::typeinfo,Exception::~Exception);
    }
  }
  ModularArithmetic::ModularArithmetic(aMStack_e0,param_3);
                    /* try { // try from 00d00aa4 to 00d00ab7 has its CatchHandler @ 00d00b10 */
  AbstractRing<CryptoPP::Integer>::Exponentiate((Integer *)aMStack_e0,param_1);
  ModularArithmetic::~ModularArithmetic(aMStack_e0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


