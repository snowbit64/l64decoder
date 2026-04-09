// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringStore
// Entry Point: 00cb94b4
// Size: 296 bytes
// Signature: undefined __thiscall StringStore(StringStore * this, char * param_1)


/* CryptoPP::StringStore::StringStore(char const*) */

void __thiscall CryptoPP::StringStore::StringStore(StringStore *this,char *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined in_w3;
  char local_88 [8];
  char *local_80;
  undefined8 uStack_78;
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
  local_88[0] = '\0';
  local_80 = (char *)0x0;
  uStack_78 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  *(undefined ***)this = &PTR__BufferedTransformation_01008290;
  *(undefined ***)(this + 8) = &PTR__StringStore_01008428;
  local_68 = 0xffffffffffffffff;
  if (param_1 == (char *)0x0) {
    uStack_78 = 0;
  }
  else {
                    /* try { // try from 00cb951c to 00cb9527 has its CatchHandler @ 00cb95e0 */
    uStack_78 = __strlen_chk(param_1,0xffffffffffffffff);
  }
  local_88[0] = '\0';
                    /* try { // try from 00cb9538 to 00cb954f has its CatchHandler @ 00cb9630 */
  local_80 = param_1;
  MakeParameters<CryptoPP::ConstByteArrayParameter>
            ((CryptoPP *)"InputBuffer",local_88,(ConstByteArrayParameter *)0x1,(bool)in_w3);
                    /* try { // try from 00cb9558 to 00cb9563 has its CatchHandler @ 00cb95fc */
  (**(code **)(*(long *)this + 0x180))(this,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00cb9584 to 00cb9587 has its CatchHandler @ 00cb95dc */
    (**(code **)(*local_48 + 8))();
  }
  uVar2 = local_68;
  if (local_60 <= local_68) {
    uVar2 = local_60;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_58 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00cb95b0 to 00cb95b3 has its CatchHandler @ 00cb95f8 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


