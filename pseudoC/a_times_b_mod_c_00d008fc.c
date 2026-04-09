// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: a_times_b_mod_c
// Entry Point: 00d008fc
// Size: 264 bytes
// Signature: undefined __cdecl a_times_b_mod_c(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::a_times_b_mod_c(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer
   const&) */

void CryptoPP::a_times_b_mod_c(Integer *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  long lVar2;
  DivideByZero *this;
  long lVar3;
  long lVar4;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_3 + 0x28) != 1) && (**(int **)(param_3 + 0x20) == 0)) {
    lVar3 = *(long *)(param_3 + 0x18);
    do {
      if (lVar3 == 0) goto LAB_00d009d8;
      lVar4 = lVar3 + -1;
      lVar2 = lVar3 + -1;
      lVar3 = lVar4;
    } while ((*(int **)(param_3 + 0x20))[lVar2] == 0);
    if ((int)lVar4 == -1) {
LAB_00d009d8:
      this = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d009e4 to 00d009e7 has its CatchHandler @ 00d00a1c */
      Integer::DivideByZero::DivideByZero(this);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&Integer::DivideByZero::typeinfo,Exception::~Exception);
    }
  }
  Integer::Times(param_1);
                    /* try { // try from 00d00968 to 00d00977 has its CatchHandler @ 00d00a08 */
  Integer::Modulo((Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d009b0 to 00d009b3 has its CatchHandler @ 00d00a04 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


