// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hashPassword
// Entry Point: 00b46384
// Size: 112 bytes
// Signature: undefined __thiscall hashPassword(ENetNetworkManager * this, char * param_1, uint param_2)


/* ENetNetworkManager::hashPassword(char const*, unsigned int) */

undefined4 __thiscall
ENetNetworkManager::hashPassword(ENetNetworkManager *this,char *param_1,uint param_2)

{
  long lVar1;
  uchar local_38 [4];
  undefined local_34;
  undefined local_30;
  undefined local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  MD5Hash::getMD5Hash((uchar *)param_1,param_2,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return CONCAT13(local_2c,CONCAT12(local_30,CONCAT11(local_34,local_38[0])));
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


