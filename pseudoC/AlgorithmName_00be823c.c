// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00be823c
// Size: 196 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GCM_Base::AlgorithmName() const */

void CryptoPP::GCM_Base::AlgorithmName(void)

{
  long lVar1;
  long *in_x0;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_58;
  undefined4 local_57;
  undefined local_53;
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*in_x0 + 0x150))();
  (**(code **)(*(long *)(lVar2 + 8) + 0x18))(local_40);
  local_53 = 0;
  local_58 = 8;
  local_57 = 0x4d43472f;
                    /* try { // try from 00be8298 to 00be82a3 has its CatchHandler @ 00be8300 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)local_40,(ulong)&local_58 | 1);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


