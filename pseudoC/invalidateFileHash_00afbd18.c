// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateFileHash
// Entry Point: 00afbd18
// Size: 524 bytes
// Signature: undefined __thiscall invalidateFileHash(FileHashManager * this, char * param_1, char * param_2)


/* WARNING: Removing unreachable block (ram,0x00afbe6c) */
/* FileHashManager::invalidateFileHash(char const*, char const*) */

void __thiscall
FileHashManager::invalidateFileHash(FileHashManager *this,char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  FileHashManager **ppFVar4;
  FileHashManager **ppFVar5;
  ulong uVar6;
  ulong uVar7;
  FileHashManager **ppFVar8;
  ulong local_128;
  ulong local_120;
  MD5Hash aMStack_118 [16];
  undefined auStack_108 [72];
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined auStack_a8 [72];
  ulong local_60;
  ulong uStack_58;
  undefined *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  MD5Hash::MD5Hash(aMStack_118);
                    /* try { // try from 00afbd50 to 00afbd6b has its CatchHandler @ 00afbf2c */
  uVar3 = __strlen_chk(param_1,0xffffffffffffffff);
  MD5Hash::add(aMStack_118,(uchar *)param_1,uVar3);
                    /* try { // try from 00afbd6c to 00afbdab has its CatchHandler @ 00afbf30 */
  uVar3 = __strlen_chk(&DAT_004d4aea,4);
  MD5Hash::add(aMStack_118,";*?",uVar3);
  uVar3 = __strlen_chk(param_2,0xffffffffffffffff);
  MD5Hash::add(aMStack_118,(uchar *)param_2,uVar3);
                    /* try { // try from 00afbdac to 00afbdc3 has its CatchHandler @ 00afbf28 */
  MD5Hash::getMD5Hash(aMStack_118,(uchar *)&local_128);
  Mutex::enterCriticalSection();
  ppFVar8 = (FileHashManager **)(this + 0x20);
  ppFVar5 = (FileHashManager **)*ppFVar8;
  ppFVar4 = ppFVar8;
  if (ppFVar5 == (FileHashManager **)0x0) goto LAB_00afbe84;
  do {
    uVar7 = ((ulong)ppFVar5[4] & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)ppFVar5[4] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = (local_128 & 0xff00ff00ff00ff00) >> 8 | (local_128 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    if (uVar6 == uVar7) {
      uVar7 = ((ulong)ppFVar5[5] & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)ppFVar5[5] & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar7 = (local_120 & 0xff00ff00ff00ff00) >> 8 | (local_120 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      if (uVar6 != uVar7) goto LAB_00afbdd8;
      uVar3 = 0;
    }
    else {
LAB_00afbdd8:
      uVar3 = 1;
      if (uVar6 < uVar7) {
        uVar3 = 0xffffffff;
      }
    }
    if (-1 < (int)uVar3) {
      ppFVar4 = ppFVar5;
    }
    ppFVar5 = (FileHashManager **)ppFVar5[uVar3 >> 0x1f];
  } while (ppFVar5 != (FileHashManager **)0x0);
  if (ppFVar4 == ppFVar8) goto LAB_00afbe84;
  uVar7 = (local_128 & 0xff00ff00ff00ff00) >> 8 | (local_128 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
  uVar7 = ((ulong)ppFVar4[4] & 0xff00ff00ff00ff00) >> 8 |
          ((ulong)ppFVar4[4] & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
  if (uVar6 == uVar7) {
    uVar7 = (local_120 & 0xff00ff00ff00ff00) >> 8 | (local_120 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = ((ulong)ppFVar4[5] & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)ppFVar4[5] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    if (uVar6 != uVar7) goto LAB_00afbe70;
  }
  else {
LAB_00afbe70:
    iVar1 = 1;
    if (uVar6 < uVar7) {
      iVar1 = -1;
    }
    if (iVar1 < 0) goto LAB_00afbe84;
  }
  *(FileHashManager *)(ppFVar4 + 8) = (FileHashManager)0x0;
LAB_00afbe84:
                    /* try { // try from 00afbe84 to 00afbe8b has its CatchHandler @ 00afbf24 */
  Mutex::leaveCriticalSection();
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  if (local_50 == auStack_a8) {
    for (; local_60 != 0; local_60 = local_60 - 1) {
      *(undefined4 *)(local_50 + local_60 * 4 + -4) = 0;
    }
  }
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  if (local_b0 == auStack_108) {
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)(local_b0 + local_c0 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


