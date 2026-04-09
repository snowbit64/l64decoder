// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetIVAndThrowIfInvalid
// Entry Point: 00c78468
// Size: 380 bytes
// Signature: undefined __thiscall GetIVAndThrowIfInvalid(SimpleKeyingInterface * this, NameValuePairs * param_1, ulong * param_2)


/* CryptoPP::SimpleKeyingInterface::GetIVAndThrowIfInvalid(CryptoPP::NameValuePairs const&, unsigned
   long&) */

uchar * __thiscall
CryptoPP::SimpleKeyingInterface::GetIVAndThrowIfInvalid
          (SimpleKeyingInterface *this,NameValuePairs *param_1,ulong *param_2)

{
  uchar **ppuVar1;
  ulong *puVar2;
  long lVar3;
  uchar *puVar4;
  ulong uVar5;
  uchar *local_88;
  char local_80 [8];
  uchar *local_78;
  ulong auStack_70 [2];
  ulong local_60;
  ulong local_58;
  uchar *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = 0;
  local_50 = (uchar *)0x0;
  local_60 = 0xffffffffffffffff;
  local_78 = (uchar *)0x0;
  auStack_70[0] = 0;
  local_80[0] = '\0';
  local_88 = (uchar *)0x0;
                    /* try { // try from 00c784b8 to 00c784d3 has its CatchHandler @ 00c78524 */
  uVar5 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,&DAT_004fa7ee,&ConstByteArrayParameter::typeinfo,local_80);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 00c78544 to 00c7858f has its CatchHandler @ 00c78604 */
    uVar5 = (**(code **)(*(long *)param_1 + 0x10))
                      (param_1,&DAT_004fa7ee,&unsigned_char_const*::typeinfo,&local_88);
    if ((uVar5 & 1) == 0) {
      ThrowIfResynchronizable();
      uVar5 = 0;
    }
    else {
      ThrowIfInvalidIV(this,local_88);
      uVar5 = (**(code **)(*(long *)this + 0x48))(this);
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  else {
    ppuVar1 = &local_78;
    if (local_80[0] != '\0') {
      ppuVar1 = &local_50;
    }
    local_88 = *ppuVar1;
                    /* try { // try from 00c784f8 to 00c7851f has its CatchHandler @ 00c78604 */
    ThrowIfInvalidIV(this,local_88);
    puVar2 = auStack_70;
    if (local_80[0] != '\0') {
      puVar2 = &local_58;
    }
    uVar5 = ThrowIfInvalidIVLength(this,*(int *)puVar2);
  }
  puVar4 = local_88;
  *param_2 = uVar5;
  uVar5 = local_60;
  if (local_58 <= local_60) {
    uVar5 = local_58;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    local_50[uVar5 - 1] = '\0';
  }
                    /* try { // try from 00c785c4 to 00c785cb has its CatchHandler @ 00c78600 */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}


