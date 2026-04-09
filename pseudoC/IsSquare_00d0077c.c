// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsSquare
// Entry Point: 00d0077c
// Size: 236 bytes
// Signature: undefined IsSquare(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::IsSquare() const */

void CryptoPP::Integer::IsSquare(void)

{
  long lVar1;
  int iVar2;
  Integer *in_x0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SquareRoot();
                    /* try { // try from 00d007a8 to 00d007b7 has its CatchHandler @ 00d00870 */
  Times((Integer *)local_68);
  iVar2 = Compare(in_x0,(Integer *)local_98);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d00800 to 00d00803 has its CatchHandler @ 00d0086c */
  UnalignedDeallocate(local_78);
  local_68[0] = &PTR__Integer_0100c890;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d00834 to 00d00837 has its CatchHandler @ 00d00868 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 == 0);
  }
  return;
}


