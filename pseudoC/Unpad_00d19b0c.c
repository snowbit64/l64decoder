// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unpad
// Entry Point: 00d19b0c
// Size: 772 bytes
// Signature: undefined __thiscall Unpad(OAEP_Base * this, uchar * param_1, ulong param_2, uchar * param_3, NameValuePairs * param_4)


/* CryptoPP::OAEP_Base::Unpad(unsigned char const*, unsigned long, unsigned char*,
   CryptoPP::NameValuePairs const&) const */

undefined  [16] __thiscall
CryptoPP::OAEP_Base::Unpad
          (OAEP_Base *this,uchar *param_1,ulong param_2,uchar *param_3,NameValuePairs *param_4)

{
  long lVar1;
  char *pcVar2;
  ulong *puVar3;
  long lVar4;
  void **ppvVar5;
  char *pcVar6;
  void *pvVar7;
  bool bVar8;
  byte bVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  size_t __n;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined auVar19 [16];
  char local_c0 [8];
  void *local_b8;
  ulong auStack_b0 [2];
  ulong local_a0;
  ulong local_98;
  void *local_90;
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> aSStack_88 [8];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((param_2 & 7) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *param_1 != '\0';
    param_1 = param_1 + 1;
  }
  plVar10 = (long *)(**(code **)(*(long *)this + 0x38))(this);
                    /* try { // try from 00d19b84 to 00d19b87 has its CatchHandler @ 00d19e4c */
  uVar11 = (**(code **)(*plVar10 + 0x48))();
  uVar11 = uVar11 & 0xffffffff;
  uVar15 = param_2 >> 3;
                    /* try { // try from 00d19b90 to 00d19b9f has its CatchHandler @ 00d19e44 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            (aSStack_88,param_1,uVar15);
  pvVar7 = local_70;
                    /* try { // try from 00d19bb0 to 00d19bb7 has its CatchHandler @ 00d19e3c */
  plVar12 = (long *)(**(code **)(*(long *)this + 0x40))(this);
  lVar1 = (long)pvVar7 + uVar11;
                    /* try { // try from 00d19bd0 to 00d19c13 has its CatchHandler @ 00d19e54 */
  (**(code **)(*plVar12 + 0x10))(plVar12,plVar10,pvVar7,uVar11,lVar1,uVar15 - uVar11,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,plVar10,lVar1,uVar15 - uVar11,pvVar7,uVar11,1);
  local_98 = 0;
  local_90 = (void *)0x0;
  local_b8 = (void *)0x0;
  auStack_b0[0] = 0;
  local_a0 = 0xffffffffffffffff;
  local_c0[0] = '\0';
                    /* try { // try from 00d19c30 to 00d19c4b has its CatchHandler @ 00d19e2c */
  (**(code **)(*(long *)param_4 + 0x10))
            (param_4,"EncodingParameters",&ConstByteArrayParameter::typeinfo,local_c0);
  pcVar18 = (char *)(lVar1 + uVar11);
  pcVar2 = (char *)((long)pvVar7 + uVar15);
  pcVar16 = pcVar18;
  if (pcVar18 != pcVar2) {
    lVar13 = uVar15 + uVar11 * -2;
    do {
      pcVar6 = pcVar18;
      pcVar17 = pcVar16;
      if (*pcVar16 == '\x01') break;
      pcVar16 = pcVar16 + 1;
      lVar13 = lVar13 + -1;
      pcVar17 = pcVar2;
    } while (lVar13 != 0);
    for (; (pcVar16 = pcVar18, pcVar6 != pcVar17 &&
           (pcVar18 = pcVar17, pcVar16 = pcVar6, *pcVar6 == '\0')); pcVar6 = pcVar6 + 1) {
    }
  }
  puVar3 = auStack_b0;
  ppvVar5 = &local_b8;
  if (local_c0[0] != '\0') {
    puVar3 = &local_98;
    ppvVar5 = &local_90;
  }
                    /* try { // try from 00d19cdc to 00d19ce7 has its CatchHandler @ 00d19e18 */
  bVar9 = (**(code **)(*plVar10 + 0x78))(plVar10,lVar1,*ppvVar5,*puVar3);
  if ((byte)((pcVar18 == pcVar2 || pcVar16 != pcVar18) | (bVar9 ^ 0xff) & 1 |
             uVar15 < (uVar11 << 1 | 1) | bVar8) == 0) {
    __n = (long)pcVar2 - (long)(pcVar18 + 1);
    memcpy(param_3,pcVar18 + 1,__n);
    uVar14 = 1;
    uVar11 = local_a0;
    if (local_98 <= local_a0) {
      uVar11 = local_98;
    }
  }
  else {
    uVar14 = 0;
    __n = 0;
    uVar11 = local_a0;
    if (local_98 <= local_a0) {
      uVar11 = local_98;
    }
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined *)((long)local_90 + (uVar11 - 1)) = 0;
  }
                    /* try { // try from 00d19d7c to 00d19d7f has its CatchHandler @ 00d19e14 */
  UnalignedDeallocate(local_90);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  for (; local_80 != 0; local_80 = local_80 - 1) {
    *(undefined *)((long)local_70 + (local_80 - 1)) = 0;
  }
                    /* try { // try from 00d19dbc to 00d19dbf has its CatchHandler @ 00d19e10 */
  UnalignedDeallocate(local_70);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar19._8_8_ = __n;
  auVar19._0_8_ = uVar14;
  return auVar19;
}


