// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startLoading
// Entry Point: 00a0eea0
// Size: 788 bytes
// Signature: undefined startLoading(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvMapBlender::startLoading() */

void EnvMapBlender::startLoading(void)

{
  byte **ppbVar1;
  byte *pbVar2;
  size_t __n;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  byte *pbVar8;
  size_t sVar9;
  int iVar10;
  byte *in_x0;
  byte *pbVar11;
  basic_string *pbVar12;
  size_t sVar13;
  long lVar14;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar14 = 0;
  do {
    pbVar12 = (basic_string *)(in_x0 + lVar14 * 0x18);
    if (lVar14 == 0) goto LAB_00a0ef1c;
    bVar4 = *(byte *)pbVar12;
    bVar5 = *in_x0;
    ppbVar1 = (byte **)(pbVar12 + 4);
    pbVar11 = (byte *)((long)pbVar12 + 1);
    sVar13 = (size_t)(bVar4 >> 1);
    __n = sVar13;
    if ((bVar4 & 1) != 0) {
      __n = *(size_t *)(in_x0 + lVar14 * 0x18 + 8);
    }
    sVar6 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar6 = *(size_t *)(in_x0 + 8);
    }
    if (__n == sVar6) {
      pbVar3 = pbVar11;
      if ((bVar4 & 1) != 0) {
        pbVar3 = *ppbVar1;
      }
      pbVar2 = in_x0 + 1;
      if ((bVar5 & 1) != 0) {
        pbVar2 = *(byte **)(in_x0 + 0x10);
      }
      pbVar8 = pbVar11;
      sVar6 = sVar13;
      sVar9 = __n;
      if ((bVar4 & 1) == 0) {
        while (sVar9 != 0) {
          if (*pbVar8 != *pbVar2) goto LAB_00a0f054;
          pbVar2 = pbVar2 + 1;
          sVar6 = sVar6 - 1;
          pbVar8 = pbVar8 + 1;
          sVar9 = sVar6;
        }
      }
      else if ((__n != 0) && (iVar10 = memcmp(pbVar3,pbVar2,__n), iVar10 != 0)) goto LAB_00a0f054;
      goto LAB_00a0ef34;
    }
LAB_00a0f054:
    if (lVar14 == 1) goto LAB_00a0ef1c;
    bVar5 = in_x0[0x18];
    sVar6 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar6 = *(size_t *)(in_x0 + 0x20);
    }
    if (__n == sVar6) {
      pbVar3 = pbVar11;
      if ((bVar4 & 1) != 0) {
        pbVar3 = *ppbVar1;
      }
      pbVar2 = in_x0 + 0x19;
      if ((bVar5 & 1) != 0) {
        pbVar2 = *(byte **)(in_x0 + 0x28);
      }
      pbVar8 = pbVar11;
      sVar6 = sVar13;
      sVar9 = __n;
      if ((bVar4 & 1) == 0) {
        while (sVar9 != 0) {
          if (*pbVar8 != *pbVar2) goto LAB_00a0f0d8;
          pbVar2 = pbVar2 + 1;
          sVar6 = sVar6 - 1;
          pbVar8 = pbVar8 + 1;
          sVar9 = sVar6;
        }
      }
      else if ((__n != 0) && (iVar10 = memcmp(pbVar3,pbVar2,__n), iVar10 != 0)) goto LAB_00a0f0d8;
      goto LAB_00a0ef34;
    }
LAB_00a0f0d8:
    if (lVar14 == 2) {
LAB_00a0ef1c:
      pbVar11 = (byte *)AlgorithmUtil::
                        find<std::__ndk1::array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((array *)(in_x0 + 0x3a8),pbVar12);
      if (pbVar11 == in_x0 + 0x408) {
        local_f0 = 0;
        local_d0 = 0;
        local_cc = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_118 = 0;
        local_d8 = 0;
        local_110 = 0x100000001;
        local_c8 = 0;
        local_b8 = 0;
        local_b0 = (void *)0x0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_c0 = 0;
        local_78 = 0;
                    /* try { // try from 00a0f018 to 00a0f02f has its CatchHandler @ 00a0f1b4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_c0,pbVar12);
        SmallVector<EnvMapBlender::LoadingFile,4u>::push_back
                  ((SmallVector<EnvMapBlender::LoadingFile,4u> *)(in_x0 + 0xe0),
                   (LoadingFile *)&local_118);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
      }
    }
    else {
      bVar5 = in_x0[0x30];
      sVar6 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar6 = *(size_t *)(in_x0 + 0x38);
      }
      if (__n != sVar6) goto LAB_00a0ef1c;
      pbVar3 = pbVar11;
      if ((bVar4 & 1) != 0) {
        pbVar3 = *ppbVar1;
      }
      pbVar2 = in_x0 + 0x31;
      if ((bVar5 & 1) != 0) {
        pbVar2 = *(byte **)(in_x0 + 0x40);
      }
      if ((bVar4 & 1) == 0) {
        while (__n != 0) {
          if (*pbVar11 != *pbVar2) goto LAB_00a0ef1c;
          pbVar11 = pbVar11 + 1;
          pbVar2 = pbVar2 + 1;
          sVar13 = sVar13 - 1;
          __n = sVar13;
        }
      }
      else if ((__n != 0) && (iVar10 = memcmp(pbVar3,pbVar2,__n), iVar10 != 0)) goto LAB_00a0ef1c;
    }
LAB_00a0ef34:
    lVar14 = lVar14 + 1;
    if (lVar14 == 4) {
      if (*(int *)(in_x0 + 0xe0) == 0) {
        *(undefined4 *)(in_x0 + 0x3a0) = 2;
      }
      else {
        *(undefined4 *)(in_x0 + 0x3a0) = 1;
        Semaphore::post();
      }
      if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


