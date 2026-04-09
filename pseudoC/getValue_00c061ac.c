// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValue
// Entry Point: 00c061ac
// Size: 700 bytes
// Signature: undefined __thiscall getValue(KeyValueCacheClient * this, char * param_1, char * param_2, uint * param_3, uchar * * param_4)


/* KeyValueCacheClient::getValue(char const*, char const*, unsigned int&, unsigned char*&) */

ulong __thiscall
KeyValueCacheClient::getValue
          (KeyValueCacheClient *this,char *param_1,char *param_2,uint *param_3,uchar **param_4)

{
  basic_string *pbVar1;
  long lVar2;
  char *pcVar3;
  size_t __n;
  ulong *puVar4;
  ulong uVar5;
  uchar *__dest;
  void *pvVar6;
  ulong uVar7;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  basic_string *local_90;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)getHttpsRequestForCurrentThread();
  if (pcVar3 == (char *)0x0) goto LAB_00c063e0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00c0624c;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_80 = uVar7 | 1;
    local_78 = __n;
    local_70 = pvVar6;
LAB_00c0624c:
    memcpy(pvVar6,param_2,__n);
  }
  *(undefined *)((long)pvVar6 + __n) = 0;
                    /* try { // try from 00c06260 to 00c06267 has its CatchHandler @ 00c064d8 */
  StringUtil::base64ToBase64URLInPlace((basic_string *)&local_80);
                    /* try { // try from 00c06268 to 00c0627b has its CatchHandler @ 00c064d0 */
  FUN_006cadd8(local_f8,this,"?app=");
                    /* try { // try from 00c0627c to 00c06287 has its CatchHandler @ 00c064bc */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_f8);
  local_d0 = (void *)puVar4[2];
  uStack_d8 = puVar4[1];
  local_e0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00c062a0 to 00c062af has its CatchHandler @ 00c0649c */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_e0);
  local_b0 = (void *)puVar4[2];
  uStack_b8 = puVar4[1];
  local_c0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  pvVar6 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar6 = local_70;
  }
                    /* try { // try from 00c062e8 to 00c062ef has its CatchHandler @ 00c06468 */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_c0,(ulong)pvVar6);
  local_90 = (basic_string *)puVar4[2];
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  pbVar1 = (basic_string *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pbVar1 = local_90;
  }
                    /* try { // try from 00c06348 to 00c0639b has its CatchHandler @ 00c064e0 */
  uVar5 = AndroidHTTPSRequest::httpGET
                    (pcVar3,pbVar1,(Range *)&local_c0,(char *)0x0,(uint *)0x0,(map *)&local_e0);
  uVar7 = local_c0;
  pcVar3 = (char *)0x0;
  if (((uVar5 & 1) != 0) && ((int)local_e0 != 0x194)) {
    uVar5 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar5 = uStack_b8;
    }
    *param_3 = (uint)uVar5;
    __dest = (uchar *)operator_new__(uVar5 & 0xffffffff);
    *param_4 = __dest;
    pvVar6 = (void *)((ulong)&local_c0 | 1);
    if ((uVar7 & 1) != 0) {
      pvVar6 = local_b0;
    }
    memcpy(__dest,pvVar6,uVar5 & 0xffffffff);
    pcVar3 = (char *)(ulong)((uint)uVar5 != 0);
  }
  if ((uVar7 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00c063e0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (ulong)pcVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


