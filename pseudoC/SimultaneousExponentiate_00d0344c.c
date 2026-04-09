// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousExponentiate
// Entry Point: 00d0344c
// Size: 600 bytes
// Signature: undefined __thiscall SimultaneousExponentiate(ModularArithmetic * this, Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::ModularArithmetic::SimultaneousExponentiate(CryptoPP::Integer*, CryptoPP::Integer
   const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::ModularArithmetic::SimultaneousExponentiate
          (ModularArithmetic *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  Integer *this_00;
  ulong uVar6;
  undefined **appuStack_1c8 [2];
  ulong local_1b8;
  ulong uStack_1b0;
  void *local_1a8;
  MontgomeryRepresentation aMStack_198 [48];
  ulong local_168;
  uint *local_160;
  Integer aIStack_150 [32];
  uint *local_130;
  uint *local_d0;
  uint *local_a8;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x30) == 0) || ((**(byte **)(this + 0x38) & 1) == 0)) {
    AbstractRing<CryptoPP::Integer>::SimultaneousExponentiate
              ((AbstractRing<CryptoPP::Integer> *)this,param_1,param_2,param_3,param_4);
    if (*(long *)(lVar1 + 0x28) != local_70) goto LAB_00d036a0;
  }
  else {
    MontgomeryRepresentation::MontgomeryRepresentation(aMStack_198,(Integer *)(this + 0x18));
                    /* try { // try from 00d034f8 to 00d03503 has its CatchHandler @ 00d036bc */
    Integer::operator<<(param_2,local_168 << 5);
                    /* try { // try from 00d03508 to 00d03513 has its CatchHandler @ 00d036b8 */
    Integer::Modulo((Integer *)local_a0);
    uVar6 = local_90;
    if (uStack_88 <= local_90) {
      uVar6 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)((long)local_80 + uVar6 * 4 + -4) = 0;
    }
                    /* try { // try from 00d0354c to 00d0354f has its CatchHandler @ 00d036b4 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00d03550 to 00d03567 has its CatchHandler @ 00d036a8 */
    AbstractRing<CryptoPP::Integer>::SimultaneousExponentiate
              ((AbstractRing<CryptoPP::Integer> *)aMStack_198,param_1,(Integer *)appuStack_1c8,
               param_3,param_4);
    appuStack_1c8[0] = &PTR__Integer_0100c890;
    if (uStack_1b0 <= local_1b8) {
      local_1b8 = uStack_1b0;
    }
    for (; local_1b8 != 0; local_1b8 = local_1b8 - 1) {
      *(undefined4 *)((long)local_1a8 + local_1b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d03598 to 00d0359b has its CatchHandler @ 00d036a4 */
    UnalignedDeallocate(local_1a8);
    if (param_4 != 0) {
      uVar6 = 0;
      do {
        puVar4 = local_a8;
        puVar3 = local_130;
        uVar2 = local_168;
        this_00 = param_1 + uVar6 * 0x30;
        if (local_a8 != *(uint **)(this_00 + 0x20)) {
          memcpy(local_a8,*(uint **)(this_00 + 0x20),*(long *)(this_00 + 0x18) << 2);
        }
        lVar5 = *(long *)(this_00 + 0x18);
        if (uVar2 * 2 - lVar5 != 0) {
          memset(puVar4 + lVar5,0,uVar2 * 8 + lVar5 * -4);
        }
                    /* try { // try from 00d03620 to 00d0363b has its CatchHandler @ 00d036d4 */
        MontgomeryReduce(puVar3,puVar4 + uVar2 * 2,puVar4,local_160,local_d0,uVar2);
        Integer::Integer((Integer *)local_a0,aIStack_150);
                    /* try { // try from 00d0363c to 00d03647 has its CatchHandler @ 00d036c4 */
        Integer::operator=(this_00,(Integer *)local_a0);
        uVar2 = local_90;
        if (uStack_88 <= local_90) {
          uVar2 = uStack_88;
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)((long)local_80 + uVar2 * 4 + -4) = 0;
        }
        local_a0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d03674 to 00d03677 has its CatchHandler @ 00d036c0 */
        UnalignedDeallocate(local_80);
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_4);
    }
    MontgomeryRepresentation::~MontgomeryRepresentation(aMStack_198);
    if (*(long *)(lVar1 + 0x28) != local_70) {
LAB_00d036a0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


