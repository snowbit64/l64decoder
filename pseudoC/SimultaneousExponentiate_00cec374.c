// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousExponentiate
// Entry Point: 00cec374
// Size: 240 bytes
// Signature: undefined __thiscall SimultaneousExponentiate(DL_GroupParameters_GFP * this, Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::DL_GroupParameters_GFP::SimultaneousExponentiate(CryptoPP::Integer*, CryptoPP::Integer
   const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::DL_GroupParameters_GFP::SimultaneousExponentiate
          (DL_GroupParameters_GFP *this,Integer *param_1,Integer *param_2,Integer *param_3,
          uint param_4)

{
  long lVar1;
  Integer *pIVar2;
  undefined **local_110;
  undefined **local_108;
  undefined ***pppuStack_100;
  Integer aIStack_f8 [48];
  Integer aIStack_c8 [48];
  Integer aIStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  local_108 = &PTR__AbstractGroup_010009d8;
  local_110 = &PTR__ModularArithmetic_0100c910;
  pppuStack_100 = &local_110;
  Integer::Integer(aIStack_f8,pIVar2);
                    /* try { // try from 00cec3fc to 00cec407 has its CatchHandler @ 00cec488 */
  Integer::Integer(aIStack_c8,0,*(ulong *)(pIVar2 + 0x18));
                    /* try { // try from 00cec40c to 00cec40f has its CatchHandler @ 00cec478 */
  Integer::Integer(aIStack_98);
                    /* try { // try from 00cec410 to 00cec427 has its CatchHandler @ 00cec464 */
  ModularArithmetic::SimultaneousExponentiate
            ((ModularArithmetic *)&local_110,param_1,param_2,param_3,param_4);
  ModularArithmetic::~ModularArithmetic((ModularArithmetic *)&local_110);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


