// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEncryptedCGI
// Entry Point: 006ca5e4
// Size: 860 bytes
// Signature: undefined __thiscall getEncryptedCGI(Application * this, char * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Application::getEncryptedCGI(char const*) */

undefined8 __thiscall Application::getEncryptedCGI(Application *this,char *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  size_t __n;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  undefined8 local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar16 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_006ca660;
  }
  else {
    uVar12 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar16 = (char *)operator_new(uVar12);
    local_60 = uVar12 | 1;
    local_58 = __n;
    local_50 = pcVar16;
LAB_006ca660:
    memcpy(pcVar16,param_1,__n);
  }
  pcVar16[__n] = '\0';
  uVar12 = (ulong)((byte)local_60 >> 1);
  pcVar7 = (char *)((ulong)&local_60 | 1);
  pcVar16 = pcVar7;
  uVar10 = uVar12;
  if ((local_60 & 1) != 0) {
    pcVar16 = local_50;
    uVar10 = local_58;
  }
  if (uVar10 == 0) goto LAB_006ca78c;
  pcVar8 = pcVar16;
  if (uVar10 < 8) {
LAB_006ca908:
    do {
      if (*pcVar8 == ';') {
        *pcVar8 = ' ';
      }
      pcVar8 = pcVar8 + 1;
    } while (pcVar8 != pcVar16 + uVar10);
  }
  else {
    uVar13 = uVar10 & 0xfffffffffffffff8;
    pcVar8 = pcVar16 + uVar13;
    pcVar15 = pcVar16 + 3;
    uVar12 = uVar13;
    do {
      uVar17 = NEON_cmeq(*(undefined8 *)(pcVar15 + -3),0x3b3b3b3b3b3b3b3b,1);
      if ((uVar17 & 1) != 0) {
        pcVar15[-3] = ' ';
      }
      if ((uVar17 & 0x100) != 0) {
        pcVar15[-2] = ' ';
      }
      if ((uVar17 & 0x10000) != 0) {
        pcVar15[-1] = ' ';
      }
      if ((uVar17 & 0x1000000) != 0) {
        *pcVar15 = ' ';
      }
      if ((uVar17 & 0x100000000) != 0) {
        pcVar15[1] = ' ';
      }
      if ((uVar17 & 0x10000000000) != 0) {
        pcVar15[2] = ' ';
      }
      if ((uVar17 & 0x1000000000000) != 0) {
        pcVar15[3] = ' ';
      }
      if ((uVar17 & 0x100000000000000) != 0) {
        pcVar15[4] = ' ';
      }
      uVar12 = uVar12 - 8;
      pcVar15 = pcVar15 + 8;
    } while (uVar12 != 0);
    if (uVar10 != uVar13) goto LAB_006ca908;
  }
  uVar12 = (ulong)((byte)local_60 >> 1);
LAB_006ca78c:
  bVar3 = (local_60 & 1) == 0;
  if (!bVar3) {
    uVar12 = local_58;
  }
  if (uVar12 != 0) {
    iVar9 = -0x2d;
    iVar11 = -0x38;
    iVar14 = -0x5a;
    uVar12 = 1;
    uVar10 = 0;
    do {
      uVar13 = uVar12;
      pcVar16 = pcVar7;
      if (!bVar3) {
        pcVar16 = local_50;
      }
      bVar5 = pcVar16[uVar10];
      uVar6 = (uint)bVar5;
      cVar2 = (char)uVar13;
      if (bVar5 < 0x61) {
        if (bVar5 < 0x41) {
          if (uVar6 < 0x30) {
            if (uVar6 == 0x20) {
              bVar5 = 0x2e;
            }
            else {
              if (uVar6 != 0x2e) goto LAB_006ca7d4;
              bVar5 = 0x20;
            }
          }
          else {
            if (0x39 < uVar6) goto LAB_006ca7d4;
            bVar5 = (cVar2 + bVar5 + (char)((iVar9 + uVar6) / 10) * -10) - 0x2e | 0x30;
          }
        }
        else {
          if (0x5a < bVar5) goto LAB_006ca7d4;
          bVar5 = cVar2 + bVar5 + (char)((iVar11 + uVar6) / 0x1a) * -0x1a + 8;
        }
LAB_006ca7d0:
        pcVar16[uVar10] = bVar5;
      }
      else if (bVar5 < 0x7b) {
        bVar5 = cVar2 + bVar5 + (char)((iVar14 + uVar6) / 0x1a) * -0x1a + 6;
        goto LAB_006ca7d0;
      }
LAB_006ca7d4:
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 1;
      bVar3 = (local_60 & 1) == 0;
      iVar14 = iVar14 + 1;
      uVar17 = (ulong)((byte)local_60 >> 1);
      if (!bVar3) {
        uVar17 = local_58;
      }
      uVar12 = (ulong)((int)uVar13 + 1);
      uVar10 = uVar13;
    } while (uVar13 < uVar17);
  }
  if (!bVar3) {
    pcVar7 = local_50;
  }
                    /* try { // try from 006ca8c4 to 006ca8c7 has its CatchHandler @ 006ca940 */
  uVar4 = HTTPUtil::encodeCGI(pcVar7);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


