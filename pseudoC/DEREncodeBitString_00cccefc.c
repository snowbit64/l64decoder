// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeBitString
// Entry Point: 00cccefc
// Size: 224 bytes
// Signature: undefined __cdecl DEREncodeBitString(BufferedTransformation * param_1, uchar * param_2, ulong param_3, uint param_4)


/* CryptoPP::DEREncodeBitString(CryptoPP::BufferedTransformation&, unsigned char const*, unsigned
   long, unsigned int) */

long CryptoPP::DEREncodeBitString
               (BufferedTransformation *param_1,uchar *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined local_50 [4];
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50[0] = 3;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_50,1,0,1);
  lVar2 = DERLengthEncode(param_1,param_3 + 1);
  local_4c[0] = (undefined)param_4;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2,param_3,0,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_3 + lVar2 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


