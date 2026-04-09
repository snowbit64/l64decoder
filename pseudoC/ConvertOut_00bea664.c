// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertOut
// Entry Point: 00bea664
// Size: 376 bytes
// Signature: undefined __cdecl ConvertOut(ECPPoint * param_1)


/* CryptoPP::EcPrecomputation<CryptoPP::ECP>::ConvertOut(CryptoPP::ECPPoint const&) const */

void CryptoPP::EcPrecomputation<CryptoPP::ECP>::ConvertOut(ECPPoint *param_1)

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
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0xd8))
              (local_78,*(long **)(*(long *)(param_1 + 8) + 0x10),in_x1 + 8);
                    /* try { // try from 00bea708 to 00bea70f has its CatchHandler @ 00bea808 */
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0xd8))
              (local_a8,*(long **)(*(long *)(param_1 + 8) + 0x10),in_x1 + 0x38);
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00bea724 to 00bea72f has its CatchHandler @ 00bea7f4 */
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)local_78);
                    /* try { // try from 00bea734 to 00bea73b has its CatchHandler @ 00bea7e4 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)local_a8);
    *(undefined *)(in_x8 + 0xd) = 0;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    local_a8[0] = &PTR__Integer_0100c890;
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00bea778 to 00bea77b has its CatchHandler @ 00bea7e0 */
    UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00bea7ac to 00bea7af has its CatchHandler @ 00bea7dc */
    UnalignedDeallocate(local_58);
  }
  else {
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(in_x1 + 8));
                    /* try { // try from 00bea6c0 to 00bea6c7 has its CatchHandler @ 00bea814 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(in_x1 + 0x38));
    *(undefined *)(in_x8 + 0xd) = *(undefined *)(in_x1 + 0x68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


