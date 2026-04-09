// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeOctetString
// Entry Point: 00ccc6b0
// Size: 184 bytes
// Signature: undefined __cdecl DEREncodeOctetString(BufferedTransformation * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::DEREncodeOctetString(CryptoPP::BufferedTransformation&, unsigned char const*, unsigned
   long) */

long CryptoPP::DEREncodeOctetString(BufferedTransformation *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 4;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
  lVar2 = DERLengthEncode(param_1,param_3);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2,param_3,0,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_3 + lVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


