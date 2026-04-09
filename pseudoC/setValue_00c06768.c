// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValue
// Entry Point: 00c06768
// Size: 456 bytes
// Signature: undefined __thiscall setValue(KeyValueCacheClient * this, char * param_1, char * param_2, uint param_3, uchar * param_4)


/* KeyValueCacheClient::setValue(char const*, char const*, unsigned int, unsigned char const*) */

uint __thiscall
KeyValueCacheClient::setValue
          (KeyValueCacheClient *this,char *param_1,char *param_2,uint param_3,uchar *param_4)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  KeyValueCacheClient *pKVar6;
  void *__dest;
  ulong local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  void *local_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  void *local_98;
  uint local_90;
  char *local_88;
  undefined *puStack_80;
  uchar *local_78;
  uint local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)getHttpsRequestForCurrentThread();
  if (pcVar3 == (char *)0x0) goto LAB_00c068f0;
  local_c8 = &DAT_004ffd29;
  puStack_c0 = &DAT_004ffd2d;
  local_b8 = param_1;
  sVar4 = strlen(param_1);
  local_b0 = (undefined4)sVar4;
  sVar4 = strlen(param_2);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    __dest = (void *)((ulong)&local_e0 | 1);
    local_e0 = CONCAT71(local_e0._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00c0682c;
  }
  else {
    uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_e0 = uVar5 | 1;
    local_d8 = sVar4;
    local_d0 = __dest;
LAB_00c0682c:
    memcpy(__dest,param_2,sVar4);
  }
  *(undefined *)((long)__dest + sVar4) = 0;
                    /* try { // try from 00c06840 to 00c0684b has its CatchHandler @ 00c06960 */
  StringUtil::base64ToBase64URLInPlace((basic_string *)&local_e0);
  bVar2 = (local_e0 & 1) != 0;
  local_90 = (uint)((byte)local_e0 >> 1);
  if (bVar2) {
    local_90 = (uint)local_d8;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_98 = (void *)((ulong)&local_e0 | 1);
  if (bVar2) {
    local_98 = local_d0;
  }
  local_e8 = (void *)0x0;
  pKVar6 = *(KeyValueCacheClient **)(this + 0x10);
  local_a8 = &DAT_004d72c1;
  puStack_a0 = &DAT_004ffd2d;
  if (((byte)*this & 1) == 0) {
    pKVar6 = this + 1;
  }
  local_88 = "value";
  puStack_80 = &DAT_004ffd2d;
                    /* try { // try from 00c068a8 to 00c068cb has its CatchHandler @ 00c06930 */
  local_78 = param_4;
  local_70 = param_3;
  uVar5 = AndroidHTTPSRequest::httpPOST
                    (pcVar3,(char *)pKVar6,0,(FormPostData *)0x3,(basic_string *)&local_c8,
                     (Range *)&local_f8,(uint *)0x0,(map *)0x0);
  pcVar3 = (char *)(uVar5 & 0xffffffff);
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
LAB_00c068f0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)pcVar3 & 1;
}


