// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedVerify
// Entry Point: 00c799ac
// Size: 216 bytes
// Signature: undefined __thiscall TruncatedVerify(HashTransformation * this, uchar * param_1, ulong param_2)


/* CryptoPP::HashTransformation::TruncatedVerify(unsigned char const*, unsigned long) */

uint __thiscall
CryptoPP::HashTransformation::TruncatedVerify(HashTransformation *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uchar *puVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  ThrowIfInvalidTruncatedSize(this,param_2);
  if (param_2 == 0) {
    puVar4 = (uchar *)0x0;
  }
  else {
    puVar4 = (uchar *)UnalignedAllocate(param_2);
  }
                    /* try { // try from 00c79a10 to 00c79a2f has its CatchHandler @ 00c79a88 */
  (**(code **)(*(long *)this + 0x80))(this,puVar4,param_2);
  uVar3 = VerifyBufsEqual(puVar4,param_1,param_2);
  if (param_2 != 0) {
    do {
      uVar1 = param_2 - 1;
      puVar4[param_2 - 1] = '\0';
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00c79a4c to 00c79a53 has its CatchHandler @ 00c79a84 */
  UnalignedDeallocate(puVar4);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


