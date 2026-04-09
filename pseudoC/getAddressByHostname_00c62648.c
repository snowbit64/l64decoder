// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAddressByHostname
// Entry Point: 00c62648
// Size: 160 bytes
// Signature: undefined __cdecl getAddressByHostname(char * param_1, uint * param_2)


/* Network::getAddressByHostname(char const*, unsigned int&) */

void Network::getAddressByHostname(char *param_1,uint *param_2)

{
  long lVar1;
  addrinfo *paVar2;
  int iVar3;
  undefined8 uVar4;
  addrinfo *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = getaddrinfo(param_1,(char *)0x0,(addrinfo *)0x0,&local_30);
  paVar2 = local_30;
  if (iVar3 == 0) {
    for (; paVar2 != (addrinfo *)0x0; paVar2 = paVar2->ai_next) {
      if (paVar2->ai_family == 2) {
        *param_2 = *(uint *)(paVar2->ai_canonname + 4);
        freeaddrinfo(local_30);
        uVar4 = 1;
        goto LAB_00c626c4;
      }
    }
    freeaddrinfo(local_30);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
  }
LAB_00c626c4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


