// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHostnameByAddressString
// Entry Point: 00c6278c
// Size: 176 bytes
// Signature: undefined __cdecl getHostnameByAddressString(char * param_1, char * param_2, uint param_3)


/* Network::getHostnameByAddressString(char const*, char*, unsigned int) */

void Network::getHostnameByAddressString(char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  in_addr_t iVar3;
  hostent *phVar4;
  size_t sVar5;
  char *__s;
  in_addr_t local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = inet_addr(param_1);
  if ((iVar3 == 0xffffffff) || (local_3c = iVar3, param_2 == (char *)0x0)) {
    phVar4 = (hostent *)0x0;
  }
  else {
    phVar4 = gethostbyaddr(&local_3c,4,2);
    if (phVar4 != (hostent *)0x0) {
      __s = phVar4->h_name;
      sVar5 = strlen(__s);
      uVar1 = (uint)sVar5;
      if (param_3 - 1 <= (uint)sVar5) {
        uVar1 = param_3 - 1;
      }
      memcpy(param_2,__s,(ulong)uVar1);
      phVar4 = (hostent *)0x1;
      param_2[uVar1] = '\0';
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(phVar4);
}


