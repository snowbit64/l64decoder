// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendShaderDefineStringForHash
// Entry Point: 00956178
// Size: 1408 bytes
// Signature: undefined __cdecl appendShaderDefineStringForHash(basic_string * param_1, MaterialShaderHash * param_2)


/* WARNING: Type propagation algorithm not settling */
/* MaterialShaderManager::appendShaderDefineStringForHash(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, MaterialShaderHash const&) */

void MaterialShaderManager::appendShaderDefineStringForHash
               (basic_string *param_1,MaterialShaderHash *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined auStack_ac [36];
  byte local_88 [16];
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  FUN_00956d84(auStack_ac,0x24,"%8.8X.%8.8X-%8.8X.%8.8X",*(undefined4 *)(param_2 + 4),
               *(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  uVar4 = *(uint *)(param_2 + 8);
  uVar1 = uVar4 >> 8 & 7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  FUN_00956d84(local_88,0x20,&DAT_004cf2ba,uVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  FUN_00956d84(local_88,0x20,&DAT_004cf2ba,uVar4 >> 0xb & 7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  if ((*(ulong *)(param_2 + 8) & 0x3ff80) == 0x3c000) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  else if (uVar1 != 0) {
    uVar4 = 0;
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      FUN_00956d84(local_88,0x20,&DAT_004cf2ba,uVar4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      FUN_00956d84(local_88,0x20,&DAT_004cf2ba,
                   (0x80 << (ulong)(uVar4 & 0x1f) & *(uint *)(param_2 + 8) >> 7 & 0x780) != 0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  if (((byte)param_2[1] >> 2 & 1) == 0) {
    if (((byte)param_2[10] >> 3 & 1) != 0) goto LAB_00956358;
LAB_00956320:
    uVar4 = (uint)*(ulong *)param_2;
    if ((*(ulong *)param_2 & 1) == 0) goto LAB_00956328;
LAB_00956384:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    if (((byte)param_2[10] >> 3 & 1) == 0) goto LAB_00956320;
LAB_00956358:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(ulong *)param_2;
    if ((*(ulong *)param_2 & 1) != 0) goto LAB_00956384;
LAB_00956328:
    if ((uVar4 >> 1 & 1) != 0) goto LAB_00956384;
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  uVar4 = uVar4 >> 3 & 3;
  if ((uVar4 != 0) &&
     (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1), uVar4 == 1)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  if (((byte)*param_2 >> 5 & 1) == 0) {
    if ((char)param_2[8] < '\0') goto LAB_0095643c;
LAB_009563e8:
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    if (-1 < (char)param_2[8]) goto LAB_009563e8;
LAB_0095643c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  if ((uVar4 >> 6 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  if ((uVar4 >> 7 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  if ((uVar4 >> 8 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  uVar6 = *(ulong *)(param_2 + 8);
  if ((uVar6 & 0x7f) != 0x13) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)uVar6;
    std::__ndk1::to_string(uVar4 >> 2 & 7);
    pvVar3 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar3 = local_78;
    }
                    /* try { // try from 009564c4 to 009564cb has its CatchHandler @ 009566f8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)pvVar3);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
    }
    if (((uVar6 & 1) != 0) &&
       (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_1), (uVar4 >> 1 & 1) != 0)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
    }
    if ((uVar4 >> 6 & 1) == 0) goto LAB_00956548;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
LAB_00956548:
  uVar4 = (uint)*(undefined8 *)param_2;
  if ((uVar4 >> 0xb & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)param_2;
  }
  if ((uVar4 >> 9 & 1) == 0) {
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  if ((uVar4 >> 0x12 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  if ((uVar4 >> 0x14 & 0x1f) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  FUN_00956d84(local_88,0x20,&DAT_004cf2ba,*(uint *)(param_2 + 8) >> 0x19 & 3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  uVar5 = 4;
  if ((*(ulong *)(param_2 + 8) & 0x8000000) != 0) {
    uVar5 = 0x10;
  }
  FUN_00956d84(local_88,0x20,&DAT_004cf2ba,uVar5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  if ((uVar4 >> 0x1c & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  if ((uVar4 >> 0x1d & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  if ((uVar4 >> 0x1e & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    uVar4 = (uint)*(undefined8 *)(param_2 + 8);
  }
  if ((int)uVar4 < 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


