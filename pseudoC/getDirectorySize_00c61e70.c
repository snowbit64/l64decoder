// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirectorySize
// Entry Point: 00c61e70
// Size: 684 bytes
// Signature: undefined __cdecl getDirectorySize(char * param_1, bool param_2, bool param_3)


/* NativeFileUtil::getDirectorySize(char const*, bool, bool) */

long NativeFileUtil::getDirectorySize(char *param_1,bool param_2,bool param_3)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  size_t __n;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  basic_string *pbVar8;
  byte *pbVar9;
  long lVar10;
  basic_string *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  NativeFile local_d8 [16];
  void *local_c8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  undefined8 local_80;
  size_t local_78;
  basic_string *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pbVar11 = (basic_string *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c61f04;
  }
  else {
    uVar13 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar11 = (basic_string *)operator_new(uVar13);
    local_80 = uVar13 | 1;
    local_78 = __n;
    local_70 = pbVar11;
  }
  memcpy(pbVar11,param_1,__n);
LAB_00c61f04:
  *(char *)((long)pbVar11 + __n) = '\0';
                    /* try { // try from 00c61f08 to 00c61f13 has its CatchHandler @ 00c62120 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_80);
  local_98 = (byte *)0x0;
  local_90 = (byte *)0x0;
  local_88 = 0;
  pbVar11 = (basic_string *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pbVar11 = local_70;
  }
                    /* try { // try from 00c61f30 to 00c61f3f has its CatchHandler @ 00c6211c */
  pbVar8 = (basic_string *)0x0;
  getFiles((char *)pbVar11,(vector *)&local_98,false);
  if (local_90 == local_98) {
    lVar10 = 0;
    pbVar12 = local_90;
  }
  else {
    uVar13 = 0;
    lVar10 = 0;
    do {
                    /* try { // try from 00c61f98 to 00c61fa3 has its CatchHandler @ 00c62168 */
      std::__ndk1::operator+((__ndk1 *)0x2f,(char)local_98 + (char)uVar13 * '0',pbVar8);
                    /* try { // try from 00c61fa4 to 00c61fb3 has its CatchHandler @ 00c62150 */
      pbVar8 = pbVar11;
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert((ulong)local_d8,(char *)0x0);
      local_a0 = (char *)puVar5[2];
      uStack_a8 = puVar5[1];
      local_b0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if (((byte)local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
      if (*(int *)(local_98 + uVar13 * 0x30 + 0x18) == 1) {
                    /* try { // try from 00c61ff4 to 00c61ffb has its CatchHandler @ 00c6212c */
        NativeFile::NativeFile(local_d8);
        pcVar1 = (char *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00c6200c to 00c62033 has its CatchHandler @ 00c62134 */
        pbVar8 = (basic_string *)0x0;
        uVar6 = NativeFile::open((char *)local_d8,(ACCESS_MODE)pcVar1,false);
        if ((uVar6 & 1) != 0) {
          lVar7 = NativeFile::getSize();
          NativeFile::close();
          lVar10 = lVar7 + lVar10;
        }
        NativeFile::~NativeFile(local_d8);
      }
      else if (param_2) {
        pcVar1 = (char *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00c62058 to 00c62063 has its CatchHandler @ 00c62128 */
        pbVar8 = (basic_string *)0x0;
        lVar7 = getDirectorySize(pcVar1,true,false);
        lVar10 = lVar7 + lVar10;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      uVar6 = ((long)local_90 - (long)local_98 >> 4) * -0x5555555555555555;
      pbVar12 = local_98;
    } while (uVar13 <= uVar6 && uVar6 - uVar13 != 0);
  }
  pbVar3 = pbVar12;
  pbVar9 = local_90;
  if (pbVar12 != (byte *)0x0) {
    while (pbVar4 = pbVar9, pbVar4 != pbVar12) {
      pbVar9 = pbVar4 + -0x30;
      pbVar3 = local_98;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x20));
        pbVar3 = local_98;
      }
    }
    local_90 = pbVar12;
    operator_delete(pbVar3);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


