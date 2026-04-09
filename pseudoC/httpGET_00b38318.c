// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: httpGET
// Entry Point: 00b38318
// Size: 316 bytes
// Signature: undefined __cdecl httpGET(char * param_1, basic_string * param_2, Range * param_3, char * param_4, uint * param_5, map * param_6)


/* AndroidHTTPSRequest::httpGET(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, BaseHTTPSRequest::Range const*,
   char const*, unsigned int*, std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >*) */

void AndroidHTTPSRequest::httpGET
               (char *param_1,basic_string *param_2,Range *param_3,char *param_4,uint *param_5,
               map *param_6)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  AndroidJNICall *this;
  Range *__dest;
  uint local_74;
  uchar *local_70;
  uint local_68;
  bool local_64 [4];
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (char *)0x0;
                    /* try { // try from 00b38350 to 00b3835b has its CatchHandler @ 00b38468 */
  gatherAllParameters((AndroidHTTPSRequest *)param_1,(Range *)param_4,(basic_string *)&local_60);
                    /* try { // try from 00b3835c to 00b38363 has its CatchHandler @ 00b38464 */
  this = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b38368 to 00b3836f has its CatchHandler @ 00b38454 */
  AndroidJNICall::AndroidJNICall(this,0);
  local_64[0] = false;
  local_68 = 0;
  pcVar1 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar1 = local_50;
  }
  local_70 = (uchar *)0x0;
  local_74 = 0;
                    /* try { // try from 00b38398 to 00b383e3 has its CatchHandler @ 00b3846c */
  AndroidJNICall::callByteArrayFromStringStringBoolrefIntref
            (this,"httpGet",&local_70,&local_74,(char *)param_2,pcVar1,local_64,&local_68);
  if (param_6 != (map *)0x0) {
    *(uint *)param_6 = local_68;
  }
  if (local_70 != (uchar *)0x0) {
    if (local_74 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)param_3,(char)local_74);
      __dest = *(Range **)(param_3 + 0x10);
      if (((byte)*param_3 & 1) == 0) {
        __dest = param_3 + 1;
      }
      memcpy(__dest,local_70,(ulong)local_74);
      if (local_70 == (uchar *)0x0) goto LAB_00b3840c;
    }
    operator_delete__(local_70);
  }
LAB_00b3840c:
  bVar3 = local_64[0];
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3 != false);
}


