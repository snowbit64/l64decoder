// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIncomingPassword
// Entry Point: 00b46f64
// Size: 160 bytes
// Signature: undefined __thiscall setIncomingPassword(ENetNetworkManager * this, char * param_1, int param_2)


/* ENetNetworkManager::setIncomingPassword(char const*, int) */

void __thiscall
ENetNetworkManager::setIncomingPassword(ENetNetworkManager *this,char *param_1,int param_2)

{
  long lVar1;
  uchar local_58 [4];
  undefined local_54;
  undefined local_50;
  undefined local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  MD5Hash::getMD5Hash((uchar *)param_1,param_2,local_58);
  *(uint *)(this + 0x60) = CONCAT13(local_4c,CONCAT12(local_50,CONCAT11(local_54,local_58[0])));
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


