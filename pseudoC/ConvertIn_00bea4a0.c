// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertIn
// Entry Point: 00bea4a0
// Size: 376 bytes
// Signature: undefined __cdecl ConvertIn(ECPPoint * param_1)


/* CryptoPP::EcPrecomputation<CryptoPP::ECP>::ConvertIn(CryptoPP::ECPPoint const&) const */

void CryptoPP::EcPrecomputation<CryptoPP::ECP>::ConvertIn(ECPPoint *param_1)

{
  long lVar1;
  long in_x1;
  undefined8 *in_x8;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x1 + 0x68) == '\0') {
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0xd0))
              (local_78,*(long **)(*(long *)(param_1 + 8) + 0x10),in_x1 + 8);
                    /* try { // try from 00bea544 to 00bea54b has its CatchHandler @ 00bea644 */
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0xd0))
              (local_a8,*(long **)(*(long *)(param_1 + 8) + 0x10),in_x1 + 0x38);
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00bea560 to 00bea56b has its CatchHandler @ 00bea630 */
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)local_78);
                    /* try { // try from 00bea570 to 00bea577 has its CatchHandler @ 00bea620 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)local_a8);
    *(undefined *)(in_x8 + 0xd) = 0;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    local_a8[0] = &PTR__Integer_0100c890;
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00bea5b4 to 00bea5b7 has its CatchHandler @ 00bea61c */
    UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00bea5e8 to 00bea5eb has its CatchHandler @ 00bea618 */
    UnalignedDeallocate(local_58);
  }
  else {
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(in_x1 + 8));
                    /* try { // try from 00bea4fc to 00bea503 has its CatchHandler @ 00bea650 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(in_x1 + 0x38));
    *(undefined *)(in_x8 + 0xd) = *(undefined *)(in_x1 + 0x68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


