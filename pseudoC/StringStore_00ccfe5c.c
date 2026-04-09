// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringStore
// Entry Point: 00ccfe5c
// Size: 268 bytes
// Signature: undefined __thiscall StringStore(StringStore * this, uchar * param_1, ulong param_2)


/* CryptoPP::StringStore::StringStore(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::StringStore::StringStore(StringStore *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined in_w3;
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
  Algorithm::Algorithm((Algorithm *)this,false);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (StringStore)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__BufferedTransformation_01008290;
  *(undefined ***)(this + 8) = &PTR__StringStore_01008428;
  local_88[0] = '\0';
                    /* try { // try from 00ccfec4 to 00ccfedb has its CatchHandler @ 00ccffa4 */
  local_80 = param_1;
  uStack_78 = param_2;
  MakeParameters<CryptoPP::ConstByteArrayParameter>
            ((CryptoPP *)"InputBuffer",local_88,(ConstByteArrayParameter *)0x1,(bool)in_w3);
                    /* try { // try from 00ccfee4 to 00ccfeef has its CatchHandler @ 00ccff70 */
  (**(code **)(*(long *)this + 0x180))(this,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00ccff10 to 00ccff13 has its CatchHandler @ 00ccff68 */
    (**(code **)(*local_48 + 8))();
  }
  uVar2 = local_68;
  if (local_60 <= local_68) {
    uVar2 = local_60;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_58 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00ccff3c to 00ccff3f has its CatchHandler @ 00ccff6c */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


