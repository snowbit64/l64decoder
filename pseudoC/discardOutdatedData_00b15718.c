// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: discardOutdatedData
// Entry Point: 00b15718
// Size: 932 bytes
// Signature: undefined discardOutdatedData(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::discardOutdatedData() */

void VoiceChatManager::discardOutdatedData(void)

{
  size_t sVar1;
  long lVar2;
  bool bVar3;
  long in_x0;
  long lVar4;
  long ******pppppplVar5;
  long ********pppppppplVar6;
  long *******ppppppplVar7;
  ulong uVar8;
  long ********pppppppplVar9;
  long ********pppppppplVar10;
  long *******ppppppplVar11;
  void *pvVar12;
  long ********pppppppplVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  long ********local_90;
  long ********local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  dVar16 = (double)Watch::getTimeSec();
  lVar4 = *(long *)(in_x0 + 0x14f0);
  lVar14 = *(long *)(in_x0 + 0x14e8);
  local_88 = (long ********)0x0;
  local_80 = 0;
  local_90 = (long ********)&local_88;
  if (0 < (int)((ulong)(lVar4 - lVar14) >> 3)) {
    uVar8 = (ulong)(lVar4 - lVar14) >> 3 & 0xffffffff;
    do {
      uVar15 = uVar8 - 1;
      ppppppplVar7 = *(long ********)(lVar14 + (uVar15 & 0xffffffff) * 8);
      pppppppplVar13 = (long ********)&local_88;
      pppppppplVar6 = (long ********)&local_88;
      pppppppplVar10 = local_88;
      if (*(double *)(in_x0 + 0x1530) < dVar16 - (double)ppppppplVar7[3]) {
        while (pppppppplVar10 != (long ********)0x0) {
          while (pppppppplVar6 = pppppppplVar10, ppppppplVar7 < pppppppplVar6[4]) {
            pppppppplVar13 = pppppppplVar6;
            pppppppplVar10 = (long ********)*pppppppplVar6;
            if ((long ********)*pppppppplVar6 == (long ********)0x0) goto LAB_00b157f8;
          }
          if (ppppppplVar7 <= pppppppplVar6[4]) break;
          pppppppplVar13 = pppppppplVar6 + 1;
          pppppppplVar10 = (long ********)pppppppplVar6[1];
        }
LAB_00b157f8:
        if (*pppppppplVar13 == (long *******)0x0) {
                    /* try { // try from 00b15804 to 00b1580f has its CatchHandler @ 00b15abc */
          ppppppplVar7 = (long *******)operator_new(0x28);
          pppppplVar5 = *(long *******)(lVar14 + (uVar15 & 0xffffffff) * 8);
          *ppppppplVar7 = (long ******)0x0;
          ppppppplVar7[1] = (long ******)0x0;
          ppppppplVar7[2] = (long ******)pppppppplVar6;
          ppppppplVar7[4] = pppppplVar5;
          *pppppppplVar13 = ppppppplVar7;
          if ((long ********)*local_90 != (long ********)0x0) {
            ppppppplVar7 = *pppppppplVar13;
            local_90 = (long ********)*local_90;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_88,(__tree_node_base *)ppppppplVar7);
          lVar14 = *(long *)(in_x0 + 0x14e8);
          lVar4 = *(long *)(in_x0 + 0x14f0);
          local_80 = local_80 + 1;
        }
        pvVar12 = (void *)(lVar14 + (uVar15 & 0xffffffff) * 8);
        sVar1 = lVar4 - (long)(void *)((long)pvVar12 + 8);
        if (sVar1 != 0) {
          memmove(pvVar12,(void *)((long)pvVar12 + 8),sVar1);
        }
        lVar4 = (long)pvVar12 + sVar1;
        *(long *)(in_x0 + 0x14f0) = lVar4;
      }
      if ((long)uVar8 < 2) goto LAB_00b1588c;
      lVar14 = *(long *)(in_x0 + 0x14e8);
      uVar8 = uVar15;
    } while( true );
  }
LAB_00b15a78:
  std::__ndk1::
  __tree<VoiceChatManager::AudioData*,std::__ndk1::less<VoiceChatManager::AudioData*>,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
  ::destroy((__tree<VoiceChatManager::AudioData*,std::__ndk1::less<VoiceChatManager::AudioData*>,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
             *)&local_90,(__tree_node *)local_88);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00b1588c:
  if (local_80 != 0) {
    lVar4 = *(long *)(in_x0 + 0x1508);
    lVar14 = *(long *)(in_x0 + 0x1500);
    uVar8 = (lVar4 - lVar14 >> 3) * -0x5555555555555555;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      while( true ) {
        if (local_88 != (long ********)0x0) {
          pvVar12 = (void *)(lVar14 + (uVar8 - 1 & 0xffffffff) * 0x18);
          ppppppplVar7 = *(long ********)((long)pvVar12 + 0x10);
          pppppppplVar6 = local_88;
          pppppppplVar13 = (long ********)&local_88;
          do {
            pppppppplVar10 = pppppppplVar13;
            pppppppplVar9 = pppppppplVar6;
            ppppppplVar11 = pppppppplVar9[4];
            pppppppplVar13 = pppppppplVar10;
            if (ppppppplVar11 >= ppppppplVar7) {
              pppppppplVar13 = pppppppplVar9;
            }
            pppppppplVar6 = (long ********)pppppppplVar9[ppppppplVar11 < ppppppplVar7];
          } while ((long ********)pppppppplVar9[ppppppplVar11 < ppppppplVar7] != (long ********)0x0)
          ;
          if ((long *********)pppppppplVar13 != &local_88) {
            if (ppppppplVar7 <= ppppppplVar11) {
              pppppppplVar10 = pppppppplVar9;
            }
            if (pppppppplVar10[4] <= ppppppplVar7) {
              sVar1 = lVar4 - (long)(void *)((long)pvVar12 + 0x18);
              if (sVar1 != 0) {
                memmove(pvVar12,(void *)((long)pvVar12 + 0x18),sVar1);
              }
              lVar4 = (long)pvVar12 + sVar1;
              *(long *)(in_x0 + 0x1508) = lVar4;
            }
          }
        }
        if ((long)uVar8 < 2) break;
        lVar14 = *(long *)(in_x0 + 0x1500);
        uVar8 = uVar8 - 1;
      }
    }
    lVar4 = *(long *)(in_x0 + 0x1520);
    lVar14 = *(long *)(in_x0 + 0x1518);
    uVar8 = (lVar4 - lVar14 >> 3) * -0x5555555555555555;
    pppppppplVar13 = local_90;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      while( true ) {
        if (local_88 != (long ********)0x0) {
          pvVar12 = (void *)(lVar14 + (uVar8 - 1 & 0xffffffff) * 0x18);
          ppppppplVar7 = *(long ********)((long)pvVar12 + 0x10);
          pppppppplVar6 = local_88;
          pppppppplVar13 = (long ********)&local_88;
          do {
            pppppppplVar10 = pppppppplVar13;
            pppppppplVar9 = pppppppplVar6;
            ppppppplVar11 = pppppppplVar9[4];
            pppppppplVar13 = pppppppplVar10;
            if (ppppppplVar11 >= ppppppplVar7) {
              pppppppplVar13 = pppppppplVar9;
            }
            pppppppplVar6 = (long ********)pppppppplVar9[ppppppplVar11 < ppppppplVar7];
          } while ((long ********)pppppppplVar9[ppppppplVar11 < ppppppplVar7] != (long ********)0x0)
          ;
          if ((long *********)pppppppplVar13 != &local_88) {
            if (ppppppplVar7 <= ppppppplVar11) {
              pppppppplVar10 = pppppppplVar9;
            }
            if (pppppppplVar10[4] <= ppppppplVar7) {
              sVar1 = lVar4 - (long)(void *)((long)pvVar12 + 0x18);
              if (sVar1 != 0) {
                memmove(pvVar12,(void *)((long)pvVar12 + 0x18),sVar1);
              }
              lVar4 = (long)pvVar12 + sVar1;
              *(long *)(in_x0 + 0x1520) = lVar4;
            }
          }
        }
        pppppppplVar13 = local_90;
        if ((long)uVar8 < 2) break;
        lVar14 = *(long *)(in_x0 + 0x1518);
        uVar8 = uVar8 - 1;
      }
    }
    while ((long *********)pppppppplVar13 != &local_88) {
      ppppppplVar7 = pppppppplVar13[4];
      if (ppppppplVar7 != (long *******)0x0) {
        if (ppppppplVar7[1] != (long ******)0x0) {
          operator_delete__(ppppppplVar7[1]);
          ppppppplVar7[1] = (long ******)0x0;
        }
        operator_delete(ppppppplVar7);
      }
      pppppppplVar6 = (long ********)pppppppplVar13[1];
      if ((long ********)pppppppplVar13[1] == (long ********)0x0) {
        pppppppplVar6 = pppppppplVar13 + 2;
        bVar3 = (long ********)**pppppppplVar6 != pppppppplVar13;
        pppppppplVar13 = (long ********)*pppppppplVar6;
        if (bVar3) {
          do {
            ppppppplVar7 = *pppppppplVar6;
            pppppppplVar6 = (long ********)(ppppppplVar7 + 2);
            pppppppplVar13 = (long ********)*pppppppplVar6;
          } while (*pppppppplVar13 != ppppppplVar7);
        }
      }
      else {
        do {
          pppppppplVar13 = pppppppplVar6;
          pppppppplVar6 = (long ********)*pppppppplVar13;
        } while ((long ********)*pppppppplVar13 != (long ********)0x0);
      }
    }
  }
  goto LAB_00b15a78;
}


