// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserString
// Entry Point: 00c1137c
// Size: 200 bytes
// Signature: undefined getUserString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SHC_Type::getUserString() const */

void SHC_Type::getUserString(void)

{
  long lVar1;
  void *pvVar2;
  bool in_w0;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getQualifierString(in_w0);
                    /* try { // try from 00c113b4 to 00c113bf has its CatchHandler @ 00c11474 */
  IR_Type::getUserString();
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
                    /* try { // try from 00c113dc to 00c113e3 has its CatchHandler @ 00c11444 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)local_50,(ulong)pvVar2);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


