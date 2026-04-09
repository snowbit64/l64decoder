// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanImageCache
// Entry Point: 00af5d60
// Size: 472 bytes
// Signature: undefined cleanImageCache(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdsProvider::cleanImageCache() */

void GiantsAdsProvider::cleanImageCache(void)

{
  char *pcVar1;
  long lVar2;
  basic_string_conflict *pbVar3;
  __ndk1 *in_x0;
  ulong uVar4;
  SortFileInfoByModifiedType *pSVar5;
  __ndk1 *p_Var6;
  basic_string_conflict *pbVar7;
  GsFileInfo *pGVar8;
  basic_string_conflict *pbVar9;
  int iVar10;
  SortFileInfoByModifiedType local_88 [16];
  char *local_78;
  basic_string_conflict *local_70;
  basic_string_conflict *local_68;
  GsFileInfo *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = (basic_string_conflict *)0x0;
  local_68 = (basic_string_conflict *)0x0;
  local_60 = (GsFileInfo *)0x0;
                    /* try { // try from 00af5d94 to 00af5dfb has its CatchHandler @ 00af5f38 */
  local_70 = (basic_string_conflict *)operator_new(0x1800);
  p_Var6 = *(__ndk1 **)(in_x0 + 0x10);
  local_60 = (GsFileInfo *)local_70 + 0x1800;
  if (((byte)*in_x0 & 1) == 0) {
    p_Var6 = in_x0 + 1;
  }
  local_68 = local_70;
  NativeFileUtil::getFiles((char *)p_Var6,(vector *)&local_70,true);
  pGVar8 = (GsFileInfo *)local_70;
  if (0x80 < (ulong)(((long)local_68 - (long)local_70 >> 4) * -0x5555555555555555)) {
    pSVar5 = local_88;
    std::__ndk1::__sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              ((GsFileInfo *)local_70,(GsFileInfo *)local_68,pSVar5);
    pbVar3 = local_68;
    pGVar8 = (GsFileInfo *)local_68;
    if (local_70 != local_68) {
      iVar10 = (int)((ulong)((long)local_68 - (long)local_70) >> 4) * -0x55555555 + -0x81;
      pbVar9 = local_70;
      do {
        pbVar7 = *(basic_string_conflict **)(pbVar9 + 0x10);
        if (((byte)*pbVar9 & 1) == 0) {
          pbVar7 = pbVar9 + 1;
        }
                    /* try { // try from 00af5e44 to 00af5e6b has its CatchHandler @ 00af5f58 */
        uVar4 = StringUtil::iEndsWith((char *)pbVar7,".dxt");
        if ((uVar4 & 1) == 0) {
          pbVar7 = pbVar9 + 1;
          if (((byte)*pbVar9 & 1) != 0) {
            pbVar7 = *(basic_string_conflict **)(pbVar9 + 0x10);
          }
          uVar4 = StringUtil::iEndsWith((char *)pbVar7,".ast");
          if ((uVar4 & 1) != 0) goto LAB_00af5e70;
        }
        else {
LAB_00af5e70:
                    /* try { // try from 00af5e70 to 00af5e7f has its CatchHandler @ 00af5f54 */
          std::__ndk1::operator+(in_x0,pbVar9,(basic_string_conflict *)pSVar5);
          pcVar1 = (char *)((ulong)local_88 | 1);
          if (((byte)local_88[0] & 1) != 0) {
            pcVar1 = local_78;
          }
                    /* try { // try from 00af5e90 to 00af5e93 has its CatchHandler @ 00af5f3c */
          NativeFileUtil::deleteFile(pcVar1);
          if (((byte)local_88[0] & 1) != 0) {
            operator_delete(local_78);
          }
        }
        pGVar8 = (GsFileInfo *)local_70;
        if (iVar10 == 0) break;
        pbVar9 = pbVar9 + 0x30;
        iVar10 = iVar10 + -1;
      } while (pbVar9 != pbVar3);
    }
  }
  pbVar3 = (basic_string_conflict *)pGVar8;
  pbVar9 = local_68;
  if (pGVar8 != (GsFileInfo *)0x0) {
    while (pbVar7 = pbVar9, pbVar7 != (basic_string_conflict *)pGVar8) {
      pbVar9 = pbVar7 + -0x30;
      pbVar3 = local_70;
      if (((byte)*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar7 + -0x20));
        pbVar3 = local_70;
      }
    }
    local_68 = (basic_string_conflict *)pGVar8;
    operator_delete(pbVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


