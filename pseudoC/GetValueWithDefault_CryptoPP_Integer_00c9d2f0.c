// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValueWithDefault<CryptoPP::Integer>
// Entry Point: 00c9d2f0
// Size: 228 bytes
// Signature: Integer __cdecl GetValueWithDefault<CryptoPP::Integer>(char * param_1, Integer param_2)


/* CryptoPP::Integer CryptoPP::NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(char const*,
   CryptoPP::Integer) const */

void CryptoPP::NameValuePairs::GetValueWithDefault<CryptoPP::Integer>
               (Integer *param_1_00,long *param_1,undefined8 param_3,Integer *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_78);
                    /* try { // try from 00c9d334 to 00c9d36b has its CatchHandler @ 00c9d3d8 */
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_3,&Integer::typeinfo,local_78);
  if ((uVar2 & 1) == 0) {
    Integer::Integer(param_1_00,param_4);
  }
  else {
    Integer::Integer(param_1_00,(Integer *)local_78);
  }
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9d3a4 to 00c9d3a7 has its CatchHandler @ 00c9d3d4 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


