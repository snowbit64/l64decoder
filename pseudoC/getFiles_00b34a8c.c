// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFiles
// Entry Point: 00b34a8c
// Size: 588 bytes
// Signature: undefined __thiscall getFiles(NativeFileLoader * this, char * param_1, vector * param_2)


/* NativeFileLoader::getFiles(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&) */

void __thiscall NativeFileLoader::getFiles(NativeFileLoader *this,char *param_1,vector *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  basic_string *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  char **ppcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
                    /* try { // try from 00b34acc to 00b34ae7 has its CatchHandler @ 00b34ce4 */
  bVar7 = PathUtil::isAbsolutePath(param_1);
  uVar9 = getFullPath(this,param_1,(bool)(bVar7 & 1),(basic_string *)&local_80);
  if ((uVar9 & 1) != 0) {
    if (*(long *)param_2 == *(long *)(param_2 + 8)) {
      pcVar2 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar2 = local_70;
      }
                    /* try { // try from 00b34c38 to 00b34c43 has its CatchHandler @ 00b34ce4 */
      NativeFileUtil::getFiles(pcVar2,param_2,false);
    }
    else {
      local_98 = (byte *)0x0;
      local_90 = (byte *)0x0;
      local_88 = 0;
      pcVar2 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar2 = local_70;
      }
                    /* try { // try from 00b34b18 to 00b34b23 has its CatchHandler @ 00b34cd8 */
      NativeFileUtil::getFiles(pcVar2,(vector *)&local_98,false);
      pbVar5 = local_90;
      if (local_90 != local_98) {
        lVar10 = *(long *)param_2;
        uVar9 = 0;
        uVar14 = (*(long *)(param_2 + 8) - lVar10 >> 4) * -0x5555555555555555;
        uVar13 = uVar14 & 0xffffffff;
        pbVar5 = local_98;
        do {
          local_98 = pbVar5;
          if ((int)uVar14 != 0) {
            ppcVar15 = (char **)(lVar10 + 0x10);
            uVar11 = uVar13;
            pbVar1 = pbVar5 + uVar9 * 0x30 + 1;
            if ((pbVar5[uVar9 * 0x30] & 1) != 0) {
              pbVar1 = *(byte **)(pbVar5 + uVar9 * 0x30 + 0x10);
            }
            do {
              pcVar2 = (char *)((long)ppcVar15 + -0xf);
              if ((*(byte *)(ppcVar15 + -2) & 1) != 0) {
                pcVar2 = *ppcVar15;
              }
              iVar8 = strcmp((char *)pbVar1,pcVar2);
              if (iVar8 == 0) goto LAB_00b34bec;
              ppcVar15 = ppcVar15 + 6;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          pbVar3 = *(basic_string **)(param_2 + 8);
          if (pbVar3 == *(basic_string **)(param_2 + 0x10)) {
                    /* try { // try from 00b34be4 to 00b34beb has its CatchHandler @ 00b34cdc */
            std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
            __push_back_slow_path<GsFileInfo_const&>
                      ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_2,
                       (GsFileInfo *)(pbVar5 + uVar9 * 0x30));
          }
          else {
                    /* try { // try from 00b34bbc to 00b34bc3 has its CatchHandler @ 00b34cec */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar3);
            uVar17 = *(undefined8 *)(pbVar5 + uVar9 * 0x30 + 0x20);
            uVar16 = *(undefined8 *)(pbVar5 + uVar9 * 0x30 + 0x18);
            *(undefined8 *)(pbVar3 + 10) = *(undefined8 *)(pbVar5 + uVar9 * 0x30 + 0x28);
            *(undefined8 *)(pbVar3 + 8) = uVar17;
            *(undefined8 *)(pbVar3 + 6) = uVar16;
            *(basic_string **)(param_2 + 8) = pbVar3 + 0xc;
          }
LAB_00b34bec:
          uVar9 = (ulong)((int)uVar9 + 1);
          uVar11 = ((long)local_90 - (long)local_98 >> 4) * -0x5555555555555555;
          pbVar5 = local_98;
          if (uVar11 < uVar9 || uVar11 - uVar9 == 0) break;
          lVar10 = *(long *)param_2;
        } while( true );
      }
      pbVar1 = pbVar5;
      pbVar12 = local_90;
      if (pbVar5 != (byte *)0x0) {
        while (pbVar6 = pbVar12, pbVar6 != pbVar5) {
          pbVar12 = pbVar6 + -0x30;
          pbVar1 = local_98;
          if ((*pbVar12 & 1) != 0) {
            operator_delete(*(void **)(pbVar6 + -0x20));
            pbVar1 = local_98;
          }
        }
        local_90 = pbVar5;
        operator_delete(pbVar1);
      }
    }
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


