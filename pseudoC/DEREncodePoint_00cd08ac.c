// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePoint
// Entry Point: 00cd08ac
// Size: 232 bytes
// Signature: undefined __thiscall DEREncodePoint(EC2N * this, BufferedTransformation * param_1, EC2NPoint * param_2, bool param_3)


/* CryptoPP::EC2N::DEREncodePoint(CryptoPP::BufferedTransformation&, CryptoPP::EC2NPoint const&,
   bool) const */

void __thiscall
CryptoPP::EC2N::DEREncodePoint
          (EC2N *this,BufferedTransformation *param_1,EC2NPoint *param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  SecBlock aSStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x78))(this,param_3);
  uStack_58 = (ulong)uVar3;
  local_60 = 0xffffffffffffffff;
  if (uVar3 == 0) {
    local_50 = (void *)0x0;
  }
  else {
    local_50 = (void *)UnalignedAllocate(uStack_58);
  }
                    /* try { // try from 00cd0920 to 00cd093b has its CatchHandler @ 00cd0998 */
  (**(code **)(*(long *)this + 0x90))(this,local_50,param_2,param_3);
  DEREncodeOctetString(param_1,aSStack_68);
  uVar2 = local_60;
  if (uStack_58 <= local_60) {
    uVar2 = uStack_58;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_50 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00cd0964 to 00cd0967 has its CatchHandler @ 00cd0994 */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


