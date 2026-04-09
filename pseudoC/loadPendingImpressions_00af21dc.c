// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadPendingImpressions
// Entry Point: 00af21dc
// Size: 484 bytes
// Signature: undefined loadPendingImpressions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdsProvider::loadPendingImpressions() */

void GiantsAdsProvider::loadPendingImpressions(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  GiantsAdsProvider *in_x0;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulonglong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int *local_90;
  basic_string local_88 [4];
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_006cadd8(local_88,in_x0,s_pFilenameImpressions);
  local_90 = (int *)0x0;
  local_94 = 0;
                    /* try { // try from 00af2224 to 00af2237 has its CatchHandler @ 00af23cc */
  uVar5 = decryptFile(in_x0,local_88,(uchar **)&local_90,&local_94);
  piVar4 = local_90;
  if ((((uVar5 & 1) == 0) || (local_94 < 0xc)) || (local_90 == (int *)0x0)) {
    if (local_90 == (int *)0x0) goto LAB_00af22e8;
  }
  else if (((*local_90 == 0x67616473) && (local_90[1] == 1)) &&
          (uVar8 = local_90[2], (ulong)uVar8 * 0x24 + 0xc == (ulong)local_94)) {
                    /* try { // try from 00af2298 to 00af229f has its CatchHandler @ 00af23c0 */
    Mutex::enterCriticalSection();
    if (199 < uVar8) {
      uVar8 = 200;
    }
    uVar5 = (ulong)uVar8;
                    /* try { // try from 00af22c8 to 00af22cf has its CatchHandler @ 00af23c4 */
    std::__ndk1::
    vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::
    reserve((vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
             *)(in_x0 + 0x1a0),
            uVar5 + (*(long *)(in_x0 + 0x1a8) - *(long *)(in_x0 + 0x1a0) >> 3) * -0x3333333333333333
           );
    if (uVar8 != 0) {
      uVar7 = 0xc;
      do {
        iVar6 = (int)uVar7;
        local_98 = *(uint *)((long)piVar4 + (uVar7 & 0xffffffff));
        puVar2 = (undefined8 *)((long)piVar4 + (ulong)(iVar6 + 4));
        uStack_68 = puVar2[1];
        local_70 = *puVar2;
        puVar1 = *(uint **)(in_x0 + 0x1a8);
        local_9c = *(uint *)((long)piVar4 + (ulong)(iVar6 + 0x14));
        local_a0 = *(uint *)((long)piVar4 + (ulong)(iVar6 + 0x18));
        local_a8 = *(ulonglong *)((long)piVar4 + (ulong)(iVar6 + 0x1c));
        if (puVar1 < *(uint **)(in_x0 + 0x1b0)) {
          *puVar1 = local_98;
          puVar1[5] = local_9c;
          puVar1[6] = local_a0;
          *(ulonglong *)(puVar1 + 8) = local_a8;
          *(undefined8 *)(puVar1 + 3) = uStack_68;
          *(undefined8 *)(puVar1 + 1) = local_70;
          *(uint **)(in_x0 + 0x1a8) = puVar1 + 10;
        }
        else {
                    /* try { // try from 00af2390 to 00af23ab has its CatchHandler @ 00af23c8 */
          std::__ndk1::
          vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
          ::
          __emplace_back_slow_path<unsigned_int&,unsigned_char(&)[16],unsigned_int&,unsigned_int&,unsigned_long_long&>
                    ((vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
                      *)(in_x0 + 0x1a0),&local_98,(unsigned_char *)&local_70,&local_9c,&local_a0,
                     &local_a8);
        }
        uVar7 = (ulong)(iVar6 + 0x1c) + 8;
        uVar8 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar8;
      } while (uVar8 != 0);
    }
                    /* try { // try from 00af23b0 to 00af23b7 has its CatchHandler @ 00af23c4 */
    Mutex::leaveCriticalSection();
  }
  operator_delete__(piVar4);
LAB_00af22e8:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


