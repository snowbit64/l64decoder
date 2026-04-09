// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeOctetString
// Entry Point: 00ccc768
// Size: 180 bytes
// Signature: undefined __cdecl DEREncodeOctetString(BufferedTransformation * param_1, SecBlock * param_2)


/* CryptoPP::DEREncodeOctetString(CryptoPP::BufferedTransformation&, CryptoPP::SecBlock<unsigned
   char, CryptoPP::AllocatorWithCleanup<unsigned char, false> > const&) */

long CryptoPP::DEREncodeOctetString(BufferedTransformation *param_1,SecBlock *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_4c[0] = 4;
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
  lVar4 = DERLengthEncode(param_1,uVar1);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,uVar2,uVar1,0,1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar1 + lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


