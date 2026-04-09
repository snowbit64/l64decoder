// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeAsOctetString
// Entry Point: 00cf9cf0
// Size: 216 bytes
// Signature: undefined __thiscall DEREncodeAsOctetString(Integer * this, BufferedTransformation * param_1, ulong param_2)


/* CryptoPP::Integer::DEREncodeAsOctetString(CryptoPP::BufferedTransformation&, unsigned long) const
    */

void __thiscall
CryptoPP::Integer::DEREncodeAsOctetString
          (Integer *this,BufferedTransformation *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined local_94 [4];
  long local_90 [11];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)local_90,param_1,'\x04');
  if (param_2 != 0) {
    uVar3 = (int)param_2 * 8;
    uVar2 = param_2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar2 >> 2 < *(ulong *)(this + 0x18)) {
        local_94[0] = (undefined)
                      (*(uint *)(*(long *)(this + 0x20) + (uVar2 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_94[0] = 0;
      }
                    /* try { // try from 00cf9d68 to 00cf9d7f has its CatchHandler @ 00cf9dcc */
      (**(code **)(local_90[0] + 0x38))(local_90,local_94,1,0,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
                    /* try { // try from 00cf9d90 to 00cf9d97 has its CatchHandler @ 00cf9dc8 */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


