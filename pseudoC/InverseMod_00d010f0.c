// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseMod
// Entry Point: 00d010f0
// Size: 332 bytes
// Signature: undefined __thiscall InverseMod(Integer * this, Integer * param_1)


/* CryptoPP::Integer::InverseMod(CryptoPP::Integer const&) const */

void __thiscall CryptoPP::Integer::InverseMod(Integer *this,Integer *param_1)

{
  long lVar1;
  int iVar2;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x28) == 1) {
    Modulo(this);
                    /* try { // try from 00d01138 to 00d01147 has its CatchHandler @ 00d01248 */
    InverseModNext((Integer *)local_68);
    if (uStack_50 <= local_58) {
      local_58 = uStack_50;
    }
    local_68[0] = &PTR__Integer_0100c890;
    for (; local_58 != 0; local_58 = local_58 - 1) {
      *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
    }
                    /* try { // try from 00d01180 to 00d01183 has its CatchHandler @ 00d01244 */
    UnalignedDeallocate(local_48);
  }
  else {
    iVar2 = Compare(this,param_1);
    if (iVar2 < 0) {
      InverseModNext(this);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_00d01238;
    }
    Modulo(this);
                    /* try { // try from 00d011a8 to 00d011b7 has its CatchHandler @ 00d01240 */
    InverseModNext((Integer *)local_68);
    if (uStack_50 <= local_58) {
      local_58 = uStack_50;
    }
    local_68[0] = &PTR__Integer_0100c890;
    for (; local_58 != 0; local_58 = local_58 - 1) {
      *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
    }
                    /* try { // try from 00d011f0 to 00d011f3 has its CatchHandler @ 00d0123c */
    UnalignedDeallocate(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00d01238:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


