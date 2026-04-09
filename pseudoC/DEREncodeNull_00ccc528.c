// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeNull
// Entry Point: 00ccc528
// Size: 140 bytes
// Signature: undefined __cdecl DEREncodeNull(BufferedTransformation * param_1)


/* CryptoPP::DEREncodeNull(CryptoPP::BufferedTransformation&) */

void CryptoPP::DEREncodeNull(BufferedTransformation *param_1)

{
  long lVar1;
  undefined local_30 [4];
  undefined local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 5;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_30,1,0,1);
  local_2c[0] = 0;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_2c,1,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


