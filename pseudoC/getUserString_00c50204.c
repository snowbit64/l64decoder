// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserString
// Entry Point: 00c50204
// Size: 1008 bytes
// Signature: undefined getUserString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::getUserString() const */

void IR_Type::getUserString(void)

{
  long lVar1;
  void *pvVar2;
  char cVar3;
  int *in_x0;
  int iVar4;
  undefined8 *in_x8;
  byte local_58 [16];
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar4 = *in_x0;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (iVar4 < 3) {
    switch(in_x0[2]) {
    case 0:
                    /* try { // try from 00c50264 to 00c5035f has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 1:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 2:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 3:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 4:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 5:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 6:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 7:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 9:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
    }
    iVar4 = *in_x0;
  }
  if (iVar4 - 1U < 8) {
    cVar3 = (char)in_x8;
    switch(iVar4) {
    case 2:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
    case 1:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 3:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 4:
                    /* try { // try from 00c503e0 to 00c503eb has its CatchHandler @ 00c50610 */
      getUserString();
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar2 = local_48;
      }
                    /* try { // try from 00c50408 to 00c5040f has its CatchHandler @ 00c5060c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if (in_x0[4] == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
      }
      else {
                    /* try { // try from 00c50428 to 00c50447 has its CatchHandler @ 00c50648 */
        FUN_00c4ef5c(local_58,0x20,&DAT_0050e6f4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
      }
      break;
    case 5:
                    /* try { // try from 00c50368 to 00c50373 has its CatchHandler @ 00c50644 */
      buildMangledName();
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar2 = local_48;
      }
                    /* try { // try from 00c50390 to 00c50397 has its CatchHandler @ 00c50614 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
                    /* try { // try from 00c503a8 to 00c503d7 has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 6:
                    /* try { // try from 00c504b4 to 00c504bf has its CatchHandler @ 00c50608 */
      buildMangledName();
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar2 = local_48;
      }
                    /* try { // try from 00c504dc to 00c504e3 has its CatchHandler @ 00c50604 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
                    /* try { // try from 00c504f4 to 00c504ff has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 7:
                    /* try { // try from 00c5050c to 00c50517 has its CatchHandler @ 00c50600 */
      IR_TextureInfo::getUserString((int)in_x0 + 0x14);
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar2 = local_48;
      }
                    /* try { // try from 00c50534 to 00c5053b has its CatchHandler @ 00c505fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
                    /* try { // try from 00c5054c to 00c50557 has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
                    /* try { // try from 00c5055c to 00c50567 has its CatchHandler @ 00c505f8 */
      getUserString();
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar2 = local_48;
      }
                    /* try { // try from 00c50584 to 00c5058b has its CatchHandler @ 00c505f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
                    /* try { // try from 00c5059c to 00c505bb has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 8:
                    /* try { // try from 00c50468 to 00c5048f has its CatchHandler @ 00c5064c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


