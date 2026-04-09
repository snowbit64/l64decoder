// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHostnameByAddress
// Entry Point: 00c626e8
// Size: 164 bytes
// Signature: undefined __cdecl getHostnameByAddress(uint param_1, char * param_2, uint param_3)


/* Network::getHostnameByAddress(unsigned int, char*, unsigned int) */

void Network::getHostnameByAddress(uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  hostent *phVar3;
  size_t sVar4;
  char *__s;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = param_1;
  if (param_2 == (char *)0x0) {
    phVar3 = (hostent *)0x0;
  }
  else {
    phVar3 = gethostbyaddr(&local_3c,4,2);
    if (phVar3 != (hostent *)0x0) {
      __s = phVar3->h_name;
      sVar4 = strlen(__s);
      uVar1 = (uint)sVar4;
      if (param_3 - 1 <= (uint)sVar4) {
        uVar1 = param_3 - 1;
      }
      memcpy(param_2,__s,(ulong)uVar1);
      phVar3 = (hostent *)0x1;
      param_2[uVar1] = '\0';
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(phVar3);
}


