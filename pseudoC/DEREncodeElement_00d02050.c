// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeElement
// Entry Point: 00d02050
// Size: 232 bytes
// Signature: undefined __thiscall DEREncodeElement(ModularArithmetic * this, BufferedTransformation * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::DEREncodeElement(CryptoPP::BufferedTransformation&,
   CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::ModularArithmetic::DEREncodeElement
          (ModularArithmetic *this,BufferedTransformation *param_1,Integer *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_94 [4];
  long local_90 [11];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = MaxElementByteLength();
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)local_90,param_1,'\x04');
  if (uVar2 != 0) {
    uVar3 = uVar2 * 8;
    uVar4 = (ulong)uVar2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar4 >> 2 < *(ulong *)(param_2 + 0x18)) {
        local_94[0] = (undefined)
                      (*(uint *)(*(long *)(param_2 + 0x20) + (uVar4 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_94[0] = 0;
      }
                    /* try { // try from 00d020d8 to 00d020ef has its CatchHandler @ 00d0213c */
      (**(code **)(local_90[0] + 0x38))(local_90,local_94,1,0,1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0xffffffffffffffff);
  }
                    /* try { // try from 00d02100 to 00d02107 has its CatchHandler @ 00d02138 */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


