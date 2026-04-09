// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKeyWithIV
// Entry Point: 00c7779c
// Size: 236 bytes
// Signature: undefined __thiscall SetKeyWithIV(SimpleKeyingInterface * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::SimpleKeyingInterface::SetKeyWithIV(unsigned char const*, unsigned long, unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::SimpleKeyingInterface::SetKeyWithIV
          (SimpleKeyingInterface *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  char local_88 [8];
  uchar *local_80;
  ulong uStack_78;
  ulong local_68;
  ulong local_60;
  void *local_58;
  undefined **local_50;
  long *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0xffffffffffffffff;
  local_88[0] = '\0';
                    /* try { // try from 00c777dc to 00c777f3 has its CatchHandler @ 00c778c4 */
  local_80 = param_3;
  uStack_78 = param_4;
  MakeParameters<CryptoPP::ConstByteArrayParameter>
            ((CryptoPP *)&DAT_004fa7ee,local_88,(ConstByteArrayParameter *)0x1,SUB81(param_3,0));
                    /* try { // try from 00c777fc to 00c7780f has its CatchHandler @ 00c77890 */
  (**(code **)(*(long *)this + 0x38))(this,param_1,param_2,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00c77830 to 00c77833 has its CatchHandler @ 00c77888 */
    (**(code **)(*local_48 + 8))();
  }
  uVar2 = local_68;
  if (local_60 <= local_68) {
    uVar2 = local_60;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_58 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00c7785c to 00c7785f has its CatchHandler @ 00c7788c */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


