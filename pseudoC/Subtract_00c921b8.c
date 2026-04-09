// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00c921b8
// Size: 328 bytes
// Signature: undefined __thiscall Subtract(AbstractGroup<CryptoPP::ECPPoint> * this, ECPPoint * param_1, ECPPoint * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::Subtract(CryptoPP::ECPPoint const&,
   CryptoPP::ECPPoint const&) const */

undefined8 __thiscall
CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::Subtract
          (AbstractGroup<CryptoPP::ECPPoint> *this,ECPPoint *param_1,ECPPoint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_c8;
  undefined **local_c0 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90 [2];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ECPPoint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)local_c0,(Integer *)(param_1 + 8));
                    /* try { // try from 00c92218 to 00c9221b has its CatchHandler @ 00c92308 */
  Integer::Integer((Integer *)local_90,(Integer *)(param_1 + 0x38));
  local_60 = param_1[0x68];
                    /* try { // try from 00c9222c to 00c9224f has its CatchHandler @ 00c9231c */
  uVar2 = (**(code **)(*(long *)this + 0x28))(this,param_2);
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,&local_c8,uVar2);
  local_c8 = &PTR__ECPPoint_00fe9fd8;
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  local_90[0] = &PTR__Integer_0100c890;
  for (; local_80 != 0; local_80 = local_80 - 1) {
    *(undefined4 *)((long)local_70 + local_80 * 4 + -4) = 0;
  }
                    /* try { // try from 00c92294 to 00c92297 has its CatchHandler @ 00c92304 */
  UnalignedDeallocate(local_70);
  local_c0[0] = &PTR__Integer_0100c890;
  if (uStack_a8 <= local_b0) {
    local_b0 = uStack_a8;
  }
  for (; local_b0 != 0; local_b0 = local_b0 - 1) {
    *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c922c8 to 00c922cb has its CatchHandler @ 00c92300 */
  UnalignedDeallocate(local_a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


