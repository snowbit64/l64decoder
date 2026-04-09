// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: httpPOST
// Entry Point: 00b385f8
// Size: 936 bytes
// Signature: undefined __cdecl httpPOST(char * param_1, char * param_2, uint param_3, FormPostData * param_4, basic_string * param_5, Range * param_6, uint * param_7, map * param_8)


/* AndroidHTTPSRequest::httpPOST(char const*, char const*, unsigned int,
   BaseHTTPSRequest::FormPostData const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, BaseHTTPSRequest::Range const*,
   unsigned int*, std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >*) */

void AndroidHTTPSRequest::httpPOST
               (char *param_1,char *param_2,uint param_3,FormPostData *param_4,basic_string *param_5
               ,Range *param_6,uint *param_7,map *param_8)

{
  char *pcVar1;
  char *pcVar2;
  basic_string bVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  AndroidJNICall *this;
  long lVar8;
  GsBitStream *this_00;
  uchar *puVar9;
  Range *__dest;
  ulong uVar10;
  uchar **ppuVar11;
  char *local_508;
  uint local_4fc;
  uchar *local_4f8;
  uint local_4f0;
  bool local_4ec [4];
  ulong local_4e8;
  undefined8 uStack_4e0;
  char *local_4d8;
  uchar auStack_4d0 [1024];
  char acStack_d0 [64];
  undefined auStack_90 [32];
  long local_70;
  
  puVar9 = (uchar *)(ulong)param_3;
  lVar4 = tpidr_el0;
  uVar10 = (ulong)param_4 & 0xffffffff;
  local_70 = *(long *)(lVar4 + 0x28);
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = (char *)0x0;
                    /* try { // try from 00b38644 to 00b3864f has its CatchHandler @ 00b389d0 */
  gatherAllParameters((AndroidHTTPSRequest *)param_1,(Range *)param_7,(basic_string *)&local_4e8);
                    /* try { // try from 00b38650 to 00b38657 has its CatchHandler @ 00b389cc */
  this = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b3865c to 00b38663 has its CatchHandler @ 00b389bc */
  AndroidJNICall::AndroidJNICall(this,0);
  local_4ec[0] = false;
  local_4f0 = 0;
  local_4f8 = (uchar *)0x0;
  local_4fc = 0;
                    /* try { // try from 00b38678 to 00b3870f has its CatchHandler @ 00b389d4 */
  if ((puVar9 == (uchar *)0x0) ||
     (lVar8 = __strlen_chk(puVar9,0xffffffffffffffff), pcVar2 = local_4d8, uVar6 = local_4e8,
     lVar8 == 0)) {
    if ((int)param_4 == 0) {
      pcVar2 = (char *)((ulong)&local_4e8 | 1);
      if ((local_4e8 & 1) != 0) {
        pcVar2 = local_4d8;
      }
                    /* try { // try from 00b38960 to 00b38997 has its CatchHandler @ 00b389d4 */
      AndroidJNICall::callByteArrayFromStringStringStringByteArrayBoolrefIntref
                (this,"httpPost",&local_4f8,&local_4fc,param_2,pcVar2,"",(uchar *)0x0,0,local_4ec,
                 &local_4f0);
    }
    else {
      local_508 = (char *)0x0;
                    /* try { // try from 00b38794 to 00b3879f has its CatchHandler @ 00b389b4 */
      StringUtil::base64Encode(*(uchar **)(param_5 + 4),param_5[6],false,&local_508);
                    /* try { // try from 00b387a4 to 00b387d7 has its CatchHandler @ 00b389b8 */
      FUN_00b389f8(auStack_90,0x20,0x20,&DAT_004d33bb,local_508);
      FUN_00b389f8(acStack_d0,0x40,0x40,"multipart/form-data; boundary=%s",auStack_90);
      bVar3 = param_5[6];
                    /* try { // try from 00b387dc to 00b387e3 has its CatchHandler @ 00b389b0 */
      this_00 = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 00b387f0 to 00b387f3 has its CatchHandler @ 00b389a0 */
      GsBitStream::GsBitStream(this_00,(bVar3 + 0x400) * (int)param_4);
      ppuVar11 = (uchar **)(param_5 + 4);
      do {
                    /* try { // try from 00b38810 to 00b38883 has its CatchHandler @ 00b389dc */
        FUN_00b389f8(auStack_4d0,0x400,0x400,
                     "--%s\r\nContent-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\nContent-Transfer-Encoding: binary\r\n\r\n"
                     ,auStack_90,ppuVar11[-2],ppuVar11[-1]);
        uVar7 = __strlen_chk(auStack_4d0,0x400);
        GsBitStream::writeAlignedBytes(this_00,auStack_4d0,uVar7);
        GsBitStream::writeAlignedBytes(this_00,*ppuVar11,*(uint *)(ppuVar11 + 1));
        FUN_00b389f8(auStack_4d0,0x400,0x400,&DAT_004cd8cc);
        uVar7 = __strlen_chk(auStack_4d0,0x400);
        GsBitStream::writeAlignedBytes(this_00,auStack_4d0,uVar7);
        ppuVar11 = ppuVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
                    /* try { // try from 00b38890 to 00b3892f has its CatchHandler @ 00b389d8 */
      FUN_00b389f8(auStack_4d0,0x400,0x400,"--%s--\r\n",auStack_90);
      uVar7 = __strlen_chk(auStack_4d0,0x400);
      GsBitStream::writeAlignedBytes(this_00,auStack_4d0,uVar7);
      pcVar2 = (char *)((ulong)&local_4e8 | 1);
      if ((local_4e8 & 1) != 0) {
        pcVar2 = local_4d8;
      }
      puVar9 = (uchar *)GsBitStream::getData();
      uVar7 = GsBitStream::getNumBytesUsed();
      AndroidJNICall::callByteArrayFromStringStringStringByteArrayBoolrefIntref
                (this,"httpPost",&local_4f8,&local_4fc,param_2,pcVar2,acStack_d0,puVar9,uVar7,
                 local_4ec,&local_4f0);
      GsBitStream::~GsBitStream(this_00);
      operator_delete(this_00);
    }
  }
  else {
    uVar7 = __strlen_chk(puVar9,0xffffffffffffffff);
    pcVar1 = (char *)((ulong)&local_4e8 | 1);
    if ((uVar6 & 1) != 0) {
      pcVar1 = pcVar2;
    }
    AndroidJNICall::callByteArrayFromStringStringStringByteArrayBoolrefIntref
              (this,"httpPost",&local_4f8,&local_4fc,param_2,pcVar1,
               "application/x-www-form-urlencoded",puVar9,uVar7,local_4ec,&local_4f0);
  }
  if (param_8 != (map *)0x0) {
    *(uint *)param_8 = local_4f0;
  }
  if (local_4f8 != (uchar *)0x0) {
    if (local_4fc != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)param_6,(char)local_4fc);
      __dest = *(Range **)(param_6 + 0x10);
      if (((byte)*param_6 & 1) == 0) {
        __dest = param_6 + 1;
      }
      memcpy(__dest,local_4f8,(ulong)local_4fc);
      if (local_4f8 == (uchar *)0x0) goto LAB_00b38738;
    }
    operator_delete__(local_4f8);
  }
LAB_00b38738:
  bVar5 = local_4ec[0];
  if ((local_4e8 & 1) != 0) {
    operator_delete(local_4d8);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5 != false);
  }
  return;
}


