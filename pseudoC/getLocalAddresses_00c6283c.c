// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalAddresses
// Entry Point: 00c6283c
// Size: 432 bytes
// Signature: undefined __cdecl getLocalAddresses(uint * param_1, uint param_2)


/* Network::getLocalAddresses(unsigned int*, unsigned int) */

uint Network::getLocalAddresses(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  sockaddr *psVar4;
  addrinfo *paVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  addrinfo *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    iVar3 = gethostname(acStack_148,0x100);
    if ((iVar3 == 0) &&
       (iVar3 = getaddrinfo(acStack_148,(char *)0x0,(addrinfo *)0x0,&local_150), iVar3 == 0)) {
      if (local_150 == (addrinfo *)0x0) {
        freeaddrinfo((addrinfo *)0x0);
      }
      else {
        uVar9 = 0;
        paVar5 = local_150;
        do {
          if ((paVar5->ai_family == 2) &&
             (uVar1 = *(uint *)(paVar5->ai_canonname + 4), uVar1 != 0x100007f)) {
            if (uVar9 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulong)uVar9;
              uVar7 = uVar6;
              puVar8 = param_1;
              do {
                if (*puVar8 == uVar1) goto LAB_00c62990;
                puVar8 = puVar8 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar9 = uVar9 + 1;
            param_1[uVar6] = uVar1;
          }
LAB_00c62990:
          paVar5 = paVar5->ai_next;
        } while ((paVar5 != (addrinfo *)0x0) && (uVar9 < param_2));
        freeaddrinfo(local_150);
        if (uVar9 != 0) goto LAB_00c629b4;
      }
    }
    iVar3 = getifaddrs(&local_150);
    if (iVar3 == 0) {
      if (local_150 == (addrinfo *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          psVar4 = local_150->ai_addr;
          if (((psVar4 != (sockaddr *)0x0) && ((*(byte *)&local_150->ai_addrlen >> 3 & 1) == 0)) &&
             (psVar4->sa_family == 2)) {
            if (uVar9 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulong)uVar9;
              uVar7 = uVar6;
              puVar8 = param_1;
              do {
                if (*puVar8 == *(uint *)(psVar4->sa_data + 2)) goto LAB_00c62910;
                puVar8 = puVar8 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar9 = uVar9 + 1;
            param_1[uVar6] = *(uint *)(psVar4->sa_data + 2);
          }
LAB_00c62910:
          local_150 = *(addrinfo **)local_150;
        } while ((local_150 != (addrinfo *)0x0) && (uVar9 < param_2));
      }
      freeifaddrs();
      goto LAB_00c629b4;
    }
  }
  uVar9 = 0;
LAB_00c629b4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


