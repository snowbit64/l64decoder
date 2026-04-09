// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveFileHashes
// Entry Point: 00afbf44
// Size: 720 bytes
// Signature: undefined saveFileHashes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FileHashManager::saveFileHashes() */

uint FileHashManager::saveFileHashes(void)

{
  byte **ppbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  byte *in_x0;
  byte **ppbVar7;
  byte **ppbVar8;
  ACCESS_MODE AVar9;
  byte **ppbVar10;
  byte *pbVar11;
  int iVar12;
  byte **ppbVar13;
  NativeFile aNStack_180 [40];
  undefined8 local_158;
  uchar auStack_150 [16];
  int local_140;
  MD5Hash aMStack_138 [16];
  undefined auStack_128 [72];
  ulong local_e0;
  ulong uStack_d8;
  undefined *local_d0;
  undefined auStack_c8 [72];
  ulong local_80;
  ulong uStack_78;
  undefined *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = (ulong)(*in_x0 >> 1);
  if ((*in_x0 & 1) != 0) {
    uVar2 = *(ulong *)(in_x0 + 8);
  }
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    NativeFile::NativeFile(aNStack_180);
    AVar9 = (ACCESS_MODE)*(undefined8 *)(in_x0 + 0x10);
    if ((*in_x0 & 1) == 0) {
      AVar9 = (int)in_x0 + 1;
    }
                    /* try { // try from 00afbfa4 to 00afbfc7 has its CatchHandler @ 00afc234 */
    uVar6 = NativeFile::open((char *)aNStack_180,AVar9,true);
    if ((uVar6 & 1) != 0) {
      Mutex::enterCriticalSection();
      ppbVar13 = *(byte ***)(in_x0 + 0x18);
      ppbVar1 = (byte **)(in_x0 + 0x20);
      if (ppbVar13 == ppbVar1) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        ppbVar8 = ppbVar13;
        do {
          ppbVar7 = (byte **)ppbVar8[1];
          if ((byte **)ppbVar8[1] == (byte **)0x0) {
            ppbVar7 = ppbVar8 + 2;
            ppbVar10 = (byte **)*ppbVar7;
            if ((byte **)*ppbVar10 != ppbVar8) {
              do {
                pbVar11 = *ppbVar7;
                ppbVar7 = (byte **)(pbVar11 + 0x10);
                ppbVar10 = (byte **)*ppbVar7;
              } while (*ppbVar10 != pbVar11);
            }
          }
          else {
            do {
              ppbVar10 = ppbVar7;
              ppbVar7 = (byte **)*ppbVar10;
            } while ((byte **)*ppbVar10 != (byte **)0x0);
          }
          iVar12 = iVar12 + (uint)*(byte *)(ppbVar8 + 8);
          ppbVar8 = ppbVar10;
        } while (ppbVar10 != ppbVar1);
      }
      uVar3 = iVar12 * 0x30;
                    /* try { // try from 00afc054 to 00afc05b has its CatchHandler @ 00afc21c */
      ppbVar7 = (byte **)operator_new__((ulong)uVar3);
      ppbVar8 = ppbVar7;
      while (ppbVar13 != ppbVar1) {
        if (*(char *)(ppbVar13 + 8) != '\0') {
          pbVar11 = ppbVar13[4];
          ppbVar8[1] = ppbVar13[5];
          *ppbVar8 = pbVar11;
          pbVar11 = *(byte **)((long)ppbVar13 + 0x41);
          ppbVar8[3] = *(byte **)((long)ppbVar13 + 0x49);
          ppbVar8[2] = pbVar11;
          pbVar11 = ppbVar13[6];
          ppbVar8[5] = ppbVar13[7];
          ppbVar8[4] = pbVar11;
          ppbVar8 = ppbVar8 + 6;
        }
        ppbVar10 = (byte **)ppbVar13[1];
        if ((byte **)ppbVar13[1] == (byte **)0x0) {
          ppbVar10 = ppbVar13 + 2;
          bVar5 = *(byte ***)*ppbVar10 != ppbVar13;
          ppbVar13 = (byte **)*ppbVar10;
          if (bVar5) {
            do {
              pbVar11 = *ppbVar10;
              ppbVar10 = (byte **)(pbVar11 + 0x10);
              ppbVar13 = (byte **)*ppbVar10;
            } while (*ppbVar13 != pbVar11);
          }
        }
        else {
          do {
            ppbVar13 = ppbVar10;
            ppbVar10 = (byte **)*ppbVar13;
          } while ((byte **)*ppbVar13 != (byte **)0x0);
        }
      }
                    /* try { // try from 00afc0ec to 00afc0f3 has its CatchHandler @ 00afc218 */
      Mutex::leaveCriticalSection();
                    /* try { // try from 00afc0f4 to 00afc0fb has its CatchHandler @ 00afc214 */
      MD5Hash::MD5Hash(aMStack_138);
                    /* try { // try from 00afc0fc to 00afc11f has its CatchHandler @ 00afc220 */
      MD5Hash::add(aMStack_138,CHECKSUM_SALT,0x40);
      MD5Hash::add(aMStack_138,(uchar *)ppbVar7,uVar3);
      local_158 = 0x5a694e21;
                    /* try { // try from 00afc138 to 00afc15f has its CatchHandler @ 00afc224 */
      local_140 = iVar12;
      MD5Hash::getMD5Hash(aMStack_138,auStack_150);
      NativeFile::write(aNStack_180,&local_158,0x1c);
      NativeFile::write(aNStack_180,ppbVar7,uVar3);
      operator_delete__(ppbVar7);
      if (uStack_78 <= local_80) {
        local_80 = uStack_78;
      }
      if (local_70 == auStack_c8) {
        for (; local_80 != 0; local_80 = local_80 - 1) {
          *(undefined4 *)(local_70 + local_80 * 4 + -4) = 0;
        }
      }
      if (uStack_d8 <= local_e0) {
        local_e0 = uStack_d8;
      }
      if (local_d0 == auStack_128) {
        for (; local_e0 != 0; local_e0 = local_e0 - 1) {
          *(undefined4 *)(local_d0 + local_e0 * 4 + -4) = 0;
        }
      }
    }
    NativeFile::~NativeFile(aNStack_180);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


