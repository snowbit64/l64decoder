// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageEnd
// Entry Point: 00ccd5d0
// Size: 188 bytes
// Signature: undefined MessageEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DERGeneralEncoder::MessageEnd() */

void CryptoPP::DERGeneralEncoder::MessageEnd(void)

{
  long lVar1;
  long *in_x0;
  ulong uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined *)((long)in_x0 + 0x51) = 1;
  uVar2 = ByteQueue::CurrentSize();
  local_40 = CONCAT71(local_40._1_7_,*(undefined *)(in_x0 + 10));
  (**(code **)(*(long *)in_x0[9] + 0x38))((long *)in_x0[9],&local_40,1,0,1);
  DERLengthEncode((BufferedTransformation *)in_x0[9],uVar2);
  local_40 = 0xffffffffffffffff;
  (**(code **)(*in_x0 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


