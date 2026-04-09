// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMangledName
// Entry Point: 00c4fc88
// Size: 956 bytes
// Signature: undefined buildMangledName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::buildMangledName() const */

void IR_Type::buildMangledName(void)

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
  cVar3 = (char)in_x8;
  if (iVar4 == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
LAB_00c4fce8:
    iVar4 = *in_x0;
  }
  else if (iVar4 == 2) {
                    /* try { // try from 00c4fccc to 00c4fdff has its CatchHandler @ 00c5009c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
    goto LAB_00c4fce8;
  }
  if (iVar4 < 3) {
    switch(in_x0[2]) {
    case 0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 1:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 2:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      break;
    case 3:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 4:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 5:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 6:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 7:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      break;
    case 9:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
    }
  }
  switch(*in_x0) {
  case 2:
                    /* try { // try from 00c4fee8 to 00c4ff3b has its CatchHandler @ 00c5009c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
  case 1:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
    break;
  case 3:
                    /* try { // try from 00c4fe38 to 00c4fe63 has its CatchHandler @ 00c5009c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    break;
  case 4:
                    /* try { // try from 00c4fe6c to 00c4fe77 has its CatchHandler @ 00c50060 */
    buildMangledName();
    pvVar2 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pvVar2 = local_48;
    }
                    /* try { // try from 00c4fe94 to 00c4fe9b has its CatchHandler @ 00c5005c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
                    /* try { // try from 00c4feac to 00c4feb7 has its CatchHandler @ 00c5009c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
                    /* try { // try from 00c4febc to 00c4fedb has its CatchHandler @ 00c50098 */
    FUN_00c4ef5c(local_58,0x20,&DAT_004cf2ba,in_x0[4]);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    break;
  case 5:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
                    /* try { // try from 00c4fe04 to 00c4fe0f has its CatchHandler @ 00c50094 */
    buildMangledName();
    pvVar2 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pvVar2 = local_48;
    }
                    /* try { // try from 00c4fe2c to 00c4fe33 has its CatchHandler @ 00c50064 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    goto LAB_00c4fffc;
  case 6:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
                    /* try { // try from 00c4ff40 to 00c4ff4b has its CatchHandler @ 00c50058 */
    buildMangledName();
    pvVar2 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pvVar2 = local_48;
    }
                    /* try { // try from 00c4ff68 to 00c4ff6f has its CatchHandler @ 00c50054 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    goto LAB_00c4fffc;
  case 7:
                    /* try { // try from 00c4ff7c to 00c4ff87 has its CatchHandler @ 00c50050 */
    IR_TextureInfo::buildMangledName((int)in_x0 + 0x14);
    pvVar2 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pvVar2 = local_48;
    }
                    /* try { // try from 00c4ffa4 to 00c4ffab has its CatchHandler @ 00c5004c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
                    /* try { // try from 00c4ffbc to 00c4ffc7 has its CatchHandler @ 00c5009c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
                    /* try { // try from 00c4ffcc to 00c4ffd7 has its CatchHandler @ 00c50048 */
    buildMangledName();
    pvVar2 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pvVar2 = local_48;
    }
                    /* try { // try from 00c4fff4 to 00c4fffb has its CatchHandler @ 00c50044 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8,(ulong)pvVar2);
LAB_00c4fffc:
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    break;
  case 8:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


