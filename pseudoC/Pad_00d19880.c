// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Pad
// Entry Point: 00d19880
// Size: 576 bytes
// Signature: undefined __thiscall Pad(OAEP_Base * this, RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, uchar * param_4, ulong param_5, NameValuePairs * param_6)


/* CryptoPP::OAEP_Base::Pad(CryptoPP::RandomNumberGenerator&, unsigned char const*, unsigned long,
   unsigned char*, unsigned long, CryptoPP::NameValuePairs const&) const */

void __thiscall
CryptoPP::OAEP_Base::Pad
          (OAEP_Base *this,RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
          uchar *param_4,ulong param_5,NameValuePairs *param_6)

{
  uchar *puVar1;
  ulong *puVar2;
  long lVar3;
  void **ppvVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uchar *puVar8;
  long lVar9;
  char local_a0 [8];
  void *local_98;
  ulong auStack_90 [2];
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar8 = param_4;
  if ((param_5 & 7) != 0) {
    puVar8 = param_4 + 1;
    *param_4 = '\0';
  }
  plVar5 = (long *)(**(code **)(*(long *)this + 0x38))(this);
                    /* try { // try from 00d198f4 to 00d198f7 has its CatchHandler @ 00d19ac8 */
  uVar6 = (**(code **)(*plVar5 + 0x48))();
  uVar6 = uVar6 & 0xffffffff;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_98 = (void *)0x0;
  auStack_90[0] = 0;
  local_80 = 0xffffffffffffffff;
  local_a0[0] = '\0';
                    /* try { // try from 00d19918 to 00d1997b has its CatchHandler @ 00d19ae8 */
  (**(code **)(*(long *)param_6 + 0x10))
            (param_6,"EncodingParameters",&ConstByteArrayParameter::typeinfo,local_a0);
  puVar2 = auStack_90;
  ppvVar4 = &local_98;
  if (local_a0[0] != '\0') {
    puVar2 = &local_78;
    ppvVar4 = &local_70;
  }
  puVar1 = puVar8 + uVar6;
  (**(code **)(*plVar5 + 0x68))(plVar5,puVar1,*ppvVar4,*puVar2);
  lVar9 = (param_5 >> 3) - uVar6;
  memset(puVar1 + uVar6,0,lVar9 + ~(uVar6 + param_3));
  puVar1[lVar9 + ~param_3] = '\x01';
  memcpy(puVar8 + ((param_5 >> 3) - param_3),param_2,param_3);
                    /* try { // try from 00d199c8 to 00d199d7 has its CatchHandler @ 00d19ae8 */
  (**(code **)(*(long *)param_1 + 0x50))(param_1,puVar8,uVar6);
                    /* try { // try from 00d199e0 to 00d199e7 has its CatchHandler @ 00d19ac4 */
  plVar7 = (long *)(**(code **)(*(long *)this + 0x40))(this);
                    /* try { // try from 00d199f4 to 00d19a37 has its CatchHandler @ 00d19ad0 */
  (**(code **)(*plVar7 + 0x10))(plVar7,plVar5,puVar1,lVar9,puVar8,uVar6,1);
  (**(code **)(*plVar7 + 0x10))(plVar7,plVar5,puVar8,uVar6,puVar1,lVar9,1);
  (**(code **)(*plVar7 + 8))(plVar7);
  uVar6 = local_80;
  if (local_78 <= local_80) {
    uVar6 = local_78;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)((long)local_70 + (uVar6 - 1)) = 0;
  }
                    /* try { // try from 00d19a70 to 00d19a73 has its CatchHandler @ 00d19ac0 */
  UnalignedDeallocate(local_70);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


