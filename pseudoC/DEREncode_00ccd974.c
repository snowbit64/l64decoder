// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ccd974
// Size: 308 bytes
// Signature: undefined __thiscall DEREncode(OID * this, BufferedTransformation * param_1)


/* CryptoPP::OID::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::OID::DEREncode(OID *this,BufferedTransformation *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_88;
  long local_80 [9];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ByteQueue::ByteQueue((ByteQueue *)local_80,0);
  local_88 = CONCAT71(local_88._1_7_,
                      (char)(*(undefined4 **)(this + 8))[1] +
                      (char)**(undefined4 **)(this + 8) * '(');
                    /* try { // try from 00ccd9c4 to 00ccd9db has its CatchHandler @ 00ccdaa8 */
  (**(code **)(local_80[0] + 0x38))(local_80,&local_88,1,0,1);
  lVar2 = *(long *)(this + 8);
  if (8 < (ulong)(*(long *)(this + 0x10) - lVar2)) {
    uVar3 = 2;
    do {
                    /* try { // try from 00ccd9f4 to 00ccd9fb has its CatchHandler @ 00ccdaac */
      EncodeValue((BufferedTransformation *)local_80,*(uint *)(lVar2 + uVar3 * 4));
      lVar2 = *(long *)(this + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x10) - lVar2 >> 2));
  }
  local_88 = CONCAT71(local_88._1_7_,6);
                    /* try { // try from 00ccda20 to 00ccda77 has its CatchHandler @ 00ccdaa8 */
  (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_88,1,0,1);
  uVar3 = ByteQueue::CurrentSize();
  DERLengthEncode(param_1,uVar3);
  local_88 = 0xffffffffffffffff;
  (**(code **)(local_80[0] + 0x118))(local_80,param_1,&local_88,&DEFAULT_CHANNEL,1);
  ByteQueue::~ByteQueue((ByteQueue *)local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


