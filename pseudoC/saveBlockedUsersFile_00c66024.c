// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveBlockedUsersFile
// Entry Point: 00c66024
// Size: 460 bytes
// Signature: undefined saveBlockedUsersFile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserBlockManager::saveBlockedUsersFile() const */

uint UserBlockManager::saveBlockedUsersFile(void)

{
  uint uVar1;
  ACCESS_MODE AVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *pvVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  long in_x0;
  byte *pbVar12;
  byte local_278;
  undefined7 local_277;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined uStack_268;
  undefined2 uStack_267;
  undefined5 uStack_265;
  byte local_260 [8];
  ulong local_258;
  void *local_250;
  NativeFile aNStack_248 [512];
  long local_48;
  
  lVar9 = tpidr_el0;
  local_48 = *(long *)(lVar9 + 0x28);
  FUN_006cadd8(local_260,in_x0 + 8,"blockedUserIds.xml");
  uVar3 = (ulong)(local_260[0] >> 1);
  if ((local_260[0] & 1) != 0) {
    uVar3 = local_258;
  }
  if (uVar3 == 0) {
    uVar11 = 0;
  }
  else {
    pbVar7 = *(byte **)(in_x0 + 0x50);
    pbVar8 = *(byte **)(in_x0 + 0x58);
    local_278 = 0x22;
    uStack_267 = 10;
    uStack_26c = 0x73644972;
    uStack_268 = 0x3e;
    local_277 = 0x656b636f6c623c;
    uStack_270 = 0x65735564;
    for (; pbVar7 != pbVar8; pbVar7 = pbVar7 + 0x50) {
      pbVar12 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar12 = pbVar7 + 1;
      }
      pbVar4 = pbVar7 + 0x19;
      if ((pbVar7[0x18] & 1) != 0) {
        pbVar4 = *(byte **)(pbVar7 + 0x28);
      }
      pbVar5 = pbVar7 + 0x39;
      if ((pbVar7[0x38] & 1) != 0) {
        pbVar5 = *(byte **)(pbVar7 + 0x48);
      }
                    /* try { // try from 00c660e8 to 00c66107 has its CatchHandler @ 00c66208 */
      FUN_00c67344(aNStack_248,0x200,0x200,
                   "  <user uniqueUserId=\"%s\" platformUserId=\"%s\" platformId=\"%u\" displayName=\"%s\"/>\n"
                   ,pbVar12,pbVar4,*(undefined4 *)(pbVar7 + 0x30),pbVar5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_278);
    }
                    /* try { // try from 00c66114 to 00c66123 has its CatchHandler @ 00c661f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_278);
                    /* try { // try from 00c66124 to 00c6612b has its CatchHandler @ 00c661f0 */
    NativeFile::NativeFile(aNStack_248);
    AVar2 = (uint)local_260 | 1;
    if ((local_260[0] & 1) != 0) {
      AVar2 = (ACCESS_MODE)local_250;
    }
                    /* try { // try from 00c66144 to 00c66187 has its CatchHandler @ 00c661f8 */
    uVar11 = NativeFile::open((char *)aNStack_248,AVar2,true);
    if ((uVar11 & 1) != 0) {
      bVar10 = (local_278 & 1) != 0;
      pvVar6 = (void *)((ulong)&local_278 | 1);
      if (bVar10) {
        pvVar6 = (void *)CONCAT53(uStack_265,CONCAT21(uStack_267,uStack_268));
      }
      uVar1 = (uint)(local_278 >> 1);
      if (bVar10) {
        uVar1 = uStack_270;
      }
      NativeFile::write(aNStack_248,pvVar6,uVar1);
    }
    NativeFile::~NativeFile(aNStack_248);
    if ((local_278 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_265,CONCAT21(uStack_267,uStack_268)));
    }
  }
  if ((local_260[0] & 1) != 0) {
    operator_delete(local_250);
  }
  if (*(long *)(lVar9 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11 & 1;
}


