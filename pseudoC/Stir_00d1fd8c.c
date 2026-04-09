// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Stir
// Entry Point: 00d1fd8c
// Size: 656 bytes
// Signature: undefined Stir(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::OldRandomPool::Stir() */

void CryptoPP::OldRandomPool::Stir(void)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  long lVar4;
  long lVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  undefined **local_128;
  undefined **local_120;
  undefined ***local_118;
  ulong local_108;
  ulong local_100;
  void *local_f8;
  undefined **local_f0;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined **ppuStack_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>::BlockCipherFinal();
  local_128 = &PTR__SimpleKeyingInterface_00fef588;
                    /* try { // try from 00d1fde0 to 00d1fde7 has its CatchHandler @ 00d2003c */
  Algorithm::Algorithm((Algorithm *)&local_120,true);
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_128 = &PTR__CipherModeFinalTemplate_CipherHolder_0100fa60;
  local_120 = &PTR__CipherModeFinalTemplate_CipherHolder_0100fb98;
  local_f0 = &PTR__CipherModeFinalTemplate_CipherHolder_0100fc30;
  local_c0 = 0;
  local_e0 = 0xffffffffffffffff;
  local_108 = 0xffffffffffffffff;
  local_118 = &local_b8;
                    /* try { // try from 00d1fe24 to 00d1fe2f has its CatchHandler @ 00d2002c */
  CFB_ModePolicy::ResizeBuffers();
  uVar1 = *(ulong *)(in_x0 + 0x38);
  puVar3 = *(uchar **)(in_x0 + 0x40);
  lVar2 = *(long *)(in_x0 + 0x18);
  lVar4 = *(long *)(in_x0 + 0x20);
  uVar7 = local_100 & 0xffffffff;
                    /* try { // try from 00d1fe44 to 00d1fe83 has its CatchHandler @ 00d20050 */
  uVar6 = (*(code *)local_128[9])(&local_128);
  SimpleKeyingInterface::SetKeyWithIV
            ((SimpleKeyingInterface *)&local_128,puVar3,uVar1,(uchar *)((lVar4 + lVar2) - uVar7),
             uVar6 & 0xffffffff);
  (*(code *)local_120[9])
            (&local_120,*(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x20),
             *(undefined8 *)(in_x0 + 0x18));
  memcpy(*(void **)(in_x0 + 0x40),*(void **)(in_x0 + 0x20),*(size_t *)(in_x0 + 0x38));
  uVar1 = *(ulong *)(in_x0 + 0x38);
  puVar3 = *(uchar **)(in_x0 + 0x40);
  lVar2 = *(long *)(in_x0 + 0x18);
  lVar4 = *(long *)(in_x0 + 0x20);
  uVar7 = local_100 & 0xffffffff;
                    /* try { // try from 00d1fea4 to 00d1fedf has its CatchHandler @ 00d20050 */
  uVar6 = (*(code *)local_128[9])(&local_128);
  SimpleKeyingInterface::SetKeyWithIV
            ((SimpleKeyingInterface *)&local_128,puVar3,uVar1,(uchar *)((lVar4 + lVar2) - uVar7),
             uVar6 & 0xffffffff);
  (*(code *)local_120[9])
            (&local_120,*(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x20),
             *(undefined8 *)(in_x0 + 0x18));
  memcpy(*(void **)(in_x0 + 0x40),*(void **)(in_x0 + 0x20),*(size_t *)(in_x0 + 0x38));
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x50) = *(undefined8 *)(in_x0 + 0x38);
  local_128 = &PTR__CFB_ModePolicy_0100d4d8;
  local_120 = &PTR__CFB_ModePolicy_0100d5c8;
  local_f0 = &PTR__CFB_ModePolicy_0100d660;
  uVar1 = local_e0;
  if (local_d8 <= local_e0) {
    uVar1 = local_d8;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)local_d0 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d1ff38 to 00d1ff3b has its CatchHandler @ 00d20028 */
  UnalignedDeallocate(local_d0);
  local_128 = &PTR__CipherModeBase_0100d378;
  local_120 = &PTR__CipherModeBase_0100d428;
  uVar1 = local_108;
  if (local_100 <= local_108) {
    uVar1 = local_100;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)local_f8 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d1ff78 to 00d1ff7b has its CatchHandler @ 00d20024 */
  UnalignedDeallocate(local_f8);
  local_b8 = &PTR__Enc_0100f810;
  ppuStack_b0 = &PTR__Enc_0100f8c8;
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  for (; local_80 != 0; local_80 = local_80 - 1) {
    *(undefined *)((long)local_70 + (local_80 - 1)) = 0;
  }
                    /* try { // try from 00d1ffb8 to 00d1ffbb has its CatchHandler @ 00d20020 */
  UnalignedDeallocate(local_70);
  if (uStack_98 <= local_a0) {
    local_a0 = uStack_98;
  }
  for (; local_a0 != 0; local_a0 = local_a0 - 1) {
    *(undefined *)((long)local_90 + (local_a0 - 1)) = 0;
  }
                    /* try { // try from 00d1ffe4 to 00d1ffe7 has its CatchHandler @ 00d2001c */
  UnalignedDeallocate(local_90);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


