// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: underflow
// Entry Point: 0075e8c4
// Size: 620 bytes
// Signature: undefined underflow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::underflow() */

void std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::underflow(void)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long in_x0;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte *local_58;
  undefined auStack_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(in_x0 + 0x78) == 0) {
    uVar14 = 0xffffffff;
    goto LAB_0075eaf8;
  }
  uVar2 = *(uint *)(in_x0 + 0x9c);
  if ((uVar2 >> 3 & 1) == 0) {
    *(undefined8 *)(in_x0 + 0x28) = 0;
    *(undefined8 *)(in_x0 + 0x30) = 0;
    *(undefined8 *)(in_x0 + 0x38) = 0;
    plVar7 = (long *)(in_x0 + 0x70);
    plVar4 = (long *)(in_x0 + 0x68);
    if (*(char *)(in_x0 + 0xa2) != '\0') {
      plVar7 = (long *)(in_x0 + 0x60);
      plVar4 = (long *)(in_x0 + 0x40);
    }
    lVar12 = *plVar4;
    pbVar8 = (byte *)(lVar12 + *plVar7);
    *(undefined4 *)(in_x0 + 0x9c) = 8;
    *(long *)(in_x0 + 0x10) = lVar12;
    *(byte **)(in_x0 + 0x18) = pbVar8;
    *(byte **)(in_x0 + 0x20) = pbVar8;
    if (pbVar8 != (byte *)0x0) goto LAB_0075e944;
LAB_0075e96c:
    pbVar8 = (byte *)((ulong)auStack_4c | 1);
    *(undefined **)(in_x0 + 0x10) = auStack_4c;
    *(byte **)(in_x0 + 0x18) = pbVar8;
    *(byte **)(in_x0 + 0x20) = pbVar8;
    pbVar11 = *(byte **)(in_x0 + 0x20);
    if ((uVar2 >> 3 & 1) != 0) goto LAB_0075e984;
LAB_0075e94c:
    uVar14 = 0;
    if (pbVar8 != pbVar11) goto LAB_0075eadc;
LAB_0075e9ac:
    memmove(*(void **)(in_x0 + 0x10),pbVar8 + -uVar14,uVar14);
    if (*(char *)(in_x0 + 0xa2) == '\0') {
      pvVar1 = *(void **)(in_x0 + 0x48);
      lVar12 = *(long *)(in_x0 + 0x50);
      sVar6 = lVar12 - (long)pvVar1;
      lVar9 = lVar12;
      if (sVar6 != 0) {
        memmove(*(void **)(in_x0 + 0x40),pvVar1,sVar6);
        lVar12 = *(long *)(in_x0 + 0x48);
        lVar9 = *(long *)(in_x0 + 0x50);
      }
      lVar13 = *(long *)(in_x0 + 0x40);
      *(undefined8 *)(in_x0 + 0x90) = *(undefined8 *)(in_x0 + 0x88);
      pvVar1 = (void *)(lVar13 + (lVar9 - lVar12));
      lVar12 = 8;
      if (lVar13 != in_x0 + 0x58) {
        lVar12 = *(long *)(in_x0 + 0x60);
      }
      sVar6 = (lVar13 + lVar12) - (long)pvVar1;
      uVar10 = *(long *)(in_x0 + 0x70) - uVar14;
      *(void **)(in_x0 + 0x48) = pvVar1;
      *(long *)(in_x0 + 0x50) = lVar13 + lVar12;
      if (uVar10 <= sVar6) {
        sVar6 = uVar10;
      }
      sVar6 = fread(pvVar1,1,sVar6,*(FILE **)(in_x0 + 0x78));
      if (sVar6 != 0) {
        plVar7 = *(long **)(in_x0 + 0x80);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0075edd0();
        }
        lVar12 = *(long *)(in_x0 + 0x48) + sVar6;
        *(long *)(in_x0 + 0x50) = lVar12;
        iVar5 = (**(code **)(*plVar7 + 0x20))
                          (plVar7,(undefined8 *)(in_x0 + 0x88),*(undefined8 *)(in_x0 + 0x40),lVar12,
                           (void **)(in_x0 + 0x48),*(long *)(in_x0 + 0x10) + uVar14,
                           *(long *)(in_x0 + 0x10) + *(long *)(in_x0 + 0x70),&local_58);
        if (iVar5 == 3) {
          pbVar8 = *(byte **)(in_x0 + 0x40);
          local_58 = *(byte **)(in_x0 + 0x50);
          *(byte **)(in_x0 + 0x10) = pbVar8;
        }
        else {
          pbVar8 = (byte *)(*(long *)(in_x0 + 0x10) + uVar14);
          if (local_58 == pbVar8) goto LAB_0075eb20;
        }
LAB_0075ead8:
        *(byte **)(in_x0 + 0x18) = pbVar8;
        *(byte **)(in_x0 + 0x20) = local_58;
        goto LAB_0075eadc;
      }
    }
    else {
      pvVar1 = (void *)(*(long *)(in_x0 + 0x10) + uVar14);
      sVar6 = fread(pvVar1,1,*(long *)(in_x0 + 0x20) - (long)pvVar1,*(FILE **)(in_x0 + 0x78));
      if (sVar6 != 0) {
        pbVar8 = (byte *)(*(long *)(in_x0 + 0x10) + uVar14);
        local_58 = pbVar8 + sVar6;
        goto LAB_0075ead8;
      }
    }
LAB_0075eb20:
    uVar14 = 0xffffffff;
  }
  else {
    pbVar8 = *(byte **)(in_x0 + 0x18);
    if (pbVar8 == (byte *)0x0) goto LAB_0075e96c;
LAB_0075e944:
    pbVar11 = *(byte **)(in_x0 + 0x20);
    if ((uVar2 >> 3 & 1) == 0) goto LAB_0075e94c;
LAB_0075e984:
    lVar12 = (long)pbVar11 - *(long *)(in_x0 + 0x10);
    if (lVar12 < 0) {
      lVar12 = lVar12 + 1;
    }
    uVar14 = lVar12 >> 1;
    if (3 < uVar14) {
      uVar14 = 4;
    }
    if (pbVar8 == pbVar11) goto LAB_0075e9ac;
LAB_0075eadc:
    uVar14 = (ulong)*pbVar8;
  }
  if (*(undefined **)(undefined8 *)(in_x0 + 0x10) == auStack_4c) {
    *(undefined8 *)(in_x0 + 0x10) = 0;
    *(undefined8 *)(in_x0 + 0x18) = 0;
    *(undefined8 *)(in_x0 + 0x20) = 0;
  }
LAB_0075eaf8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


