// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSaveGameArchive
// Entry Point: 00b4f3ac
// Size: 716 bytes
// Signature: undefined __cdecl createSaveGameArchive(char * param_1, uchar * * param_2, uint * param_3)


/* SaveGameArchiveUtil::createSaveGameArchive(char const*, unsigned char*&, unsigned int&) */

uint SaveGameArchiveUtil::createSaveGameArchive(char *param_1,uchar **param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  uint local_294;
  uchar *local_290;
  byte *local_288;
  byte *local_280;
  undefined8 local_278;
  char acStack_270 [512];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_288 = (byte *)0x0;
  local_280 = (byte *)0x0;
  local_278 = 0;
                    /* try { // try from 00b4f3ec to 00b4f3f7 has its CatchHandler @ 00b4f680 */
  NativeFileUtil::getFiles(param_1,(vector *)&local_288,true);
  pbVar14 = local_288;
  uVar11 = ((long)local_280 - (long)local_288 >> 4) * -0x5555555555555555;
  if ((long)local_280 - (long)local_288 == 0) {
    uVar5 = 4;
  }
  else {
    uVar7 = 0;
    uVar5 = 4;
    do {
      pbVar8 = local_288 + uVar7 * 0x30;
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar1 = (uint)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        uVar1 = *(uint *)(pbVar8 + 8);
      }
      uVar5 = uVar5 + (*(int *)(pbVar8 + 0x20) + 3U & 0xfffffffc) + (uVar1 + 4 & 0xfffffffc) + 8;
    } while (uVar7 <= uVar11 && uVar11 - uVar7 != 0);
  }
                    /* try { // try from 00b4f478 to 00b4f47b has its CatchHandler @ 00b4f67c */
  piVar6 = (int *)operator_new__((ulong)uVar5);
  *piVar6 = (int)uVar11;
  if ((int)uVar11 != 0) {
    lVar16 = 0;
    puVar13 = (uint *)(piVar6 + 1);
    do {
      if (*(int *)(pbVar14 + lVar16 + 0x18) != 2) {
        FUN_00b4f698(acStack_270);
                    /* try { // try from 00b4f4cc to 00b4f4df has its CatchHandler @ 00b4f684 */
        uVar7 = NativeFileUtil::loadFile(acStack_270,&local_290,&local_294,0);
        uVar1 = local_294;
        if ((uVar7 & 1) != 0) {
          pbVar14 = local_288 + lVar16;
          if (*(ulong *)(pbVar14 + 0x20) == (ulong)local_294) {
            uVar7 = (ulong)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar7 = *(ulong *)(pbVar14 + 8);
            }
            pbVar14 = local_288 + lVar16;
            uVar15 = (uint)uVar7;
            puVar12 = puVar13 + 1;
            *puVar13 = uVar15;
            pbVar8 = *(byte **)(pbVar14 + 0x10);
            uVar10 = (ulong)(uVar15 + 4) & 0xfffffffc;
            if ((*pbVar14 & 1) == 0) {
              pbVar8 = pbVar14 + 1;
            }
            memcpy(puVar12,pbVar8,uVar7 & 0xffffffff);
            uVar9 = (uint)uVar10;
            uVar2 = uVar9 - uVar15;
            if (uVar15 <= uVar9 && uVar2 != 0) {
              memset((uchar *)((long)puVar12 + (uVar7 & 0xffffffff)),0,(ulong)uVar2);
            }
            puVar12 = (uint *)((long)puVar12 + uVar10);
            uVar1 = uVar1 + 3 & 0xfffffffc;
            puVar13 = puVar12 + 1;
            *puVar12 = local_294;
            memcpy(puVar13,local_290,(ulong)local_294);
            if (local_294 < uVar1) {
              memset((uchar *)((long)puVar13 + (ulong)local_294),0,(ulong)(uVar1 - local_294));
            }
            puVar13 = (uint *)((long)puVar13 + (ulong)uVar1);
            if (local_290 != (uchar *)0x0) {
              operator_delete__(local_290);
            }
            goto LAB_00b4f5a8;
          }
          if (local_290 != (uchar *)0x0) {
            operator_delete__(local_290);
          }
        }
        uVar5 = 0;
        goto LAB_00b4f5e4;
      }
LAB_00b4f5a8:
      if ((uVar11 & 0xffffffff) * 0x30 + -0x30 == lVar16) break;
      lVar16 = lVar16 + 0x30;
      pbVar14 = local_288;
    } while( true );
  }
                    /* try { // try from 00b4f5bc to 00b4f5cb has its CatchHandler @ 00b4f678 */
  uVar5 = compressData((uchar *)piVar6,uVar5,param_2,param_3);
LAB_00b4f5e4:
  operator_delete__(piVar6);
  pbVar14 = local_288;
  pbVar8 = local_280;
  if (local_288 != (byte *)0x0) {
    while (pbVar4 = pbVar8, pbVar4 != pbVar14) {
      pbVar8 = pbVar4 + -0x30;
      if ((*pbVar8 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x20));
      }
    }
    local_280 = pbVar14;
    operator_delete(local_288);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


