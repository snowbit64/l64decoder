// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendImpressionsAsync
// Entry Point: 00af44fc
// Size: 1228 bytes
// Signature: undefined __thiscall sendImpressionsAsync(GiantsAdsProvider * this, bool * param_1, AndroidHTTPSRequest * param_2)


/* GiantsAdsProvider::sendImpressionsAsync(bool volatile&, AndroidHTTPSRequest&) */

undefined4 __thiscall
GiantsAdsProvider::sendImpressionsAsync
          (GiantsAdsProvider *this,bool *param_1,AndroidHTTPSRequest *param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  GiantsAdsProvider *pGVar4;
  undefined *__src;
  long *this_00;
  basic_ostream *pbVar5;
  size_t sVar6;
  ulong uVar7;
  void *__src_00;
  ulong uVar8;
  undefined4 uVar9;
  char *pcVar10;
  map amStack_204 [4];
  ulong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  size_t local_1e0;
  char *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [8];
  ulong local_1b0;
  char *local_1a8;
  GiantsAdsProvider *local_1a0;
  GiantsAdsProvider *local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170 [8];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  pvVar2 = *(void **)(this + 0x1a0);
  if (200 < (ulong)((*(long *)(this + 0x1a8) - (long)pvVar2 >> 3) * -0x3333333333333333)) {
    sVar6 = *(long *)(this + 0x1a8) - (long)(void *)((long)pvVar2 + 8000);
    if (sVar6 != 0) {
      memmove(pvVar2,(void *)((long)pvVar2 + 8000),sVar6);
    }
    *(size_t *)(this + 0x1a8) = (long)pvVar2 + sVar6;
    savePendingImpressions();
  }
  std::__ndk1::
  vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::
  vector((vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
          *)&local_1a0,(vector *)(this + 0x1a0));
                    /* try { // try from 00af4598 to 00af459f has its CatchHandler @ 00af4a20 */
  Mutex::leaveCriticalSection();
  if (local_1a0 == local_198) {
    uVar9 = 1;
    goto joined_r0x00af4760;
  }
                    /* try { // try from 00af45ac to 00af45b7 has its CatchHandler @ 00af4a0c */
  buildImpressionsJSON(local_1a0,(vector *)&local_1a0);
  local_188 = 0xfdbfc8;
  local_108[0] = 0xfdbff0;
  local_180 = 0;
  local_178 = 0xfdbeb0;
                    /* try { // try from 00af45f0 to 00af45fb has its CatchHandler @ 00af49fc */
  std::__ndk1::ios_base::init(local_108);
  local_188 = 0xfdbe88;
  local_108[0] = 0xfdbed8;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_178 = 0xfdbeb0;
                    /* try { // try from 00af461c to 00af4623 has its CatchHandler @ 00af49e0 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_110 = 0x18;
  uStack_128 = 0;
  local_130 = 0;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
                    /* try { // try from 00af4650 to 00af470b has its CatchHandler @ 00af4a7c */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_178,"action=storeDatabase",0x14);
  this_00 = (long *)std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_178,"&productId=",0xb);
  *(uint *)((long)this_00 + *(long *)(*this_00 + -0x18) + 8) =
       *(uint *)((long)this_00 + *(long *)(*this_00 + -0x18) + 8) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,*(uint *)(this + 0x30));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"&platform=",10);
  uVar7 = (ulong)((byte)this[0xd8] >> 1);
  pGVar4 = this + 0xd9;
  if (((byte)this[0xd8] & 1) != 0) {
    uVar7 = *(ulong *)(this + 0xe0);
    pGVar4 = *(GiantsAdsProvider **)(this + 0xe8);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5,(char *)pGVar4,uVar7);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"&impressions=",0xd);
  uVar7 = (ulong)(local_1b8[0] >> 1);
  pcVar10 = (char *)((ulong)local_1b8 | 1);
  if ((local_1b8[0] & 1) != 0) {
    uVar7 = local_1b0;
    pcVar10 = local_1a8;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar10,uVar7);
                    /* try { // try from 00af470c to 00af4717 has its CatchHandler @ 00af49dc */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  __src = s_adsServerHostname;
  sVar6 = strlen(s_adsServerHostname);
  if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00af49bc to 00af49c3 has its CatchHandler @ 00af4a10 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pcVar10 = (char *)((ulong)&local_1e8 | 1);
    local_1e8 = CONCAT71(local_1e8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00af4798;
  }
  else {
    uVar7 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00af4774 to 00af477b has its CatchHandler @ 00af4a10 */
    pcVar10 = (char *)operator_new(uVar7);
    local_1e8 = uVar7 | 1;
    local_1e0 = sVar6;
    local_1d8 = pcVar10;
LAB_00af4798:
    memcpy(pcVar10,__src,sVar6);
  }
  pcVar10[sVar6] = '\0';
                    /* try { // try from 00af47ac to 00af47bf has its CatchHandler @ 00af49cc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1e8);
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (char *)0x0;
  pcVar10 = (char *)((ulong)&local_1e8 | 1);
  if ((local_1e8 & 1) != 0) {
    pcVar10 = local_1d8;
  }
  uVar1 = (uint)local_1d0 | 1;
  if ((local_1d0[0] & 1) != 0) {
    uVar1 = (uint)local_1c0;
  }
                    /* try { // try from 00af47f4 to 00af4853 has its CatchHandler @ 00af4a30 */
  uVar7 = AndroidHTTPSRequest::httpPOST
                    ((char *)param_2,pcVar10,uVar1,(FormPostData *)0x0,(basic_string *)0x0,
                     (Range *)&local_200,(uint *)0x0,amStack_204);
  if ((uVar7 & 1) == 0) {
LAB_00af48d8:
    uVar9 = 0;
  }
  else {
    pcVar10 = (char *)((ulong)&local_200 | 1);
    if ((local_200 & 1) != 0) {
      pcVar10 = local_1f0;
    }
    uVar7 = StringUtil::startsWith(pcVar10,"OK");
    if ((uVar7 & 1) == 0) goto LAB_00af48d8;
    Mutex::enterCriticalSection();
    pvVar2 = *(void **)(this + 0x1a0);
    uVar8 = ((long)local_198 - (long)local_1a0 >> 3) * -0x3333333333333333;
    uVar7 = (*(long *)(this + 0x1a8) - (long)pvVar2 >> 3) * -0x3333333333333333;
    if ((uint)uVar8 <= (uint)uVar7) {
      uVar7 = uVar8;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      __src_00 = (void *)((long)pvVar2 + (uVar7 & 0xffffffff) * 0x28);
      sVar6 = *(long *)(this + 0x1a8) - (long)__src_00;
      if (sVar6 != 0) {
        memmove(pvVar2,__src_00,sVar6);
      }
      *(size_t *)(this + 0x1a8) = (long)pvVar2 + sVar6;
    }
                    /* try { // try from 00af48b4 to 00af48c3 has its CatchHandler @ 00af49c8 */
    Mutex::leaveCriticalSection();
    savePendingImpressions();
    uVar9 = 1;
  }
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  local_188 = 0xfdbe88;
  local_108[0] = 0xfdbed8;
  local_178 = 0xfdbeb0;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_170);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_188);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
joined_r0x00af4760:
  if (local_1a0 != (GiantsAdsProvider *)0x0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


