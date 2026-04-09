// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00cec4ec
// Size: 248 bytes
// Signature: undefined __thiscall CascadeExponentiate(DL_GroupParameters_GFP * this, Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_GFP::CascadeExponentiate(CryptoPP::Integer const&, CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::DL_GroupParameters_GFP::CascadeExponentiate
          (DL_GroupParameters_GFP *this,Integer *param_1,Integer *param_2,Integer *param_3,
          Integer *param_4)

{
  long lVar1;
  Integer *pIVar2;
  undefined **local_118;
  undefined **local_110;
  undefined ***pppuStack_108;
  Integer aIStack_100 [48];
  Integer aIStack_d0 [48];
  Integer aIStack_a0 [48];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  pppuStack_108 = &local_118;
  local_110 = &PTR__AbstractGroup_010009d8;
  local_118 = &PTR__ModularArithmetic_0100c910;
  Integer::Integer(aIStack_100,pIVar2);
                    /* try { // try from 00cec578 to 00cec583 has its CatchHandler @ 00cec608 */
  Integer::Integer(aIStack_d0,0,*(ulong *)(pIVar2 + 0x18));
                    /* try { // try from 00cec588 to 00cec58b has its CatchHandler @ 00cec5f8 */
  Integer::Integer(aIStack_a0);
                    /* try { // try from 00cec58c to 00cec5a7 has its CatchHandler @ 00cec5e4 */
  ModularArithmetic::CascadeExponentiate
            ((ModularArithmetic *)&local_118,param_1,param_2,param_3,param_4);
  ModularArithmetic::~ModularArithmetic((ModularArithmetic *)&local_118);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


